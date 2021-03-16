/**
 * @file
 * Control expressions.
 */

#ifndef ML99_CONTROL_H
#define ML99_CONTROL_H

#include <metalang99/priv/variadics/count.h>

#include <metalang99/lang.h>
#include <metalang99/nat.h>
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
 * ML99_if(ML99_true, v(123), v(18))
 *
 * // 18
 * ML99_if(ML99_false, v(123), v(18))
 * @endcode
 */
#define ML99_if(cond, x, y) ML99_call(ML99_if, cond, x, y)

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
 * Invokes @p f @p n times, providing an iteration index each time.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/control.h>
 * #include <metalang99/util.h>
 *
 * // _0 _1 _2
 * ML99_repeat(ML99_appl(v(ML99_cat), v(_)), v(3))
 * @endcode
 */
#define ML99_repeat(f, n) ML99_call(ML99_repeat, f, n)

/**
 * The plain version of #ML99_if.
 *
 * In particular, this macro can be used to imitate lazy evaluation: `ML99_IF(<cond>, <term>,
 * <another-term>)` will expand to one of the terms, which can be evaluated further.
 */
#define ML99_IF(cond, x, y) ML99_PRIV_IF(cond, x, y)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define ML99_if_IMPL(cond, x, y) v(ML99_IF(cond, x, y))

// ML99_repeat_IMPL {
#define ML99_repeat_IMPL(f, n)        ML99_natMatchWithArgs_IMPL(n, ML99_PRIV_repeat_, f)
#define ML99_PRIV_repeat_Z_IMPL(_f)   ML99_empty()
#define ML99_PRIV_repeat_S_IMPL(i, f) ML99_TERMS(ML99_repeat_IMPL(f, i), ML99_appl_IMPL(f, i))
// }

// } (Implementation)

// Arity specifiers {
#define ML99_if_ARITY       3
#define ML99_overload_ARITY 2
#define ML99_repeat_ARITY   2
// }

#endif // DOXYGEN_IGNORE

#endif // ML99_CONTROL_H
