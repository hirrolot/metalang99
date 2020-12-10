#ifndef MACROLOP_EVAL_REC_CONTROL_H
#define MACROLOP_EVAL_REC_CONTROL_H

#include <macrolop/eval/rec/aux.h>

#define MACROLOP_PRIV_EVAL_REC_STOP()               MACROLOP_PRIV_EVAL_REC_STOP_AUX
#define MACROLOP_PRIV_EVAL_REC_STOP_AUX(_k_cx, ...) STOP, __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_CONTINUE(k, k_cx, ...)                                              \
    CONTINUE, MACROLOP_PRIV_EVAL_REC_AUX_DEFER_2_TIMES(k)()(                                       \
                  MACROLOP_PRIV_EVAL_REC_AUX_UNPARENTHESISE(k_cx), __VA_ARGS__)

#endif // MACROLOP_EVAL_REC_CONTROL_H
