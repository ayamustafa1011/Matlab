/*
 * File: topic5.h
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

#ifndef RTW_HEADER_topic5_h_
#define RTW_HEADER_topic5_h_
#include <stddef.h>
#include <string.h>
#ifndef topic5_COMMON_INCLUDES_
# define topic5_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* topic5_COMMON_INCLUDES_ */

#include "topic5_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint8_T is_active_c3_topic5;         /* '<Root>/Chart' */
  uint8_T temporalCounter_i1;          /* '<Root>/Chart' */
} DW_topic5_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
} ExtY_topic5_T;

/* Real-time Model Data Structure */
struct tag_RTM_topic5_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_topic5_T topic5_DW;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_topic5_T topic5_Y;

/* Model entry point functions */
extern void topic5_initialize(void);
extern void topic5_step(void);
extern void topic5_terminate(void);

/* Real-time Model object */
extern RT_MODEL_topic5_T *const topic5_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'topic5'
 * '<S1>'   : 'topic5/Chart'
 * '<S2>'   : 'topic5/Function-Call Subsystem'
 */
#endif                                 /* RTW_HEADER_topic5_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
