#ifndef EPILEPSY_EVAL_ACC_H
#define EPILEPSY_EVAL_ACC_H

#include <epilepsy/eval/rec/control.h>
#include <epilepsy/priv/aux.h>

#define EPILEPSY_PRIV_EVAL_ACC_EMPTY()          ()
#define EPILEPSY_PRIV_EVAL_ACC_EXTEND(acc, ...) (EPILEPSY_PRIV_AUX_UNPARENTHESISE(acc) __VA_ARGS__)
#define EPILEPSY_PRIV_EVAL_ACC_UNWRAP           EPILEPSY_PRIV_AUX_UNPARENTHESISE

#endif // EPILEPSY_EVAL_ACC_H
