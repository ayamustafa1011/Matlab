/*
 * File: Factorial_StateFlow.c
 *
 * Code generated for Simulink model 'Factorial_StateFlow'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Mar 30 13:57:48 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Factorial_StateFlow.h"
#include "Factorial_StateFlow_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_Factorial_StateFlow_T Factorial_StateFlow_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Factorial_StateFlow_T Factorial_StateFlow_Y;

/* Real-time model */
RT_MODEL_Factorial_StateFlow_T Factorial_StateFlow_M_;
RT_MODEL_Factorial_StateFlow_T *const Factorial_StateFlow_M =
  &Factorial_StateFlow_M_;

/* Model step function */
void Factorial_StateFlow_step(void)
{
  /* (no output/update code required) */
}

/* Model initialize function */
void Factorial_StateFlow_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Factorial_StateFlow_M, (NULL));

  /* external inputs */
  Factorial_StateFlow_U.In1 = 0U;

  /* external outputs */
  Factorial_StateFlow_Y.Out1 = 0U;

  /* SystemInitialize for Outport: '<Root>/Out1' incorporates:
   *  Chart: '<Root>/Chart'
   */
  Factorial_StateFlow_Y.Out1 = 0U;
}

/* Model terminate function */
void Factorial_StateFlow_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
