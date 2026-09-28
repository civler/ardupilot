/*
 * QS_InnerRateLoop_data.cpp
 *
 * Classroom License -- for classroom instructional use only.  Not for
 * government, commercial, academic research, or other organizational use.
 *
 * Code generation for model "QS_InnerRateLoop".
 *
 * Model version              : 10.1
 * Simulink Coder version : 23.2 (R2023b) 01-Aug-2023
 * C++ source code generated on : Mon Jun  1 11:15:22 2026
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objective: Execution efficiency
 * Validation result: Not run
 */

#include "QS_InnerRateLoop.h"

/* Invariant block signals (default storage) */
const ConstB_QS_InnerRateLoop_T QS_InnerRateLoop_ConstB = {
  1.0F
  ,                                    /* '<S8>/Trigonometric Function3' */
  0.0F
  ,                                    /* '<S8>/Trigonometric Function6' */
  1.0F
  ,                                    /* '<S9>/Trigonometric Function1' */
  1.0F
  ,                                    /* '<S9>/Trigonometric Function2' */
  0.0F
  ,                                    /* '<S9>/Trigonometric Function4' */
  0.0F
  ,                                    /* '<S9>/Trigonometric Function5' */
  1.0F
  ,                                    /* '<S71>/Trigonometric Function1' */
  1.0F
  ,                                    /* '<S71>/Trigonometric Function2' */
  0.0F
  ,                                    /* '<S71>/Trigonometric Function4' */
  0.0F
  ,                                    /* '<S71>/Trigonometric Function5' */
  1.0F
  ,                                    /* '<S72>/Trigonometric Function1' */
  1.0F
  ,                                    /* '<S72>/Trigonometric Function2' */
  0.0F
  ,                                    /* '<S72>/Trigonometric Function4' */
  0.0F
  ,                                    /* '<S72>/Trigonometric Function5' */
  1.0F
  ,                                    /* '<S103>/Trigonometric Function1' */
  1.0F
  ,                                    /* '<S103>/Trigonometric Function2' */
  0.0F
  ,                                    /* '<S103>/Trigonometric Function4' */
  0.0F
  ,                                    /* '<S103>/Trigonometric Function5' */
  28.8640499F
  ,                                    /* '<S12>/Sum1' */
  48.864048F
  /* '<S12>/Sum2' */
};

