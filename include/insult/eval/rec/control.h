#ifndef INSULT_EVAL_REC_CONTROL_H
#define INSULT_EVAL_REC_CONTROL_H

#include "aux.h"

#define INSULT_PRIVATE_EVAL_REC_STOP()               INSULT_PRIVATE_EVAL_REC_STOP_AUX
#define INSULT_PRIVATE_EVAL_REC_STOP_AUX(_k_cx, ...) STOP, __VA_ARGS__

#define INSULT_PRIVATE_EVAL_REC_CONTINUE(k, k_cx, ...)                                             \
    CONTINUE, INSULT_PRIVATE_EVAL_REC_AUX_DEFER_2_TIMES(                                           \
                  k)()(INSULT_PRIVATE_EVAL_REC_AUX_UNPARENTHESISE(k_cx), __VA_ARGS__)

#endif // INSULT_EVAL_REC_CONTROL_H
