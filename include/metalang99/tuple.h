/**
 * @file
 * Tuple manipulation.
 *
 * A tuple is represented as `(x1, ..., xN)`. Tuples are more time and space-efficient than lists,
 * but export less functionality.
 *
 * Tuples is a convenient way to deal with product types. For example:
 *
 * [<a
 * href="https://github.com/Hirrolot/metalang99/blob/master/examples/rectangle.c">examples/rectangle.c</a>]
 * @include rectangle.c
 */

#ifndef ML99_TUPLE_H
#define ML99_TUPLE_H

#include <metalang99/priv/util.h>

#include <metalang99/lang.h>
#include <metalang99/variadics.h>

/**
 * Transforms a sequence of arguments into `(...)`.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/tuple.h>
 *
 * // (1, 2, 3)
 * ML99_tuple(v(1, 2, 3))
 * @endcode
 */
#define ML99_tuple(...) ML99_call(ML99_tuple, __VA_ARGS__)

/**
 * Transforms a sequence of arguments into `(v(...))`.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/tuple.h>
 *
 * // (v(1, 2, 3))
 * ML99_tupleEval(v(1, 2, 3))
 * @endcode
 */
#define ML99_tupleEval(...) ML99_call(ML99_tupleEval, __VA_ARGS__)

/**
 * Untuples the tuple @p x, leaving the result unevaluated.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/tuple.h>
 *
 * // 1, 2, 3
 * ML99_untuple(v((1, 2, 3)))
 * @endcode
 */
#define ML99_untuple(x) ML99_call(ML99_untuple, x)

/**
 * The same as #ML99_untuple, except that it emits a fatal error if @p x is not a tuple.
 *
 * The preconditions are the same as of #ML99_isUntuple.
 */
#define ML99_untupleChecked(x) ML99_call(ML99_untupleChecked, x)

/**
 * Untuples the tuple @p x and evaluates the result.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/tuple.h>
 *
 * // 1, 2, 3
 * ML99_untupleEval(v((v(1, 2, 3))))
 * @endcode
 */
#define ML99_untupleEval(x) ML99_call(ML99_untupleEval, x)

/**
 * Tests whether @p x is inside parentheses or not.
 *
 * The preconditions are the same as of #ML99_isUntuple.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/tuple.h>
 *
 * // 0
 * ML99_isTuple(v(123))
 *
 * // 1
 * ML99_isTuple(v((123)))
 * @endcode
 */
#define ML99_isTuple(x) ML99_call(ML99_isTuple, x)

/**
 * The inverse of #ML99_isTuple.
 *
 * @p x must be either of these forms:
 *  - `(...)` (reported as non-untupled)
 *  - `(...) (...) ...` (reported as untupled)
 *  - anything else not beginning with `(...)` (reported as untupled)
 *
 * For example (respectively):
 *  - `(~, ~, ~)` (non-untupled)
 *  - `(~, ~, ~) (~, ~, ~)` or `(~, ~, ~) (~, ~, ~) abc` (untupled)
 *  - `123` or `123 (~, ~, ~)` (untupled)
 *
 * # Examples
 *
 * @code
 * #include <metalang99/tuple.h>
 *
 * // 1
 * ML99_isUntuple(v(123))
 *
 * // 0
 * ML99_isUntuple(v((123)))
 *
 * // 1
 * ML99_isUntuple(v((123) (456) (789)))
 * @endcode
 */
#define ML99_isUntuple(x) ML99_call(ML99_isUntuple, x)

/**
 * Expands to a metafunction extracting the @p i -indexed element of a tuple.
 *
 * @p i can range from 0 to 7, inclusively.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/tuple.h>
 *
 * // 2
 * ML99_tupleGet(1)(v((1, 2, 3)))
 * @endcode
 */
#define ML99_tupleGet(i) ML99_PRIV_CAT(ML99_PRIV_tupleGet_, i)

/**
 * Extracts the tuple's tail.
 *
 * @p x must contain at least two elements.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/tuple.h>
 *
 * // 2, 3
 * ML99_tupleTail(v((1, 2, 3)))
 * @endcode
 */
