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

#ifndef METALANG99_TUPLE_H
#define METALANG99_TUPLE_H

#include <metalang99/priv/util.h>

#include <metalang99/lang.h>
#include <metalang99/variadics.h>

// Desugaring {
/**
 * Transforms a sequence of arguments into `(...)`.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/tuple.h>
 *
 * // (1, 2, 3)
 * M_tuple(v(1, 2, 3))
 * @endcode
 */
#define METALANG99_tuple(...) METALANG99_call(METALANG99_tuple, __VA_ARGS__)

/**
 * Transforms a sequence of arguments into `(v(...))`.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/tuple.h>
 *
 * // (v(1, 2, 3))
 * M_tupleEval(v(1, 2, 3))
 * @endcode
 */
#define METALANG99_tupleEval(...) METALANG99_call(METALANG99_tupleEval, __VA_ARGS__)

/**
 * Untuples a sequence of arguments, leaving the result unevaluated.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/tuple.h>
 *
 * // 1, 2, 3
 * M_untuple(v((1, 2, 3)))
 * @endcode
 */
#define METALANG99_untuple(x) METALANG99_call(METALANG99_untuple, x)

/**
 * Untuples a sequence of arguments and evaluates the result.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/tuple.h>
 *
 * // 1, 2, 3
 * M_untupleEval(v((v(1, 2, 3))))
 * @endcode
 */
#define METALANG99_untupleEval(x) METALANG99_call(METALANG99_untupleEval, x)

/**
 * Tests whether @p x is inside parentheses or not.
 *
 * If @p x begins with an opening parenthesis, it must also end with a closing parenthesis, e.g. `()
 * 123` is disallowed.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/tuple.h>
 *
 * // 0
 * M_isTuple(v(123))
 *
 * // 1
 * M_isTuple(v((123)))
 * @endcode
 */
#define METALANG99_isTuple(x) METALANG99_call(METALANG99_isTuple, x)

/**
 * The inverse of #METALANG99_isTuple.
 *
 * If @p x begins with an opening parenthesis, it must also end with a closing parenthesis, e.g. `()
 * 123` is disallowed.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/tuple.h>
 *
 * // 1
 * M_isUntuple(v(123))
 *
 * // 0
 * M_isUntuple(v((123)))
 * @endcode
 */
#define METALANG99_isUntuple(x) METALANG99_call(METALANG99_isUntuple, x)

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
 * M_tupleGet(1)(v((1, 2, 3)))
 * @endcode
 */
#define METALANG99_tupleGet(i) METALANG99_CAT(METALANG99_PRIV_tupleGet_, i)

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
 * M_tupleTail(v((1, 2, 3)))
 * @endcode
 */
#define METALANG99_tupleTail(x) METALANG99_call(METALANG99_tupleTail, x)

/**
 * Appends provided variadic arguments to the tuple @p x.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/tuple.h>
 *
 * // (1, 2, 3)
 * M_tupleAppend(M_tuple(v(1)), v(2, 3))
 * @endcode
 */
#define METALANG99_tupleAppend(x, ...) METALANG99_call(METALANG99_tupleAppend, x, __VA_ARGS__)

/**
 * Prepends provided variadic arguments to the tuple @p x.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/tuple.h>
 *
 * // (1, 2, 3)
 * M_tuplePrepend(M_tuple(v(3)), v(1, 2))
 * @endcode
 */
#define METALANG99_tuplePrepend(x, ...) METALANG99_call(METALANG99_tuplePrepend, x, __VA_ARGS__)

#define METALANG99_TUPLE(...)            (__VA_ARGS__)
#define METALANG99_UNTUPLE(x)            METALANG99_PRIV_EXPAND x
#define METALANG99_IS_TUPLE(x)           METALANG99_PRIV_IS_PARENTHESIZED(x)
#define METALANG99_IS_UNTUPLE(x)         METALANG99_PRIV_IS_UNPARENTHESIZED(x)
#define METALANG99_TUPLE_GET(i)          METALANG99_CAT(METALANG99_PRIV_TUPLE_GET_, i)
#define METALANG99_TUPLE_TAIL(x)         METALANG99_VARIADICS_TAIL(METALANG99_UNTUPLE(x))
#define METALANG99_TUPLE_APPEND(x, ...)  (METALANG99_UNTUPLE(x), __VA_ARGS__)
#define METALANG99_TUPLE_PREPEND(x, ...) (__VA_ARGS__, METALANG99_UNTUPLE(x))
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define METALANG99_tupleEval_IMPL(...) v((v(__VA_ARGS__)))
#define METALANG99_tuple_IMPL(...)     v(METALANG99_TUPLE(__VA_ARGS__))
#define METALANG99_untupleEval_IMPL(x) METALANG99_PRIV_EXPAND x
#define METALANG99_untuple_IMPL(x)     v(METALANG99_UNTUPLE(x))
#define METALANG99_isTuple_IMPL(x)     v(METALANG99_IS_TUPLE(x))
#define METALANG99_isUntuple_IMPL(x)   v(METALANG99_IS_UNTUPLE(x))

#define METALANG99_PRIV_tupleGet_0(x) METALANG99_call(METALANG99_PRIV_tupleGet_0, x)
#define METALANG99_PRIV_tupleGet_1(x) METALANG99_call(METALANG99_PRIV_tupleGet_1, x)
#define METALANG99_PRIV_tupleGet_2(x) METALANG99_call(METALANG99_PRIV_tupleGet_2, x)
#define METALANG99_PRIV_tupleGet_3(x) METALANG99_call(METALANG99_PRIV_tupleGet_3, x)
#define METALANG99_PRIV_tupleGet_4(x) METALANG99_call(METALANG99_PRIV_tupleGet_4, x)
#define METALANG99_PRIV_tupleGet_5(x) METALANG99_call(METALANG99_PRIV_tupleGet_5, x)
#define METALANG99_PRIV_tupleGet_6(x) METALANG99_call(METALANG99_PRIV_tupleGet_6, x)
#define METALANG99_PRIV_tupleGet_7(x) METALANG99_call(METALANG99_PRIV_tupleGet_7, x)

