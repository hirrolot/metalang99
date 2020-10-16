#ifndef INSULT_EVAL_OP_H
#define INSULT_EVAL_OP_H

#include "aux.h"
#include "rec/control.h"
#include "term.h"

#define INSULT_PRIVATE_EVAL_OP_HOOK() INSULT_PRIVATE_EVAL_OP

#define INSULT_PRIVATE_EVAL_OP(k, k_cx, op)                                                        \
    INSULT_PRIVATE_EVAL_AUX_IF(                                                                    \
        INSULT_PRIVATE_EVAL_TERM_IS_TRIVIAL_OP(op),                                                \
        INSULT_PRIVATE_EVAL_TRIVIAL_OP,                                                            \
        INSULT_PRIVATE_EVAL_NON_TRIVIAL_OP)                                                        \
    (k, k_cx, op)

#define INSULT_PRIVATE_EVAL_TRIVIAL_OP(k, k_cx, op) INSULT_PRIVATE_EVAL_REC_CONTINUE(k, k_cx, op)
#define INSULT_PRIVATE_EVAL_NON_TRIVIAL_OP(k, k_cx, op)                                            \
    INSULT_PRIVATE_EVAL_REC_CONTINUE(                                                              \
        INSULT_PRIVATE_EVAL_AUX_HOOK,                                                              \
        (k, k_cx),                                                                                 \
        op,                                                                                        \
        INSULT_PRIVATE_EVAL_AUX_EMPTY())

#endif // INSULT_EVAL_OP_H
