/**
 * @file
 * Utilitary stuff.
 */

#ifndef METALANG99_UTIL_H
#define METALANG99_UTIL_H

#include <metalang99/lang.h>
#include <metalang99/priv/compiler_attr.h>

// Desugaring {
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
 * M_catEval(v(ABC), v(123))
 *
 * // ERROR: 123ABC is not a valid Metalang99 term.
 * M_catEval(v(123), v(ABC))
 * @endcode
 */
#define METALANG99_catEval(x, y) METALANG99_call(METALANG99_catEval, x y)

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
 * M_cat(v(ABC), v(123))
 *
 * // 123ABC
 * M_cat(v(123), v(ABC))
 * @endcode
 */
#define METALANG99_cat(x, y) METALANG99_call(METALANG99_cat, x y)

/**
 * Stringifies provided arguments.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/util.h>
 *
 * // "Billie Jean"
 * M_stringify(v(Billie Jean))
 * @endcode
 */
#define METALANG99_stringify(...) METALANG99_call(METALANG99_stringify, __VA_ARGS__)

/**
 * Evaluates to nothing.
 */
#define METALANG99_empty() METALANG99_call(METALANG99_empty, )

/**
 * Evaluates to its arguments.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/util.h>
 *
 * // 1, 2, 3
 * M_id(v(1, 2, 3))
 * @endcode
 */
#define METALANG99_id(...) METALANG99_call(METALANG99_id, __VA_ARGS__)

/**
 * Transforms a sequence of arguments into a parenthesised normal form.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/util.h>
 *
 * // (v(1, 2, 3))
 * M_parenthesiseEval(v(1, 2, 3))
 * @endcode
 */
#define METALANG99_parenthesiseEval(...) METALANG99_call(METALANG99_parenthesiseEval, __VA_ARGS__)

/**
 * Parenthesises a sequence of arguments.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/util.h>
 *
 * // (1, 2, 3)
 * M_parenthesise(v(1, 2, 3))
 * @endcode
 */
#define METALANG99_parenthesise(...) METALANG99_call(METALANG99_parenthesise, __VA_ARGS__)

/**
 * Unparenthesises a sequence of arguments and evaluates the result.
 *
 * If @p x begins with an opening parenthesis, it must also end with a closing parenthesis, e.g. `()
 * 123` is disallowed.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/util.h>
 *
 * // 1, 2, 3
 * M_unparenthesiseEval(v((v(1, 2, 3))))
 * @endcode
 */
#define METALANG99_unparenthesiseEval(x) METALANG99_call(METALANG99_unparenthesiseEval, x)

/**
 * Unparenthesises a sequence of arguments, leaving the result unevaluated.
 *
 * If @p x begins with an opening parenthesis, it must also end with a closing parenthesis, e.g. `()
 * 123` is disallowed.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/util.h>
 *
 * // 1, 2, 3
 * M_unparenthesise(v((1, 2, 3)))
 * @endcode
 */
#define METALANG99_unparenthesise(x) METALANG99_call(METALANG99_unparenthesise, x)

/**
 * Tests whether @p x is inside parentheses or not.
 *
 * If @p x begins with an opening parenthesis, it must also end with a closing parenthesis, e.g. `()
 * 123` is disallowed.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/util.h>
 *
 * // 0
 * M_isParenthesised(v(123))
 *
 * // 1
 * M_isParenthesised(v((123)))
 * @endcode
 */
#define METALANG99_isParenthesised(x) METALANG99_call(METALANG99_isParenthesised, x)

/**
 * The inverse of #METALANG99_isParenthesised.
 *
 * If @p x begins with an opening parenthesis, it must also end with a closing parenthesis, e.g. `()
 * 123` is disallowed.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/util.h>
 *
 * // 1
 * M_isUnparenthesised(v(123))
 *
 * // 0
 * M_isUnparenthesised(v((123)))
 * @endcode
 */
#define METALANG99_isUnparenthesised(x) METALANG99_call(METALANG99_isUnparenthesised, x)

/**
 * Evaluates to @p x, skipping @p a.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/util.h>
 *
 * // 123
 * M_const(v(123), v(5))
 * @endcode
 */
#define METALANG99_const(x, a) METALANG99_call(METALANG99_const, x a)

/**
 * Evaluates to @p x, skipping @p a, and @p b.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/util.h>
 *
 * // 123
 * M_const2(v(123), v(5), v(6))
 * @endcode
 */
#define METALANG99_const2(x, a, b) METALANG99_call(METALANG99_const2, x a b)

/**
 * Evaluates to @p x, skipping @p a, @p b, and @p c.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/util.h>
 *
 * // 123
 * M_const3(v(123), v(5), v(6), v(7))
 * @endcode
 */
#define METALANG99_const3(x, a, b, c) METALANG99_call(METALANG99_const3, x a b c)

