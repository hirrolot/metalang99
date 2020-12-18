#ifndef EPILEPSY_EVAL_LFOLDER_H
#define EPILEPSY_EVAL_LFOLDER_H

#include <epilepsy/eval/acc.h>
#include <epilepsy/priv/aux.h>

#define EPILEPSY_PRIV_EVAL_LFOLDER_APPEND(acc, ...)                                                \
    1(EPILEPSY_PRIV_EVAL_ACC_UNWRAP(acc) __VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_LFOLDER_INTERSPERSE_COMMA(acc, ...)                                     \
    1 EPILEPSY_PRIV_IF(                                                                            \
        EPILEPSY_PRIV_EVAL_ACC_IS_EMPTY(acc), (__VA_ARGS__),                                       \
        (EPILEPSY_PRIV_EVAL_ACC_UNWRAP(acc), __VA_ARGS__))

#endif // EPILEPSY_EVAL_LFOLDER_H
