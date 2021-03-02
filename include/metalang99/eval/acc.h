#ifndef METALANG99_EVAL_ACC_H
#define METALANG99_EVAL_ACC_H

#include <metalang99/priv/util.h>

#define METALANG99_PRIV_EVAL_ACC()           (, )
#define METALANG99_PRIV_EVAL_ACC_COMMA_SEP() ()

#define METALANG99_PRIV_EVAL_0fappend(acc, ...) (METALANG99_PRIV_EXPAND acc __VA_ARGS__)
#define METALANG99_PRIV_EVAL_0fcomma(acc, ...)  (METALANG99_PRIV_EXPAND acc, __VA_ARGS__)

#define METALANG99_PRIV_EVAL_ACC_UNWRAP(_emptiness, ...) __VA_ARGS__

#endif // METALANG99_EVAL_ACC_H