/**
 * Reverses the order of arguments of the binary function @p f.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/util.h>
 *
 * // ABC123
 * M_appl2(M_flip(v(M_catUnevaluated)), v(123), v(ABC))
 * @endcode
 */
#define METALANG99_flip(f) METALANG99_call(METALANG99_flip, f)

/**
 * Puts @p x before @p right.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/util.h>
 *
 * // ! 0
 * M_putBefore(v(0), v(!))
 * @endcode
 */
#define METALANG99_putBefore(right, x) METALANG99_call(METALANG99_putBefore, right x)

/**
 * Puts @p x after @p left.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/util.h>
 *
 * // ! 0
 * M_putAfter(v(!), v(0))
 * @endcode
 */
#define METALANG99_putAfter(left, x) METALANG99_call(METALANG99_putAfter, left x)

/**
 * Puts @p x between @p left and @p right.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/util.h>
 *
 * // 16 + 9
 * M_putBetween(v(16), v(9), v(+))
 * @endcode
 */
#define METALANG99_putBetween(left, right, x) METALANG99_call(METALANG99_putBetween, left right x)

/**
 * Consumes all its arguments and expands to emptiness.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/util.h>
 *
 * // M_empty()
 * M_consume(v(1, 2, 3))
 * @endcode
 */
#define METALANG99_consume(...) METALANG99_call(METALANG99_consume, __VA_ARGS__)

/**
 * Puts provided arguments into braces.
 *
 * Some code formatters behave strangely when encounter braces in macros (in different places) --
 * this is why this macro exists.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/util.h>
 *
 * // { int a, b, c; }
 * M_braced(v(int a, b, c;))
 * @endcode
 */
#define METALANG99_braced(...) METALANG99_call(METALANG99_braced, __VA_ARGS__)

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
 * M_catPrimitive(ABC, 123)
 * @endcode
 *
 * @note This macro does not expand to an Metalang99 term: it is rather an ordinary preprocessor
 * macro.
 */
#define METALANG99_catPrimitive(x, y) x##y

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
 * M_stringifyPrimitive(ABC)
 * @endcode
 *
 * @note This macro does not expand to an Metalang99 term: it is rather an ordinary preprocessor
 * macro.
 */
#define METALANG99_stringifyPrimitive(...) #__VA_ARGS__

/**
 * Forces to put a semicolon after itself.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/util.h>
 *
 * M_semicolon();
 * @endcode
 *
 * This macro is often useful when you want a user to put a semicolon after invocation of your
 * macro:
 *
 * @code
 * #include <metalang99/util.h>
 *
 * #define WHEN(command, handler, ...) \
 *     if (incoming_command == command) { handler(__VA_ARGS__); } M_semicolon()
 *
 * WHEN(SomeCommand, handler, 1, 2, 3);
 * @endcode
 *
 * @note This macro does not expand to an Metalang99 term: it is rather an ordinary preprocessor
 * macro.
 * @note This macro can be used both inside and outside of function bodies, in contrast to the `do {
 * ... } while(0)` idiom. Technically, this macro just expands to an unused static variable
 * declaration.
 */
#define METALANG99_semicolon()                                                                     \
    static const char METALANG99_PRIV_CAT(metalang99_semicolon_, __LINE__)                         \
        METALANG99_PRIV_COMPILER_ATTR_UNUSED

/**
 * The plain version of #METALANG99_cat.
 */
#define METALANG99_catPlain(x, y) METALANG99_catPrimitive(x, y)

/**
 * The plain version of #METALANG99_stringify.
 */
#define METALANG99_stringifyPlain(...) METALANG99_stringifyPrimitive(__VA_ARGS__)

/**
 * The plain version of #METALANG99_empty.
 */
#define METALANG99_emptyPlain()

/**
 * The plain version of #METALANG99_id.
 */
#define METALANG99_idPlain(...) __VA_ARGS__

/**
 * The plain version of #METALANG99_parenthesise.
 */
#define METALANG99_parenthesisePlain(...) (__VA_ARGS__)

/**
 * The plain version of #METALANG99_unparenthesise.
 */
#define METALANG99_unparenthesisePlain(x) METALANG99_PRIV_UNPARENTHESISE(x)

/**
 * The plain version of #METALANG99_isParenthesised.
 */
#define METALANG99_isParenthesisedPlain(x) METALANG99_PRIV_IS_PARENTHESISED(x)

/**
 * The plain version of #METALANG99_isUnparenthesised.
 */
#define METALANG99_isUnparenthesisedPlain(x) METALANG99_PRIV_IS_UNPARENTHESISED(x)

/**
 * The plain version of #METALANG99_consume.
 */
