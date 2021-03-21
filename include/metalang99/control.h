/**
 * @file
 * Control flow operators.
 */

#ifndef ML99_CONTROL_H
#define ML99_CONTROL_H

#include <metalang99/priv/util.h>
#include <metalang99/priv/variadics/count.h>

#include <metalang99/lang.h>
#include <metalang99/nat.h>
#include <metalang99/util.h>

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
 * Invokes @p f @p n times, providing an iteration index each time.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/control.h>
 * #include <metalang99/util.h>
 *
 * // _0 _1 _2
 * ML99_repeat(v(3), ML99_appl(v(ML99_cat), v(_)))
 * @endcode
 */
#define ML99_repeat(n, f) ML99_call(ML99_repeat, n, f)

/**
 * Pastes provided arguments @p n times.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/control.h>
 *
 * // ~ ~ ~ ~ ~
 * ML99_times(v(5), v(~))
 * @endcode
 */
#define ML99_times(n, ...) ML99_call(ML99_times, n, __VA_ARGS__)

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
 * #define X(...)    ML99_OVERLOAD(X_, __VA_ARGS__)
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
#define ML99_OVERLOAD(f, ...) ML99_CAT(f, ML99_PRIV_VARIADICS_COUNT(__VA_ARGS__))(__VA_ARGS__)

/**
 * The plain version of #ML99_if.
 *
 * In particular, this macro can be used to imitate lazy evaluation: `ML99_IF(<cond>, <term>,
 * <another-term>)` will expand to one of the terms, which can be evaluated further.
 *
 * @note @p x and @p y can possibly expand to commas. It means that you can supply #ML99_TERMS as a
 * branch, for example.
 */
#define ML99_IF(cond, x, y) ML99_PRIV_UNTUPLE(ML99_PRIV_IF(cond, (x), (y)))

#ifndef DOXYGEN_IGNORE

#define ML99_if_IMPL(cond, x, y) v(ML99_IF(cond, x, y))

#define ML99_repeat_IMPL(n, f)        ML99_natMatchWithArgs_IMPL(n, ML99_PRIV_repeat_, f)
#define ML99_PRIV_repeat_Z_IMPL(_f)   ML99_empty()
#define ML99_PRIV_repeat_S_IMPL(i, f) ML99_TERMS(ML99_repeat_IMPL(i, f), ML99_appl_IMPL(f, i))

#define ML99_times_IMPL(n, ...)        ML99_natMatchWithArgs_IMPL(n, ML99_PRIV_times_, __VA_ARGS__)
#define ML99_PRIV_times_Z_IMPL(...)    ML99_empty()
#define ML99_PRIV_times_S_IMPL(i, ...) ML99_TERMS(v(__VA_ARGS__), ML99_times_IMPL(i, __VA_ARGS__))

// Arity specifiers {
#define ML99_if_ARITY     3
#define ML99_repeat_ARITY 2
#define ML99_times_ARITY  2
// }

#endif // DOXYGEN_IGNORE

#endif // ML99_CONTROL_H
