/**
 * @file
 * Utilitary stuff.
 */

#ifndef ML99_UTIL_H
#define ML99_UTIL_H

#include <metalang99/priv/util.h>

#include <metalang99/lang.h>

/**
 * Concatenates @p a with @p b and evaluates the result.
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
#define ML99_catEval(a, b) ML99_call(ML99_catEval, a, b)

/**
 * Concatenates @p a with @p b, leaving the result unevaluated.
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
#define ML99_cat(a, b) ML99_call(ML99_cat, a, b)

/**
 * The same as #ML99_cat but deals with 3 parameters.
 */
#define ML99_cat3(a, b, c) ML99_call(ML99_cat, a, b, c)

/**
 * The same as #ML99_cat but deals with 4 parameters.
 */
#define ML99_cat4(a, b, c, d) ML99_call(ML99_cat, a, b, c, d)

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
 * Turns @p f into a Metalang99-compliant metafunction with the arity of 1, which can be then called
 * by #ML99_appl.
 *
 * @p f can be any C function or function-like macro.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/util.h>
 * #include <metalang99/variadics.h>
 *
 * #define F(x) @x
 *
 * // @1 @2 @3
 * ML99_variadicsForEach(ML99_reify(v(F)), v(1, 2, 3))
 * @endcode
 *
 * Without #ML99_reify, you would need to write some additional boilerplate:
 *
 * @code
 * #define F_IMPL(x) v(@x)
 * #define F_ARITY   1
 * @endcode
 */
#define ML99_reify(f) ML99_call(ML99_reify, f)

/**
 * Concatenates @p a with @p b as-is, without expanding them.
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
#define ML99_CAT_PRIMITIVE(a, b) a##b

/**
 * The same as #ML99_CAT_PRIMITIVE but deals with 3 parameters.
 */
#define ML99_CAT3_PRIMITIVE(a, b, c) a##b##c

/**
 * The same as #ML99_CAT_PRIMITIVE but deals with 4 parameters.
 */
#define ML99_CAT4_PRIMITIVE(a, b, c, d) a##b##c##d

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
 * If `ML99_cat(prefix, ident)` exists, it must be an object-like macro which expands to `()`. If
 * so, `ML99_detectIdent(prefix, ident)` will expand to truth, otherwise (`ML99_cat(prefix, ident)`
 * does **not** exist), `ML99_detectIdent(prefix, ident)` will expand to falsehood.
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
 * ML99_detectIdent(v(FOO_), v(x))
 *
 * // 1
 * ML99_detectIdent(v(FOO_), v(y))
 *
 * // 0
 * ML99_detectIdent(v(FOO_), v(z))
 * @endcode
 */
#define ML99_detectIdent(prefix, ident) ML99_call(ML99_detectIdent, prefix, ident)

/**
 * Compares two identifiers @p x and @p y for equality.
 *
 * This macro is a shortcut to `ML99_detectIdent(ML99_cat3(prefix, x, v(_)), y)`.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/util.h>
 *
 * #define FOO_x_x ()
 * #define FOO_y_y ()
 *
 * // 1
 * ML99_identEq(v(FOO_), v(x), v(x))
 *
 * // 1
 * ML99_identEq(v(FOO_), v(y), v(y))
 *
 * // 0
 * ML99_identEq(v(FOO_), v(x), v(y))
 * @endcode
 */
#define ML99_identEq(prefix, x, y) ML99_call(ML99_identEq, prefix, x, y)

/**
 * Expands to the predefined detector prefix of C keywords, which can be passed to #ML99_identEq.
 *
 * It can handle all the <a href="https://en.cppreference.com/w/c/keyword">C11 keywords</a>.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/util.h>
 *
 * // 1
 * ML99_identEq(v(ML99_C_KEYWORD_DETECTOR), v(while), v(while))
 * @endcode
 */
#define ML99_C_KEYWORD_DETECTOR ML99_PRIV_C_KEYWORD_DETECTOR_

/**
 * Expands to the predefined detector prefix of the underscore character (`_`), which can be passed
 * to #ML99_detectIdent.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/util.h>
 *
 * // 1
 * ML99_detectIdent(v(ML99_UNDERSCORE_DETECTOR), v(_))
 * @endcode
 */
#define ML99_UNDERSCORE_DETECTOR ML99_PRIV_UNDERSCORE_DETECTOR_

/**
 * If you are compiling on GCC, this macro expands to `_Pragma(str)`, otherwise to emptiness.
 */
#define ML99_GCC_PRAGMA(str) ML99_PRIV_GCC_PRAGMA(str)

/**
 * If you are compiling on Clang, this macro expands to `_Pragma(str)`, otherwise to emptiness.
 */
#define ML99_CLANG_PRAGMA(str) ML99_PRIV_CLANG_PRAGMA(str)

