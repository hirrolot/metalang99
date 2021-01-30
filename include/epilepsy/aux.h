/**
 * @file
 * Auxiliary macros.
 */

#ifndef EPILEPSY_AUX_H
#define EPILEPSY_AUX_H

#include <epilepsy/lang.h>
#include <epilepsy/priv/compiler_attr.h>

// Desugaring {
/**
 * Concatenates @p x with @p y and evaluates the result.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/aux.h>
 *
 * #define ABC123 v(Billie Jean)
 *
 * // Billie Jean
 * E_catEval(v(ABC), v(123))
 *
 * // ERROR: 123ABC is not a valid Epilepsy term.
 * E_catEval(v(123), v(ABC))
 * @endcode
 */
#define EPILEPSY_catEval(x, y) EPILEPSY_call(EPILEPSY_catEval, x y)

/**
 * Concatenates @p x with @p y, leaving the result unevaluated.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/aux.h>
 *
 * #define ABC123 Billie Jean
 *
 * // Billie Jean
 * E_cat(v(ABC), v(123))
 *
 * // 123ABC
 * E_cat(v(123), v(ABC))
 * @endcode
 */
#define EPILEPSY_cat(x, y) EPILEPSY_call(EPILEPSY_cat, x y)

/**
 * Stringifies @p x.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/aux.h>
 *
 * // "Billie Jean"
 * E_stringify(v(Billie Jean))
 * @endcode
 */
#define EPILEPSY_stringify(x) EPILEPSY_call(EPILEPSY_stringify, x)

/**
 * Evaluates to nothing.
 */
#define EPILEPSY_empty() EPILEPSY_call(EPILEPSY_empty, )

/**
 * Evaluates to its arguments.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/aux.h>
 *
 * // 1, 2, 3
 * E_id(v(1, 2, 3))
 * @endcode
 */
#define EPILEPSY_id(...) EPILEPSY_call(EPILEPSY_id, __VA_ARGS__)

/**
 * Transforms a sequence of arguments into a parenthesised normal form.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/aux.h>
 *
 * // (v(1, 2, 3))
 * E_parenthesiseEval(v(1, 2, 3))
 * @endcode
 */
#define EPILEPSY_parenthesiseEval(...) EPILEPSY_call(EPILEPSY_parenthesiseEval, __VA_ARGS__)

/**
 * Parenthesises a sequence of arguments.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/aux.h>
 *
 * // (1, 2, 3)
 * E_parenthesise(v(1, 2, 3))
 * @endcode
 */
#define EPILEPSY_parenthesise(...) EPILEPSY_call(EPILEPSY_parenthesise, __VA_ARGS__)

/**
 * Unparenthesises a sequence of arguments and evaluates the result.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/aux.h>
 *
 * // 1, 2, 3
 * E_unparenthesiseEval(v((v(1, 2, 3))))
 * @endcode
 */
#define EPILEPSY_unparenthesiseEval(x) EPILEPSY_call(EPILEPSY_unparenthesiseEval, x)

/**
 * Unparenthesises a sequence of arguments, leaving the result unevaluated.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/aux.h>
 *
 * // 1, 2, 3
 * E_unparenthesise(v((1, 2, 3)))
 * @endcode
 */
#define EPILEPSY_unparenthesise(x) EPILEPSY_call(EPILEPSY_unparenthesise, x)

/**
 * Evaluates to @p x, skipping @p a.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/aux.h>
 *
 * // 123
 * E_const(v(123), v(5))
 * @endcode
 */
#define EPILEPSY_const(x, a) EPILEPSY_call(EPILEPSY_const, x a)

/**
 * Evaluates to @p x, skipping @p a, and @p b.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/aux.h>
 *
 * // 123
 * E_const2(v(123), v(5), v(6))
 * @endcode
 */
#define EPILEPSY_const2(x, a, b) EPILEPSY_call(EPILEPSY_const2, x a b)

/**
 * Evaluates to @p x, skipping @p a, @p b, and @p c.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/aux.h>
 *
 * // 123
 * E_const3(v(123), v(5), v(6), v(7))
 * @endcode
 */
#define EPILEPSY_const3(x, a, b, c) EPILEPSY_call(EPILEPSY_const3, x a b c)

