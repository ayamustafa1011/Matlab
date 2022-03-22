/*
 * File: session1task1.c
 *
 * Code generated for Simulink model 'session1task1'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Mon Mar 21 16:13:32 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "session1task1.h"
#include "session1task1_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_session1task1_T session1task1_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_session1task1_T session1task1_Y;

/* Real-time model */
RT_MODEL_session1task1_T session1task1_M_;
RT_MODEL_session1task1_T *const session1task1_M = &session1task1_M_;

/* Model step function */
void session1task1_step(void)
{
  /* Outport: '<Root>/Out1' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Sum: '<Root>/Add'
   */
  session1task1_Y.Out1 = session1task1_U.In1 + session1task1_U.In2;

  /* Outport: '<Root>/Out2' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Sum: '<Root>/Subtract'
   */
  session1task1_Y.Out2 = session1task1_U.In1 - session1task1_U.In2;

  /* Outport: '<Root>/Out3' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Product: '<Root>/Multiply'
   */
  session1task1_Y.Out3 = session1task1_U.In1 * session1task1_U.In2;

  /* Outport: '<Root>/Out4' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Product: '<Root>/Divide'
   */
  session1task1_Y.Out4 = session1task1_U.In1 / session1task1_U.In2;
}

/* Model initialize function */
void session1task1_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(session1task1_M, (NULL));

  /* external inputs */
  (void)memset(&session1task1_U, 0, sizeof(ExtU_session1task1_T));

  /* external outputs */
  (void) memset((void *)&session1task1_Y, 0,
                sizeof(ExtY_session1task1_T));
}

/* Model terminate function */
void session1task1_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