#define ML99_tupleTail(x) ML99_call(ML99_tupleTail, x)

/**
 * Appends provided variadic arguments to the tuple @p x.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/tuple.h>
 *
 * // (1, 2, 3)
 * ML99_tupleAppend(ML99_tuple(v(1)), v(2, 3))
 * @endcode
 */
#define ML99_tupleAppend(x, ...) ML99_call(ML99_tupleAppend, x, __VA_ARGS__)

/**
 * Prepends provided variadic arguments to the tuple @p x.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/tuple.h>
 *
 * // (1, 2, 3)
 * ML99_tuplePrepend(ML99_tuple(v(3)), v(1, 2))
 * @endcode
 */
#define ML99_tuplePrepend(x, ...) ML99_call(ML99_tuplePrepend, x, __VA_ARGS__)

/**
 * Emits a fatal error if @p x is not a tuple, otherwise results in emptiness.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/tuple.h>
 *
 * #define F_IMPL(x) ML99_TERMS(ML99_assertIsTuple(v(x)), ML99_untuple(v(x)))
 *
 * // 1, 2, 3
 * ML99_call(F, v((1, 2, 3)))
 *
 * // !"Metalang99 error" (ML99_assertIsTuple): "123 must be (x1, ..., xN)"
 * ML99_call(F, v(123))
 * @endcode
 */
#define ML99_assertIsTuple(x) ML99_call(ML99_assertIsTuple, x)

#define ML99_TUPLE(...)            (__VA_ARGS__)
#define ML99_UNTUPLE(x)            ML99_PRIV_EXPAND x
#define ML99_IS_TUPLE(x)           ML99_PRIV_IS_TUPLE(x)
#define ML99_IS_UNTUPLE(x)         ML99_PRIV_IS_UNTUPLE(x)
#define ML99_TUPLE_GET(i)          ML99_PRIV_CAT(ML99_PRIV_TUPLE_GET_, i)
#define ML99_TUPLE_TAIL(x)         ML99_VARIADICS_TAIL(ML99_UNTUPLE(x))
#define ML99_TUPLE_APPEND(x, ...)  (ML99_UNTUPLE(x), __VA_ARGS__)
#define ML99_TUPLE_PREPEND(x, ...) (__VA_ARGS__, ML99_UNTUPLE(x))

#ifndef DOXYGEN_IGNORE

#define ML99_tuple_IMPL(...)     v(ML99_TUPLE(__VA_ARGS__))
#define ML99_tupleEval_IMPL(...) v((v(__VA_ARGS__)))
#define ML99_untuple_IMPL(x)     v(ML99_UNTUPLE(x))
#define ML99_untupleChecked_IMPL(x)                                                                \
    ML99_PRIV_IF(ML99_IS_TUPLE(x), ML99_PRIV_UNTUPLE_CHECKED_AUX, ML99_PRIV_NOT_TUPLE_ERROR)(x)
#define ML99_untupleEval_IMPL(x) ML99_PRIV_EXPAND x
#define ML99_isTuple_IMPL(x)     v(ML99_IS_TUPLE(x))
#define ML99_isUntuple_IMPL(x)   v(ML99_IS_UNTUPLE(x))

#define ML99_PRIV_UNTUPLE_CHECKED_AUX(x) v(ML99_UNTUPLE(x))

#define ML99_PRIV_tupleGet_0(x) ML99_call(ML99_PRIV_tupleGet_0, x)
#define ML99_PRIV_tupleGet_1(x) ML99_call(ML99_PRIV_tupleGet_1, x)
#define ML99_PRIV_tupleGet_2(x) ML99_call(ML99_PRIV_tupleGet_2, x)
#define ML99_PRIV_tupleGet_3(x) ML99_call(ML99_PRIV_tupleGet_3, x)
#define ML99_PRIV_tupleGet_4(x) ML99_call(ML99_PRIV_tupleGet_4, x)
#define ML99_PRIV_tupleGet_5(x) ML99_call(ML99_PRIV_tupleGet_5, x)
#define ML99_PRIV_tupleGet_6(x) ML99_call(ML99_PRIV_tupleGet_6, x)
#define ML99_PRIV_tupleGet_7(x) ML99_call(ML99_PRIV_tupleGet_7, x)

