/**
 * @file
 * Control expressions.
 */

#ifndef ML99_CONTROL_H
#define ML99_CONTROL_H

#include <metalang99/priv/variadics/count.h>

#include <metalang99/lang.h>
#include <metalang99/tuple.h>
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
 * If @p cond is true, evaluates to provided arguments, otherwise to emptiness.
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
#define ML99_when(cond, ...) ML99_call(ML99_when, cond, __VA_ARGS__)

/**
 * If @p cond is true, results in provided terms, otherwise to #ML99_empty.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/control.h>
 * #include <metalang99/misc.h>
 *
 * // Some heavy computation...
 * #define PROG ML99_lazy(ML99_indexedArgs(v(10)))
 *
 * // _0, _1, _2, _3, _4, _5, _6, _7, _8, _9
 * ML99_whenLazy(v(1), PROG)
 *
 * // ML99_empty()
 * ML99_whenLazy(v(0), PROG)
 * @endcode
 */
#define ML99_whenLazy(cond, ...) ML99_call(ML99_whenLazy, cond, __VA_ARGS__)

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
 * Denotes a lazy (unevaluated) metaprogram.
 *
 * A lazy metaprogram is essentially a sequence of terms put into #v.
 */
#define ML99_lazy(...) v(__VA_ARGS__)

/**
 * The plain version of #ML99_if.
 *
 * In particular, this macro can be used to imitate lazy evaluation: `ML99_IF(<cond>, <term>,
 * <another-term>)` will expand to one of the terms, which can be evaluated further.
 */
#define ML99_IF(cond, x, y) ML99_PRIV_IF(cond, x, y)

#define ML99_WHEN(cond, ...) ML99_UNTUPLE(ML99_IF(cond, (__VA_ARGS__), ()))
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define ML99_if_IMPL(cond, x, y)      v(ML99_IF(cond, x, y))
#define ML99_when_IMPL(cond, ...)     v(ML99_WHEN(cond, __VA_ARGS__))
#define ML99_whenLazy_IMPL(cond, ...) ML99_UNTUPLE(ML99_IF(cond, (__VA_ARGS__), (v())))
// }

// Arity specifiers {
#define ML99_if_ARITY       3
#define ML99_when_ARITY     2
#define ML99_whenLazy_ARITY 2
#define ML99_overload_ARITY 2
// }

#endif // DOXYGEN_IGNORE

#endif // ML99_CONTROL_H
