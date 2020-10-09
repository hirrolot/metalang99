#ifndef KOSHMAR_PP_LANG_H
#define KOSHMAR_PP_LANG_H

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#include "eval/term.h"

#endif // DOXYGEN_SHOULD_SKIP_THIS

#define c(op, ...) AGONY_PP_PRIVATE_EVAL_TERM_TRANSFORM_CALL(op, __VA_ARGS__),
#define v(...)     (v, __VA_ARGS__),

#define AGONY_PP_PRIVATE_EVAL_TERM_TRANSFORM_CALL(op, ...)                                         \
    AGONY_PP_PRIVATE_EVAL_AUX_IF(                                                                  \
        AGONY_PP_PRIVATE_EVAL_TERM_IS_TRIVIAL_OP(op),                                              \
        AGONY_PP_PRIVATE_EVAL_TERM_TRANSFORM_TRIVIAL_OP_CALL,                                      \
        AGONY_PP_PRIVATE_EVAL_TERM_TRANSFORM_NON_TRIVIAL_OP_CALL)                                  \
    (op, __VA_ARGS__)

#define AGONY_PP_PRIVATE_EVAL_TERM_TRANSFORM_TRIVIAL_OP_CALL(op, ...) (c, op, __VA_ARGS__)
#define AGONY_PP_PRIVATE_EVAL_TERM_TRANSFORM_NON_TRIVIAL_OP_CALL(op, _emptiness, ...)              \
    (c, op, __VA_ARGS__)

#endif // KOSHMAR_PP_LANG_H
