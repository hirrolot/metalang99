#ifndef ML99_EVAL_TERM_H
#define ML99_EVAL_TERM_H

#include <metalang99/priv/util.h>

#define ML99_PRIV_EVAL_TERM_KIND(kind, ...)  kind
#define ML99_PRIV_EVAL_TERM_DATA(_kind, ...) __VA_ARGS__

#define ML99_PRIV_TERM_MATCH(term, op) ML99_PRIV_CAT(op, ML99_PRIV_EVAL_TERM_KIND term)

#endif // ML99_EVAL_TERM_H
