/*
 * File: session2task2.c
 *
 * Code generated for Simulink model 'session2task2'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Mar 22 07:56:18 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "session2task2.h"
#include "session2task2_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_session2task2_T session2task2_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_session2task2_T session2task2_Y;

/* Real-time model */
RT_MODEL_session2task2_T session2task2_M_;
RT_MODEL_session2task2_T *const session2task2_M = &session2task2_M_;

/* Model step function */
void session2task2_step(void)
{
  /* Outport: '<Root>/Out1' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Sum: '<S2>/Add'
   */
  session2task2_Y.Out1 = session2task2_U.In1 + session2task2_U.In2;

  /* Outport: '<Root>/Out2' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Sum: '<S2>/Subtract'
   */
  session2task2_Y.Out2 = session2task2_U.In1 - session2task2_U.In2;

  /* Outport: '<Root>/Out3' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Product: '<S2>/Multiply'
   */
  session2task2_Y.Out3 = session2task2_U.In1 * session2task2_U.In2;

  /* Outport: '<Root>/Out4' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Product: '<S2>/Divide'
   */
  session2task2_Y.Out4 = session2task2_U.In1 / session2task2_U.In2;
}

/* Model initialize function */
void session2task2_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(session2task2_M, (NULL));

  /* external inputs */
  (void)memset(&session2task2_U, 0, sizeof(ExtU_session2task2_T));

  /* external outputs */
  (void) memset((void *)&session2task2_Y, 0,
                sizeof(ExtY_session2task2_T));
}

/* Model terminate function */
void session2task2_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
