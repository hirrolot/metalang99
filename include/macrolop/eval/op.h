#ifndef MACROLOP_EVAL_OP_H
#define MACROLOP_EVAL_OP_H

#include "aux.h"
#include "rec/control.h"
#include "term.h"

#define MACROLOP_PRIVATE_EVAL_OP_HOOK() MACROLOP_PRIVATE_EVAL_OP

#define MACROLOP_PRIVATE_EVAL_OP(k, k_cx, op)                                                        \
    MACROLOP_PRIVATE_EVAL_AUX_IF(                                                                    \
        MACROLOP_PRIVATE_EVAL_TERM_IS_TRIVIAL_OP(op),                                                \
        MACROLOP_PRIVATE_EVAL_TRIVIAL_OP,                                                            \
        MACROLOP_PRIVATE_EVAL_NON_TRIVIAL_OP)                                                        \
    (k, k_cx, op)

#define MACROLOP_PRIVATE_EVAL_TRIVIAL_OP(k, k_cx, op) MACROLOP_PRIVATE_EVAL_REC_CONTINUE(k, k_cx, op)
#define MACROLOP_PRIVATE_EVAL_NON_TRIVIAL_OP(k, k_cx, op)                                            \
    MACROLOP_PRIVATE_EVAL_REC_CONTINUE(                                                              \
        MACROLOP_PRIVATE_EVAL_AUX_HOOK,                                                              \
        (k, k_cx),                                                                                 \
        op,                                                                                        \
        MACROLOP_PRIVATE_EVAL_AUX_EMPTY())

#endif // MACROLOP_EVAL_OP_H
