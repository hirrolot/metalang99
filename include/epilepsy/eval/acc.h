#ifndef EPILEPSY_EVAL_ACC_H
#define EPILEPSY_EVAL_ACC_H

#include <epilepsy/priv/aux.h>
#include <epilepsy/priv/pair.h>

#define EPILEPSY_PRIV_EVAL_ACC_EMPTY() 0(EPILEPSY_PRIV_AUX_EMPTY())

#define EPILEPSY_PRIV_EVAL_ACC_IS_EMPTY(acc)                                                       \
    EPILEPSY_PRIV_AUX_MATCH(EPILEPSY_PRIV_EVAL_ACC_IS_EMPTY_, acc)
#define EPILEPSY_PRIV_EVAL_ACC_IS_EMPTY_0(...) 1
#define EPILEPSY_PRIV_EVAL_ACC_IS_EMPTY_1(...) 0

#define EPILEPSY_PRIV_EVAL_ACC_UNWRAP(acc)                                                         \
    EPILEPSY_PRIV_AUX_MATCH(EPILEPSY_PRIV_EVAL_ACC_UNWRAP_, acc)
#define EPILEPSY_PRIV_EVAL_ACC_UNWRAP_0(...) __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_ACC_UNWRAP_1(...) __VA_ARGS__

#endif // EPILEPSY_EVAL_ACC_H