#define METALANG99_consumePlain(...)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define METALANG99_catEval_IMPL(x, y)              x##y
#define METALANG99_cat_IMPL(x, y)                  v(METALANG99_catPlain(x, y))
#define METALANG99_stringify_IMPL(...)             v(METALANG99_stringifyPlain(__VA_ARGS__))
#define METALANG99_empty_IMPL()                    v(METALANG99_emptyPlain())
#define METALANG99_id_IMPL(...)                    v(METALANG99_idPlain(__VA_ARGS__))
#define METALANG99_parenthesiseEval_IMPL(...)      v((v(__VA_ARGS__)))
#define METALANG99_parenthesise_IMPL(...)          v(METALANG99_parenthesisePlain(__VA_ARGS__))
#define METALANG99_unparenthesiseEval_IMPL(x)      METALANG99_PRIV_UNPARENTHESISE(x)
#define METALANG99_unparenthesise_IMPL(x)          v(METALANG99_unparenthesisePlain(x))
#define METALANG99_isParenthesised_IMPL(x)         v(METALANG99_isParenthesisedPlain(x))
#define METALANG99_isUnparenthesised_IMPL(x)       v(METALANG99_isUnparenthesisedPlain(x))
#define METALANG99_const_IMPL(x, _a)               v(x)
#define METALANG99_const2_IMPL(x, _a, _b)          v(x)
#define METALANG99_const3_IMPL(x, _a, _b, _c)      v(x)
#define METALANG99_flip_IMPL(f)                    METALANG99_callTrivial(METALANG99_appl, METALANG99_PRIV_flip, f)
#define METALANG99_PRIV_flip_IMPL(f, a, b)         METALANG99_callTrivial(METALANG99_appl2, f, b, a)
#define METALANG99_putBefore_IMPL(right, x)        v(x right)
#define METALANG99_putAfter_IMPL(left, x)          v(left x)
#define METALANG99_putBetween_IMPL(left, right, x) v(left x right)
#define METALANG99_consume_IMPL(...)               v(METALANG99_consumePlain(__VA_ARGS__))
#define METALANG99_braced_IMPL(...)                v({__VA_ARGS__})
// }

// Arity specifiers {
#define METALANG99_catEval_ARITY            2
#define METALANG99_cat_ARITY                2
#define METALANG99_stringify_ARITY          1
#define METALANG99_empty_ARITY              1
#define METALANG99_id_ARITY                 1
#define METALANG99_parenthesise_ARITY       1
#define METALANG99_unparenthesise_ARITY     1
#define METALANG99_unparenthesiseEval_ARITY 1
#define METALANG99_parenthesiseEval_ARITY   1
#define METALANG99_isUnparenthesised_ARITY  1
#define METALANG99_isParenthesised_ARITY    1
#define METALANG99_const_ARITY              2
#define METALANG99_const2_ARITY             3
#define METALANG99_const3_ARITY             4
#define METALANG99_flip_ARITY               1
#define METALANG99_putBefore_ARITY          2
#define METALANG99_putAfter_ARITY           2
#define METALANG99_putBetween_ARITY         3
#define METALANG99_consume_ARITY            1
#define METALANG99_braced_ARITY             1

#define METALANG99_PRIV_flip_ARITY 3
// }

// Aliases {
#ifndef METALANG99_NO_SMALL_PREFIX

#define M_catEval            METALANG99_catEval
#define M_cat                METALANG99_cat
#define M_stringify          METALANG99_stringify
#define M_empty              METALANG99_empty
#define M_id                 METALANG99_id
#define M_parenthesiseEval   METALANG99_parenthesiseEval
#define M_parenthesise       METALANG99_parenthesise
#define M_unparenthesiseEval METALANG99_unparenthesiseEval
#define M_unparenthesise     METALANG99_unparenthesise
#define M_isParenthesised    METALANG99_isParenthesised
#define M_isUnparenthesised  METALANG99_isUnparenthesised
#define M_const              METALANG99_const
#define M_const2             METALANG99_const2
#define M_const3             METALANG99_const3
#define M_flip               METALANG99_flip
#define M_putBefore          METALANG99_putBefore
#define M_putAfter           METALANG99_putAfter
#define M_putBetween         METALANG99_putBetween
#define M_consume            METALANG99_consume
#define M_braced             METALANG99_braced
#define M_catPrimitive       METALANG99_catPrimitive
#define M_stringifyPrimitive METALANG99_stringifyPrimitive
#define M_semicolon          METALANG99_semicolon

#define M_catPlain               METALANG99_catPlain
#define M_stringifyPlain         METALANG99_stringifyPlain
#define M_emptyPlain             METALANG99_emptyPlain
#define M_idPlain                METALANG99_idPlain
#define M_parenthesisePlain      METALANG99_parenthesisePlain
#define M_unparenthesisePlain    METALANG99_unparenthesisePlain
#define M_isParenthesisedPlain   METALANG99_isParenthesisedPlain
#define M_isUnparenthesisedPlain METALANG99_isUnparenthesisedPlain
#define M_consumePlain           METALANG99_consumePlain

#endif // METALANG99_NO_SMALL_PREFIX
// }

#endif // DOXYGEN_IGNORE

#endif // METALANG99_UTIL_H
