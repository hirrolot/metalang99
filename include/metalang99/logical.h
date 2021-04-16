/**
 * @file
 * Boolean algebra.
 */

#ifndef ML99_LOGICAL_H
#define ML99_LOGICAL_H

#include <metalang99/lang.h>

/**
 * Truth.
 */
#define ML99_true(...) ML99_callUneval(ML99_true, )

/**
 * Falsehood.
 */
#define ML99_false(...) ML99_callUneval(ML99_false, )

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

#define ML99_TRUE(...)     1
#define ML99_FALSE(...)    0
#define ML99_NOT(x)        ML99_PRIV_NOT(x)
#define ML99_AND(x, y)     ML99_PRIV_LOGICAL_OVERLOAD(ML99_PRIV_AND_, x, y)
#define ML99_OR(x, y)      ML99_PRIV_LOGICAL_OVERLOAD(ML99_PRIV_OR_, x, y)
#define ML99_XOR(x, y)     ML99_PRIV_LOGICAL_OVERLOAD(ML99_PRIV_XOR_, x, y)
#define ML99_BOOL_EQ(x, y) ML99_PRIV_LOGICAL_OVERLOAD(ML99_PRIV_BOOL_EQ_, x, y)

#ifndef DOXYGEN_IGNORE

#define ML99_true_IMPL(...)  v(ML99_TRUE())
#define ML99_false_IMPL(...) v(ML99_FALSE())

#define ML99_not_IMPL(x)       v(ML99_NOT(x))
#define ML99_and_IMPL(x, y)    v(ML99_AND(x, y))
#define ML99_or_IMPL(x, y)     v(ML99_OR(x, y))
#define ML99_xor_IMPL(x, y)    v(ML99_XOR(x, y))
#define ML99_boolEq_IMPL(x, y) v(ML99_BOOL_EQ(x, y))

#define ML99_PRIV_AND_00 0
#define ML99_PRIV_AND_01 0
#define ML99_PRIV_AND_10 0
#define ML99_PRIV_AND_11 1

#define ML99_PRIV_OR_00 0
#define ML99_PRIV_OR_01 1
#define ML99_PRIV_OR_10 1
#define ML99_PRIV_OR_11 1

#define ML99_PRIV_XOR_00 0
#define ML99_PRIV_XOR_01 1
#define ML99_PRIV_XOR_10 1
#define ML99_PRIV_XOR_11 0

#define ML99_PRIV_BOOL_EQ_00 1
#define ML99_PRIV_BOOL_EQ_01 0
#define ML99_PRIV_BOOL_EQ_10 0
#define ML99_PRIV_BOOL_EQ_11 1

#define ML99_PRIV_LOGICAL_OVERLOAD(op, x, y) op##x##y

// Arity specifiers {
#define ML99_true_ARITY   1
#define ML99_false_ARITY  1
#define ML99_not_ARITY    1
#define ML99_and_ARITY    2
#define ML99_or_ARITY     2
#define ML99_xor_ARITY    2
#define ML99_boolEq_ARITY 2
// }

#endif // DOXYGEN_IGNORE

#endif // ML99_LOGICAL_H
