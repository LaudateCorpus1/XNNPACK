// Copyright (c) Facebook, Inc. and its affiliates.
// All rights reserved.
//
// Copyright 2019 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.
//
// Auto-generated file. Do not edit!
//   Specification: test/f32-gemm-relu.yaml
//   Generator: tools/generate-gemm-test.py


#include <gtest/gtest.h>

#include <xnnpack/allocator.h>
#include <xnnpack/common.h>
#include <xnnpack/isa-checks.h>

#include <xnnpack/gemm.h>
#include <xnnpack/igemm.h>
#include <xnnpack/ppmm.h>
#include "gemm-microkernel-tester.h"


#if XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_GEMM_RELU_4X2C4__WASMSIMD, k_eq_4) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(2)
      .kr(4)
      .sr(1)
      .m(4)
      .n(2)
      .k(4)
      .Test(xnn_f32_gemm_relu_ukernel_4x2c4__wasmsimd);
  }

  TEST(F32_GEMM_RELU_4X2C4__WASMSIMD, strided_cn) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(2)
      .kr(4)
      .sr(1)
      .m(4)
      .n(2)
      .k(4)
      .cn_stride(5)
      .Test(xnn_f32_gemm_relu_ukernel_4x2c4__wasmsimd);
  }

  TEST(F32_GEMM_RELU_4X2C4__WASMSIMD, k_eq_4_strided_a) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(2)
      .kr(4)
      .sr(1)
      .m(4)
      .n(2)
      .k(4)
      .a_stride(7)
      .Test(xnn_f32_gemm_relu_ukernel_4x2c4__wasmsimd);
  }

  TEST(F32_GEMM_RELU_4X2C4__WASMSIMD, k_eq_4_subtile) {
    for (uint32_t n = 1; n <= 2; n++) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(2)
          .kr(4)
          .sr(1)
          .m(m)
          .n(n)
          .k(4)
          .iterations(1)
          .Test(xnn_f32_gemm_relu_ukernel_4x2c4__wasmsimd);
      }
    }
  }

  TEST(F32_GEMM_RELU_4X2C4__WASMSIMD, k_eq_4_subtile_m) {
    for (uint32_t m = 1; m <= 4; m++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(2)
        .kr(4)
        .sr(1)
        .m(m)
        .n(2)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_gemm_relu_ukernel_4x2c4__wasmsimd);
    }
  }

  TEST(F32_GEMM_RELU_4X2C4__WASMSIMD, k_eq_4_subtile_n) {
    for (uint32_t n = 1; n <= 2; n++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(2)
        .kr(4)
        .sr(1)
        .m(4)
        .n(n)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_gemm_relu_ukernel_4x2c4__wasmsimd);
    }
  }

  TEST(F32_GEMM_RELU_4X2C4__WASMSIMD, k_lt_4) {
    for (size_t k = 1; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(2)
        .kr(4)
        .sr(1)
        .m(4)
        .n(2)
        .k(k)
        .Test(xnn_f32_gemm_relu_ukernel_4x2c4__wasmsimd);
    }
  }

  TEST(F32_GEMM_RELU_4X2C4__WASMSIMD, k_lt_4_strided_a) {
    for (size_t k = 1; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(2)
        .kr(4)
        .sr(1)
        .m(4)
        .n(2)
        .k(k)
        .a_stride(7)
        .Test(xnn_f32_gemm_relu_ukernel_4x2c4__wasmsimd);
    }
  }

  TEST(F32_GEMM_RELU_4X2C4__WASMSIMD, k_lt_4_subtile) {
    for (size_t k = 1; k < 4; k++) {
      for (uint32_t n = 1; n <= 2; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(2)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_gemm_relu_ukernel_4x2c4__wasmsimd);
        }
      }
    }
  }

  TEST(F32_GEMM_RELU_4X2C4__WASMSIMD, k_gt_4) {
    for (size_t k = 5; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(2)
        .kr(4)
        .sr(1)
        .m(4)
        .n(2)
        .k(k)
        .Test(xnn_f32_gemm_relu_ukernel_4x2c4__wasmsimd);
    }
  }

  TEST(F32_GEMM_RELU_4X2C4__WASMSIMD, k_gt_4_strided_a) {
    for (size_t k = 5; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(2)
        .kr(4)
        .sr(1)
        .m(4)
        .n(2)
        .k(k)
        .a_stride(11)
        .Test(xnn_f32_gemm_relu_ukernel_4x2c4__wasmsimd);
    }
  }

  TEST(F32_GEMM_RELU_4X2C4__WASMSIMD, k_gt_4_subtile) {
    for (size_t k = 5; k < 8; k++) {
      for (uint32_t n = 1; n <= 2; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(2)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_gemm_relu_ukernel_4x2c4__wasmsimd);
        }
      }
    }
  }

  TEST(F32_GEMM_RELU_4X2C4__WASMSIMD, k_div_4) {
    for (size_t k = 8; k <= 40; k += 4) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(2)
        .kr(4)
        .sr(1)
        .m(4)
        .n(2)
        .k(k)
        .Test(xnn_f32_gemm_relu_ukernel_4x2c4__wasmsimd);
    }
  }

  TEST(F32_GEMM_RELU_4X2C4__WASMSIMD, k_div_4_strided_a) {
    for (size_t k = 8; k <= 40; k += 4) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(2)
        .kr(4)
        .sr(1)
        .m(4)
        .n(2)
        .k(k)
        .a_stride(43)
        .Test(xnn_f32_gemm_relu_ukernel_4x2c4__wasmsimd);
    }
  }

  TEST(F32_GEMM_RELU_4X2C4__WASMSIMD, k_div_4_subtile) {
    for (size_t k = 8; k <= 40; k += 4) {
      for (uint32_t n = 1; n <= 2; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(2)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_gemm_relu_ukernel_4x2c4__wasmsimd);
        }
      }
    }
  }

  TEST(F32_GEMM_RELU_4X2C4__WASMSIMD, n_gt_2) {
    for (uint32_t n = 3; n < 4; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(2)
          .kr(4)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_f32_gemm_relu_ukernel_4x2c4__wasmsimd);
      }
    }
  }

  TEST(F32_GEMM_RELU_4X2C4__WASMSIMD, n_gt_2_strided_cn) {
    for (uint32_t n = 3; n < 4; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(2)
          .kr(4)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(5)
          .Test(xnn_f32_gemm_relu_ukernel_4x2c4__wasmsimd);
      }
    }
  }

  TEST(F32_GEMM_RELU_4X2C4__WASMSIMD, n_gt_2_strided_a) {
    for (uint32_t n = 3; n < 4; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(2)
          .kr(4)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .a_stride(23)
          .Test(xnn_f32_gemm_relu_ukernel_4x2c4__wasmsimd);
      }
    }
  }

  TEST(F32_GEMM_RELU_4X2C4__WASMSIMD, n_gt_2_subtile) {
    for (uint32_t n = 3; n < 4; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(2)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_gemm_relu_ukernel_4x2c4__wasmsimd);
        }
      }
    }
  }

  TEST(F32_GEMM_RELU_4X2C4__WASMSIMD, n_div_2) {
    for (uint32_t n = 4; n <= 6; n += 2) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(2)
          .kr(4)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_f32_gemm_relu_ukernel_4x2c4__wasmsimd);
      }
    }
  }

  TEST(F32_GEMM_RELU_4X2C4__WASMSIMD, n_div_2_strided_cn) {
    for (uint32_t n = 4; n <= 6; n += 2) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(2)
          .kr(4)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(5)
          .Test(xnn_f32_gemm_relu_ukernel_4x2c4__wasmsimd);
      }
    }
  }

  TEST(F32_GEMM_RELU_4X2C4__WASMSIMD, n_div_2_strided_a) {
    for (uint32_t n = 4; n <= 6; n += 2) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(2)
          .kr(4)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .a_stride(23)
          .Test(xnn_f32_gemm_relu_ukernel_4x2c4__wasmsimd);
      }
    }
  }

  TEST(F32_GEMM_RELU_4X2C4__WASMSIMD, n_div_2_subtile) {
    for (uint32_t n = 4; n <= 6; n += 2) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(2)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_gemm_relu_ukernel_4x2c4__wasmsimd);
        }
      }
    }
  }

  TEST(F32_GEMM_RELU_4X2C4__WASMSIMD, strided_cm_subtile) {
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 2; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(2)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(5)
            .iterations(1)
            .Test(xnn_f32_gemm_relu_ukernel_4x2c4__wasmsimd);
        }
      }
    }
  }

  TEST(F32_GEMM_RELU_4X2C4__WASMSIMD, strided_cm) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(2)
      .kr(4)
      .sr(1)
      .m(4)
      .n(2)
      .k(4)
      .cm_stride(5)
      .Test(xnn_f32_gemm_relu_ukernel_4x2c4__wasmsimd);
  }
