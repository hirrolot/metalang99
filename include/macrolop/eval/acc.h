#ifndef MACROLOP_EVAL_ACC_H
#define MACROLOP_EVAL_ACC_H

#include <macrolop/eval/rec/control.h>
#include <macrolop/priv/aux.h>

#define MACROLOP_PRIV_EVAL_ACC_EMPTY()          ()
#define MACROLOP_PRIV_EVAL_ACC_EXTEND(acc, ...) (MACROLOP_PRIV_AUX_UNPARENTHESISE(acc) __VA_ARGS__)
#define MACROLOP_PRIV_EVAL_ACC_UNWRAP           MACROLOP_PRIV_AUX_UNPARENTHESISE

#endif // MACROLOP_EVAL_ACC_H
