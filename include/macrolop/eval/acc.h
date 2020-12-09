#ifndef MACROLOP_EVAL_ACC_H
#define MACROLOP_EVAL_ACC_H

#include "aux.h"
#include "rec/control.h"

#define MACROLOP_PRIV_EVAL_ACC_EMPTY() ()
#define MACROLOP_PRIV_EVAL_ACC_EXTEND(acc, ...)                                                    \
    (MACROLOP_PRIV_EVAL_AUX_UNPARENTHESISE(acc) __VA_ARGS__)
#define MACROLOP_PRIV_EVAL_ACC_UNWRAP MACROLOP_PRIV_EVAL_AUX_UNPARENTHESISE

#endif // MACROLOP_EVAL_ACC_H
