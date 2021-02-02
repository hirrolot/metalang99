#ifndef EPILEPSY_EVAL_ACC_H
#define EPILEPSY_EVAL_ACC_H

#include <epilepsy/priv/aux.h>

#define EPILEPSY_PRIV_EVAL_ACC_EMPTY() 0empty()

#define EPILEPSY_PRIV_EVAL_ACC_IS_EMPTY(acc)            EPILEPSY_PRIV_EVAL_ACC_IS_EMPTY_##acc
#define EPILEPSY_PRIV_EVAL_ACC_IS_EMPTY_0empty(...)     1
#define EPILEPSY_PRIV_EVAL_ACC_IS_EMPTY_0non_empty(...) 0

#define EPILEPSY_PRIV_EVAL_ACC_UNWRAP(acc)            EPILEPSY_PRIV_EVAL_ACC_UNWRAP_##acc
#define EPILEPSY_PRIV_EVAL_ACC_UNWRAP_0empty(...)     __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_ACC_UNWRAP_0non_empty(...) __VA_ARGS__

#endif // EPILEPSY_EVAL_ACC_H
