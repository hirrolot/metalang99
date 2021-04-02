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
 * Accepts terms and evaluates them with the space-separator.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/util.h>
 *
 * // 1 2 3
 * ML99_uncomma(ML99_QUOTE(v(1), v(2), v(3)))
 * @endcode
 */
#define ML99_uncomma(...) ML99_call(ML99_uncomma, __VA_ARGS__)

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
 * Expands to the predefined detector of @p ident which can be then passed to #ML99_DETECT_IDENT.
 *
 * @p ident ranges over all the <a href="https://en.cppreference.com/w/c/keyword">C11 keywords</a>
 * and the underscore character (`_`).
 *
 * # Examples
 *
 * @code
 * #include <metalang99/util.h>
 *
 * // 1
 * ML99_DETECT_IDENT(ML99_DETECTOR(while), while)
 *
 * // 1
 * ML99_DETECT_IDENT(ML99_DETECTOR(_), _)
 *
 * // 0
 * ML99_DETECT_IDENT(ML99_DETECTOR(return), _Generic)
 * @endcode
 */
#define ML99_DETECTOR(ident) ML99_CAT(ML99_CAT(ML99_PRIV_DETECTOR_, ident), _)

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
#define ML99_uncomma_IMPL(...)       __VA_ARGS__
#define ML99_PRIV_flip_IMPL(f, a, b) ML99_appl2_IMPL(f, b, a)

#define ML99_PRIV_DETECTOR_auto_auto                     ()
#define ML99_PRIV_DETECTOR_break_break                   ()
#define ML99_PRIV_DETECTOR_case_case                     ()
#define ML99_PRIV_DETECTOR_char_char                     ()
#define ML99_PRIV_DETECTOR_const_const                   ()
#define ML99_PRIV_DETECTOR_continue_continue             ()
#define ML99_PRIV_DETECTOR_default_default               ()
#define ML99_PRIV_DETECTOR_do_do                         ()
#define ML99_PRIV_DETECTOR_double_double                 ()
#define ML99_PRIV_DETECTOR_else_else                     ()
#define ML99_PRIV_DETECTOR_enum_enum                     ()
#define ML99_PRIV_DETECTOR_extern_extern                 ()
#define ML99_PRIV_DETECTOR_float_float                   ()
#define ML99_PRIV_DETECTOR_for_for                       ()
#define ML99_PRIV_DETECTOR_goto_goto                     ()
#define ML99_PRIV_DETECTOR_if_if                         ()
#define ML99_PRIV_DETECTOR_inline_inline                 ()
#define ML99_PRIV_DETECTOR_int_int                       ()
#define ML99_PRIV_DETECTOR_long_long                     ()
#define ML99_PRIV_DETECTOR_register_register             ()
#define ML99_PRIV_DETECTOR_restrict_restrict             ()
#define ML99_PRIV_DETECTOR_return_return                 ()
#define ML99_PRIV_DETECTOR_short_short                   ()
#define ML99_PRIV_DETECTOR_signed_signed                 ()
#define ML99_PRIV_DETECTOR_sizeof_sizeof                 ()
#define ML99_PRIV_DETECTOR_static_static                 ()
#define ML99_PRIV_DETECTOR_struct_struct                 ()
#define ML99_PRIV_DETECTOR_switch_switch                 ()
#define ML99_PRIV_DETECTOR_typedef_typedef               ()
#define ML99_PRIV_DETECTOR_union_union                   ()
#define ML99_PRIV_DETECTOR_unsigned_unsigned             ()
#define ML99_PRIV_DETECTOR_void_void                     ()
#define ML99_PRIV_DETECTOR_volatile_volatile             ()
#define ML99_PRIV_DETECTOR_while_while                   ()
#define ML99_PRIV_DETECTOR__Alignas__Alignas             ()
#define ML99_PRIV_DETECTOR__Alignof__Alignof             ()
#define ML99_PRIV_DETECTOR__Atomic__Atomic               ()
#define ML99_PRIV_DETECTOR__Bool__Bool                   ()
#define ML99_PRIV_DETECTOR__Complex__Complex             ()
#define ML99_PRIV_DETECTOR__Generic__Generic             ()
#define ML99_PRIV_DETECTOR__Imaginary__Imaginary         ()
#define ML99_PRIV_DETECTOR__Noreturn__Noreturn           ()
#define ML99_PRIV_DETECTOR__Static_assert__Static_assert ()
#define ML99_PRIV_DETECTOR__Thread_local__Thread_local   ()

// Handles the underscore character (_).
#define ML99_PRIV_DETECTOR____ ()

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
#define ML99_uncomma_ARITY   1

#define ML99_PRIV_flip_ARITY 3
// }

#endif // DOXYGEN_IGNORE

#endif // ML99_UTIL_H
