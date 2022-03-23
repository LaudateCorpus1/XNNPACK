// Copyright 2022 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.

#pragma once

#include <algorithm>
#include <cassert>
#include <cstddef>
#include <cstdlib>
#include <functional>
#include <numeric>
#include <vector>

#include <xnnpack.h>

#include <gtest/gtest.h>

inline size_t reference(const size_t* input_stride, const size_t* output_stride,
                        const size_t* perm, size_t num_dims, size_t pos)
{
  size_t in_pos = 0;
  for (size_t j = 0; j < num_dims; ++j) {
    size_t idx = pos / output_stride[j];
    pos = pos % output_stride[j];
    in_pos += idx * input_stride[perm[j]];
  }
  return in_pos;
}

class TransposeOperatorTester {
 public:
  inline TransposeOperatorTester& num_dims(size_t num_dims) {
    assert(num_dims != 0);
    this->num_dims_ = num_dims;
    return *this;
  }

  inline size_t num_dims() const { return this->num_dims_; }

  inline TransposeOperatorTester& set_shape(std::vector<size_t> shape) {
    for (size_t dim = 0; dim < shape.size(); ++dim){
      assert(shape[dim] > 0);
      this->shape_[dim] = shape[dim];
    }
    return *this;
  }

  inline size_t dims(size_t dim) const { return this->shape_[dim]; }

  inline TransposeOperatorTester& set_perm(std::vector<size_t> perm) {
    for (size_t dim = 0; dim < perm.size(); ++dim){
      assert(perm[dim] < this->num_dims_);
      this->perm_[dim] = perm[dim];
    }
    return *this;
  }

  inline size_t perm(size_t dim) const { return this->perm_[dim]; }

  void TestX32() const {
    size_t count = 1;
    for (size_t i = 0; i < num_dims(); ++i) count *= dims(i);
    std::vector<uint32_t> input(count + XNN_EXTRA_BYTES / sizeof(uint32_t));
    std::vector<uint32_t> output(count);
    std::vector<size_t> input_stride(input.size(), 1);
    std::vector<size_t> output_stride(input.size(), 1);
    for(size_t i = num_dims() - 1; i-- > 0;){
      input_stride[i] = input_stride[i+1] * shape_[i + 1];
      output_stride[i] = output_stride[i+1] * shape_[perm(i+1)];
    }
    ASSERT_EQ(xnn_status_success, xnn_initialize(nullptr /* allocator */));
    xnn_operator_t transpose_op = nullptr;
    std::iota(input.begin(), input.end(), 0);
    std::fill(output.begin(), output.end(), 0);

    ASSERT_EQ(xnn_status_success,
              xnn_create_transpose_nd_x32(num_dims(),
                                          shape_, perm_,
                                          0, &transpose_op));
    ASSERT_NE(nullptr, transpose_op);

    // Smart pointer to automatically delete convert op.
    std::unique_ptr<xnn_operator, decltype(&xnn_delete_operator)> auto_transpose_op(transpose_op, xnn_delete_operator);

    ASSERT_EQ(xnn_status_success,
              xnn_setup_transpose_nd_x32(
                  transpose_op,
                  input.data(), output.data(),
                  nullptr /* thread pool */));

    // Run operator.
    ASSERT_EQ(xnn_status_success,
              xnn_run_operator(transpose_op, nullptr /* thread pool */));

    // Verify results.
    for (size_t i = 0; i < count; ++i) {
      size_t in_idx = reference(input_stride.data(), output_stride.data(), perm_, num_dims(), i);
      ASSERT_EQ(input[in_idx], output[i]);
    }
  }

 private:
  size_t num_dims_ = 1;
  size_t shape_[XNN_MAX_TENSOR_DIMS];
  size_t perm_[XNN_MAX_TENSOR_DIMS];
};
