/**
 * @file
 * Control expressions.
 */

#ifndef ML99_CONTROL_H
#define ML99_CONTROL_H

#include <metalang99/priv/variadics/count.h>

#include <metalang99/lang.h>
#include <metalang99/util.h>

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
 * ML99_if(v(ML99_true), v(123), v(18))
 *
 * // 18
 * ML99_if(v(ML99_false), v(123), v(18))
 * @endcode
 */
#define ML99_if(cond, x, y) ML99_call(ML99_if, cond, x, y)

/**
 * If @p cond is true, evaluates to @p x, otherwise to emptiness.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/control.h>
 *
 * // 123
 * ML99_when(v(1), v(123))
 *
 * // ML99_empty()
 * ML99_when(v(0), v(123))
 * @endcode
 */
#define ML99_when(cond, x) ML99_call(ML99_when, cond, x)

/**
 * If @p cond is true, evaluates to @p f, otherwise to #ML99_consume.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/control.h>
 * #include <metalang99/util.h>
 *
 * // 123
 * ML99_call(ML99_whenLazy(v(1), v(ML99_id)), v(123))
 *
 * // ML99_empty()
 * ML99_call(ML99_whenLazy(v(0), v(ML99_id)), v(123))
 * @endcode
 */
#define ML99_whenLazy(cond, f) ML99_call(ML99_whenLazy, cond, f)

/**
 * Overloads @p f on a number of arguments.
 *
 * This function counts the number of provided arguments, appends it to @p f and calls the resulting
 * macro identifier with provided arguments.
 *
 * At most 63 variadic arguments are acceptable.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/control.h>
 *
 * #define X(...)    ML99_overload(X_, __VA_ARGS__)
 * #define X_1(a)    Billie & a
 * #define X_2(a, b) Jean & a & b
 *
 * // Billie & 4
 * X(4)
 *
 * // Jean & 5 & 6
 * X(5, 6)
 * @endcode
 *
 * @note @p f need not be postfixed with `_IMPL`. It is literally invoked as `<f><count of
 * ...>(...)`.
 */
#define ML99_overload(f, ...) ML99_CAT(f, ML99_PRIV_VARIADICS_COUNT(__VA_ARGS__))(__VA_ARGS__)

/**
 * The plain version of #ML99_if.
 *
 * In particular, this macro can be used to imitate lazy evaluation: `ML99_IF(<cond>, <term>,
 * <another-term>)` will expand to one of the terms, which can be evaluated further.
 */
#define ML99_IF(cond, x, y)     ML99_PRIV_IF(cond, x, y)
#define ML99_WHEN(cond, x)      ML99_IF(cond, x, ML99_EMPTY())
#define ML99_WHEN_LAZY(cond, f) ML99_IF(cond, f, ML99_CONSUME)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define ML99_if_IMPL(cond, x, y)    v(ML99_IF(cond, x, y))
#define ML99_when_IMPL(cond, x)     v(ML99_WHEN(cond, x))
#define ML99_whenLazy_IMPL(cond, f) v(ML99_IF(cond, f, ML99_consume))
// }

// Arity specifiers {
#define ML99_if_ARITY       3
#define ML99_when_ARITY     2
#define ML99_whenLazy_ARITY 2
#define ML99_overload_ARITY 2
// }

#endif // DOXYGEN_IGNORE

#endif // ML99_CONTROL_H