#define ML99_CAT(a, b)        ML99_CAT_PRIMITIVE(a, b)
#define ML99_CAT3(a, b, c)    ML99_CAT3_PRIMITIVE(a, b, c)
#define ML99_CAT4(a, b, c, d) ML99_CAT4_PRIMITIVE(a, b, c, d)
#define ML99_STRINGIFY(...)   ML99_STRINGIFY_PRIMITIVE(__VA_ARGS__)
#define ML99_EMPTY(...)
#define ML99_ID(...)                     __VA_ARGS__
#define ML99_DETECT_IDENT(prefix, ident) ML99_PRIV_IS_TUPLE(ML99_CAT(prefix, ident))
#define ML99_IDENT_EQ(prefix, x, y)      ML99_DETECT_IDENT(ML99_CAT3(prefix, x, _), y)

#ifndef DOXYGEN_IGNORE

#define ML99_catEval_IMPL(a, b)              a##b
#define ML99_cat_IMPL(a, b)                  v(a##b)
#define ML99_cat3_IMPL(a, b, c)              v(a##b##c)
#define ML99_cat4_IMPL(a, b, c, d)           v(a##b##c##d)
#define ML99_stringify_IMPL(...)             v(ML99_STRINGIFY(__VA_ARGS__))
#define ML99_empty_IMPL(...)                 v(ML99_EMPTY())
#define ML99_id_IMPL(...)                    v(ML99_ID(__VA_ARGS__))
#define ML99_const_IMPL(x, _a)               v(x)
#define ML99_flip_IMPL(f)                    ML99_appl_IMPL(ML99_PRIV_flip, f)
#define ML99_PRIV_flip_IMPL(f, a, b)         ML99_appl2_IMPL(f, b, a)
#define ML99_uncomma_IMPL(...)               __VA_ARGS__
#define ML99_detectIdent_IMPL(prefix, ident) v(ML99_DETECT_IDENT(prefix, ident))
#define ML99_identEq_IMPL(prefix, x, y)      v(ML99_IDENT_EQ(prefix, x, y))

#define ML99_PRIV_C_KEYWORD_DETECTOR_auto_auto                     ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_break_break                   ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_case_case                     ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_char_char                     ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_const_const                   ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_continue_continue             ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_default_default               ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_do_do                         ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_double_double                 ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_else_else                     ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_enum_enum                     ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_extern_extern                 ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_float_float                   ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_for_for                       ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_goto_goto                     ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_if_if                         ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_inline_inline                 ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_int_int                       ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_long_long                     ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_register_register             ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_restrict_restrict             ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_return_return                 ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_short_short                   ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_signed_signed                 ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_sizeof_sizeof                 ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_static_static                 ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_struct_struct                 ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_switch_switch                 ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_typedef_typedef               ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_union_union                   ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_unsigned_unsigned             ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_void_void                     ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_volatile_volatile             ()
#define ML99_PRIV_C_KEYWORD_DETECTOR_while_while                   ()
#define ML99_PRIV_C_KEYWORD_DETECTOR__Alignas__Alignas             ()
#define ML99_PRIV_C_KEYWORD_DETECTOR__Alignof__Alignof             ()
#define ML99_PRIV_C_KEYWORD_DETECTOR__Atomic__Atomic               ()
#define ML99_PRIV_C_KEYWORD_DETECTOR__Bool__Bool                   ()
#define ML99_PRIV_C_KEYWORD_DETECTOR__Complex__Complex             ()
#define ML99_PRIV_C_KEYWORD_DETECTOR__Generic__Generic             ()
#define ML99_PRIV_C_KEYWORD_DETECTOR__Imaginary__Imaginary         ()
#define ML99_PRIV_C_KEYWORD_DETECTOR__Noreturn__Noreturn           ()
#define ML99_PRIV_C_KEYWORD_DETECTOR__Static_assert__Static_assert ()
#define ML99_PRIV_C_KEYWORD_DETECTOR__Thread_local__Thread_local   ()

#define ML99_PRIV_UNDERSCORE_DETECTOR__ ()

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
#define ML99_catEval_ARITY     2
#define ML99_cat_ARITY         2
#define ML99_cat3_ARITY        3
#define ML99_cat4_ARITY        4
#define ML99_stringify_ARITY   1
#define ML99_empty_ARITY       1
#define ML99_id_ARITY          1
#define ML99_const_ARITY       2
#define ML99_flip_ARITY        1
#define ML99_uncomma_ARITY     1
#define ML99_reify_ARITY       1
#define ML99_detectIdent_ARITY 2
#define ML99_identEq_ARITY     3

#define ML99_PRIV_flip_ARITY  3
#define ML99_PRIV_reify_ARITY 2
// }

#endif // DOXYGEN_IGNORE

#endif // ML99_UTIL_H
