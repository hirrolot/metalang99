#ifndef KOSHMAR_PP_EVAL_OP_H
#define KOSHMAR_PP_EVAL_OP_H

#include "aux.h"
#include "hooks.h"
#include "rec/control.h"
#include "term.h"

#define KOSHMAR_PP_PRIVATE_EVAL_OP(k, k_cx, op)                                                    \
    KOSHMAR_PP_PRIVATE_EVAL_AUX_IF(                                                                \
        KOSHMAR_PP_PRIVATE_EVAL_TERM_IS_TRIVIAL_OP(op),                                            \
        KOSHMAR_PP_PRIVATE_EVAL_TRIVIAL_OP,                                                        \
        KOSHMAR_PP_PRIVATE_EVAL_NON_TRIVIAL_OP)                                                    \
    (k, k_cx, op)

#define KOSHMAR_PP_PRIVATE_EVAL_TRIVIAL_OP(k, k_cx, op)                                            \
    KOSHMAR_PP_PRIVATE_EVAL_REC_CONTINUE(k, k_cx, op)
#define KOSHMAR_PP_PRIVATE_EVAL_NON_TRIVIAL_OP(k, k_cx, op)                                        \
    KOSHMAR_PP_PRIVATE_EVAL_REC_CONTINUE(KOSHMAR_PP_PRIVATE_EVAL_HOOKS_EVAL_AUX, (k, k_cx), op)

#endif // KOSHMAR_PP_EVAL_OP_H