#endif  // XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_GEMM_RELU_4X2C4__WASMRELAXEDSIMD_FMA, k_eq_4) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(2)
      .kr(4)
      .sr(1)
      .m(4)
      .n(2)
      .k(4)
      .Test(xnn_f32_gemm_relu_ukernel_4x2c4__wasmrelaxedsimd_fma);
  }

  TEST(F32_GEMM_RELU_4X2C4__WASMRELAXEDSIMD_FMA, strided_cn) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(2)
      .kr(4)
      .sr(1)
      .m(4)
      .n(2)
      .k(4)
      .cn_stride(5)
      .Test(xnn_f32_gemm_relu_ukernel_4x2c4__wasmrelaxedsimd_fma);
  }

  TEST(F32_GEMM_RELU_4X2C4__WASMRELAXEDSIMD_FMA, k_eq_4_strided_a) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(2)
      .kr(4)
      .sr(1)
      .m(4)
      .n(2)
      .k(4)
      .a_stride(7)
      .Test(xnn_f32_gemm_relu_ukernel_4x2c4__wasmrelaxedsimd_fma);
  }

  TEST(F32_GEMM_RELU_4X2C4__WASMRELAXEDSIMD_FMA, k_eq_4_subtile) {
    for (uint32_t n = 1; n <= 2; n++) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(2)
          .kr(4)
          .sr(1)
          .m(m)
          .n(n)
          .k(4)
          .iterations(1)
          .Test(xnn_f32_gemm_relu_ukernel_4x2c4__wasmrelaxedsimd_fma);
      }
    }
  }

  TEST(F32_GEMM_RELU_4X2C4__WASMRELAXEDSIMD_FMA, k_eq_4_subtile_m) {
    for (uint32_t m = 1; m <= 4; m++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(2)
        .kr(4)
        .sr(1)
        .m(m)
        .n(2)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_gemm_relu_ukernel_4x2c4__wasmrelaxedsimd_fma);
    }
  }

  TEST(F32_GEMM_RELU_4X2C4__WASMRELAXEDSIMD_FMA, k_eq_4_subtile_n) {
    for (uint32_t n = 1; n <= 2; n++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(2)
        .kr(4)
        .sr(1)
        .m(4)
        .n(n)
        .k(4)
        .iterations(1)
        .Test(xnn_f32_gemm_relu_ukernel_4x2c4__wasmrelaxedsimd_fma);
    }
  }

  TEST(F32_GEMM_RELU_4X2C4__WASMRELAXEDSIMD_FMA, k_lt_4) {
    for (size_t k = 1; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(2)
        .kr(4)
        .sr(1)
        .m(4)
        .n(2)
        .k(k)
        .Test(xnn_f32_gemm_relu_ukernel_4x2c4__wasmrelaxedsimd_fma);
    }
  }

  TEST(F32_GEMM_RELU_4X2C4__WASMRELAXEDSIMD_FMA, k_lt_4_strided_a) {
    for (size_t k = 1; k < 4; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(2)
        .kr(4)
        .sr(1)
        .m(4)
        .n(2)
        .k(k)
        .a_stride(7)
        .Test(xnn_f32_gemm_relu_ukernel_4x2c4__wasmrelaxedsimd_fma);
    }
  }

  TEST(F32_GEMM_RELU_4X2C4__WASMRELAXEDSIMD_FMA, k_lt_4_subtile) {
    for (size_t k = 1; k < 4; k++) {
      for (uint32_t n = 1; n <= 2; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(2)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_gemm_relu_ukernel_4x2c4__wasmrelaxedsimd_fma);
        }
      }
    }
  }

  TEST(F32_GEMM_RELU_4X2C4__WASMRELAXEDSIMD_FMA, k_gt_4) {
    for (size_t k = 5; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(2)
        .kr(4)
        .sr(1)
        .m(4)
        .n(2)
        .k(k)
        .Test(xnn_f32_gemm_relu_ukernel_4x2c4__wasmrelaxedsimd_fma);
    }
  }

  TEST(F32_GEMM_RELU_4X2C4__WASMRELAXEDSIMD_FMA, k_gt_4_strided_a) {
    for (size_t k = 5; k < 8; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(2)
        .kr(4)
        .sr(1)
        .m(4)
        .n(2)
        .k(k)
        .a_stride(11)
        .Test(xnn_f32_gemm_relu_ukernel_4x2c4__wasmrelaxedsimd_fma);
    }
  }

  TEST(F32_GEMM_RELU_4X2C4__WASMRELAXEDSIMD_FMA, k_gt_4_subtile) {
    for (size_t k = 5; k < 8; k++) {
      for (uint32_t n = 1; n <= 2; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(2)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_gemm_relu_ukernel_4x2c4__wasmrelaxedsimd_fma);
        }
      }
    }
  }

  TEST(F32_GEMM_RELU_4X2C4__WASMRELAXEDSIMD_FMA, k_div_4) {
    for (size_t k = 8; k <= 40; k += 4) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(2)
        .kr(4)
        .sr(1)
        .m(4)
        .n(2)
        .k(k)
        .Test(xnn_f32_gemm_relu_ukernel_4x2c4__wasmrelaxedsimd_fma);
    }
  }

  TEST(F32_GEMM_RELU_4X2C4__WASMRELAXEDSIMD_FMA, k_div_4_strided_a) {
    for (size_t k = 8; k <= 40; k += 4) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(2)
        .kr(4)
        .sr(1)
        .m(4)
        .n(2)
        .k(k)
        .a_stride(43)
        .Test(xnn_f32_gemm_relu_ukernel_4x2c4__wasmrelaxedsimd_fma);
    }
  }

  TEST(F32_GEMM_RELU_4X2C4__WASMRELAXEDSIMD_FMA, k_div_4_subtile) {
    for (size_t k = 8; k <= 40; k += 4) {
      for (uint32_t n = 1; n <= 2; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(2)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_gemm_relu_ukernel_4x2c4__wasmrelaxedsimd_fma);
        }
      }
    }
  }

  TEST(F32_GEMM_RELU_4X2C4__WASMRELAXEDSIMD_FMA, n_gt_2) {
    for (uint32_t n = 3; n < 4; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(2)
          .kr(4)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_f32_gemm_relu_ukernel_4x2c4__wasmrelaxedsimd_fma);
      }
    }
  }

  TEST(F32_GEMM_RELU_4X2C4__WASMRELAXEDSIMD_FMA, n_gt_2_strided_cn) {
    for (uint32_t n = 3; n < 4; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(2)
          .kr(4)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(5)
          .Test(xnn_f32_gemm_relu_ukernel_4x2c4__wasmrelaxedsimd_fma);
      }
    }
  }

  TEST(F32_GEMM_RELU_4X2C4__WASMRELAXEDSIMD_FMA, n_gt_2_strided_a) {
    for (uint32_t n = 3; n < 4; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(2)
          .kr(4)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .a_stride(23)
          .Test(xnn_f32_gemm_relu_ukernel_4x2c4__wasmrelaxedsimd_fma);
      }
    }
  }

  TEST(F32_GEMM_RELU_4X2C4__WASMRELAXEDSIMD_FMA, n_gt_2_subtile) {
    for (uint32_t n = 3; n < 4; n++) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(2)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_gemm_relu_ukernel_4x2c4__wasmrelaxedsimd_fma);
        }
      }
    }
  }

  TEST(F32_GEMM_RELU_4X2C4__WASMRELAXEDSIMD_FMA, n_div_2) {
    for (uint32_t n = 4; n <= 6; n += 2) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(2)
          .kr(4)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_f32_gemm_relu_ukernel_4x2c4__wasmrelaxedsimd_fma);
      }
    }
  }

  TEST(F32_GEMM_RELU_4X2C4__WASMRELAXEDSIMD_FMA, n_div_2_strided_cn) {
    for (uint32_t n = 4; n <= 6; n += 2) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(2)
          .kr(4)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(5)
          .Test(xnn_f32_gemm_relu_ukernel_4x2c4__wasmrelaxedsimd_fma);
      }
    }
  }

  TEST(F32_GEMM_RELU_4X2C4__WASMRELAXEDSIMD_FMA, n_div_2_strided_a) {
    for (uint32_t n = 4; n <= 6; n += 2) {
      for (size_t k = 1; k <= 20; k += 5) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(2)
          .kr(4)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .a_stride(23)
          .Test(xnn_f32_gemm_relu_ukernel_4x2c4__wasmrelaxedsimd_fma);
      }
    }
  }

  TEST(F32_GEMM_RELU_4X2C4__WASMRELAXEDSIMD_FMA, n_div_2_subtile) {
    for (uint32_t n = 4; n <= 6; n += 2) {
      for (size_t k = 1; k <= 20; k += 5) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(2)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_gemm_relu_ukernel_4x2c4__wasmrelaxedsimd_fma);
        }
      }
    }
  }

  TEST(F32_GEMM_RELU_4X2C4__WASMRELAXEDSIMD_FMA, strided_cm_subtile) {
    for (size_t k = 1; k <= 20; k += 5) {
      for (uint32_t n = 1; n <= 2; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(2)
            .kr(4)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(5)
            .iterations(1)
            .Test(xnn_f32_gemm_relu_ukernel_4x2c4__wasmrelaxedsimd_fma);
        }
      }
    }
  }

  TEST(F32_GEMM_RELU_4X2C4__WASMRELAXEDSIMD_FMA, strided_cm) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(2)
      .kr(4)
      .sr(1)
      .m(4)
      .n(2)
      .k(4)
      .cm_stride(5)
      .Test(xnn_f32_gemm_relu_ukernel_4x2c4__wasmrelaxedsimd_fma);
  }
