#ifndef EPILEPSY_EVAL_MACHINE_H
#define EPILEPSY_EVAL_MACHINE_H

#include <epilepsy/eval/acc.h>
#include <epilepsy/eval/rec/control.h>

#define EPILEPSY_PRIV_EVAL_MACHINE_REDUCE(k, k_cx, folder, acc, ...)                               \
    EPILEPSY_PRIV_REC_CONTINUE(EPILEPSY_PRIV_EVAL_MATCH, (k, k_cx, folder, acc), __VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_MACHINE_CALL_K(k, k_cx, acc)                                            \
    EPILEPSY_PRIV_REC_CONTINUE(EPILEPSY_PRIV_EVAL_##k, k_cx, EPILEPSY_PRIV_EVAL_ACC_UNWRAP(acc))

#endif // EPILEPSY_EVAL_MACHINE_H
