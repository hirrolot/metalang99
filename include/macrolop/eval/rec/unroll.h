#ifndef MACROLOP_REC_UNROLL_H
#define MACROLOP_REC_UNROLL_H

// clang-format off
#include "unroll/0_to_1023.h"

// [1024; 4096)
#include "unroll/1024_to_2047.h"

// [2048; 4096)
#include "unroll/2048_to_3071.h"
#include "unroll/3072_to_4095.h"

// [4096; 8192)
#include "unroll/4096_to_5119.h"
#include "unroll/5120_to_6143.h"
#include "unroll/6144_to_7167.h"
#include "unroll/7168_to_8191.h"

// [8192; 16384)
#include "unroll/8192_to_9215.h"
#include "unroll/9216_to_10239.h"
#include "unroll/10240_to_11263.h"
#include "unroll/11264_to_12287.h"
#include "unroll/12288_to_13311.h"
#include "unroll/13312_to_14335.h"
#include "unroll/14336_to_15359.h"
#include "unroll/15360_to_16383.h"
// clang-format on

#define MACROLOP_PRIVATE_EVAL_REC_UNROLL MACROLOP_PRIVATE_EVAL_REC_0

#endif // MACROLOP_REC_UNROLL_H
