// Auto-generated file. Do not edit!
//   Template: src/f32-qs8-vcvt/scalar-magic-fminmax.c.in
//   Generator: tools/xngen
//
// Copyright 2021 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.

#include <assert.h>

#include <xnnpack/common.h>
#include <xnnpack/math.h>
#include <xnnpack/vcvt.h>

#include <fp16.h>


void xnn_f32_qu8_vcvt_ukernel__wasm_magic_fminmax_x1(
    size_t n,
    const float* x,
    uint8_t* y,
    const union xnn_f32_qu8_cvt_params params[restrict XNN_MIN_ELEMENTS(1)]) XNN_DISABLE_TSAN
{
  assert(n != 0);
  assert(x != NULL);
  assert(y != NULL);

  const float vscale = params->scalar_magic_fminmax.scale;
  const float voutput_min_less_zero_point = params->scalar_magic_fminmax.output_min_less_zero_point;
  const float voutput_max_less_zero_point = params->scalar_magic_fminmax.output_max_less_zero_point;
  const float vmagic_bias = params->scalar_magic_fminmax.magic_bias;
  const int32_t vmagic_bias_less_zero_point = params->scalar_magic_fminmax.magic_bias_less_zero_point;

  do {
    float vx = *x++;
    vx *= vscale;
    vx = __builtin_wasm_max_f32(vx, voutput_min_less_zero_point);
    vx = __builtin_wasm_min_f32(vx, voutput_max_less_zero_point);
    vx += vmagic_bias;

    int32_t vy = (int32_t) fp32_to_bits(vx);
    vy -= vmagic_bias_less_zero_point;

    *y++ = (uint8_t) vy;

    n -= sizeof(uint8_t);
  } while (n != 0);
}