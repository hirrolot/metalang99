#ifndef EPILEPSY_EVAL_MACHINE_H
#define EPILEPSY_EVAL_MACHINE_H

#include <epilepsy/eval/acc.h>
#include <epilepsy/eval/control.h>
#include <epilepsy/eval/rec/control.h>

#define EPILEPSY_PRIV_EVAL_MACHINE_OP_CONTINUE(k, k_cx, acc, tail)                                 \
    EPILEPSY_PRIV_EVAL_REC_CONTINUE(                                                               \
        EPILEPSY_PRIV_EVAL_MATCH_HOOK, (k, k_cx), acc, EPILEPSY_PRIV_EVAL_CONTROL_UNWRAP(tail))

#define EPILEPSY_PRIV_EVAL_MACHINE_OP_STOP(k, k_cx, acc)                                           \
    EPILEPSY_PRIV_EVAL_REC_CONTINUE(k, k_cx, EPILEPSY_PRIV_EVAL_ACC_UNWRAP(acc))

#endif // EPILEPSY_EVAL_MACHINE_H