#endif  // XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASM || XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_GEMM_RELU_2X4__WASM, k_eq_1) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(2)
      .n(4)
      .k(1)
      .Test(xnn_f32_gemm_relu_ukernel_2x4__wasm);
  }

  TEST(F32_GEMM_RELU_2X4__WASM, strided_cn) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(2)
      .n(4)
      .k(1)
      .cn_stride(7)
      .Test(xnn_f32_gemm_relu_ukernel_2x4__wasm);
  }

  TEST(F32_GEMM_RELU_2X4__WASM, k_eq_1_strided_a) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(2)
      .n(4)
      .k(1)
      .a_stride(3)
      .Test(xnn_f32_gemm_relu_ukernel_2x4__wasm);
  }

  TEST(F32_GEMM_RELU_2X4__WASM, k_eq_1_subtile) {
    for (uint32_t n = 1; n <= 4; n++) {
      for (uint32_t m = 1; m <= 2; m++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(1)
          .iterations(1)
          .Test(xnn_f32_gemm_relu_ukernel_2x4__wasm);
      }
    }
  }

  TEST(F32_GEMM_RELU_2X4__WASM, k_eq_1_subtile_m) {
    for (uint32_t m = 1; m <= 2; m++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(m)
        .n(4)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_gemm_relu_ukernel_2x4__wasm);
    }
  }

  TEST(F32_GEMM_RELU_2X4__WASM, k_eq_1_subtile_n) {
    for (uint32_t n = 1; n <= 4; n++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(2)
        .n(n)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_gemm_relu_ukernel_2x4__wasm);
    }
  }

  TEST(F32_GEMM_RELU_2X4__WASM, k_gt_1) {
    for (size_t k = 2; k < 10; k++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(2)
        .n(4)
        .k(k)
        .Test(xnn_f32_gemm_relu_ukernel_2x4__wasm);
    }
  }

  TEST(F32_GEMM_RELU_2X4__WASM, k_gt_1_strided_a) {
    for (size_t k = 2; k < 10; k++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(2)
        .n(4)
        .k(k)
        .a_stride(11)
        .Test(xnn_f32_gemm_relu_ukernel_2x4__wasm);
    }
  }

  TEST(F32_GEMM_RELU_2X4__WASM, k_gt_1_subtile) {
    for (size_t k = 2; k < 10; k++) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(4)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_gemm_relu_ukernel_2x4__wasm);
        }
      }
    }
  }

  TEST(F32_GEMM_RELU_2X4__WASM, n_gt_4) {
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .Test(xnn_f32_gemm_relu_ukernel_2x4__wasm);
      }
    }
  }

  TEST(F32_GEMM_RELU_2X4__WASM, n_gt_4_strided_cn) {
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .cn_stride(7)
          .Test(xnn_f32_gemm_relu_ukernel_2x4__wasm);
      }
    }
  }

  TEST(F32_GEMM_RELU_2X4__WASM, n_gt_4_strided_a) {
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .a_stride(7)
          .Test(xnn_f32_gemm_relu_ukernel_2x4__wasm);
      }
    }
  }

  TEST(F32_GEMM_RELU_2X4__WASM, n_gt_4_subtile) {
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(4)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_gemm_relu_ukernel_2x4__wasm);
        }
      }
    }
  }

  TEST(F32_GEMM_RELU_2X4__WASM, n_div_4) {
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .Test(xnn_f32_gemm_relu_ukernel_2x4__wasm);
      }
    }
  }

  TEST(F32_GEMM_RELU_2X4__WASM, n_div_4_strided_cn) {
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .cn_stride(7)
          .Test(xnn_f32_gemm_relu_ukernel_2x4__wasm);
      }
    }
  }

  TEST(F32_GEMM_RELU_2X4__WASM, n_div_4_strided_a) {
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(2)
          .n(n)
          .k(k)
          .a_stride(7)
          .Test(xnn_f32_gemm_relu_ukernel_2x4__wasm);
      }
    }
  }

  TEST(F32_GEMM_RELU_2X4__WASM, n_div_4_subtile) {
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 5; k += 2) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(4)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_gemm_relu_ukernel_2x4__wasm);
        }
      }
    }
  }

  TEST(F32_GEMM_RELU_2X4__WASM, strided_cm_subtile) {
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 2; m++) {
          GemmMicrokernelTester()
            .mr(2)
            .nr(4)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(7)
            .iterations(1)
            .Test(xnn_f32_gemm_relu_ukernel_2x4__wasm);
        }
      }
    }
  }

  TEST(F32_GEMM_RELU_2X4__WASM, strided_cm) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(2)
      .n(4)
      .k(1)
      .cm_stride(7)
      .Test(xnn_f32_gemm_relu_ukernel_2x4__wasm);
  }
