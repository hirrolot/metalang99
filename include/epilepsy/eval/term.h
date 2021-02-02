#ifndef EPILEPSY_EVAL_TERM_H
#define EPILEPSY_EVAL_TERM_H

#include <epilepsy/priv/aux.h>

#define EPILEPSY_PRIV_EVAL_TERM_KIND(term)                                                         \
    EPILEPSY_PRIV_VARIADICS_HEAD(EPILEPSY_PRIV_UNPARENTHESISE(term))

#define EPILEPSY_PRIV_EVAL_TERM_DATA(term)                                                         \
    EPILEPSY_PRIV_VARIADICS_TAIL(EPILEPSY_PRIV_UNPARENTHESISE(term))

#define EPILEPSY_PRIV_TERM_MATCH(op, term) EPILEPSY_PRIV_CAT(op, EPILEPSY_PRIV_EVAL_TERM_KIND(term))

#endif // EPILEPSY_EVAL_TERM_H
