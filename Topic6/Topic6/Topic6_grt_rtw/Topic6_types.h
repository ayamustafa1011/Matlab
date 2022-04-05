/*
 * Topic6_types.h
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

#ifndef RTW_HEADER_Topic6_types_h_
#define RTW_HEADER_Topic6_types_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#ifndef DEFINED_TYPEDEF_FOR_ErrorStatus_
#define DEFINED_TYPEDEF_FOR_ErrorStatus_

typedef enum {
  Rcc_enuOK = 0,                       /* Default value */
  Rcc_enuNok,
  Rcc_enuNullPointer
} ErrorStatus;

#endif

/* Parameters (default storage) */
typedef struct P_Topic6_T_ P_Topic6_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_Topic6_T RT_MODEL_Topic6_T;

#endif                                 /* RTW_HEADER_Topic6_types_h_ */