#endif  // XNN_ARCH_WASM || XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASM || XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_GEMM_RELU_4X2__WASM, k_eq_1) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(2)
      .kr(1)
      .sr(1)
      .m(4)
      .n(2)
      .k(1)
      .Test(xnn_f32_gemm_relu_ukernel_4x2__wasm);
  }

  TEST(F32_GEMM_RELU_4X2__WASM, strided_cn) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(2)
      .kr(1)
      .sr(1)
      .m(4)
      .n(2)
      .k(1)
      .cn_stride(5)
      .Test(xnn_f32_gemm_relu_ukernel_4x2__wasm);
  }

  TEST(F32_GEMM_RELU_4X2__WASM, k_eq_1_strided_a) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(2)
      .kr(1)
      .sr(1)
      .m(4)
      .n(2)
      .k(1)
      .a_stride(3)
      .Test(xnn_f32_gemm_relu_ukernel_4x2__wasm);
  }

  TEST(F32_GEMM_RELU_4X2__WASM, k_eq_1_subtile) {
    for (uint32_t n = 1; n <= 2; n++) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(2)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(1)
          .iterations(1)
          .Test(xnn_f32_gemm_relu_ukernel_4x2__wasm);
      }
    }
  }

  TEST(F32_GEMM_RELU_4X2__WASM, k_eq_1_subtile_m) {
    for (uint32_t m = 1; m <= 4; m++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(m)
        .n(2)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_gemm_relu_ukernel_4x2__wasm);
    }
  }

  TEST(F32_GEMM_RELU_4X2__WASM, k_eq_1_subtile_n) {
    for (uint32_t n = 1; n <= 2; n++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(4)
        .n(n)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_gemm_relu_ukernel_4x2__wasm);
    }
  }

  TEST(F32_GEMM_RELU_4X2__WASM, k_gt_1) {
    for (size_t k = 2; k < 10; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(4)
        .n(2)
        .k(k)
        .Test(xnn_f32_gemm_relu_ukernel_4x2__wasm);
    }
  }

  TEST(F32_GEMM_RELU_4X2__WASM, k_gt_1_strided_a) {
    for (size_t k = 2; k < 10; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(2)
        .kr(1)
        .sr(1)
        .m(4)
        .n(2)
        .k(k)
        .a_stride(11)
        .Test(xnn_f32_gemm_relu_ukernel_4x2__wasm);
    }
  }

  TEST(F32_GEMM_RELU_4X2__WASM, k_gt_1_subtile) {
    for (size_t k = 2; k < 10; k++) {
      for (uint32_t n = 1; n <= 2; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(2)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_gemm_relu_ukernel_4x2__wasm);
        }
      }
    }
  }

  TEST(F32_GEMM_RELU_4X2__WASM, n_gt_2) {
    for (uint32_t n = 3; n < 4; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(2)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_f32_gemm_relu_ukernel_4x2__wasm);
      }
    }
  }

  TEST(F32_GEMM_RELU_4X2__WASM, n_gt_2_strided_cn) {
    for (uint32_t n = 3; n < 4; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(2)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(5)
          .Test(xnn_f32_gemm_relu_ukernel_4x2__wasm);
      }
    }
  }

  TEST(F32_GEMM_RELU_4X2__WASM, n_gt_2_strided_a) {
    for (uint32_t n = 3; n < 4; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(2)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .a_stride(7)
          .Test(xnn_f32_gemm_relu_ukernel_4x2__wasm);
      }
    }
  }

  TEST(F32_GEMM_RELU_4X2__WASM, n_gt_2_subtile) {
    for (uint32_t n = 3; n < 4; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(2)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_gemm_relu_ukernel_4x2__wasm);
        }
      }
    }
  }

  TEST(F32_GEMM_RELU_4X2__WASM, n_div_2) {
    for (uint32_t n = 4; n <= 6; n += 2) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(2)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_f32_gemm_relu_ukernel_4x2__wasm);
      }
    }
  }

  TEST(F32_GEMM_RELU_4X2__WASM, n_div_2_strided_cn) {
    for (uint32_t n = 4; n <= 6; n += 2) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(2)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(5)
          .Test(xnn_f32_gemm_relu_ukernel_4x2__wasm);
      }
    }
  }

  TEST(F32_GEMM_RELU_4X2__WASM, n_div_2_strided_a) {
    for (uint32_t n = 4; n <= 6; n += 2) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(2)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .a_stride(7)
          .Test(xnn_f32_gemm_relu_ukernel_4x2__wasm);
      }
    }
  }

  TEST(F32_GEMM_RELU_4X2__WASM, n_div_2_subtile) {
    for (uint32_t n = 4; n <= 6; n += 2) {
      for (size_t k = 1; k <= 5; k += 2) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(2)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_gemm_relu_ukernel_4x2__wasm);
        }
      }
    }
  }

  TEST(F32_GEMM_RELU_4X2__WASM, strided_cm_subtile) {
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t n = 1; n <= 2; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(2)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(5)
            .iterations(1)
            .Test(xnn_f32_gemm_relu_ukernel_4x2__wasm);
        }
      }
    }
  }

  TEST(F32_GEMM_RELU_4X2__WASM, strided_cm) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(2)
      .kr(1)
      .sr(1)
      .m(4)
      .n(2)
      .k(1)
      .cm_stride(5)
      .Test(xnn_f32_gemm_relu_ukernel_4x2__wasm);
  }
