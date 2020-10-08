#ifndef AGONY_PP_EVAL_REC_CONTROL_H
#define AGONY_PP_EVAL_REC_CONTROL_H

#include "aux.h"

#define AGONY_PP_PRIVATE_EVAL_REC_STOP()               AGONY_PP_PRIVATE_EVAL_REC_STOP_AUX
#define AGONY_PP_PRIVATE_EVAL_REC_STOP_AUX(_k_cx, ...) STOP, __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_CONTINUE(k, k_cx, ...)                                           \
    CONTINUE, AGONY_PP_PRIVATE_EVAL_REC_AUX_DEFER_2_TIMES(                                         \
                  k)()(AGONY_PP_PRIVATE_EVAL_REC_AUX_UNPARENTHESISE(k_cx), __VA_ARGS__)

#endif // AGONY_PP_EVAL_REC_CONTROL_H