/**
 * Reverses the order of arguments of the binary function @p f.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/aux.h>
 *
 * // ABC123
 * E_appl2(E_flip(v(E_catUnevaluated)), v(123), v(ABC))
 * @endcode
 */
#define EPILEPSY_flip(f) EPILEPSY_call(EPILEPSY_flip, f)

/**
 * Puts @p x before @p right.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/aux.h>
 *
 * // ! 0
 * E_putBefore(v(0), v(!))
 * @endcode
 */
#define EPILEPSY_putBefore(right, x) EPILEPSY_call(EPILEPSY_putBefore, right x)

/**
 * Puts @p x after @p left.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/aux.h>
 *
 * // ! 0
 * E_putAfter(v(!), v(0))
 * @endcode
 */
#define EPILEPSY_putAfter(left, x) EPILEPSY_call(EPILEPSY_putAfter, left x)

/**
 * Puts @p x between @p left and @p right.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/aux.h>
 *
 * // 16 + 9
 * E_putBetween(v(16), v(9), v(+))
 * @endcode
 */
#define EPILEPSY_putBetween(left, right, x) EPILEPSY_call(EPILEPSY_putBetween, left right x)

/**
 * Tests whether @p x is inside parentheses or not.
 *
 * If @p x begins with an opening parenthesis, it must also end with a closing parenthesis, e.g. `()
 * 123` is disallowed.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/aux.h>
 *
 * // 0
 * E_isParenthesised(v(123))
 *
 * // 1
 * E_isParenthesised(v((123)))
 * @endcode
 */
#define EPILEPSY_isParenthesised(x) EPILEPSY_call(EPILEPSY_isParenthesised, x)

/**
 * The inverse of #EPILEPSY_isParenthesised.
 *
 * If @p x begins with an opening parenthesis, it must also end with a closing parenthesis, e.g. `()
 * 123` is disallowed.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/aux.h>
 *
 * // 1
 * E_isUnparenthesised(v(123))
 *
 * // 0
 * E_isUnparenthesised(v((123)))
 * @endcode
 */
#define EPILEPSY_isUnparenthesised(x) EPILEPSY_call(EPILEPSY_isUnparenthesised, x)

/**
 * Concatenates @p x with @p y as-is, without expanding them.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/aux.h>
 *
 * // This macro will not be expanded.
 * #define ABC 7
 *
 * // ABC123
 * E_catPrimitive(ABC, 123)
 * @endcode
 *
 * @note This macro does not expand to an Epilepsy term: it is rather an ordinary preprocessor
 * macro.
 */
#define EPILEPSY_catPrimitive(x, y) x##y

/**
 * Stringifies @p x as-is, without expanding it.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/aux.h>
 *
 * // This macro will not be expanded.
 * #define ABC 7
 *
 * // "ABC"
 * E_stringifyPrimitive(ABC)
 * @endcode
 *
 * @note This macro does not expand to an Epilepsy term: it is rather an ordinary preprocessor
 * macro.
 */
#define EPILEPSY_stringifyPrimitive(x) #x

/**
 * Forces to put a semicolon after itself.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/aux.h>
 *
 * E_semicolon();
 * @endcode
 *
 * This macro is often useful when you want a user to put a semicolon after invocation of your
 * macro:
 *
 * @code
 * #include <epilepsy/aux.h>
 *
 * #define WHEN(command, handler, ...) \
 *     if (incoming_command == command) { handler(__VA_ARGS__); } E_semicolon()
 *
 * WHEN(SomeCommand, handler, 1, 2, 3);
 * @endcode
 *
 * @note This macro does not expand to an Epilepsy term: it is rather an ordinary preprocessor
 * macro.
 * @note This macro can be used both inside and outside of function bodies, in contrast to the `do {
 * ... } while(0)` idiom. Technically, this macro just expands to an unused static variable
 * declaration.
 */
