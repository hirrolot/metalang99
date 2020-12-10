#ifndef MACROLOP_EVAL_MACHINE_H
#define MACROLOP_EVAL_MACHINE_H

#include <macrolop/eval/acc.h>
#include <macrolop/eval/control.h>
#include <macrolop/eval/rec/control.h>

#define MACROLOP_PRIV_EVAL_MACHINE_OP_CONTINUE(k, k_cx, acc, tail)                                 \
    MACROLOP_PRIV_EVAL_REC_CONTINUE(                                                               \
        MACROLOP_PRIV_EVAL_MATCH_HOOK, (k, k_cx), acc, MACROLOP_PRIV_EVAL_CONTROL_UNWRAP(tail))

#define MACROLOP_PRIV_EVAL_MACHINE_OP_STOP(k, k_cx, acc)                                           \
    MACROLOP_PRIV_EVAL_REC_CONTINUE(k, k_cx, MACROLOP_PRIV_EVAL_ACC_UNWRAP(acc))

#endif // MACROLOP_EVAL_MACHINE_H