#define ML99_PRIV_tupleGet_0_IMPL(x) v(ML99_TUPLE_GET(0)(x))
#define ML99_PRIV_tupleGet_1_IMPL(x) v(ML99_TUPLE_GET(1)(x))
#define ML99_PRIV_tupleGet_2_IMPL(x) v(ML99_TUPLE_GET(2)(x))
#define ML99_PRIV_tupleGet_3_IMPL(x) v(ML99_TUPLE_GET(3)(x))
#define ML99_PRIV_tupleGet_4_IMPL(x) v(ML99_TUPLE_GET(4)(x))
#define ML99_PRIV_tupleGet_5_IMPL(x) v(ML99_TUPLE_GET(5)(x))
#define ML99_PRIV_tupleGet_6_IMPL(x) v(ML99_TUPLE_GET(6)(x))
#define ML99_PRIV_tupleGet_7_IMPL(x) v(ML99_TUPLE_GET(7)(x))

#define ML99_PRIV_TUPLE_GET_0(x) ML99_VARIADICS_GET(0)(ML99_UNTUPLE(x))
#define ML99_PRIV_TUPLE_GET_1(x) ML99_VARIADICS_GET(1)(ML99_UNTUPLE(x))
#define ML99_PRIV_TUPLE_GET_2(x) ML99_VARIADICS_GET(2)(ML99_UNTUPLE(x))
#define ML99_PRIV_TUPLE_GET_3(x) ML99_VARIADICS_GET(3)(ML99_UNTUPLE(x))
#define ML99_PRIV_TUPLE_GET_4(x) ML99_VARIADICS_GET(4)(ML99_UNTUPLE(x))
#define ML99_PRIV_TUPLE_GET_5(x) ML99_VARIADICS_GET(5)(ML99_UNTUPLE(x))
#define ML99_PRIV_TUPLE_GET_6(x) ML99_VARIADICS_GET(6)(ML99_UNTUPLE(x))
#define ML99_PRIV_TUPLE_GET_7(x) ML99_VARIADICS_GET(7)(ML99_UNTUPLE(x))

#define ML99_tupleTail_IMPL(x) v(ML99_TUPLE_TAIL(x))

#define ML99_tupleAppend_IMPL(x, ...)  v(ML99_TUPLE_APPEND(x, __VA_ARGS__))
#define ML99_tuplePrepend_IMPL(x, ...) v(ML99_TUPLE_PREPEND(x, __VA_ARGS__))

#define ML99_assertIsTuple_IMPL(x)                                                                 \
    ML99_PRIV_IF(ML99_IS_UNTUPLE(x), ML99_PRIV_NOT_TUPLE_ERROR(x), v(ML99_PRIV_EMPTY()))

// clang-format off
#define ML99_PRIV_NOT_TUPLE_ERROR(x) ML99_fatal(ML99_assertIsTuple, x must be (x1, ..., xN))
// clang-format on

// Arity specifiers {
#define ML99_tuple_ARITY          1
#define ML99_tupleEval_ARITY      1
#define ML99_untuple_ARITY        1
#define ML99_untupleChecked_ARITY 1
#define ML99_untupleEval_ARITY    1
#define ML99_isTuple_ARITY        1
#define ML99_isUntuple_ARITY      1
#define ML99_tupleTail_ARITY      1
#define ML99_tupleAppend_ARITY    2
#define ML99_tuplePrepend_ARITY   2
#define ML99_assertIsTuple_ARITY  1

#define ML99_PRIV_tupleGet_0_ARITY 1
#define ML99_PRIV_tupleGet_1_ARITY 1
#define ML99_PRIV_tupleGet_2_ARITY 1
#define ML99_PRIV_tupleGet_3_ARITY 1
#define ML99_PRIV_tupleGet_4_ARITY 1
#define ML99_PRIV_tupleGet_5_ARITY 1
#define ML99_PRIV_tupleGet_6_ARITY 1
#define ML99_PRIV_tupleGet_7_ARITY 1
// }

#endif // DOXYGEN_IGNORE

#endif // ML99_TUPLE_H
