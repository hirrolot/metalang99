#ifndef METALANG99_EVAL_TERM_H
#define METALANG99_EVAL_TERM_H

#include <metalang99/priv/aux.h>

#define METALANG99_PRIV_EVAL_TERM_KIND(term)                                                       \
    METALANG99_PRIV_VARIADICS_HEAD(METALANG99_PRIV_UNPARENTHESISE(term))

#define METALANG99_PRIV_EVAL_TERM_DATA(term)                                                       \
    METALANG99_PRIV_VARIADICS_TAIL(METALANG99_PRIV_UNPARENTHESISE(term))

#define METALANG99_PRIV_TERM_MATCH(op, term)                                                       \
    METALANG99_PRIV_CAT(op, METALANG99_PRIV_EVAL_TERM_KIND(term))

#endif // METALANG99_EVAL_TERM_H
