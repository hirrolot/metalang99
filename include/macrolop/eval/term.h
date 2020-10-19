#ifndef MACROLOP_EVAL_TERM_H
#define MACROLOP_EVAL_TERM_H

#include "aux.h"

#define MACROLOP_PRIVATE_EVAL_TERM_END() (end, ~)

#define MACROLOP_PRIVATE_EVAL_TERM_KIND(term)                                                      \
    MACROLOP_PRIVATE_EVAL_AUX_HEAD(MACROLOP_PRIVATE_EVAL_AUX_UNPARENTHESISE(term))

#define MACROLOP_PRIVATE_EVAL_TERM_DATA(term)                                                      \
    MACROLOP_PRIVATE_EVAL_AUX_TAIL(MACROLOP_PRIVATE_EVAL_AUX_UNPARENTHESISE(term))

#define MACROLOP_PRIVATE_EVAL_TERM_MATCH(op, term, ...)                                            \
    MACROLOP_PRIVATE_EVAL_TERM_MATCH_AUX(                                                          \
        MACROLOP_PRIVATE_EVAL_AUX_MATCH(op, MACROLOP_PRIVATE_EVAL_TERM_KIND(term)),                \
        __VA_ARGS__,                                                                               \
        MACROLOP_PRIVATE_EVAL_TERM_DATA(term))

#define MACROLOP_PRIVATE_EVAL_TERM_MATCH_AUX(op, ...) op(__VA_ARGS__)

#define MACROLOP_PRIVATE_EVAL_TERM_IS_END(term)                                                    \
    MACROLOP_PRIVATE_EVAL_TERM_IS_END_MATCH(MACROLOP_PRIVATE_EVAL_TERM_IS_END_, term, ~)
#define MACROLOP_PRIVATE_EVAL_TERM_IS_END_trivial_call(_, op, ...) 0
#define MACROLOP_PRIVATE_EVAL_TERM_IS_END_call(_, op, ...)         0
#define MACROLOP_PRIVATE_EVAL_TERM_IS_END_v(_, ...)                0
#define MACROLOP_PRIVATE_EVAL_TERM_IS_END_end(_, __)               1

#define MACROLOP_PRIVATE_EVAL_TERM_IS_END_MATCH(op, term, ...)                                     \
    MACROLOP_PRIVATE_EVAL_TERM_IS_END_MATCH_AUX(                                                   \
        MACROLOP_PRIVATE_EVAL_AUX_MATCH(op, MACROLOP_PRIVATE_EVAL_TERM_KIND(term)),                \
        __VA_ARGS__,                                                                               \
        MACROLOP_PRIVATE_EVAL_TERM_DATA(term))

#define MACROLOP_PRIVATE_EVAL_TERM_IS_END_MATCH_AUX(op, ...) op(__VA_ARGS__)

#define MACROLOP_PRIVATE_EVAL_IS_EMPTY_TAIL(tail)                                                  \
    MACROLOP_PRIVATE_EVAL_TERM_IS_END(                                                             \
        MACROLOP_PRIVATE_EVAL_AUX_HEAD(MACROLOP_PRIVATE_EVAL_AUX_UNPARENTHESISE(tail)))

#endif // MACROLOP_EVAL_TERM_H
