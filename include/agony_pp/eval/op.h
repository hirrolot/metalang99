#ifndef AGONY_PP_EVAL_OP_H
#define AGONY_PP_EVAL_OP_H

#include "aux.h"
#include "rec/control.h"
#include "term.h"

#define AGONY_PP_PRIVATE_EVAL_OP_HOOK() AGONY_PP_PRIVATE_EVAL_OP

#define AGONY_PP_PRIVATE_EVAL_OP(k, k_cx, op)                                                      \
    AGONY_PP_PRIVATE_EVAL_AUX_IF(                                                                  \
        AGONY_PP_PRIVATE_EVAL_TERM_IS_TRIVIAL_OP(op),                                              \
        AGONY_PP_PRIVATE_EVAL_TRIVIAL_OP,                                                          \
        AGONY_PP_PRIVATE_EVAL_NON_TRIVIAL_OP)                                                      \
    (k, k_cx, op)

#define AGONY_PP_PRIVATE_EVAL_TRIVIAL_OP(k, k_cx, op)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_CONTINUE(k, k_cx, op)
#define AGONY_PP_PRIVATE_EVAL_NON_TRIVIAL_OP(k, k_cx, op)                                          \
    AGONY_PP_PRIVATE_EVAL_REC_CONTINUE(AGONY_PP_PRIVATE_EVAL_AUX_HOOK, (k, k_cx), op)

#endif // AGONY_PP_EVAL_OP_H
