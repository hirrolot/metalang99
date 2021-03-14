/**
 * @file
 * Boolean algebra.
 */

#ifndef ML99_LOGICAL_H
#define ML99_LOGICAL_H

#include <metalang99/lang.h>

// Desugaring {
/**
 * An alias to 0.
 *
 * @note This macro expands literally to 0. If you want to use it as a Metalang99 term, write
 * `v(ML99_false)`.
 */
#define ML99_false 0

/**
 * An alias to 1.
 *
 * @note This macro expands literally to 1. If you want to use it as a Metalang99 term, write
 * `v(ML99_true)`.
 */
#define ML99_true 1

/**
 * Logical negation.
 *
 * # Examples
 *
 * @code
 * // 1
 * ML99_not(v(0))
 *
 * // 0
 * ML99_not(v(1))
 * @endcode
 */
#define ML99_not(x) ML99_call(ML99_not, x)

/**
 * Logical conjunction.
 *
 * # Examples
 *
 * @code
 * // 0
 * ML99_and(v(0), v(0))
 *
 * // 0
 * ML99_and(v(0), v(1))
 *
 * // 0
 * ML99_and(v(1), v(0))
 *
 * // 1
 * ML99_and(v(1), v(1))
 * @endcode
 */
#define ML99_and(x, y) ML99_call(ML99_and, x, y)

/**
 * Logical inclusive OR.
 *
 * # Examples
 *
 * @code
 * // 0
 * ML99_or(v(0), v(0))
 *
 * // 1
 * ML99_or(v(0), v(1))
 *
 * // 1
 * ML99_or(v(1), v(0))
 *
 * // 1
 * ML99_or(v(1), v(1))
 * @endcode
 */
#define ML99_or(x, y) ML99_call(ML99_or, x, y)

/**
 * Logical exclusive OR.
 *
 * # Examples
 *
 * @code
 * // 0
 * ML99_xor(v(0), v(0))
 *
 * // 1
 * ML99_xor(v(0), v(1))
 *
 * // 1
 * ML99_xor(v(1), v(0))
 *
 * // 0
 * ML99_xor(v(1), v(1))
 * @endcode
 */
#define ML99_xor(x, y) ML99_call(ML99_xor, x, y)

/**
 * Tests @p x and @p y for equality.
 *
 * # Examples
 * @code
 * // 1
 * ML99_boolEq(v(0), v(0))
 *
 * // 0
 * ML99_boolEq(v(0), v(1))
 *
 * // 0
 * ML99_boolEq(v(1), v(0))
 *
 * // 1
 * ML99_boolEq(v(1), v(1))
 * @endcode
 */
#define ML99_boolEq(x, y) ML99_call(ML99_boolEq, x, y)

#define ML99_NOT(x)        ML99_PRIV_CAT(ML99_PRIV_not_, x)()
#define ML99_AND(x, y)     ML99_PRIV_LOGICAL_OVERLOAD(ML99_PRIV_and_, x, y)
#define ML99_OR(x, y)      ML99_PRIV_LOGICAL_OVERLOAD(ML99_PRIV_or_, x, y)
#define ML99_XOR(x, y)     ML99_PRIV_LOGICAL_OVERLOAD(ML99_PRIV_xor_, x, y)
#define ML99_BOOL_EQ(x, y) ML99_PRIV_LOGICAL_OVERLOAD(ML99_PRIV_boolEq_, x, y)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define ML99_not_IMPL(x)       v(ML99_NOT(x))
#define ML99_and_IMPL(x, y)    v(ML99_AND(x, y))
#define ML99_or_IMPL(x, y)     v(ML99_OR(x, y))
#define ML99_xor_IMPL(x, y)    v(ML99_XOR(x, y))
#define ML99_boolEq_IMPL(x, y) v(ML99_BOOL_EQ(x, y))

#define ML99_PRIV_not_0() 1
#define ML99_PRIV_not_1() 0

#define ML99_PRIV_and_00() 0
#define ML99_PRIV_and_01() 0
#define ML99_PRIV_and_10() 0
#define ML99_PRIV_and_11() 1

#define ML99_PRIV_or_00() 0
#define ML99_PRIV_or_01() 1
#define ML99_PRIV_or_10() 1
#define ML99_PRIV_or_11() 1

#define ML99_PRIV_xor_00() 0
#define ML99_PRIV_xor_01() 1
#define ML99_PRIV_xor_10() 1
#define ML99_PRIV_xor_11() 0

#define ML99_PRIV_boolEq_00() 1
#define ML99_PRIV_boolEq_01() 0
#define ML99_PRIV_boolEq_10() 0
#define ML99_PRIV_boolEq_11() 1

#define ML99_PRIV_LOGICAL_OVERLOAD(op, x, y) op##x##y()

#define ML99_PRIV_constTrue_IMPL(...)  v(ML99_true)
#define ML99_PRIV_constFalse_IMPL(...) v(ML99_false)
// }

// Arity specifiers {
#define ML99_not_ARITY    1
#define ML99_and_ARITY    2
#define ML99_or_ARITY     2
#define ML99_xor_ARITY    2
#define ML99_boolEq_ARITY 2
// }

#endif // DOXYGEN_IGNORE

#endif // ML99_LOGICAL_H
