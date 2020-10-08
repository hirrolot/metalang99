#ifndef KOSHMAR_PP_EVAL_REC_CONTROL_H
#define KOSHMAR_PP_EVAL_REC_CONTROL_H

#include "aux.h"

#define KOSHMAR_PP_PRIVATE_EVAL_REC_STOP()               KOSHMAR_PP_PRIVATE_EVAL_REC_STOP_AUX
#define KOSHMAR_PP_PRIVATE_EVAL_REC_STOP_AUX(_k_cx, ...) STOP, __VA_ARGS__

#define KOSHMAR_PP_PRIVATE_EVAL_REC_CONTINUE(k, k_cx, ...)                                         \
    CONTINUE, KOSHMAR_PP_PRIVATE_EVAL_REC_AUX_DEFER_2_TIMES(                                       \
                  k)()(KOSHMAR_PP_PRIVATE_EVAL_REC_AUX_UNPARENTHESISE(k_cx), __VA_ARGS__)

#endif // KOSHMAR_PP_EVAL_REC_CONTROL_H