#endif  // XNN_ARCH_WASM || XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


#if XNN_ARCH_WASM || XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD
  TEST(F32_GEMM_RELU_4X4__WASM, k_eq_1) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(4)
      .n(4)
      .k(1)
      .Test(xnn_f32_gemm_relu_ukernel_4x4__wasm);
  }

  TEST(F32_GEMM_RELU_4X4__WASM, strided_cn) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(4)
      .n(4)
      .k(1)
      .cn_stride(7)
      .Test(xnn_f32_gemm_relu_ukernel_4x4__wasm);
  }

  TEST(F32_GEMM_RELU_4X4__WASM, k_eq_1_strided_a) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(4)
      .n(4)
      .k(1)
      .a_stride(3)
      .Test(xnn_f32_gemm_relu_ukernel_4x4__wasm);
  }

  TEST(F32_GEMM_RELU_4X4__WASM, k_eq_1_subtile) {
    for (uint32_t n = 1; n <= 4; n++) {
      for (uint32_t m = 1; m <= 4; m++) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(1)
          .iterations(1)
          .Test(xnn_f32_gemm_relu_ukernel_4x4__wasm);
      }
    }
  }

  TEST(F32_GEMM_RELU_4X4__WASM, k_eq_1_subtile_m) {
    for (uint32_t m = 1; m <= 4; m++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(m)
        .n(4)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_gemm_relu_ukernel_4x4__wasm);
    }
  }

  TEST(F32_GEMM_RELU_4X4__WASM, k_eq_1_subtile_n) {
    for (uint32_t n = 1; n <= 4; n++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(4)
        .n(n)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_gemm_relu_ukernel_4x4__wasm);
    }
  }

  TEST(F32_GEMM_RELU_4X4__WASM, k_gt_1) {
    for (size_t k = 2; k < 10; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(4)
        .n(4)
        .k(k)
        .Test(xnn_f32_gemm_relu_ukernel_4x4__wasm);
    }
  }

  TEST(F32_GEMM_RELU_4X4__WASM, k_gt_1_strided_a) {
    for (size_t k = 2; k < 10; k++) {
      GemmMicrokernelTester()
        .mr(4)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(4)
        .n(4)
        .k(k)
        .a_stride(11)
        .Test(xnn_f32_gemm_relu_ukernel_4x4__wasm);
    }
  }

  TEST(F32_GEMM_RELU_4X4__WASM, k_gt_1_subtile) {
    for (size_t k = 2; k < 10; k++) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_gemm_relu_ukernel_4x4__wasm);
        }
      }
    }
  }

  TEST(F32_GEMM_RELU_4X4__WASM, n_gt_4) {
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_f32_gemm_relu_ukernel_4x4__wasm);
      }
    }
  }

  TEST(F32_GEMM_RELU_4X4__WASM, n_gt_4_strided_cn) {
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(7)
          .Test(xnn_f32_gemm_relu_ukernel_4x4__wasm);
      }
    }
  }

  TEST(F32_GEMM_RELU_4X4__WASM, n_gt_4_strided_a) {
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .a_stride(7)
          .Test(xnn_f32_gemm_relu_ukernel_4x4__wasm);
      }
    }
  }

  TEST(F32_GEMM_RELU_4X4__WASM, n_gt_4_subtile) {
    for (uint32_t n = 5; n < 8; n++) {
      for (size_t k = 1; k <= 5; k += 2) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_gemm_relu_ukernel_4x4__wasm);
        }
      }
    }
  }

  TEST(F32_GEMM_RELU_4X4__WASM, n_div_4) {
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .Test(xnn_f32_gemm_relu_ukernel_4x4__wasm);
      }
    }
  }

  TEST(F32_GEMM_RELU_4X4__WASM, n_div_4_strided_cn) {
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .cn_stride(7)
          .Test(xnn_f32_gemm_relu_ukernel_4x4__wasm);
      }
    }
  }

  TEST(F32_GEMM_RELU_4X4__WASM, n_div_4_strided_a) {
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 5; k += 2) {
        GemmMicrokernelTester()
          .mr(4)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(4)
          .n(n)
          .k(k)
          .a_stride(7)
          .Test(xnn_f32_gemm_relu_ukernel_4x4__wasm);
      }
    }
  }

  TEST(F32_GEMM_RELU_4X4__WASM, n_div_4_subtile) {
    for (uint32_t n = 8; n <= 12; n += 4) {
      for (size_t k = 1; k <= 5; k += 2) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .iterations(1)
            .Test(xnn_f32_gemm_relu_ukernel_4x4__wasm);
        }
      }
    }
  }

  TEST(F32_GEMM_RELU_4X4__WASM, strided_cm_subtile) {
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t n = 1; n <= 4; n++) {
        for (uint32_t m = 1; m <= 4; m++) {
          GemmMicrokernelTester()
            .mr(4)
            .nr(4)
            .kr(1)
            .sr(1)
            .m(m)
            .n(n)
            .k(k)
            .cm_stride(7)
            .iterations(1)
            .Test(xnn_f32_gemm_relu_ukernel_4x4__wasm);
        }
      }
    }
  }

  TEST(F32_GEMM_RELU_4X4__WASM, strided_cm) {
    GemmMicrokernelTester()
      .mr(4)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(4)
      .n(4)
      .k(1)
      .cm_stride(7)
      .Test(xnn_f32_gemm_relu_ukernel_4x4__wasm);
  }
