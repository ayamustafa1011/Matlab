/*
 * File: TrafficLight_StateFlow.c
 *
 * Code generated for Simulink model 'TrafficLight_StateFlow'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Mar 30 14:42:04 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TrafficLight_StateFlow.h"
#include "TrafficLight_StateFlow_private.h"

/* Named constants for Chart: '<Root>/Chart' */
#define TrafficLight_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define TrafficLight_StateFlo_IN_Ready_ ((uint8_T)2U)
#define TrafficLight_StateFlow_IN_Go_  ((uint8_T)1U)
#define TrafficLight_StateFlow_IN_Stop_ ((uint8_T)3U)

/* Block states (default storage) */
DW_TrafficLight_StateFlow_T TrafficLight_StateFlow_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_TrafficLight_StateFlow_T TrafficLight_StateFlow_Y;

/* Real-time model */
RT_MODEL_TrafficLight_StateFl_T TrafficLight_StateFlow_M_;
RT_MODEL_TrafficLight_StateFl_T *const TrafficLight_StateFlow_M =
  &TrafficLight_StateFlow_M_;

/* Model step function */
void TrafficLight_StateFlow_step(void)
{
  /* Chart: '<Root>/Chart' */
  if (TrafficLight_StateFlow_DW.temporalCounter_i1 < 31U) {
    TrafficLight_StateFlow_DW.temporalCounter_i1++;
  }

  if (TrafficLight_StateFlow_DW.is_active_c3_TrafficLight_State == 0U) {
    TrafficLight_StateFlow_DW.is_active_c3_TrafficLight_State = 1U;
    TrafficLight_StateFlow_DW.is_c3_TrafficLight_StateFlow =
      TrafficLight_StateFlow_IN_Stop_;
    TrafficLight_StateFlow_DW.temporalCounter_i1 = 0U;

    /* Outport: '<Root>/Out1' */
    TrafficLight_StateFlow_Y.Out1 = 0U;

    /* Outport: '<Root>/Out2' */
    TrafficLight_StateFlow_Y.Out2 = 0U;

    /* Outport: '<Root>/Out3' */
    TrafficLight_StateFlow_Y.Out3 = 0U;
  } else {
    switch (TrafficLight_StateFlow_DW.is_c3_TrafficLight_StateFlow) {
     case TrafficLight_StateFlow_IN_Go_:
      if (TrafficLight_StateFlow_DW.temporalCounter_i1 >= 15U) {
        TrafficLight_StateFlow_DW.is_c3_TrafficLight_StateFlow =
          TrafficLight_StateFlow_IN_Stop_;
        TrafficLight_StateFlow_DW.temporalCounter_i1 = 0U;

        /* Outport: '<Root>/Out1' */
        TrafficLight_StateFlow_Y.Out1 = 0U;

        /* Outport: '<Root>/Out2' */
        TrafficLight_StateFlow_Y.Out2 = 0U;

        /* Outport: '<Root>/Out3' */
        TrafficLight_StateFlow_Y.Out3 = 0U;
      } else {
        /* Outport: '<Root>/Out1' */
        TrafficLight_StateFlow_Y.Out1 = 0U;

        /* Outport: '<Root>/Out2' */
        TrafficLight_StateFlow_Y.Out2 = 0U;

        /* Outport: '<Root>/Out3' */
        TrafficLight_StateFlow_Y.Out3 = 1U;
      }
      break;

     case TrafficLight_StateFlo_IN_Ready_:
      if (TrafficLight_StateFlow_DW.temporalCounter_i1 >= 15U) {
        TrafficLight_StateFlow_DW.is_c3_TrafficLight_StateFlow =
          TrafficLight_StateFlow_IN_Go_;
        TrafficLight_StateFlow_DW.temporalCounter_i1 = 0U;

        /* Outport: '<Root>/Out1' */
        TrafficLight_StateFlow_Y.Out1 = 0U;

        /* Outport: '<Root>/Out2' */
        TrafficLight_StateFlow_Y.Out2 = 0U;

        /* Outport: '<Root>/Out3' */
        TrafficLight_StateFlow_Y.Out3 = 0U;
      } else {
        /* Outport: '<Root>/Out1' */
        TrafficLight_StateFlow_Y.Out1 = 0U;

        /* Outport: '<Root>/Out2' */
        TrafficLight_StateFlow_Y.Out2 = 1U;

        /* Outport: '<Root>/Out3' */
        TrafficLight_StateFlow_Y.Out3 = 0U;
      }
      break;

     default:
      if (TrafficLight_StateFlow_DW.temporalCounter_i1 >= 15U) {
        TrafficLight_StateFlow_DW.is_c3_TrafficLight_StateFlow =
          TrafficLight_StateFlo_IN_Ready_;
        TrafficLight_StateFlow_DW.temporalCounter_i1 = 0U;

        /* Outport: '<Root>/Out1' */
        TrafficLight_StateFlow_Y.Out1 = 0U;

        /* Outport: '<Root>/Out2' */
        TrafficLight_StateFlow_Y.Out2 = 0U;

        /* Outport: '<Root>/Out3' */
        TrafficLight_StateFlow_Y.Out3 = 0U;
      } else {
        /* Outport: '<Root>/Out1' */
        TrafficLight_StateFlow_Y.Out1 = 1U;

        /* Outport: '<Root>/Out2' */
        TrafficLight_StateFlow_Y.Out2 = 0U;

        /* Outport: '<Root>/Out3' */
        TrafficLight_StateFlow_Y.Out3 = 0U;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */
}

/* Model initialize function */
void TrafficLight_StateFlow_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(TrafficLight_StateFlow_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&TrafficLight_StateFlow_DW, 0,
                sizeof(DW_TrafficLight_StateFlow_T));

  /* external outputs */
  (void) memset((void *)&TrafficLight_StateFlow_Y, 0,
                sizeof(ExtY_TrafficLight_StateFlow_T));

  /* SystemInitialize for Chart: '<Root>/Chart' */
  TrafficLight_StateFlow_DW.temporalCounter_i1 = 0U;
  TrafficLight_StateFlow_DW.is_active_c3_TrafficLight_State = 0U;
  TrafficLight_StateFlow_DW.is_c3_TrafficLight_StateFlow =
    TrafficLight_IN_NO_ACTIVE_CHILD;
}

/* Model terminate function */
void TrafficLight_StateFlow_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
