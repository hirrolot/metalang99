#ifndef INSULT_EVAL_TERM_H
#define INSULT_EVAL_TERM_H

#include "aux.h"

#define INSULT_PRIVATE_EVAL_TERM_END() (end, ~)

#define INSULT_PRIVATE_EVAL_TERM_KIND(term)                                                        \
    INSULT_PRIVATE_EVAL_AUX_HEAD(INSULT_PRIVATE_EVAL_AUX_UNPARENTHESISE(term))

#define INSULT_PRIVATE_EVAL_TERM_DATA(term)                                                        \
    INSULT_PRIVATE_EVAL_AUX_TAIL(INSULT_PRIVATE_EVAL_AUX_UNPARENTHESISE(term))

#define INSULT_PRIVATE_EVAL_TERM_MATCH(op, term, ...)                                              \
    INSULT_PRIVATE_EVAL_TERM_MATCH_AUX(                                                            \
        INSULT_PRIVATE_EVAL_AUX_MATCH(op, INSULT_PRIVATE_EVAL_TERM_KIND(term)),                    \
        __VA_ARGS__,                                                                               \
        INSULT_PRIVATE_EVAL_TERM_DATA(term))

#define INSULT_PRIVATE_EVAL_TERM_MATCH_AUX(op, ...) op(__VA_ARGS__)

#define INSULT_PRIVATE_EVAL_TERM_IS_END(term)                                                      \
    INSULT_PRIVATE_EVAL_TERM_IS_END_MATCH(INSULT_PRIVATE_EVAL_TERM_IS_END_, term, ~)
#define INSULT_PRIVATE_EVAL_TERM_IS_END_c(_, op, ...) 0
#define INSULT_PRIVATE_EVAL_TERM_IS_END_v(_, ...)     0
#define INSULT_PRIVATE_EVAL_TERM_IS_END_end(_, __)    1

#define INSULT_PRIVATE_EVAL_TERM_IS_END_MATCH(op, term, ...)                                       \
    INSULT_PRIVATE_EVAL_TERM_IS_END_MATCH_AUX(                                                     \
        INSULT_PRIVATE_EVAL_AUX_MATCH(op, INSULT_PRIVATE_EVAL_TERM_KIND(term)),                    \
        __VA_ARGS__,                                                                               \
        INSULT_PRIVATE_EVAL_TERM_DATA(term))

#define INSULT_PRIVATE_EVAL_TERM_IS_END_MATCH_AUX(op, ...) op(__VA_ARGS__)

#define INSULT_PRIVATE_EVAL_IS_EMPTY_TAIL(tail)                                                    \
    INSULT_PRIVATE_EVAL_TERM_IS_END(                                                               \
        INSULT_PRIVATE_EVAL_AUX_HEAD(INSULT_PRIVATE_EVAL_AUX_UNPARENTHESISE(tail)))

#define INSULT_PRIVATE_EVAL_TERM_IS_TRIVIAL_OP(op)                                                 \
    INSULT_PRIVATE_EVAL_TERM_IS_TRIVIAL_OP_AUX(INSULT_PRIVATE_EVAL_TERM_IS_TRIVIAL_OP_NO op, 1, ~)
#define INSULT_PRIVATE_EVAL_TERM_IS_TRIVIAL_OP_AUX(...)                                            \
    INSULT_PRIVATE_EVAL_TERM_IS_TRIVIAL_OP_AUX_AUX(__VA_ARGS__)
#define INSULT_PRIVATE_EVAL_TERM_IS_TRIVIAL_OP_AUX_AUX(x, y, ...) y
#define INSULT_PRIVATE_EVAL_TERM_IS_TRIVIAL_OP_NO(...)            ~, 0

#endif // INSULT_EVAL_TERM_H