#endif  // XNN_ARCH_WASM || XNN_ARCH_WASMSIMD || XNN_ARCH_WASMRELAXEDSIMD


TEST(F32_GEMM_RELU_2X4__SCALAR, k_eq_1) {
  GemmMicrokernelTester()
    .mr(2)
    .nr(4)
    .kr(1)
    .sr(1)
    .m(2)
    .n(4)
    .k(1)
    .Test(xnn_f32_gemm_relu_ukernel_2x4__scalar);
}

TEST(F32_GEMM_RELU_2X4__SCALAR, strided_cn) {
  GemmMicrokernelTester()
    .mr(2)
    .nr(4)
    .kr(1)
    .sr(1)
    .m(2)
    .n(4)
    .k(1)
    .cn_stride(7)
    .Test(xnn_f32_gemm_relu_ukernel_2x4__scalar);
}

TEST(F32_GEMM_RELU_2X4__SCALAR, k_eq_1_strided_a) {
  GemmMicrokernelTester()
    .mr(2)
    .nr(4)
    .kr(1)
    .sr(1)
    .m(2)
    .n(4)
    .k(1)
    .a_stride(3)
    .Test(xnn_f32_gemm_relu_ukernel_2x4__scalar);
}

TEST(F32_GEMM_RELU_2X4__SCALAR, k_eq_1_subtile) {
  for (uint32_t n = 1; n <= 4; n++) {
    for (uint32_t m = 1; m <= 2; m++) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(m)
        .n(n)
        .k(1)
        .iterations(1)
        .Test(xnn_f32_gemm_relu_ukernel_2x4__scalar);
    }
  }
}

