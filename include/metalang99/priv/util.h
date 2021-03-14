#ifndef ML99_PRIV_AUX_H
#define ML99_PRIV_AUX_H

#include <metalang99/priv/variadics/get.h>

#define ML99_PRIV_CAT(x, y)           ML99_PRIV_PRIMITIVE_CAT(x, y)
#define ML99_PRIV_PRIMITIVE_CAT(x, y) x##y

#define ML99_PRIV_EMPTY()
#define ML99_PRIV_EXPAND(...) __VA_ARGS__
#define ML99_PRIV_CONSUME(...)

#define ML99_PRIV_PARENTHESIZE(...) (__VA_ARGS__)
#define ML99_PRIV_UNPARENTHESIZE(x) ML99_PRIV_EXPAND x

#define ML99_PRIV_IF(cond, x, y) ML99_PRIV_PRIMITIVE_CAT(ML99_PRIV_IF_, cond)(x, y)
#define ML99_PRIV_IF_0(_x, y)    y
#define ML99_PRIV_IF_1(x, _y)    x

#define ML99_PRIV_IS_UNPARENTHESIZED(x)                                                            \
    ML99_PRIV_VARIADICS_SND(ML99_PRIV_IS_UNPARENTHESIZED_TEST x, 1)
#define ML99_PRIV_IS_UNPARENTHESIZED_TEST(...) ~, 0

#define ML99_PRIV_IS_PARENTHESIZED(x)        ML99_PRIV_VARIADICS_SND(ML99_PRIV_IS_PARENTHESIZED_TEST x, 0)
#define ML99_PRIV_IS_PARENTHESIZED_TEST(...) ~, 1

#define ML99_PRIV_COMMA() ,

#define ML99_PRIV_CONTAINS_COMMA(...) ML99_PRIV_X_AS_COMMA(__VA_ARGS__, ML99_PRIV_COMMA(), ~)

// If `x` is a comma, then `...` does not contain a comma, otherwise `...` contains at least one
// comma.
#define ML99_PRIV_X_AS_COMMA(_head, x, ...)                ML99_PRIV_CONTAINS_COMMA_RESULT(x, 0, 1, ~)
#define ML99_PRIV_CONTAINS_COMMA_RESULT(x, _, result, ...) result

#endif // ML99_PRIV_AUX_H
