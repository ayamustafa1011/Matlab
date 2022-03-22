/*
 * File: session2task1.c
 *
 * Code generated for Simulink model 'session2task1'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Mar 22 07:41:56 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "session2task1.h"
#include "session2task1_private.h"

/* Block signals (default storage) */
B_session2task1_T session2task1_B;

/* External inputs (root inport signals with default storage) */
ExtU_session2task1_T session2task1_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_session2task1_T session2task1_Y;

/* Real-time model */
RT_MODEL_session2task1_T session2task1_M_;
RT_MODEL_session2task1_T *const session2task1_M = &session2task1_M_;

/* Model step function */
void session2task1_step(void)
{
  /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem' incorporates:
   *  ActionPort: '<S1>/Action Port'
   */
  /* If: '<Root>/If' incorporates:
   *  StringConstant: '<S1>/String Constant'
   */
  strncpy(&session2task1_B.Merge[0], session2task1_ConstP.StringConstant_String,
          255U);

  /* End of Outputs for SubSystem: '<Root>/If Action Subsystem' */

  /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem1' incorporates:
   *  ActionPort: '<S2>/Action Port'
   */
  /* If: '<Root>/If1' incorporates:
   *  StringConstant: '<S2>/String Constant'
   */
  strncpy(&session2task1_B.Merge[0],
          session2task1_ConstP.StringConstant_String_f, 255U);

  /* End of Outputs for SubSystem: '<Root>/If Action Subsystem1' */

  /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem2' incorporates:
   *  ActionPort: '<S3>/Action Port'
   */
  /* If: '<Root>/If2' incorporates:
   *  StringConstant: '<S3>/String Constant'
   */
  strncpy(&session2task1_B.Merge[0],
          session2task1_ConstP.StringConstant_String_e, 255U);
  session2task1_B.Merge[255] = '\x00';

  /* End of Outputs for SubSystem: '<Root>/If Action Subsystem2' */

  /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem3' incorporates:
   *  ActionPort: '<S4>/Action Port'
   */
  /* If: '<Root>/If3' incorporates:
   *  StringConstant: '<S4>/String Constant'
   */
  strncpy(&session2task1_B.Merge[0],
          session2task1_ConstP.StringConstant_String_n, 255U);
  session2task1_B.Merge[255] = '\x00';

  /* End of Outputs for SubSystem: '<Root>/If Action Subsystem3' */

  /* If: '<Root>/If4' incorporates:
   *  Inport: '<Root>/In1'
   *  StringConstant: '<S5>/String Constant'
   */
  if (session2task1_U.In1 < 50.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem4' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    strncpy(&session2task1_B.Merge[0],
            session2task1_ConstP.StringConstant_String_o, 255U);
    session2task1_B.Merge[255] = '\x00';

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem4' */
  }

  /* End of If: '<Root>/If4' */

  /* Outport: '<Root>/Out1' */
  strncpy(&session2task1_Y.Out1[0], session2task1_B.Merge, 255U);
  session2task1_Y.Out1[255] = '\x00';
}

/* Model initialize function */
void session2task1_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(session2task1_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &session2task1_B), 0,
                sizeof(B_session2task1_T));

  /* external inputs */
  session2task1_U.In1 = 0.0;

  /* external outputs */
  (void) memset(&session2task1_Y.Out1[0], 0,
                256U*sizeof(char_T));
}

/* Model terminate function */
void session2task1_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
