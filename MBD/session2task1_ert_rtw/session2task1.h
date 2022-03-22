/*
 * File: session2task1.h
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

#ifndef RTW_HEADER_session2task1_h_
#define RTW_HEADER_session2task1_h_
#include <string.h>
#include <stddef.h>
#ifndef session2task1_COMMON_INCLUDES_
# define session2task1_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* session2task1_COMMON_INCLUDES_ */

#include "session2task1_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  char_T Merge[256];                   /* '<Root>/Merge' */
} B_session2task1_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Computed Parameter: StringConstant_String
   * Referenced by: '<S1>/String Constant'
   */
  char_T StringConstant_String[256];

  /* Computed Parameter: StringConstant_String_f
   * Referenced by: '<S2>/String Constant'
   */
  char_T StringConstant_String_f[256];

  /* Computed Parameter: StringConstant_String_e
   * Referenced by: '<S3>/String Constant'
   */
  char_T StringConstant_String_e[256];

  /* Computed Parameter: StringConstant_String_n
   * Referenced by: '<S4>/String Constant'
   */
  char_T StringConstant_String_n[256];

  /* Computed Parameter: StringConstant_String_o
   * Referenced by: '<S5>/String Constant'
   */
  char_T StringConstant_String_o[256];
} ConstP_session2task1_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T In1;                          /* '<Root>/In1' */
} ExtU_session2task1_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  char_T Out1[256];                    /* '<Root>/Out1' */
} ExtY_session2task1_T;

/* Real-time Model Data Structure */
struct tag_RTM_session2task1_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_session2task1_T session2task1_B;

/* External inputs (root inport signals with default storage) */
extern ExtU_session2task1_T session2task1_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_session2task1_T session2task1_Y;

/* Constant parameters (default storage) */
extern const ConstP_session2task1_T session2task1_ConstP;

/* Model entry point functions */
extern void session2task1_initialize(void);
extern void session2task1_step(void);
extern void session2task1_terminate(void);

/* Real-time Model object */
extern RT_MODEL_session2task1_T *const session2task1_M;

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
 * '<Root>' : 'session2task1'
 * '<S1>'   : 'session2task1/If Action Subsystem'
 * '<S2>'   : 'session2task1/If Action Subsystem1'
 * '<S3>'   : 'session2task1/If Action Subsystem2'
 * '<S4>'   : 'session2task1/If Action Subsystem3'
 * '<S5>'   : 'session2task1/If Action Subsystem4'
 */
#endif                                 /* RTW_HEADER_session2task1_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
