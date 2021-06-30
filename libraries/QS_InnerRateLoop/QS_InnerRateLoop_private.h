/*
 * QS_InnerRateLoop_private.h
 *
 * Student License - for use by students to meet course requirements and
 * perform academic research at degree granting institutions only.  Not
 * for government, commercial, or other organizational use.
 *
 * Code generation for model "QS_InnerRateLoop".
 *
 * Model version              : 5.20
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Wed Jun 23 17:24:24 2021
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_QS_InnerRateLoop_private_h_
#define RTW_HEADER_QS_InnerRateLoop_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern uint32_T plook_u32ff_evencg(real32_T u, real32_T bp0, real32_T bpSpace,
  uint32_T maxIndex, real32_T *fraction);
extern real32_T intrp1d_fu32fl_pw(uint32_T bpIndex, real32_T frac, const
  real32_T table[]);
extern uint32_T plook_u32ff_evenca(real32_T u, real32_T bp0, real32_T bpSpace,
  uint32_T maxIndex, real32_T *fraction);
extern real32_T intrp1d_fu32fla_pw(uint32_T bpIndex, real32_T frac, const
  real32_T table[], uint32_T maxIndex);
extern uint32_T plook_u32ff_evenxg(real32_T u, real32_T bp0, real32_T bpSpace,
  uint32_T maxIndex, real32_T *fraction);
extern uint32_T plook_u32ff_bincg(real32_T u, const real32_T bp[], uint32_T
  maxIndex, real32_T *fraction);
extern real32_T intrp2d_fu32fl_pw(const uint32_T bpIndex[], const real32_T frac[],
  const real32_T table[], const uint32_T stride);

#endif                              /* RTW_HEADER_QS_InnerRateLoop_private_h_ */
