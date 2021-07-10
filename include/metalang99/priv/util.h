#ifndef ML99_PRIV_UTIL_H
#define ML99_PRIV_UTIL_H

#include <metalang99/priv/logical.h>

#define ML99_PRIV_CAT(x, y)           ML99_PRIV_PRIMITIVE_CAT(x, y)
#define ML99_PRIV_PRIMITIVE_CAT(x, y) x##y

#define ML99_PRIV_CAT3(x, y, z)           ML99_PRIV_PRIMITIVE_CAT3(x, y, z)
#define ML99_PRIV_PRIMITIVE_CAT3(x, y, z) x##y##z

#define ML99_PRIV_EXPAND(...) __VA_ARGS__
#define ML99_PRIV_EMPTY(...)

#define ML99_PRIV_HEAD(...)        ML99_PRIV_HEAD_AUX(__VA_ARGS__, ~)
#define ML99_PRIV_HEAD_AUX(x, ...) x

#define ML99_PRIV_TAIL(...)         ML99_PRIV_TAIL_AUX(__VA_ARGS__)
#define ML99_PRIV_TAIL_AUX(_x, ...) __VA_ARGS__

#define ML99_PRIV_SND(...)            ML99_PRIV_SND_AUX(__VA_ARGS__, ~)
#define ML99_PRIV_SND_AUX(_x, y, ...) y

#define ML99_PRIV_IF(cond, x, y) ML99_PRIV_PRIMITIVE_CAT(ML99_PRIV_IF_, cond)(x, y)
#define ML99_PRIV_IF_0(_x, y)    y
#define ML99_PRIV_IF_1(x, _y)    x

#define ML99_PRIV_IS_TUPLE(x)      ML99_PRIV_NOT(ML99_PRIV_IS_UNTUPLE(x))
#define ML99_PRIV_IS_TUPLE_FAST(x) ML99_PRIV_NOT(ML99_PRIV_IS_UNTUPLE_FAST(x))

#define ML99_PRIV_IS_UNTUPLE(x)                                                                    \
    ML99_PRIV_IF(ML99_PRIV_IS_DOUBLE_TUPLE_BEGINNING(x), 1, ML99_PRIV_IS_UNTUPLE_FAST(x))

#define ML99_PRIV_IS_UNTUPLE_FAST(x)        ML99_PRIV_SND(ML99_PRIV_IS_UNTUPLE_FAST_TEST x, 1)
#define ML99_PRIV_IS_UNTUPLE_FAST_TEST(...) ~, 0

/**
 * Checks whether @p x takes the form `(...) (...) ...`.
 *
 * This often happens when you miss a comma between items:
 *  - `v(123) v(456)`
 *  - `(Foo, int) (Bar, int)` (as in Datatype99)
 *  - etc.
 */
#define ML99_PRIV_IS_DOUBLE_TUPLE_BEGINNING(x)                                                     \
    ML99_PRIV_CONTAINS_COMMA(ML99_PRIV_EXPAND(                                                     \
        ML99_PRIV_IS_DOUBLE_TUPLE_BEGINNING_TEST_1 ML99_PRIV_IS_DOUBLE_TUPLE_BEGINNING_TEST_0 x))
#define ML99_PRIV_IS_DOUBLE_TUPLE_BEGINNING_TEST_0(...) ML99_PRIV_EMPTY()
#define ML99_PRIV_IS_DOUBLE_TUPLE_BEGINNING_TEST_1(...) ,

#define ML99_PRIV_CONTAINS_COMMA(...)                      ML99_PRIV_X_AS_COMMA(__VA_ARGS__, ML99_PRIV_COMMA, ~)
#define ML99_PRIV_X_AS_COMMA(_head, x, ...)                ML99_PRIV_CONTAINS_COMMA_RESULT(x, 0, 1, ~)
#define ML99_PRIV_CONTAINS_COMMA_RESULT(x, _, result, ...) result
#define ML99_PRIV_COMMA                                    ,

#endif // ML99_PRIV_UTIL_H