#define EPILEPSY_semicolon()                                                                       \
    static const char EPILEPSY_PRIV_CAT(epilepsy_semicolon_, __LINE__)                             \
        EPILEPSY_PRIV_COMPILER_ATTR_UNUSED
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define EPILEPSY_catEval_IMPL(x, y)              x##y
#define EPILEPSY_cat_IMPL(x, y)                  v(x##y)
#define EPILEPSY_stringify_IMPL(x)               v(#x)
#define EPILEPSY_empty_IMPL()                    v()
#define EPILEPSY_id_IMPL(...)                    v(__VA_ARGS__)
#define EPILEPSY_parenthesiseEval_IMPL(...)      v((v(__VA_ARGS__)))
#define EPILEPSY_parenthesise_IMPL(...)          v((__VA_ARGS__))
#define EPILEPSY_unparenthesiseEval_IMPL(x)      EPILEPSY_PRIV_UNPARENTHESISE(x)
#define EPILEPSY_unparenthesise_IMPL(x)          v(EPILEPSY_PRIV_UNPARENTHESISE(x))
#define EPILEPSY_const_IMPL(x, _a)               v(x)
#define EPILEPSY_const2_IMPL(x, _a, _b)          v(x)
#define EPILEPSY_const3_IMPL(x, _a, _b, _c)      v(x)
#define EPILEPSY_flip_IMPL(f)                    EPILEPSY_appl(v(EPILEPSY_PRIV_flip), v(f))
#define EPILEPSY_PRIV_flip_IMPL(f, a, b)         E_appl2(v(f), v(b), v(a))
#define EPILEPSY_putBefore_IMPL(right, x)        v(x right)
#define EPILEPSY_putAfter_IMPL(left, x)          v(left x)
#define EPILEPSY_putBetween_IMPL(left, right, x) v(left x right)
#define EPILEPSY_isParenthesised_IMPL(x)         v(EPILEPSY_PRIV_NOT(EPILEPSY_PRIV_IS_UNPARENTHESISED(x)))
#define EPILEPSY_isUnparenthesised_IMPL(x)       v(EPILEPSY_PRIV_IS_UNPARENTHESISED(x))
// }

// Arity specifiers {
#define EPILEPSY_catEval_ARITY            2
#define EPILEPSY_cat_ARITY                2
#define EPILEPSY_stringify_ARITY          1
#define EPILEPSY_empty_ARITY              1
#define EPILEPSY_id_ARITY                 1
#define EPILEPSY_parenthesise_ARITY       1
#define EPILEPSY_unparenthesise_ARITY     1
#define EPILEPSY_unparenthesiseEval_ARITY 1
#define EPILEPSY_parenthesiseEval_ARITY   1
#define EPILEPSY_const_ARITY              2
#define EPILEPSY_const2_ARITY             3
#define EPILEPSY_const3_ARITY             4
#define EPILEPSY_flip_ARITY               1
#define EPILEPSY_putBefore_ARITY          2
#define EPILEPSY_putAfter_ARITY           2
#define EPILEPSY_putBetween_ARITY         3
#define EPILEPSY_isParenthesised_ARITY    1
#define EPILEPSY_isUnparenthesised_ARITY  1

#define EPILEPSY_PRIV_flip_ARITY 3
// }

// Aliases {
#ifndef EPILEPSY_NO_SMALL_PREFIX

#define E_catEval            EPILEPSY_catEval
#define E_cat                EPILEPSY_cat
#define E_stringify          EPILEPSY_stringify
#define E_empty              EPILEPSY_empty
#define E_id                 EPILEPSY_id
#define E_parenthesiseEval   EPILEPSY_parenthesiseEval
#define E_unparenthesiseEval EPILEPSY_unparenthesiseEval
#define E_unparenthesise     EPILEPSY_unparenthesise
#define E_parenthesise       EPILEPSY_parenthesise
#define E_const              EPILEPSY_const
#define E_const2             EPILEPSY_const2
#define E_const3             EPILEPSY_const3
#define E_flip               EPILEPSY_flip
#define E_putBefore          EPILEPSY_putBefore
#define E_putAfter           EPILEPSY_putAfter
#define E_putBetween         EPILEPSY_putBetween
#define E_isParenthesised    EPILEPSY_isParenthesised
#define E_isUnparenthesised  EPILEPSY_isUnparenthesised
#define E_catPrimitive       EPILEPSY_catPrimitive
#define E_stringifyPrimitive EPILEPSY_stringifyPrimitive
#define E_semicolon          EPILEPSY_semicolon

#endif // EPILEPSY_NO_SMALL_PREFIX
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_AUX_H
