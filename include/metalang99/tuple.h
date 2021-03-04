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
 * Extracts the tuple's first element.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/tuple.h>
 *
 * // 1
 * M_tupleGet0(v((1, 2, 3)))
 * @endcode
 */
#define METALANG99_tupleGet0(x) METALANG99_call(METALANG99_tupleGet0, x)

/**
 * Extracts the tuple's second element.
 *
 * @p x must contain at least two elements.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/tuple.h>
 *
 * // 2
 * M_tupleGet1(v((1, 2, 3)))
 * @endcode
 */
#define METALANG99_tupleGet1(x) METALANG99_call(METALANG99_tupleGet1, x)

/**
 * Extracts the tuple's third element.
 *
 * p x must contain at least three elements.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/tuple.h>
 *
 * // 3
 * M_tupleGet2(v((1, 2, 3)))
 * @endcode
 */
#define METALANG99_tupleGet2(x) METALANG99_call(METALANG99_tupleGet2, x)
/**
 * Extracts the tuple's tail.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/tuple.h>
 *
 * // 2, 3
 * M_tupleTail(v((1, 2, 3)))
 * @endcode
 *
 * @note @p x must contain at least two elements.
 */
#define METALANG99_tupleTail(x) METALANG99_call(METALANG99_tupleTail, x)

/**
 * The plain version of #METALANG99_tuple.
 */
#define METALANG99_tuplePlain(...) (__VA_ARGS__)

/**
 * The plain version of #METALANG99_untuple.
 */
#define METALANG99_untuplePlain(x) METALANG99_PRIV_EXPAND x

/**
 * The plain version of #METALANG99_isTuple.
 */
#define METALANG99_isTuplePlain(x) METALANG99_PRIV_IS_PARENTHESIZED(x)

/**
 * The plain version of #METALANG99_isUntuple.
 */
#define METALANG99_isUntuplePlain(x) METALANG99_PRIV_IS_UNPARENTHESIZED(x)

/**
 * The plain version of #METALANG99_tupleGet0.
 */
#define METALANG99_tupleGet0Plain(x) METALANG99_PRIV_tupleGet0(METALANG99_untuplePlain(x), ~)

/**
 * The plain version of #METALANG99_tupleGet0.
 */
#define METALANG99_tupleGet1Plain(x) METALANG99_PRIV_tupleGet1(METALANG99_untuplePlain(x), ~)

/**
 * The plain version of #METALANG99_tupleGet0.
 */
#define METALANG99_tupleGet2Plain(x) METALANG99_PRIV_tupleGet2(METALANG99_untuplePlain(x), ~)

/**
 * The plain version of #METALANG99_tupleTail.
 */
#define METALANG99_tupleTailPlain(x) METALANG99_PRIV_VARIADICS_TAIL(METALANG99_untuplePlain(x))
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define METALANG99_tupleEval_IMPL(...) v((v(__VA_ARGS__)))
#define METALANG99_tuple_IMPL(...)     v(METALANG99_tuplePlain(__VA_ARGS__))
#define METALANG99_untupleEval_IMPL(x) METALANG99_PRIV_EXPAND x
#define METALANG99_untuple_IMPL(x)     v(METALANG99_untuplePlain(x))
#define METALANG99_isTuple_IMPL(x)     v(METALANG99_isTuplePlain(x))
#define METALANG99_isUntuple_IMPL(x)   v(METALANG99_isUntuplePlain(x))
#define METALANG99_tupleGet0_IMPL(x)   v(METALANG99_tupleGet0Plain(x))
#define METALANG99_tupleGet1_IMPL(x)   v(METALANG99_tupleGet1Plain(x))
#define METALANG99_tupleGet2_IMPL(x)   v(METALANG99_tupleGet2Plain(x))
#define METALANG99_tupleTail_IMPL(x)   v(METALANG99_tupleTailPlain(x))

#define METALANG99_PRIV_tupleGet0(...) METALANG99_PRIV_tupleGet0Aux(__VA_ARGS__)
#define METALANG99_PRIV_tupleGet1(...) METALANG99_PRIV_tupleGet1Aux(__VA_ARGS__)
#define METALANG99_PRIV_tupleGet2(...) METALANG99_PRIV_tupleGet2Aux(__VA_ARGS__)

#define METALANG99_PRIV_tupleGet0Aux(a, ...)         a
#define METALANG99_PRIV_tupleGet1Aux(_a, b, ...)     b
#define METALANG99_PRIV_tupleGet2Aux(_a, _b, c, ...) c
// }

// Arity specifiers {
#define METALANG99_tuple_ARITY       1
#define METALANG99_tupleEval_ARITY   1
#define METALANG99_untuple_ARITY     1
#define METALANG99_untupleEval_ARITY 1
#define METALANG99_isTuple_ARITY     1
#define METALANG99_isUntuple_ARITY   1
#define METALANG99_tupleGet0_ARITY   1
#define METALANG99_tupleTail_ARITY   1
// }

// Aliases {
#ifndef METALANG99_NO_SMALL_PREFIX

#define M_tuple       METALANG99_tuple
#define M_tupleEval   METALANG99_tupleEval
#define M_untuple     METALANG99_untuple
#define M_untupleEval METALANG99_untupleEval
#define M_isTuple     METALANG99_isTuple
#define M_isUntuple   METALANG99_isUntuple
#define M_tupleGet0   METALANG99_tupleGet0
#define M_tupleGet1   METALANG99_tupleGet1
#define M_tupleGet2   METALANG99_tupleGet2
#define M_tupleTail   METALANG99_tupleTail

#define M_tuplePlain     METALANG99_tuplePlain
#define M_untuplePlain   METALANG99_untuplePlain
#define M_isTuplePlain   METALANG99_isTuplePlain
#define M_isUntuplePlain METALANG99_isUntuplePlain
#define M_tupleGet0Plain METALANG99_tupleGet0Plain
#define M_tupleTailPlain METALANG99_tupleTailPlain

#endif // METALANG99_NO_SMALL_PREFIX
// }

#endif // DOXYGEN_IGNORE

#endif // METALANG99_TUPLE_H
