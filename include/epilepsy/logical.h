/**
 * @file
 * Boolean algebra.
 */

#ifndef EPILEPSY_PRIV_LOGICAL_H
#define EPILEPSY_PRIV_LOGICAL_H

#include <epilepsy/lang.h>

// Desugaring {
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
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define EPILEPSY_not_IMPL(x)       EPILEPSY_call(EPILEPSY_PRIV_not_##x, )
#define EPILEPSY_PRIV_not_0_IMPL() v(1)
#define EPILEPSY_PRIV_not_1_IMPL() v(0)

#define EPILEPSY_and_IMPL(x, y)     EPILEPSY_call(EPILEPSY_PRIV_and_##x##y, )
#define EPILEPSY_PRIV_and_00_IMPL() v(0)
#define EPILEPSY_PRIV_and_01_IMPL() v(0)
#define EPILEPSY_PRIV_and_10_IMPL() v(0)
#define EPILEPSY_PRIV_and_11_IMPL() v(1)

#define EPILEPSY_or_IMPL(x, y)     EPILEPSY_call(EPILEPSY_PRIV_or_##x##y, )
#define EPILEPSY_PRIV_or_00_IMPL() v(0)
#define EPILEPSY_PRIV_or_01_IMPL() v(1)
#define EPILEPSY_PRIV_or_10_IMPL() v(1)
#define EPILEPSY_PRIV_or_11_IMPL() v(1)

#define EPILEPSY_xor_IMPL(x, y)     EPILEPSY_call(EPILEPSY_PRIV_xor_##x##y, )
#define EPILEPSY_PRIV_xor_00_IMPL() v(0)
#define EPILEPSY_PRIV_xor_01_IMPL() v(1)
#define EPILEPSY_PRIV_xor_10_IMPL() v(1)
#define EPILEPSY_PRIV_xor_11_IMPL() v(0)
// }

// Arity specifiers {
#define EPILEPSY_not_ARITY 1
#define EPILEPSY_and_ARITY 2
#define EPILEPSY_or_ARITY  2
#define EPILEPSY_xor_ARITY 2
// }

// Aliases {
#ifndef EPILEPSY_NO_SMALL_PREFIX

#define E_not EPILEPSY_not
#define E_and EPILEPSY_and
#define E_or  EPILEPSY_or
#define E_xor EPILEPSY_xor

#endif // EPILEPSY_NO_SMALL_PREFIX
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_PRIV_LOGICAL_H
