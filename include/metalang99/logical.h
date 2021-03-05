/**
 * @file
 * Boolean algebra.
 */

#ifndef METALANG99_LOGICAL_H
#define METALANG99_LOGICAL_H

#include <metalang99/lang.h>

// Desugaring {
/**
 * An alias to 0.
 *
 * @note This macro expands literally to 0. If you want to use it as a Metalang99 term, write
 * `v(M_false)`.
 */
#define METALANG99_false 0

/**
 * An alias to 1.
 *
 * @note This macro expands literally to 1. If you want to use it as a Metalang99 term, write
 * `v(M_true)`.
 */
#define METALANG99_true 1

/**
 * Logical negation.
 *
 * # Examples
 *
 * @code
 * // 1
 * M_not(v(0))
 *
 * // 0
 * M_not(v(1))
 * @endcode
 */
#define METALANG99_not(x) METALANG99_call(METALANG99_not, x)

/**
 * Logical conjunction.
 *
 * # Examples
 *
 * @code
 * // 0
 * M_and(v(0), v(0))
 *
 * // 0
 * M_and(v(0), v(1))
 *
 * // 0
 * M_and(v(1), v(0))
 *
 * // 1
 * M_and(v(1), v(1))
 * @endcode
 */
#define METALANG99_and(x, y) METALANG99_call(METALANG99_and, x, y)

/**
 * Logical inclusive OR.
 *
 * # Examples
 *
 * @code
 * // 0
 * M_or(v(0), v(0))
 *
 * // 1
 * M_or(v(0), v(1))
 *
 * // 1
 * M_or(v(1), v(0))
 *
 * // 1
 * M_or(v(1), v(1))
 * @endcode
 */
#define METALANG99_or(x, y) METALANG99_call(METALANG99_or, x, y)

/**
 * Logical exclusive OR.
 *
 * # Examples
 *
 * @code
 * // 0
 * M_xor(v(0), v(0))
 *
 * // 1
 * M_xor(v(0), v(1))
 *
 * // 1
 * M_xor(v(1), v(0))
 *
 * // 0
 * M_xor(v(1), v(1))
 * @endcode
 */
#define METALANG99_xor(x, y) METALANG99_call(METALANG99_xor, x, y)

/**
 * Tests @p x and @p y for equality.
 *
 * # Examples
 * @code
 * // 1
 * M_boolEq(v(0), v(0))
 *
 * // 0
 * M_boolEq(v(0), v(1))
 *
 * // 0
 * M_boolEq(v(1), v(0))
 *
 * // 1
 * M_boolEq(v(1), v(1))
 * @endcode
 */
#define METALANG99_boolEq(x, y) METALANG99_call(METALANG99_boolEq, x, y)

#define METALANG99_notPlain(x)       METALANG99_PRIV_CAT(METALANG99_PRIV_not_, x)()
#define METALANG99_andPlain(x, y)    METALANG99_PRIV_LOGICAL_OVERLOAD(METALANG99_PRIV_and_, x, y)
#define METALANG99_orPlain(x, y)     METALANG99_PRIV_LOGICAL_OVERLOAD(METALANG99_PRIV_or_, x, y)
#define METALANG99_xorPlain(x, y)    METALANG99_PRIV_LOGICAL_OVERLOAD(METALANG99_PRIV_xor_, x, y)
#define METALANG99_boolEqPlain(x, y) METALANG99_PRIV_LOGICAL_OVERLOAD(METALANG99_PRIV_boolEq_, x, y)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define METALANG99_not_IMPL(x)       v(METALANG99_notPlain(x))
#define METALANG99_and_IMPL(x, y)    v(METALANG99_andPlain(x, y))
#define METALANG99_or_IMPL(x, y)     v(METALANG99_orPlain(x, y))
#define METALANG99_xor_IMPL(x, y)    v(METALANG99_xorPlain(x, y))
#define METALANG99_boolEq_IMPL(x, y) v(METALANG99_boolEqPlain(x, y))

#define METALANG99_PRIV_not_0() 1
#define METALANG99_PRIV_not_1() 0

#define METALANG99_PRIV_and_00() 0
#define METALANG99_PRIV_and_01() 0
#define METALANG99_PRIV_and_10() 0
#define METALANG99_PRIV_and_11() 1

#define METALANG99_PRIV_or_00() 0
#define METALANG99_PRIV_or_01() 1
#define METALANG99_PRIV_or_10() 1
#define METALANG99_PRIV_or_11() 1

#define METALANG99_PRIV_xor_00() 0
#define METALANG99_PRIV_xor_01() 1
#define METALANG99_PRIV_xor_10() 1
#define METALANG99_PRIV_xor_11() 0

#define METALANG99_PRIV_boolEq_00() 1
#define METALANG99_PRIV_boolEq_01() 0
#define METALANG99_PRIV_boolEq_10() 0
#define METALANG99_PRIV_boolEq_11() 1

#define METALANG99_PRIV_LOGICAL_OVERLOAD(op, x, y) op##x##y()

#define METALANG99_PRIV_constTrue_IMPL(...)  v(METALANG99_true)
#define METALANG99_PRIV_constFalse_IMPL(...) v(METALANG99_false)
// }

// Arity specifiers {
#define METALANG99_not_ARITY    1
#define METALANG99_and_ARITY    2
#define METALANG99_or_ARITY     2
#define METALANG99_xor_ARITY    2
#define METALANG99_boolEq_ARITY 2
// }

// Aliases {
#ifndef METALANG99_FULL_PREFIX_ONLY

#define M_true  METALANG99_true
#define M_false METALANG99_false

#define M_not    METALANG99_not
#define M_and    METALANG99_and
#define M_or     METALANG99_or
#define M_xor    METALANG99_xor
#define M_boolEq METALANG99_boolEq

#define M_notPlain    METALANG99_notPlain
#define M_andPlain    METALANG99_andPlain
#define M_orPlain     METALANG99_orPlain
#define M_xorPlain    METALANG99_xorPlain
#define M_boolEqPlain METALANG99_boolEqPlain

#endif // METALANG99_FULL_PREFIX_ONLY
// }

#endif // DOXYGEN_IGNORE

#endif // METALANG99_LOGICAL_H
