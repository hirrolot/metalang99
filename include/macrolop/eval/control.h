#ifndef MACROLOP_EVAL_CONTROL_H
#define MACROLOP_EVAL_CONTROL_H

#include <macrolop/eval/term.h>
#include <macrolop/priv/aux.h>

#define MACROLOP_PRIV_EVAL_CONTROL_IS_EMPTY(control)                                               \
    MACROLOP_PRIV_EVAL_TERM_IS_END(                                                                \
        MACROLOP_PRIV_AUX_HEAD(MACROLOP_PRIV_AUX_UNPARENTHESISE(control)))

#define MACROLOP_PRIV_EVAL_CONTROL_UNWRAP MACROLOP_PRIV_AUX_UNPARENTHESISE

#endif // MACROLOP_EVAL_CONTROL_H