#define METALANG99_PRIV_tupleGet_0_IMPL(x) v(METALANG99_TUPLE_GET(0)(x))
#define METALANG99_PRIV_tupleGet_1_IMPL(x) v(METALANG99_TUPLE_GET(1)(x))
#define METALANG99_PRIV_tupleGet_2_IMPL(x) v(METALANG99_TUPLE_GET(2)(x))
#define METALANG99_PRIV_tupleGet_3_IMPL(x) v(METALANG99_TUPLE_GET(3)(x))
#define METALANG99_PRIV_tupleGet_4_IMPL(x) v(METALANG99_TUPLE_GET(4)(x))
#define METALANG99_PRIV_tupleGet_5_IMPL(x) v(METALANG99_TUPLE_GET(5)(x))
#define METALANG99_PRIV_tupleGet_6_IMPL(x) v(METALANG99_TUPLE_GET(6)(x))
#define METALANG99_PRIV_tupleGet_7_IMPL(x) v(METALANG99_TUPLE_GET(7)(x))

#define METALANG99_PRIV_TUPLE_GET_0(x) METALANG99_VARIADICS_GET(0)(METALANG99_UNTUPLE(x))
#define METALANG99_PRIV_TUPLE_GET_1(x) METALANG99_VARIADICS_GET(1)(METALANG99_UNTUPLE(x))
#define METALANG99_PRIV_TUPLE_GET_2(x) METALANG99_VARIADICS_GET(2)(METALANG99_UNTUPLE(x))
#define METALANG99_PRIV_TUPLE_GET_3(x) METALANG99_VARIADICS_GET(3)(METALANG99_UNTUPLE(x))
#define METALANG99_PRIV_TUPLE_GET_4(x) METALANG99_VARIADICS_GET(4)(METALANG99_UNTUPLE(x))
#define METALANG99_PRIV_TUPLE_GET_5(x) METALANG99_VARIADICS_GET(5)(METALANG99_UNTUPLE(x))
#define METALANG99_PRIV_TUPLE_GET_6(x) METALANG99_VARIADICS_GET(6)(METALANG99_UNTUPLE(x))
#define METALANG99_PRIV_TUPLE_GET_7(x) METALANG99_VARIADICS_GET(7)(METALANG99_UNTUPLE(x))

#define METALANG99_tupleTail_IMPL(x) v(METALANG99_TUPLE_TAIL(x))

#define METALANG99_tupleAppend_IMPL(x, ...)  v(METALANG99_TUPLE_APPEND(x, __VA_ARGS__))
#define METALANG99_tuplePrepend_IMPL(x, ...) v(METALANG99_TUPLE_PREPEND(x, __VA_ARGS__))
// }

// Arity specifiers {
#define METALANG99_tuple_ARITY        1
#define METALANG99_tupleEval_ARITY    1
#define METALANG99_untuple_ARITY      1
#define METALANG99_untupleEval_ARITY  1
#define METALANG99_isTuple_ARITY      1
#define METALANG99_isUntuple_ARITY    1
#define METALANG99_tupleTail_ARITY    1
#define METALANG99_tupleAppend_ARITY  2
#define METALANG99_tuplePrepend_ARITY 2

#define METALANG99_PRIV_tupleGet_0_ARITY 1
#define METALANG99_PRIV_tupleGet_1_ARITY 1
#define METALANG99_PRIV_tupleGet_2_ARITY 1
#define METALANG99_PRIV_tupleGet_3_ARITY 1
#define METALANG99_PRIV_tupleGet_4_ARITY 1
#define METALANG99_PRIV_tupleGet_5_ARITY 1
#define METALANG99_PRIV_tupleGet_6_ARITY 1
#define METALANG99_PRIV_tupleGet_7_ARITY 1
// }

// Aliases {
#ifndef METALANG99_FULL_PREFIX_ONLY

#define M_tuple        METALANG99_tuple
#define M_tupleEval    METALANG99_tupleEval
#define M_untuple      METALANG99_untuple
#define M_untupleEval  METALANG99_untupleEval
#define M_isTuple      METALANG99_isTuple
#define M_isUntuple    METALANG99_isUntuple
#define M_tupleGet     METALANG99_tupleGet
#define M_tupleTail    METALANG99_tupleTail
#define M_tupleAppend  METALANG99_tupleAppend
#define M_tuplePrepend METALANG99_tuplePrepend

#define M_TUPLE         METALANG99_TUPLE
#define M_UNTUPLE       METALANG99_UNTUPLE
#define M_IS_TUPLE      METALANG99_IS_TUPLE
#define M_IS_UNTUPLE    METALANG99_IS_UNTUPLE
#define M_TUPLE_GET     METALANG99_TUPLE_GET
#define M_TUPLE_TAIL    METALANG99_TUPLE_TAIL
#define M_TUPLE_APPEND  METALANG99_TUPLE_APPEND
#define M_TUPLE_PREPEND METALANG99_TUPLE_PREPEND

#endif // METALANG99_FULL_PREFIX_ONLY
// }

#endif // DOXYGEN_IGNORE

#endif // METALANG99_TUPLE_H
