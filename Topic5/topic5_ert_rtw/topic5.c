/*
 * File: topic5.c
 *
 * Code generated for Simulink model 'topic5'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Apr  5 14:10:29 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "topic5.h"
#include "topic5_private.h"

/* Block states (default storage) */
DW_topic5_T topic5_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_topic5_T topic5_Y;

/* Real-time model */
RT_MODEL_topic5_T topic5_M_;
RT_MODEL_topic5_T *const topic5_M = &topic5_M_;

/* Model step function */
void topic5_step(void)
{
  /* Chart: '<Root>/Chart' */
  if (topic5_DW.temporalCounter_i1 < 3U) {
    topic5_DW.temporalCounter_i1++;
  }

  if (topic5_DW.is_active_c3_topic5 == 0U) {
    topic5_DW.is_active_c3_topic5 = 1U;
    topic5_DW.temporalCounter_i1 = 0U;
  } else {
    if (topic5_DW.temporalCounter_i1 >= 1U) {
      /* Outputs for Function Call SubSystem: '<Root>/Function-Call Subsystem' */
      /* Outport: '<Root>/Out1' incorporates:
       *  Constant: '<Root>/Constant'
       *  Inport: '<S2>/In1'
       */
      topic5_Y.Out1 = 1.0;

      /* End of Outputs for SubSystem: '<Root>/Function-Call Subsystem' */
      topic5_DW.temporalCounter_i1 = 0U;
    }
  }

  /* End of Chart: '<Root>/Chart' */
}

/* Model initialize function */
void topic5_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(topic5_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&topic5_DW, 0,
                sizeof(DW_topic5_T));

  /* external outputs */
  topic5_Y.Out1 = 0.0;

  /* SystemInitialize for Chart: '<Root>/Chart' */
  topic5_DW.temporalCounter_i1 = 0U;
  topic5_DW.is_active_c3_topic5 = 0U;
}

/* Model terminate function */
void topic5_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
