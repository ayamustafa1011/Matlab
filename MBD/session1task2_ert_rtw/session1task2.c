/*
 * File: session1task2.c
 *
 * Code generated for Simulink model 'session1task2'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Mon Mar 21 16:49:36 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "session1task2.h"
#include "session1task2_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_session1task2_T session1task2_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_session1task2_T session1task2_Y;

/* Real-time model */
RT_MODEL_session1task2_T session1task2_M_;
RT_MODEL_session1task2_T *const session1task2_M = &session1task2_M_;

/* Model step function */
void session1task2_step(void)
{
  /* Outport: '<Root>/Out1' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  S-Function (sfix_bitop): '<Root>/Bitwise NAND'
   *  S-Function (sfix_bitop): '<Root>/Bitwise OR1'
   */
  session1task2_Y.Out1 = (uint8_T)(session1task2_U.In1 & session1task2_U.In2);

  /* Outport: '<Root>/Out2' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  S-Function (sfix_bitop): '<Root>/Bitwise NOR'
   *  S-Function (sfix_bitop): '<Root>/Bitwise OR'
   */
  session1task2_Y.Out2 = (uint8_T)(session1task2_U.In1 | session1task2_U.In2);

  /* Outport: '<Root>/Out3' incorporates:
   *  Inport: '<Root>/In1'
   *  S-Function (sfix_bitop): '<Root>/Bitwise NOT'
   */
  session1task2_Y.Out3 = (uint8_T)~session1task2_U.In1;

  /* Outport: '<Root>/Out4' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  S-Function (sfix_bitop): '<Root>/Bitwise XOR'
   */
  session1task2_Y.Out4 = (uint8_T)(session1task2_U.In1 ^ session1task2_U.In2);

  /* Outport: '<Root>/Out5' incorporates:
   *  S-Function (sfix_bitop): '<Root>/Bitwise NAND'
   */
  session1task2_Y.Out5 = (uint8_T)~session1task2_Y.Out1;

  /* Outport: '<Root>/Out6' incorporates:
   *  S-Function (sfix_bitop): '<Root>/Bitwise NOR'
   */
  session1task2_Y.Out6 = (uint8_T)~session1task2_Y.Out2;
}

/* Model initialize function */
void session1task2_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(session1task2_M, (NULL));

  /* external inputs */
  (void)memset(&session1task2_U, 0, sizeof(ExtU_session1task2_T));

  /* external outputs */
  (void) memset((void *)&session1task2_Y, 0,
                sizeof(ExtY_session1task2_T));
}

/* Model terminate function */
void session1task2_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
