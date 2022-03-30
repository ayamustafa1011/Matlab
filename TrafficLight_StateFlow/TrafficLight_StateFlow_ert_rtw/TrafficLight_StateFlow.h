/*
 * File: TrafficLight_StateFlow.h
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

#ifndef RTW_HEADER_TrafficLight_StateFlow_h_
#define RTW_HEADER_TrafficLight_StateFlow_h_
#include <stddef.h>
#include <string.h>
#ifndef TrafficLight_StateFlow_COMMON_INCLUDES_
# define TrafficLight_StateFlow_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* TrafficLight_StateFlow_COMMON_INCLUDES_ */

#include "TrafficLight_StateFlow_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint8_T is_active_c3_TrafficLight_State;/* '<Root>/Chart' */
  uint8_T is_c3_TrafficLight_StateFlow;/* '<Root>/Chart' */
  uint8_T temporalCounter_i1;          /* '<Root>/Chart' */
} DW_TrafficLight_StateFlow_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  uint8_T Out1;                        /* '<Root>/Out1' */
  uint8_T Out2;                        /* '<Root>/Out2' */
  uint8_T Out3;                        /* '<Root>/Out3' */
} ExtY_TrafficLight_StateFlow_T;

/* Real-time Model Data Structure */
struct tag_RTM_TrafficLight_StateFlo_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_TrafficLight_StateFlow_T TrafficLight_StateFlow_DW;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_TrafficLight_StateFlow_T TrafficLight_StateFlow_Y;

/* Model entry point functions */
extern void TrafficLight_StateFlow_initialize(void);
extern void TrafficLight_StateFlow_step(void);
extern void TrafficLight_StateFlow_terminate(void);

/* Real-time Model object */
extern RT_MODEL_TrafficLight_StateFl_T *const TrafficLight_StateFlow_M;

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
 * '<Root>' : 'TrafficLight_StateFlow'
 * '<S1>'   : 'TrafficLight_StateFlow/Chart'
 */
#endif                                 /* RTW_HEADER_TrafficLight_StateFlow_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
