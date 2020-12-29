#ifndef EPILEPSY_EVAL_TERM_H
#define EPILEPSY_EVAL_TERM_H

#include <epilepsy/priv/aux.h>
#include <epilepsy/priv/variadics/get.h>

#define EPILEPSY_PRIV_EVAL_TERM_END() (0end, ~)

#define EPILEPSY_PRIV_EVAL_TERM_KIND(term)                                                         \
    EPILEPSY_PRIV_VARIADICS_HEAD(EPILEPSY_PRIV_UNPARENTHESISE(term))

#define EPILEPSY_PRIV_EVAL_TERM_DATA(term)                                                         \
    EPILEPSY_PRIV_VARIADICS_TAIL(EPILEPSY_PRIV_UNPARENTHESISE(term))

#define EPILEPSY_PRIV_EVAL_TERM_MATCH(f, term, ...)                                                \
    EPILEPSY_PRIV_EVAL_TERM_MATCH_AUX(                                                             \
        EPILEPSY_PRIV_MATCH(f, EPILEPSY_PRIV_EVAL_TERM_KIND(term)), __VA_ARGS__,                   \
        EPILEPSY_PRIV_EVAL_TERM_DATA(term))

#define EPILEPSY_PRIV_EVAL_TERM_MATCH_AUX(f, ...) f(__VA_ARGS__)

#endif // EPILEPSY_EVAL_TERM_H
