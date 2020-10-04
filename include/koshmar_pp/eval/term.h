#ifndef KOSHMAR_PP_EVAL_TERM_H
#define KOSHMAR_PP_EVAL_TERM_H

#include "aux.h"

#define c(op, ...) (c, op, __VA_ARGS__),
#define v(...)     (v, __VA_ARGS__),
#define arg(name)  KOSHMAR_PP_PRIVATE_EVAL_AUX_UNPARENTHESISE(name)

#define KOSHMAR_PP_PRIVATE_EVAL_TERM_END() (end, ~)

#define KOSHMAR_PP_PRIVATE_EVAL_TERM_KIND(term)                                                    \
    KOSHMAR_PP_PRIVATE_EVAL_AUX_HEAD(KOSHMAR_PP_PRIVATE_EVAL_AUX_UNPARENTHESISE(term))

#define KOSHMAR_PP_PRIVATE_EVAL_TERM_DATA(term)                                                    \
    KOSHMAR_PP_PRIVATE_EVAL_AUX_TAIL(KOSHMAR_PP_PRIVATE_EVAL_AUX_UNPARENTHESISE(term))

#define KOSHMAR_PP_PRIVATE_EVAL_TERM_MATCH(op, term, ...)                                          \
    KOSHMAR_PP_PRIVATE_EVAL_TERM_MATCH_AUX(                                                        \
        KOSHMAR_PP_PRIVATE_EVAL_AUX_MATCH(op, KOSHMAR_PP_PRIVATE_EVAL_TERM_KIND(term)),            \
        __VA_ARGS__,                                                                               \
        KOSHMAR_PP_PRIVATE_EVAL_TERM_DATA(term))

#define KOSHMAR_PP_PRIVATE_EVAL_TERM_MATCH_AUX(op, ...) op(__VA_ARGS__)

#define KOSHMAR_PP_PRIVATE_EVAL_TERM_IS_END(term)                                                  \
    KOSHMAR_PP_PRIVATE_EVAL_TERM_IS_END_MATCH(KOSHMAR_PP_PRIVATE_EVAL_TERM_IS_END_, term, ~)
#define KOSHMAR_PP_PRIVATE_EVAL_TERM_IS_END_c(_, op, ...) 0
#define KOSHMAR_PP_PRIVATE_EVAL_TERM_IS_END_v(_, ...)     0
#define KOSHMAR_PP_PRIVATE_EVAL_TERM_IS_END_end(_, __)    1

#define KOSHMAR_PP_PRIVATE_EVAL_TERM_IS_END_MATCH(op, term, ...)                                   \
    KOSHMAR_PP_PRIVATE_EVAL_TERM_IS_END_MATCH_AUX(                                                 \
        KOSHMAR_PP_PRIVATE_EVAL_AUX_MATCH(op, KOSHMAR_PP_PRIVATE_EVAL_TERM_KIND(term)),            \
        __VA_ARGS__,                                                                               \
        KOSHMAR_PP_PRIVATE_EVAL_TERM_DATA(term))

#define KOSHMAR_PP_PRIVATE_EVAL_TERM_IS_END_MATCH_AUX(op, ...) op(__VA_ARGS__)

#endif // KOSHMAR_PP_EVAL_TERM_H
