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
// }

// Arity specifiers {
#define EPILEPSY_times_ARITY 2
// }

// Aliases {
#ifndef EPILEPSY_NO_SMALL_PREFIX

#define E_times EPILEPSY_times

#endif // EPILEPSY_NO_SMALL_PREFIX
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_CONTROL_H
