/*
 * Topic6.c
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

#include "Topic6.h"
#include "Topic6_private.h"

/* Block signals (default storage) */
B_Topic6_T Topic6_B;

/* Block states (default storage) */
DW_Topic6_T Topic6_DW;

/* Real-time model */
RT_MODEL_Topic6_T Topic6_M_;
RT_MODEL_Topic6_T *const Topic6_M = &Topic6_M_;
real_T look1_binlxpw(real_T u0, const real_T bp0[], const real_T table[],
                     uint32_T maxIndex)
{
  real_T frac;
  uint32_T iRght;
  uint32_T iLeft;
  uint32_T bpIdx;

  /* Column-major Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Linear'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = (u0 - bp0[0U]) / (bp0[1U] - bp0[0U]);
  } else if (u0 < bp0[maxIndex]) {
    /* Binary Search */
    bpIdx = maxIndex >> 1U;
    iLeft = 0U;
    iRght = maxIndex;
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex - 1U;
    frac = (u0 - bp0[maxIndex - 1U]) / (bp0[maxIndex] - bp0[maxIndex - 1U]);
  }

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  return (table[iLeft + 1U] - table[iLeft]) * frac + table[iLeft];
}

real_T rt_remd_snf(real_T u0, real_T u1)
{
  real_T y;
  real_T q;
  if (rtIsNaN(u0) || rtIsInf(u0) || (rtIsNaN(u1) || rtIsInf(u1))) {
    y = (rtNaN);
  } else if ((u1 != 0.0) && (u1 != trunc(u1))) {
    q = fabs(u0 / u1);
    if (fabs(q - floor(q + 0.5)) <= DBL_EPSILON * q) {
      y = 0.0 * u0;
    } else {
      y = fmod(u0, u1);
    }
  } else {
    y = fmod(u0, u1);
  }

  return y;
}

/* Model step function */
void Topic6_step(void)
{
  real_T tmp;

  /* DataTypeConversion: '<Root>/Data Type  Conversion' incorporates:
   *  Clock: '<S2>/Clock'
   *  Constant: '<S2>/Constant'
   *  Lookup_n-D: '<S2>/Look-Up Table1'
   *  Math: '<S2>/Math Function'
   *  S-Function (sfun_tstart): '<S2>/startTime'
   *  Sum: '<S2>/Sum'
   */
  tmp = floor(look1_binlxpw(rt_remd_snf(Topic6_M->Timing.t[0] - (0.0),
    Topic6_P.Constant_Value), Topic6_P.LookUpTable1_bp01Data,
    Topic6_P.RepeatingSequence_rep_seq_y, 4U));
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 4.294967296E+9);
  }

  /* DataTypeConversion: '<Root>/Data Type  Conversion1' incorporates:
   *  DataTypeConversion: '<Root>/Data Type  Conversion'
   */
  Topic6_B.DataTypeConversion1 = (ErrorStatus)(tmp < 0.0 ? -(int32_T)(uint32_T)
    -tmp : (int32_T)(uint32_T)tmp);

  /* Matfile logging */
  rt_UpdateTXYLogVars(Topic6_M->rtwLogInfo, (Topic6_M->Timing.t));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.0s, 0.0s] */
    if ((rtmGetTFinal(Topic6_M)!=-1) &&
        !((rtmGetTFinal(Topic6_M)-Topic6_M->Timing.t[0]) > Topic6_M->Timing.t[0]
          * (DBL_EPSILON))) {
      rtmSetErrorStatus(Topic6_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++Topic6_M->Timing.clockTick0)) {
    ++Topic6_M->Timing.clockTickH0;
  }

  Topic6_M->Timing.t[0] = Topic6_M->Timing.clockTick0 *
    Topic6_M->Timing.stepSize0 + Topic6_M->Timing.clockTickH0 *
    Topic6_M->Timing.stepSize0 * 4294967296.0;

  {
    /* Update absolute timer for sample time: [0.2s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.2, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    Topic6_M->Timing.clockTick1++;
    if (!Topic6_M->Timing.clockTick1) {
      Topic6_M->Timing.clockTickH1++;
    }
  }
}

/* Model initialize function */
void Topic6_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)Topic6_M, 0,
                sizeof(RT_MODEL_Topic6_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&Topic6_M->solverInfo, &Topic6_M->Timing.simTimeStep);
    rtsiSetTPtr(&Topic6_M->solverInfo, &rtmGetTPtr(Topic6_M));
    rtsiSetStepSizePtr(&Topic6_M->solverInfo, &Topic6_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&Topic6_M->solverInfo, (&rtmGetErrorStatus(Topic6_M)));
    rtsiSetRTModelPtr(&Topic6_M->solverInfo, Topic6_M);
  }

  rtsiSetSimTimeStep(&Topic6_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&Topic6_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(Topic6_M, &Topic6_M->Timing.tArray[0]);
  rtmSetTFinal(Topic6_M, 10.0);
  Topic6_M->Timing.stepSize0 = 0.2;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    Topic6_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(Topic6_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(Topic6_M->rtwLogInfo, (NULL));
    rtliSetLogT(Topic6_M->rtwLogInfo, "tout");
    rtliSetLogX(Topic6_M->rtwLogInfo, "");
    rtliSetLogXFinal(Topic6_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(Topic6_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(Topic6_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(Topic6_M->rtwLogInfo, 0);
    rtliSetLogDecimation(Topic6_M->rtwLogInfo, 1);
    rtliSetLogY(Topic6_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(Topic6_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(Topic6_M->rtwLogInfo, (NULL));
  }

  /* block I/O */
  {
    Topic6_B.DataTypeConversion1 = Rcc_enuOK;
  }

  /* states (dwork) */
  (void) memset((void *)&Topic6_DW, 0,
                sizeof(DW_Topic6_T));

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(Topic6_M->rtwLogInfo, 0.0, rtmGetTFinal
    (Topic6_M), Topic6_M->Timing.stepSize0, (&rtmGetErrorStatus(Topic6_M)));
}

/* Model terminate function */
void Topic6_terminate(void)
{
  /* (no terminate code required) */
}
