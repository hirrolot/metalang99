#ifndef MACROLOP_EVAL_CONTROL_H
#define MACROLOP_EVAL_CONTROL_H

#include "aux.h"
#include "term.h"

#define MACROLOP_PRIV_EVAL_CONTROL_IS_EMPTY(tail)                                                  \
    MACROLOP_PRIV_EVAL_TERM_IS_END(                                                                \
        MACROLOP_PRIV_EVAL_AUX_HEAD(MACROLOP_PRIV_EVAL_AUX_UNPARENTHESISE(tail)))

#endif // MACROLOP_EVAL_CONTROL_H
