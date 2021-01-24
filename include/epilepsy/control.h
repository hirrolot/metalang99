/**
 * @file
 * Control expressions.
 */

#ifndef EPILEPSY_CONTROL_H
#define EPILEPSY_CONTROL_H

#include <epilepsy/lang.h>
#include <epilepsy/uint.h>

// Desugaring {
/**
 * If @p cond is true, evaluates to @p x, otherwise @p y.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/logical.h>
 *
 * // 123
 * E_if(v(E_true), v(123), v(18))
 *
 * // 18
 * E_if(v(E_false), v(123), v(18))
 * @endcode
 */
#define EPILEPSY_if(cond, x, y) EPILEPSY_call(EPILEPSY_if, cond x y)

/**
 * Repeats supplied arguments @p n times.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/control.h>
 *
 * // ~ ~ ~ ~ ~
 * E_times(v(5), v(~))
 * @endcode
 */
#define EPILEPSY_times(n, ...) EPILEPSY_call(EPILEPSY_times, n __VA_ARGS__)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define EPILEPSY_times_IMPL(n, ...)                                                                \
    EPILEPSY_uintMatchWithArgs(v(n), v(EPILEPSY_PRIV_times_), v(__VA_ARGS__))
#define EPILEPSY_PRIV_times_Z_IMPL(...)    EPILEPSY_empty()
#define EPILEPSY_PRIV_times_S_IMPL(n, ...) v(__VA_ARGS__) EPILEPSY_times(v(n), v(__VA_ARGS__))

#define EPILEPSY_if_IMPL(cond, x, y) v(EPILEPSY_PRIV_IF(cond, x, y))
// }

// Arity specifiers {
#define EPILEPSY_times_ARITY 2
#define EPILEPSY_if_ARITY    3
// }

// Aliases {
#ifndef EPILEPSY_NO_SMALL_PREFIX

#define E_times EPILEPSY_times
#define E_if    EPILEPSY_if

#endif // EPILEPSY_NO_SMALL_PREFIX
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_CONTROL_H
