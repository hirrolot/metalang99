/**
 * @file
 * Utilitary stuff.
 */

#ifndef ML99_UTIL_H
#define ML99_UTIL_H

#include <metalang99/priv/util.h>

#include <metalang99/lang.h>

/**
 * Concatenates @p x with @p y and evaluates the result.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/util.h>
 *
 * #define ABC123 v(Billie Jean)
 *
 * // Billie Jean
 * ML99_catEval(v(ABC), v(123))
 *
 * // ERROR: 123ABC is not a valid Metalang99 term.
 * ML99_catEval(v(123), v(ABC))
 * @endcode
 */
#define ML99_catEval(x, y) ML99_call(ML99_catEval, x, y)

/**
 * Concatenates @p x with @p y, leaving the result unevaluated.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/util.h>
 *
 * #define ABC123 Billie Jean
 *
 * // Billie Jean
 * ML99_cat(v(ABC), v(123))
 *
 * // 123ABC
 * ML99_cat(v(123), v(ABC))
 * @endcode
 */
#define ML99_cat(x, y) ML99_call(ML99_cat, x, y)

/**
 * Stringifies provided arguments.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/util.h>
 *
 * // "Billie Jean"
 * ML99_stringify(v(Billie Jean))
 * @endcode
 */
#define ML99_stringify(...) ML99_call(ML99_stringify, __VA_ARGS__)

/**
 * Evaluates to nothing.
 */
#define ML99_empty(...) ML99_callUneval(ML99_empty, )

/**
 * Evaluates to its arguments.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/util.h>
 *
 * // 1, 2, 3
 * ML99_id(v(1, 2, 3))
 * @endcode
 */
#define ML99_id(...) ML99_call(ML99_id, __VA_ARGS__)

/**
 * Evaluates to @p x, skipping @p a.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/util.h>
 *
 * // 123
 * ML99_const(v(123), v(5))
 * @endcode
 */
#define ML99_const(x, a) ML99_call(ML99_const, x, a)

/**
 * Reverses the order of arguments of the binary function @p f.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/util.h>
 *
 * // ABC123
 * ML99_appl2(ML99_flip(v(ML99_catUnevaluated)), v(123), v(ABC))
 * @endcode
 */
#define ML99_flip(f) ML99_call(ML99_flip, f)

/**
 * Concatenates @p x with @p y as-is, without expanding them.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/util.h>
 *
 * // This macro will not be expanded.
 * #define ABC 7
 *
 * // ABC123
 * ML99_CAT_PRIMITIVE(ABC, 123)
 * @endcode
 */
#define ML99_CAT_PRIMITIVE(x, y) x##y

/**
 * Stringifies @p x as-is, without expanding it.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/util.h>
 *
 * // This macro will not be expanded.
 * #define ABC 7
 *
 * // "ABC"
 * ML99_STRINGIFY_PRIMITIVE(ABC)
 * @endcode
 */
#define ML99_STRINGIFY_PRIMITIVE(...) #__VA_ARGS__

/**
 * Tells whether @p ident belongs to a set of identifiers defined by @p prefix.
 *
 * If `ML99_CAT(prefix, ident)` exists, it must be an object-like macro which expands to `()`. If
 * so, `ML99_DETECT_IDENT(prefix, ident)` will expand to truth, otherwise (`ML99_CAT(prefix, ident)`
 * does **not** exist), `ML99_DETECT_IDENT(prefix, ident)` will expand to falsehood.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/util.h>
 *
 * #define FOO_x ()
 * #define FOO_y ()
 *
 * // 1
 * ML99_DETECT_IDENT(FOO_, x)
 *
 * // 1
 * ML99_DETECT_IDENT(FOO_, y)
 *
 * // 0
 * ML99_DETECT_IDENT(FOO_, z)
 * @endcode
 */
#define ML99_DETECT_IDENT(prefix, ident) ML99_PRIV_IS_TUPLE(ML99_CAT(prefix, ident))

/**
 * If you are compiling on GCC, this macro expands to `_Pragma(str)`, otherwise to emptiness.
 */
#define ML99_GCC_PRAGMA(str) ML99_PRIV_GCC_PRAGMA(str)

/**
 * If you are compiling on Clang, this macro expands to `_Pragma(str)`, otherwise to emptiness.
 */
#define ML99_CLANG_PRAGMA(str) ML99_PRIV_CLANG_PRAGMA(str)

#define ML99_CAT(x, y)      ML99_CAT_PRIMITIVE(x, y)
#define ML99_STRINGIFY(...) ML99_STRINGIFY_PRIMITIVE(__VA_ARGS__)
#define ML99_EMPTY(...)
#define ML99_ID(...) __VA_ARGS__

#ifndef DOXYGEN_IGNORE

#define ML99_catEval_IMPL(x, y)      x##y
#define ML99_cat_IMPL(x, y)          v(ML99_CAT(x, y))
#define ML99_stringify_IMPL(...)     v(ML99_STRINGIFY(__VA_ARGS__))
#define ML99_empty_IMPL(...)         v(ML99_EMPTY())
#define ML99_id_IMPL(...)            v(ML99_ID(__VA_ARGS__))
#define ML99_const_IMPL(x, _a)       v(x)
#define ML99_flip_IMPL(f)            ML99_appl_IMPL(ML99_PRIV_flip, f)
#define ML99_PRIV_flip_IMPL(f, a, b) ML99_appl2_IMPL(f, b, a)

#if defined(__GNUC__) && !defined(__clang__)
#define ML99_PRIV_GCC_PRAGMA(str) _Pragma(str)
#else
#define ML99_PRIV_GCC_PRAGMA(str)
#endif

#if defined(__clang__)
#define ML99_PRIV_CLANG_PRAGMA(str) _Pragma(str)
#else
#define ML99_PRIV_CLANG_PRAGMA(str)
#endif

// Arity specifiers {
#define ML99_catEval_ARITY   2
#define ML99_cat_ARITY       2
#define ML99_stringify_ARITY 1
#define ML99_empty_ARITY     1
#define ML99_id_ARITY        1
#define ML99_const_ARITY     2
#define ML99_flip_ARITY      1

#define ML99_PRIV_flip_ARITY 3
// }

#endif // DOXYGEN_IGNORE

#endif // ML99_UTIL_H
