#ifndef METALANG99_EVAL_TERM_H
#define METALANG99_EVAL_TERM_H

#include <metalang99/priv/util.h>

#define METALANG99_PRIV_EVAL_TERM_KIND(kind, ...)  kind
#define METALANG99_PRIV_EVAL_TERM_DATA(_kind, ...) __VA_ARGS__

#define METALANG99_PRIV_TERM_MATCH(term, op)                                                       \
    METALANG99_PRIV_CAT(op, METALANG99_PRIV_EVAL_TERM_KIND term)

#endif // METALANG99_EVAL_TERM_H
