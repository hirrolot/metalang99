/**
 * @file
 * Overloading on a number of arguments.
 */

#ifndef EPILEPSY_OVERLOAD_H
#define EPILEPSY_OVERLOAD_H

#include <epilepsy/lang.h>
#include <epilepsy/priv/overload.h>

// Desugaring {
/**
 * Overloads @p f on a number of arguments.
 *
 * This function counts the number of provided arguments, appends it to @p f and calls the resulting
 * macro identifier with provided arguments.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/overload.h>
 *
 * #define X_IMPL(...)    E_overload(v(X_), v(__VA_ARGS__))
 * #define X_1_IMPL(a)    v(Billie & a)
 * #define X_2_IMPL(a, b) v(Jean & a & b)
 *
 * // Billie & 4
 * E_call(X, v(4))
 *
 * // Jean & 5 & 6
 * E_call(X, v(5, 6))
 * @endcode
 *
 * @note This function calls @p f with #EPILEPSY_call, so no partial application occurs, and so
 * arity specifiers are not needed.
 */
#define EPILEPSY_overload(f, ...) EPILEPSY_call(EPILEPSY_overload, f __VA_ARGS__)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define EPILEPSY_overload_IMPL(f, ...)                                                             \
    EPILEPSY_call(EPILEPSY_PRIV_CAT(f, EPILEPSY_PRIV_VARIADICS_COUNT(__VA_ARGS__)), v(__VA_ARGS__))
// }

// Arity specifiers {
#define EPILEPSY_overload_ARITY 2
// }

// Aliases {
#ifndef EPILEPSY_NO_SMALL_PREFIX

#define E_overload EPILEPSY_overload

#endif // EPILEPSY_NO_SMALL_PREFIX
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_OVERLOAD_H
