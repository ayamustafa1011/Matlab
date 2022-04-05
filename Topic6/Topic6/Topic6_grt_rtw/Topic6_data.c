/*
 * Topic6_data.c
 *
 * Code generation for model "Topic6".
 *
 * Model version              : 1.2
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Tue Apr  5 17:10:37 2022
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Topic6.h"
#include "Topic6_private.h"

/* Block parameters (default storage) */
P_Topic6_T Topic6_P = {
  /* Mask Parameter: RepeatingSequence_rep_seq_y
   * Referenced by: '<S2>/Look-Up Table1'
   */
  { 0.0, 1.0, 2.0, 2.0, 1.0 },

  /* Mask Parameter: EnumeratedConstant_Value
   * Referenced by: '<S1>/Constant'
   */
  Rcc_enuOK,

  /* Expression: period
   * Referenced by: '<S2>/Constant'
   */
  4.0,

  /* Expression: rep_seq_t - min(rep_seq_t)
   * Referenced by: '<S2>/Look-Up Table1'
   */
  { 0.0, 1.0, 2.0, 3.0, 4.0 }
};