TEST(F32_GEMM_RELU_2X4__SCALAR, k_eq_1_subtile_m) {
  for (uint32_t m = 1; m <= 2; m++) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(m)
      .n(4)
      .k(1)
      .iterations(1)
      .Test(xnn_f32_gemm_relu_ukernel_2x4__scalar);
  }
}

TEST(F32_GEMM_RELU_2X4__SCALAR, k_eq_1_subtile_n) {
  for (uint32_t n = 1; n <= 4; n++) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(2)
      .n(n)
      .k(1)
      .iterations(1)
      .Test(xnn_f32_gemm_relu_ukernel_2x4__scalar);
  }
}

TEST(F32_GEMM_RELU_2X4__SCALAR, k_gt_1) {
  for (size_t k = 2; k < 10; k++) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(2)
      .n(4)
      .k(k)
      .Test(xnn_f32_gemm_relu_ukernel_2x4__scalar);
  }
}

TEST(F32_GEMM_RELU_2X4__SCALAR, k_gt_1_strided_a) {
  for (size_t k = 2; k < 10; k++) {
    GemmMicrokernelTester()
      .mr(2)
      .nr(4)
      .kr(1)
      .sr(1)
      .m(2)
      .n(4)
      .k(k)
      .a_stride(11)
      .Test(xnn_f32_gemm_relu_ukernel_2x4__scalar);
  }
}

