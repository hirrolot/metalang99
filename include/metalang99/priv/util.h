#ifndef METALANG99_PRIV_AUX_H
#define METALANG99_PRIV_AUX_H

#include <metalang99/priv/variadics/get.h>

#define METALANG99_PRIV_CAT(x, y)           METALANG99_PRIV_PRIMITIVE_CAT(x, y)
#define METALANG99_PRIV_PRIMITIVE_CAT(x, y) x##y

#define METALANG99_PRIV_EMPTY()
#define METALANG99_PRIV_EXPAND(...) __VA_ARGS__
#define METALANG99_PRIV_CONSUME(...)
#define METALANG99_PRIV_INVOKE(f, ...) f(__VA_ARGS__)

#define METALANG99_PRIV_PARENTHESIZE(...) (__VA_ARGS__)
#define METALANG99_PRIV_UNPARENTHESIZE(x) METALANG99_PRIV_EXPAND x

#define METALANG99_PRIV_IF(cond, x, y)                                                             \
    METALANG99_PRIV_PRIMITIVE_CAT(METALANG99_PRIV_IF_, cond)(x, y)
#define METALANG99_PRIV_IF_0(_x, y) y
#define METALANG99_PRIV_IF_1(x, _y) x

#define METALANG99_PRIV_IS_UNPARENTHESIZED(x)                                                      \
    METALANG99_PRIV_VARIADICS_SND(METALANG99_PRIV_IS_UNPARENTHESIZED_TEST x, 1)
#define METALANG99_PRIV_IS_UNPARENTHESIZED_TEST(...) ~, 0

#define METALANG99_PRIV_IS_PARENTHESIZED(x)                                                        \
    METALANG99_PRIV_VARIADICS_SND(METALANG99_PRIV_IS_PARENTHESIZED_TEST x, 0)
#define METALANG99_PRIV_IS_PARENTHESIZED_TEST(...) ~, 1

#endif // METALANG99_PRIV_AUX_H
