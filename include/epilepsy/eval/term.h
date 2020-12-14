#ifndef EPILEPSY_EVAL_TERM_H
#define EPILEPSY_EVAL_TERM_H

#include <epilepsy/priv/aux.h>
#include <epilepsy/priv/variadics/get.h>

#define EPILEPSY_PRIV_EVAL_TERM_END() (end, ~)

#define EPILEPSY_PRIV_EVAL_TERM_KIND(term)                                                         \
    EPILEPSY_PRIV_VARIADICS_HEAD(EPILEPSY_PRIV_AUX_UNPARENTHESISE(term))

#define EPILEPSY_PRIV_EVAL_TERM_DATA(term)                                                         \
    EPILEPSY_PRIV_VARIADICS_TAIL(EPILEPSY_PRIV_AUX_UNPARENTHESISE(term))

#define EPILEPSY_PRIV_EVAL_TERM_MATCH(op, term, ...)                                               \
    EPILEPSY_PRIV_EVAL_TERM_MATCH_AUX(                                                             \
        EPILEPSY_PRIV_AUX_MATCH(op, EPILEPSY_PRIV_EVAL_TERM_KIND(term)), __VA_ARGS__,              \
        EPILEPSY_PRIV_EVAL_TERM_DATA(term))

#define EPILEPSY_PRIV_EVAL_TERM_MATCH_AUX(op, ...) op(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_TERM_IS_END(term)                                                       \
    EPILEPSY_PRIV_EVAL_TERM_IS_END_MATCH(EPILEPSY_PRIV_EVAL_TERM_IS_END_, term, ~)
#define EPILEPSY_PRIV_EVAL_TERM_IS_END_trivial_call(_, op, ...) 0
#define EPILEPSY_PRIV_EVAL_TERM_IS_END_call(_, op, ...)         0
#define EPILEPSY_PRIV_EVAL_TERM_IS_END_v(_, ...)                0
#define EPILEPSY_PRIV_EVAL_TERM_IS_END_end(_, __)               1

#define EPILEPSY_PRIV_EVAL_TERM_IS_END_MATCH(op, term, ...)                                        \
    EPILEPSY_PRIV_EVAL_TERM_IS_END_MATCH_AUX(                                                      \
        EPILEPSY_PRIV_AUX_MATCH(op, EPILEPSY_PRIV_EVAL_TERM_KIND(term)), __VA_ARGS__,              \
        EPILEPSY_PRIV_EVAL_TERM_DATA(term))

#define EPILEPSY_PRIV_EVAL_TERM_IS_END_MATCH_AUX(op, ...) op(__VA_ARGS__)

#endif // EPILEPSY_EVAL_TERM_H
