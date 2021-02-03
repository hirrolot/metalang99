/**
 * @file
 * Boolean algebra.
 */

#ifndef EPILEPSY_LOGICAL_H
#define EPILEPSY_LOGICAL_H

#include <epilepsy/lang.h>

// Desugaring {
/**
 * The alias to 0.
 *
 * @note This macro expands literally to 0. If you want to use it as an Epilepsy term, write
 * `v(E_false)`.
 */
#define EPILEPSY_false 0

/**
 * The alias to 1.
 *
 * @note This macro expands literally to 1. If you want to use it as an Epilepsy term, write
 * `v(E_true)`.
 */
#define EPILEPSY_true 1

/**
 * Logical negation.
 *
 * # Examples
 *
 * @code
 * // 1
 * E_not(v(0))
 *
 * // 0
 * E_not(v(1))
 * @endcode
 */
#define EPILEPSY_not(x) EPILEPSY_call(EPILEPSY_not, x)

/**
 * Logical conjunction.
 *
 * # Examples
 *
 * @code
 * // 0
 * E_and(v(0), v(0))
 *
 * // 0
 * E_and(v(0), v(1))
 *
 * // 0
 * E_and(v(1), v(0))
 *
 * // 1
 * E_and(v(1), v(1))
 * @endcode
 */
#define EPILEPSY_and(x, y) EPILEPSY_call(EPILEPSY_and, x y)

/**
 * Logical inclusive OR.
 *
 * # Examples
 *
 * @code
 * // 0
 * E_or(v(0), v(0))
 *
 * // 1
 * E_or(v(0), v(1))
 *
 * // 1
 * E_or(v(1), v(0))
 *
 * // 1
 * E_or(v(1), v(1))
 * @endcode
 */
#define EPILEPSY_or(x, y) EPILEPSY_call(EPILEPSY_or, x y)

/**
 * Logical exclusive OR.
 *
 * # Examples
 *
 * @code
 * // 0
 * E_xor(v(0), v(0))
 *
 * // 1
 * E_xor(v(0), v(1))
 *
 * // 1
 * E_xor(v(1), v(0))
 *
 * // 0
 * E_xor(v(1), v(1))
 * @endcode
 */
#define EPILEPSY_xor(x, y) EPILEPSY_call(EPILEPSY_xor, x y)

/**
 * Tests @p x and @p y for equality.
 *
 * # Examples
 * @code
 * // 1
 * E_boolEq(v(0), v(0))
 *
 * // 0
 * E_boolEq(v(0), v(1))
 *
 * // 0
 * E_boolEq(v(1), v(0))
 *
 * // 1
 * E_boolEq(v(1), v(1))
 * @endcode
 */
#define EPILEPSY_boolEq(x, y) EPILEPSY_call(EPILEPSY_boolEq, x y)

/**
 * The plain version of #EPILEPSY_not.
 */
#define EPILEPSY_notPlain(x) EPILEPSY_PRIV_CAT(EPILEPSY_PRIV_not_, x)()

/**
 * The plain version of #EPILEPSY_and.
 */
#define EPILEPSY_andPlain(x, y) EPILEPSY_PRIV_UINT_OVERLOAD(EPILEPSY_PRIV_and_, x, y)

/**
 * The plain version of #EPILEPSY_or.
 */
#define EPILEPSY_orPlain(x, y) EPILEPSY_PRIV_UINT_OVERLOAD(EPILEPSY_PRIV_or_, x, y)

/**
 * The plain version of #EPILEPSY_xor.
 */
#define EPILEPSY_xorPlain(x, y) EPILEPSY_PRIV_UINT_OVERLOAD(EPILEPSY_PRIV_xor_, x, y)

/**
 * The plain version of #EPILEPSY_boolEq.
 */
#define EPILEPSY_boolEqPlain(x, y) EPILEPSY_PRIV_UINT_OVERLOAD(EPILEPSY_PRIV_boolEq_, x, y)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define EPILEPSY_not_IMPL(x)       v(EPILEPSY_notPlain(x))
#define EPILEPSY_and_IMPL(x, y)    v(EPILEPSY_andPlain(x, y))
#define EPILEPSY_or_IMPL(x, y)     v(EPILEPSY_orPlain(x, y))
#define EPILEPSY_xor_IMPL(x, y)    v(EPILEPSY_xorPlain(x, y))
#define EPILEPSY_boolEq_IMPL(x, y) v(EPILEPSY_boolEqPlain(x, y))

#define EPILEPSY_PRIV_not_0() 1
#define EPILEPSY_PRIV_not_1() 0

#define EPILEPSY_PRIV_and_00() 0
#define EPILEPSY_PRIV_and_01() 0
#define EPILEPSY_PRIV_and_10() 0
#define EPILEPSY_PRIV_and_11() 1

#define EPILEPSY_PRIV_or_00() 0
#define EPILEPSY_PRIV_or_01() 1
#define EPILEPSY_PRIV_or_10() 1
#define EPILEPSY_PRIV_or_11() 1

#define EPILEPSY_PRIV_xor_00() 0
#define EPILEPSY_PRIV_xor_01() 1
#define EPILEPSY_PRIV_xor_10() 1
#define EPILEPSY_PRIV_xor_11() 0

#define EPILEPSY_PRIV_boolEq_00() 1
#define EPILEPSY_PRIV_boolEq_01() 0
#define EPILEPSY_PRIV_boolEq_10() 0
#define EPILEPSY_PRIV_boolEq_11() 1

#define EPILEPSY_PRIV_UINT_OVERLOAD(op, x, y) op##x##y()

#define EPILEPSY_PRIV_CONST_TRUE_IMPL(...)  v(EPILEPSY_true)
#define EPILEPSY_PRIV_CONST_FALSE_IMPL(...) v(EPILEPSY_false)
// }

// Arity specifiers {
#define EPILEPSY_not_ARITY    1
#define EPILEPSY_and_ARITY    2
#define EPILEPSY_or_ARITY     2
#define EPILEPSY_xor_ARITY    2
#define EPILEPSY_boolEq_ARITY 2
// }

// Aliases {
#ifndef EPILEPSY_NO_SMALL_PREFIX

#define E_true  EPILEPSY_true
#define E_false EPILEPSY_false

#define E_not    EPILEPSY_not
#define E_and    EPILEPSY_and
#define E_or     EPILEPSY_or
#define E_xor    EPILEPSY_xor
#define E_boolEq EPILEPSY_boolEq

#define E_notPlain    EPILEPSY_notPlain
#define E_andPlain    EPILEPSY_andPlain
#define E_orPlain     EPILEPSY_orPlain
#define E_xorPlain    EPILEPSY_xorPlain
#define E_boolEqPlain EPILEPSY_boolEqPlain

#endif // EPILEPSY_NO_SMALL_PREFIX
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_LOGICAL_H
