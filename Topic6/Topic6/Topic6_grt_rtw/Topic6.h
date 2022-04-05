/*
 * Topic6.h
 *
 * Code generation for model "Topic6".
 *
 * Model version              : 1.2
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Tue Apr  5 17:10:37 2022
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Topic6_h_
#define RTW_HEADER_Topic6_h_
#include <float.h>
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef Topic6_COMMON_INCLUDES_
# define Topic6_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#endif                                 /* Topic6_COMMON_INCLUDES_ */

#include "Topic6_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

/* Block signals (default storage) */
typedef struct {
  ErrorStatus DataTypeConversion1;     /* '<Root>/Data Type  Conversion1' */
} B_Topic6_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  struct {
    void *LoggedData;
  } Scope_PWORK;                       /* '<Root>/Scope' */
} DW_Topic6_T;

/* Parameters (default storage) */
struct P_Topic6_T_ {
  real_T RepeatingSequence_rep_seq_y[5];/* Mask Parameter: RepeatingSequence_rep_seq_y
                                         * Referenced by: '<S2>/Look-Up Table1'
                                         */
  ErrorStatus EnumeratedConstant_Value;/* Mask Parameter: EnumeratedConstant_Value
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T Constant_Value;               /* Expression: period
                                        * Referenced by: '<S2>/Constant'
                                        */
  real_T LookUpTable1_bp01Data[5];     /* Expression: rep_seq_t - min(rep_seq_t)
                                        * Referenced by: '<S2>/Look-Up Table1'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Topic6_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;
  RTWSolverInfo solverInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T tFinal;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block parameters (default storage) */
extern P_Topic6_T Topic6_P;

/* Block signals (default storage) */
extern B_Topic6_T Topic6_B;

/* Block states (default storage) */
extern DW_Topic6_T Topic6_DW;

/* Model entry point functions */
extern void Topic6_initialize(void);
extern void Topic6_step(void);
extern void Topic6_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Topic6_T *const Topic6_M;

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
 * '<Root>' : 'Topic6'
 * '<S1>'   : 'Topic6/Enumerated Constant'
 * '<S2>'   : 'Topic6/Repeating Sequence'
 */
#endif                                 /* RTW_HEADER_Topic6_h_ */
