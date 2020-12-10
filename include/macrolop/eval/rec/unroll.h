#ifndef MACROLOP_REC_UNROLL_H
#define MACROLOP_REC_UNROLL_H

// clang-format off
#include <macrolop/eval/rec/unroll/0_to_1023.h>

// [1024; 4096)
#include <macrolop/eval/rec/unroll/1024_to_2047.h>

// [2048; 4096)
#include <macrolop/eval/rec/unroll/2048_to_4095/2048_to_3071.h>
#include <macrolop/eval/rec/unroll/2048_to_4095/3072_to_4095.h>

// [4096; 8192)
#include <macrolop/eval/rec/unroll/4096_to_8191/4096_to_5119.h>
#include <macrolop/eval/rec/unroll/4096_to_8191/5120_to_6143.h>
#include <macrolop/eval/rec/unroll/4096_to_8191/6144_to_7167.h>
#include <macrolop/eval/rec/unroll/4096_to_8191/7168_to_8191.h>

// [8192; 16384)
#include <macrolop/eval/rec/unroll/8192_to_16383/8192_to_9215.h>
#include <macrolop/eval/rec/unroll/8192_to_16383/9216_to_10239.h>
#include <macrolop/eval/rec/unroll/8192_to_16383/10240_to_11263.h>
#include <macrolop/eval/rec/unroll/8192_to_16383/11264_to_12287.h>
#include <macrolop/eval/rec/unroll/8192_to_16383/12288_to_13311.h>
#include <macrolop/eval/rec/unroll/8192_to_16383/13312_to_14335.h>
#include <macrolop/eval/rec/unroll/8192_to_16383/14336_to_15359.h>
#include <macrolop/eval/rec/unroll/8192_to_16383/15360_to_16383.h>
// clang-format on

#define MACROLOP_PRIV_EVAL_REC_UNROLL MACROLOP_PRIV_EVAL_REC_0

#endif // MACROLOP_REC_UNROLL_H
