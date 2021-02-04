/**
 * @file
 * Control expressions.
 */

#ifndef METALANG99_CONTROL_H
#define METALANG99_CONTROL_H

#include <metalang99/lang.h>
#include <metalang99/uint.h>

// Desugaring {
/**
 * If @p cond is true, evaluates to @p x, otherwise @p y.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/control.h>
 * #include <metalang99/logical.h>
 *
 * // 123
 * M_if(v(M_true), v(123), v(18))
 *
 * // 18
 * M_if(v(M_false), v(123), v(18))
 * @endcode
 */
#define METALANG99_if(cond, x, y) METALANG99_call(METALANG99_if, cond x y)

/**
 * Overloads @p f on a number of arguments.
 *
 * This function counts the number of provided arguments, appends it to @p f and calls the resulting
 * macro identifier with provided arguments.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/control.h>
 *
 * #define X_IMPL(...)    M_overload(v(X_), v(__VA_ARGS__))
 * #define X_1_IMPL(a)    v(Billie & a)
 * #define X_2_IMPL(a, b) v(Jean & a & b)
 *
 * // Billie & 4
 * M_call(X, v(4))
 *
 * // Jean & 5 & 6
 * M_call(X, v(5, 6))
 * @endcode
 *
 * @note This function calls @p f with #METALANG99_call, so no partial application occurs, and so
 * arity specifiers are not needed.
 * @note Currently, this function can accept at most 256 variadic arguments.
 */
#define METALANG99_overload(f, ...) METALANG99_call(METALANG99_overload, f __VA_ARGS__)

/**
 * The plain version of #METALANG99_if.
 */
#define METALANG99_ifPlain(cond, x, y) METALANG99_PRIV_IF(cond, x, y)

/**
 * The plain version of #METALANG99_overload.
 *
 * @note @p f need not be postfixed with `_IMPL`. It is literally invoked as `<f><count of
 * ...>(...)`.
 */
#define METALANG99_overloadPlain(f, ...)                                                           \
    METALANG99_PRIV_CAT(f, METALANG99_variadicsCountPlain(__VA_ARGS__))(__VA_ARGS__)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define METALANG99_overload_IMPL(f, ...)                                                           \
    METALANG99_callTrivial(                                                                        \
        METALANG99_PRIV_CAT(f, METALANG99_variadicsCountPlain(__VA_ARGS__)),                       \
        __VA_ARGS__)

#define METALANG99_if_IMPL(cond, x, y) v(METALANG99_PRIV_if_##cond(x, y))
#define METALANG99_PRIV_if_0(_x, y)    y
#define METALANG99_PRIV_if_1(x, _y)    x
// }

// Arity specifiers {
#define METALANG99_overload_ARITY 2
#define METALANG99_if_ARITY       3
// }

// Aliases {
#ifndef METALANG99_NO_SMALL_PREFIX

#define M_overload METALANG99_overload
#define M_if       METALANG99_if

#define M_ifPlain       METALANG99_ifPlain
#define M_overloadPlain METALANG99_overloadPlain

#endif // METALANG99_NO_SMALL_PREFIX
// }

#endif // DOXYGEN_IGNORE

#endif // METALANG99_CONTROL_H