TEST(F32_GEMM_RELU_2X4__SCALAR, k_gt_1_subtile) {
  for (size_t k = 2; k < 10; k++) {
    for (uint32_t n = 1; n <= 4; n++) {
      for (uint32_t m = 1; m <= 2; m++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .iterations(1)
          .Test(xnn_f32_gemm_relu_ukernel_2x4__scalar);
      }
    }
  }
}

TEST(F32_GEMM_RELU_2X4__SCALAR, n_gt_4) {
  for (uint32_t n = 5; n < 8; n++) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(2)
        .n(n)
        .k(k)
        .Test(xnn_f32_gemm_relu_ukernel_2x4__scalar);
    }
  }
}

TEST(F32_GEMM_RELU_2X4__SCALAR, n_gt_4_strided_cn) {
  for (uint32_t n = 5; n < 8; n++) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(2)
        .n(n)
        .k(k)
        .cn_stride(7)
        .Test(xnn_f32_gemm_relu_ukernel_2x4__scalar);
    }
  }
}

TEST(F32_GEMM_RELU_2X4__SCALAR, n_gt_4_strided_a) {
  for (uint32_t n = 5; n < 8; n++) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(2)
        .n(n)
        .k(k)
        .a_stride(7)
        .Test(xnn_f32_gemm_relu_ukernel_2x4__scalar);
    }
  }
}

TEST(F32_GEMM_RELU_2X4__SCALAR, n_gt_4_subtile) {
  for (uint32_t n = 5; n < 8; n++) {
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t m = 1; m <= 2; m++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .iterations(1)
          .Test(xnn_f32_gemm_relu_ukernel_2x4__scalar);
      }
    }
  }
}

TEST(F32_GEMM_RELU_2X4__SCALAR, n_div_4) {
  for (uint32_t n = 8; n <= 12; n += 4) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(2)
        .n(n)
        .k(k)
        .Test(xnn_f32_gemm_relu_ukernel_2x4__scalar);
    }
  }
}

TEST(F32_GEMM_RELU_2X4__SCALAR, n_div_4_strided_cn) {
  for (uint32_t n = 8; n <= 12; n += 4) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(2)
        .n(n)
        .k(k)
        .cn_stride(7)
        .Test(xnn_f32_gemm_relu_ukernel_2x4__scalar);
    }
  }
}

TEST(F32_GEMM_RELU_2X4__SCALAR, n_div_4_strided_a) {
  for (uint32_t n = 8; n <= 12; n += 4) {
    for (size_t k = 1; k <= 5; k += 2) {
      GemmMicrokernelTester()
        .mr(2)
        .nr(4)
        .kr(1)
        .sr(1)
        .m(2)
        .n(n)
        .k(k)
        .a_stride(7)
        .Test(xnn_f32_gemm_relu_ukernel_2x4__scalar);
    }
  }
}

TEST(F32_GEMM_RELU_2X4__SCALAR, n_div_4_subtile) {
  for (uint32_t n = 8; n <= 12; n += 4) {
    for (size_t k = 1; k <= 5; k += 2) {
      for (uint32_t m = 1; m <= 2; m++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .iterations(1)
          .Test(xnn_f32_gemm_relu_ukernel_2x4__scalar);
      }
    }
  }
}

TEST(F32_GEMM_RELU_2X4__SCALAR, strided_cm_subtile) {
  for (size_t k = 1; k <= 5; k += 2) {
    for (uint32_t n = 1; n <= 4; n++) {
      for (uint32_t m = 1; m <= 2; m++) {
        GemmMicrokernelTester()
          .mr(2)
          .nr(4)
          .kr(1)
          .sr(1)
          .m(m)
          .n(n)
          .k(k)
          .cm_stride(7)
          .iterations(1)
          .Test(xnn_f32_gemm_relu_ukernel_2x4__scalar);
      }
    }
  }
}

TEST(F32_GEMM_RELU_2X4__SCALAR, strided_cm) {
  GemmMicrokernelTester()
    .mr(2)
    .nr(4)
    .kr(1)
    .sr(1)
    .m(2)
    .n(4)
    .k(1)
    .cm_stride(7)
    .Test(xnn_f32_gemm_relu_ukernel_2x4__scalar);
}