/* Constant parameters (default storage) */
const ConstP_QS_InnerRateLoop_T QS_InnerRateLoop_ConstP = {
  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S29>/1-D Lookup Table2'
   *   '<S45>/1-D Lookup Table2'
   */
  { 1.4F, 1.4F, 1.4F, 1.4F, 1.4F },

  /* Pooled Parameter (Expression: bpV)
   * Referenced by:
   *   '<S23>/1-D Lookup Table'
   *   '<S23>/1-D Lookup Table1'
   *   '<S24>/1-D Lookup Table'
   *   '<S24>/1-D Lookup Table1'
   *   '<S25>/1-D Lookup Table'
   *   '<S25>/1-D Lookup Table1'
   *   '<S26>/1-D Lookup Table'
   *   '<S26>/1-D Lookup Table1'
   *   '<S63>/1-D Lookup Table2'
   *   '<S64>/1-D Lookup Table2'
   *   '<S27>/1-D Lookup Table2'
   *   '<S28>/1-D Lookup Table2'
   *   '<S29>/1-D Lookup Table2'
   *   '<S37>/1-D Lookup Table2'
   *   '<S38>/1-D Lookup Table2'
   *   '<S43>/1-D Lookup Table2'
   *   '<S44>/1-D Lookup Table2'
   *   '<S45>/1-D Lookup Table2'
   *   '<S54>/1-D Lookup Table2'
   *   '<S55>/1-D Lookup Table2'
   *   '<S56>/1-D Lookup Table2'
   *   '<S73>/1-D Lookup Table'
   *   '<S73>/1-D Lookup Table1'
   *   '<S74>/1-D Lookup Table'
   *   '<S74>/1-D Lookup Table1'
   *   '<S35>/1-D Lookup Table2'
   *   '<S36>/1-D Lookup Table2'
   *   '<S42>/1-D Lookup Table2'
   *   '<S51>/1-D Lookup Table2'
   *   '<S52>/1-D Lookup Table2'
   *   '<S78>/1-D Lookup Table2'
   *   '<S79>/1-D Lookup Table2'
   *   '<S82>/1-D Lookup Table2'
   *   '<S83>/1-D Lookup Table2'
   *   '<S86>/1-D Lookup Table2'
   *   '<S87>/1-D Lookup Table2'
   *   '<S89>/1-D Lookup Table2'
   *   '<S90>/1-D Lookup Table2'
   *   '<S92>/1-D Lookup Table2'
   *   '<S93>/1-D Lookup Table2'
   */
  { 0.0F, 1.75F, 3.5F, 5.25F, 7.0F },

  /* Computed Parameter: uDLookupTable2_tableData
   * Referenced by: '<S38>/1-D Lookup Table2'
   */
  { 0.931665182F, 0.931665182F, 0.931665182F, 0.931665182F, 0.931665182F },

  /* Computed Parameter: uDLookupTable2_tableData_c
   * Referenced by: '<S55>/1-D Lookup Table2'
   */
  { 1.39749777F, 1.39749777F, 1.39749777F, 1.39749777F, 1.39749777F },

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S79>/1-D Lookup Table2'
   *   '<S83>/1-D Lookup Table2'
   */
  { 0.933333337F, 0.933333337F, 0.933333337F, 0.933333337F, 0.933333337F },

  /* Computed Parameter: uDLookupTable2_tableData_e
   * Referenced by: '<S86>/1-D Lookup Table2'
   */
  { 0.372666061F, 0.372666061F, 0.372666061F, 0.372666061F, 0.372666061F },

  /* Pooled Parameter (Expression: KlatlonI)
   * Referenced by:
   *   '<S90>/1-D Lookup Table2'
   *   '<S93>/1-D Lookup Table2'
   */
  { 0.186666667F, 0.186666667F, 0.186666667F, 0.186666667F, 0.186666667F },

  /* Computed Parameter: uDLookupTable2_tableData_g
   * Referenced by: '<S64>/1-D Lookup Table2'
   */
  { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 4.1F, 4.1F,
    2.505F, 2.505F, 2.505F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, -4.1F, -4.1F, -3.18F, -3.18F, -3.18F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, -0.33784F, -0.33784F, -0.53738F, -0.53738F,
    -0.53738F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, -0.305F, -0.305F,
    -0.305F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, -0.895F, -0.895F, -0.895F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 5.0F, 5.0F, 5.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, -0.357F, -0.357F, -0.357F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, -0.5F, -0.5F, -0.5F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 1.03F, 1.03F, 1.03F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F },

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S64>/Constant'
   *   '<S64>/1-D Lookup Table2'
   */
  { 1.0F, 2.0F, 3.0F, 4.0F, 5.0F, 6.0F, 7.0F, 8.0F, 9.0F, 10.0F, 11.0F, 12.0F,
    13.0F, 14.0F, 15.0F, 16.0F, 17.0F, 18.0F, 19.0F, 20.0F, 21.0F, 22.0F, 23.0F,
    24.0F, 25.0F, 26.0F, 27.0F, 28.0F, 29.0F, 30.0F, 31.0F, 32.0F, 33.0F, 34.0F,
    35.0F, 36.0F },

  /* Computed Parameter: uDLookupTable2_tableData_b
   * Referenced by: '<S63>/1-D Lookup Table2'
   */
  { -0.025305314F, -0.025305314F, -0.0254905038F, -0.0254905038F, -0.0254905038F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, -0.000900337647F, -0.000900337647F,
    -0.000900337647F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0068965517F, 0.0068965517F, 0.00709219836F, 0.00709219836F, 0.00709219836F,
    0.0F, 0.0F, -0.0F, -0.0F, -0.0F, 0.0F, 0.0F, -0.0F, -0.0F, -0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.00593134388F,
    0.00593134388F, 0.00641025649F, 0.00641025649F, 0.00641025649F, 0.0F, 0.0F,
    -0.0F, -0.0F, -0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0871084109F, 0.0871084109F,
    0.0887369215F, 0.0887369215F, 0.0887369215F },

  /* Pooled Parameter (Expression: [1:16])
   * Referenced by:
   *   '<S63>/Constant'
   *   '<S63>/1-D Lookup Table2'
   */
  { 1.0F, 2.0F, 3.0F, 4.0F, 5.0F, 6.0F, 7.0F, 8.0F, 9.0F, 10.0F, 11.0F, 12.0F,
    13.0F, 14.0F, 15.0F, 16.0F },

  /* Pooled Parameter (Expression: Klatlon)
   * Referenced by:
   *   '<S89>/1-D Lookup Table2'
   *   '<S92>/1-D Lookup Table2'
   */
  { 1.56881559F, 1.56881559F, 1.56881559F, 1.56881559F, 1.56881559F },

  /* Computed Parameter: uDLookupTable2_tableData_k
   * Referenced by: '<S87>/1-D Lookup Table2'
   */
  { 1.39699864F, 1.39699864F, 1.39699864F, 1.39699864F, 1.39699864F },

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S12>/1-D Lookup Table1'
   *   '<S12>/1-D Lookup Table2'
   *   '<S12>/1-D Lookup Table3'
   */
  { 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F },

  /* Expression: VXdata'
   * Referenced by: '<S12>/1-D Lookup Table'
   */
  { 0.0F, 0.161367133F, 0.322734267F, 0.484101415F, 0.645468533F, 0.806835651F,
    0.968202829F, 1.12956989F, 1.29093707F, 1.45230412F, 1.6136713F, 1.77503836F,
    1.93640566F, 2.09777284F, 2.25913978F, 2.42050695F, 2.58187413F, 2.74324131F,
    2.84651613F, 2.75573874F, 2.59363651F, 2.43153429F, 2.26943207F, 2.10732961F,
    1.9452275F, 1.78312516F, 1.62102294F, 1.4589206F, 1.29681826F, 1.13471603F,
    0.972613752F, 0.81051147F, 0.648409128F, 0.486306876F, 0.324204564F,
    0.162102282F, 0.0F },

  /* Computed Parameter: uDLookupTable2_tableData_j
   * Referenced by: '<S42>/1-D Lookup Table2'
   */
  { 0.2F, 0.2F, 0.2F, 0.2F, 0.2F },

  /* Computed Parameter: uDLookupTable2_tableData_o
   * Referenced by: '<S37>/1-D Lookup Table2'
   */
  { 16.0050049F, 16.0050049F, 16.0050049F, 16.0050049F, 16.0050049F },

  /* Computed Parameter: uDLookupTable_tableData_k
   * Referenced by: '<S24>/1-D Lookup Table'
   */
  { 5.6507144F, 5.6507144F, 5.6507144F, 5.6507144F, 5.6507144F },

  /* Computed Parameter: uDLookupTable1_tableData
   * Referenced by: '<S24>/1-D Lookup Table1'
   */
  { 15.3608894F, 15.3608894F, 15.3608894F, 15.3608894F, 15.3608894F },

  /* Computed Parameter: uDLookupTable2_tableData_a
   * Referenced by: '<S28>/1-D Lookup Table2'
   */
  { 82.6090698F, 82.6090698F, 82.6090698F, 82.6090698F, 82.6090698F },

  /* Computed Parameter: uDLookupTable2_tableData_f
   * Referenced by: '<S27>/1-D Lookup Table2'
   */
  { 11.2135353F, 11.2135353F, 11.2135353F, 11.2135353F, 11.2135353F },

  /* Computed Parameter: uDLookupTable_tableData_l
   * Referenced by: '<S23>/1-D Lookup Table'
   */
  { 17.1559811F, 17.1559811F, 17.1559811F, 17.1559811F, 17.1559811F },

  /* Computed Parameter: uDLookupTable1_tableData_n
   * Referenced by: '<S23>/1-D Lookup Table1'
   */
  { 11.4245872F, 11.4245872F, 11.4245872F, 11.4245872F, 11.4245872F },

  /* Computed Parameter: uDLookupTable2_tableData_ex
   * Referenced by: '<S44>/1-D Lookup Table2'
   */
  { 78.3800201F, 78.3800201F, 78.3800201F, 78.3800201F, 78.3800201F },

  /* Computed Parameter: uDLookupTable2_tableData_cv
   * Referenced by: '<S43>/1-D Lookup Table2'
   */
  { 10.3167F, 10.3167F, 10.3167F, 10.3167F, 10.3167F },

  /* Computed Parameter: uDLookupTable_tableData_m
   * Referenced by: '<S25>/1-D Lookup Table'
   */
  { 18.1788273F, 18.1788273F, 18.1788273F, 18.1788273F, 18.1788273F },

  /* Computed Parameter: uDLookupTable1_tableData_d
   * Referenced by: '<S25>/1-D Lookup Table1'
   */
  { 10.7817736F, 10.7817736F, 10.7817736F, 10.7817736F, 10.7817736F },

  /* Computed Parameter: uDLookupTable2_tableData_au
   * Referenced by: '<S54>/1-D Lookup Table2'
   */
  { 63.2894821F, 63.2894821F, 63.2894821F, 63.2894821F, 63.2894821F },

  /* Computed Parameter: uDLookupTable2_tableData_c0
   * Referenced by: '<S56>/1-D Lookup Table2'
   */
  { 8.23004F, 8.23004F, 8.23004F, 8.23004F, 8.23004F },

  /* Computed Parameter: uDLookupTable_tableData_h
   * Referenced by: '<S26>/1-D Lookup Table'
   */
  { 33.4871712F, 33.4871712F, 33.4871712F, 33.4871712F, 33.4871712F },

  /* Computed Parameter: uDLookupTable1_tableData_f
   * Referenced by: '<S26>/1-D Lookup Table1'
   */
  { 5.83208418F, 5.83208418F, 5.83208418F, 5.83208418F, 5.83208418F },

  /* Computed Parameter: uDLookupTable2_tableData_kg
   * Referenced by: '<S82>/1-D Lookup Table2'
   */
  { 0.21338208F, 0.21338208F, 0.21338208F, 0.21338208F, 0.21338208F },

  /* Computed Parameter: uDLookupTable_tableData_d
   * Referenced by: '<S74>/1-D Lookup Table'
   */
  { 17.9904079F, 17.9904079F, 17.9904079F, 17.9904079F, 17.9904079F },

  /* Computed Parameter: uDLookupTable1_tableData_m
   * Referenced by: '<S74>/1-D Lookup Table1'
   */
  { 1.21052158F, 1.21052158F, 1.21052158F, 1.21052158F, 1.21052158F },

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S35>/1-D Lookup Table2'
   *   '<S51>/1-D Lookup Table2'
   */
  { 2.625F, 2.625F, 2.625F, 2.625F, 2.625F },

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S36>/1-D Lookup Table2'
   *   '<S52>/1-D Lookup Table2'
   */
  { 10.5F, 10.5F, 10.5F, 10.5F, 10.5F },

  /* Computed Parameter: uDLookupTable2_tableData_n
   * Referenced by: '<S78>/1-D Lookup Table2'
   */
  { 0.27394104F, 0.27394104F, 0.27394104F, 0.27394104F, 0.27394104F },

  /* Computed Parameter: uDLookupTable_tableData_hs
   * Referenced by: '<S73>/1-D Lookup Table'
   */
  { 14.9679279F, 14.9679279F, 14.9679279F, 14.9679279F, 14.9679279F },

  /* Computed Parameter: uDLookupTable1_tableData_p
   * Referenced by: '<S73>/1-D Lookup Table1'
   */
  { 1.45496273F, 1.45496273F, 1.45496273F, 1.45496273F, 1.45496273F }
};
