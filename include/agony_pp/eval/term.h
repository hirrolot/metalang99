#ifndef AGONY_PP_EVAL_TERM_H
#define AGONY_PP_EVAL_TERM_H

#include "aux.h"

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

#define AGONY_PP_PRIVATE_EVAL_TERM_END() (end, ~)

#define AGONY_PP_PRIVATE_EVAL_TERM_KIND(term)                                                      \
    AGONY_PP_PRIVATE_EVAL_AUX_HEAD(AGONY_PP_PRIVATE_EVAL_AUX_UNPARENTHESISE(term))

#define AGONY_PP_PRIVATE_EVAL_TERM_DATA(term)                                                      \
    AGONY_PP_PRIVATE_EVAL_AUX_TAIL(AGONY_PP_PRIVATE_EVAL_AUX_UNPARENTHESISE(term))

#define AGONY_PP_PRIVATE_EVAL_TERM_MATCH(op, term, ...)                                            \
    AGONY_PP_PRIVATE_EVAL_TERM_MATCH_AUX(                                                          \
        AGONY_PP_PRIVATE_EVAL_AUX_MATCH(op, AGONY_PP_PRIVATE_EVAL_TERM_KIND(term)),                \
        __VA_ARGS__,                                                                               \
        AGONY_PP_PRIVATE_EVAL_TERM_DATA(term))

#define AGONY_PP_PRIVATE_EVAL_TERM_MATCH_AUX(op, ...) op(__VA_ARGS__)

#define AGONY_PP_PRIVATE_EVAL_TERM_IS_END(term)                                                    \
    AGONY_PP_PRIVATE_EVAL_TERM_IS_END_MATCH(AGONY_PP_PRIVATE_EVAL_TERM_IS_END_, term, ~)
#define AGONY_PP_PRIVATE_EVAL_TERM_IS_END_c(_, op, ...) 0
#define AGONY_PP_PRIVATE_EVAL_TERM_IS_END_v(_, ...)     0
#define AGONY_PP_PRIVATE_EVAL_TERM_IS_END_end(_, __)    1

#define AGONY_PP_PRIVATE_EVAL_TERM_IS_END_MATCH(op, term, ...)                                     \
    AGONY_PP_PRIVATE_EVAL_TERM_IS_END_MATCH_AUX(                                                   \
        AGONY_PP_PRIVATE_EVAL_AUX_MATCH(op, AGONY_PP_PRIVATE_EVAL_TERM_KIND(term)),                \
        __VA_ARGS__,                                                                               \
        AGONY_PP_PRIVATE_EVAL_TERM_DATA(term))

#define AGONY_PP_PRIVATE_EVAL_TERM_IS_END_MATCH_AUX(op, ...) op(__VA_ARGS__)

#define AGONY_PP_PRIVATE_EVAL_IS_EMPTY_TAIL(tail)                                                  \
    AGONY_PP_PRIVATE_EVAL_TERM_IS_END(                                                             \
        AGONY_PP_PRIVATE_EVAL_AUX_HEAD(AGONY_PP_PRIVATE_EVAL_AUX_UNPARENTHESISE(tail)))

#define AGONY_PP_PRIVATE_EVAL_TERM_IS_TRIVIAL_OP(op)                                               \
    AGONY_PP_PRIVATE_EVAL_AUX_CALL_MACRO(                                                          \
        AGONY_PP_PRIVATE_EVAL_TERM_IS_TRIVIAL_OP_AUX,                                              \
        AGONY_PP_PRIVATE_EVAL_AUX_MATCH(AGONY_PP_PRIVATE_EVAL_TERM_IS_TRIVIAL_OP_, op),            \
        1)
#define AGONY_PP_PRIVATE_EVAL_TERM_IS_TRIVIAL_OP_AUX(x, y)  y
#define AGONY_PP_PRIVATE_EVAL_TERM_IS_TRIVIAL_OP_c(op, ...) ~, 0
#define AGONY_PP_PRIVATE_EVAL_TERM_IS_TRIVIAL_OP_v(...)     ~, 0

#endif // AGONY_PP_EVAL_TERM_H
