#ifndef MACROLOP_EVAL_ACC_H
#define MACROLOP_EVAL_ACC_H

#include "aux.h"
#include "rec/control.h"

#define MACROLOP_PRIV_EVAL_ACC_EMPTY() ()
#define MACROLOP_PRIV_EVAL_ACC_EXTEND(acc, ...)                                                    \
    (MACROLOP_PRIV_EVAL_AUX_UNPARENTHESISE(acc) __VA_ARGS__)

#define MACROLOP_PRIV_EVAL_ACC_CONTINUE(hook, k, k_cx, acc, tail)                                  \
    MACROLOP_PRIV_EVAL_REC_CONTINUE(                                                               \
        hook, (k, k_cx), acc, MACROLOP_PRIV_EVAL_AUX_UNPARENTHESISE(tail))

#define MACROLOP_PRIV_EVAL_ACC_END(k, k_cx, acc)                                                   \
    MACROLOP_PRIV_EVAL_REC_CONTINUE(k, k_cx, MACROLOP_PRIV_EVAL_AUX_UNPARENTHESISE(acc))

#endif // MACROLOP_EVAL_ACC_H
