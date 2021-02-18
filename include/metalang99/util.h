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
#define METALANG99_catEval(x, y) METALANG99_call(METALANG99_catEval, x, y)

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
#define METALANG99_cat(x, y) METALANG99_call(METALANG99_cat, x, y)

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
#define METALANG99_empty() METALANG99_callTrivial(METALANG99_empty, )

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
#define METALANG99_const(x, a) METALANG99_call(METALANG99_const, x, a)

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
#define METALANG99_const2(x, a, b) METALANG99_call(METALANG99_const2, x, a, b)

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
#define METALANG99_const3(x, a, b, c) METALANG99_call(METALANG99_const3, x, a, b, c)

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
#define METALANG99_putBefore(right, x) METALANG99_call(METALANG99_putBefore, right, x)

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
#define METALANG99_putAfter(left, x) METALANG99_call(METALANG99_putAfter, left, x)

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
#define METALANG99_putBetween(left, right, x) METALANG99_call(METALANG99_putBetween, left, right, x)

/**
 * Evaluates to `_x`.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/util.h>
 *
 * // _123
 * M_leftUnderscored(v(123))
 * @endcode
 */
#define METALANG99_leftUnderscored(x) METALANG99_call(METALANG99_leftUnderscored, x)

/**
 * Evaluates to `x_`.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/util.h>
 *
 * // 123_
 * M_rightUnderscored(v(123))
 * @endcode
 */
#define METALANG99_rightUnderscored(x) METALANG99_call(METALANG99_rightUnderscored, x)

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
 * A convenience macro to emphasise that your metafunction expands to more than one term.
 *
 * This macro just expands to provided arguments.
 *
 * # Examples
 *
 * @code
 * #define F_IMPL(x) M_terms(v(1), v(x), v(2))
 * @endcode
 */
#define METALANG99_terms(...) __VA_ARGS__

/**
 * Constructs a stateful function out of the stateless @p f.
 *
 * @note the returned metafunction has the arity of 2 (a state + variadic arguments).
 */
#define METALANG99_stateless(f) METALANG99_call(METALANG99_stateless, f)

/**
 * The same as #METALANG99_stateless but the returned metafunction has the arity of 3 (a state + `a`
 * + variadic arguments).
 */
#define METALANG99_stateless2(f) METALANG99_call(METALANG99_stateless2, f)

/**
 * The same as #METALANG99_stateless but the returned metafunction has the arity of 4 (a state + `a`
 * + `b` + variadic arguments).
 */
#define METALANG99_stateless3(f) METALANG99_call(METALANG99_stateless3, f)

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

/**
 * Introduces the variable definition @p var_def to a statement right after its invocation.
 *
 * An invocation of #METALANG99_introduceVarToStmt together with a statement right after it form a
 * single statement.
 *
 * This macro is useful when you want to generate a sequence of variable definitions inside your
 * macro, but at the same time stick to the following syntax:
 *
 * @code
 * macro(a, b, c) { ... }
 * @endcode
 *
 * Provided that `a`, `b`, and `c` stand for the identifiers of the defined variables, they will be
 * visible only inside a user-supplied statement `{ ... }` and not outside of it.
 *
 * # Example
 *
 * @code
 * for (int i = 0; i < 10; i++)
 *     M_introduceVarToStmt(double x = 5.0)
 *     M_introduceVarToStmt(double y = 7.0)
 *         printf("i = %d, x = %f, y = %f\n", i, x, y);
 * @endcode
 *
 * @note This macro does not expand to an Metalang99 term: it is rather an ordinary preprocessor
 * macro.
 */
#define METALANG99_introduceVarToStmt(var_def)                                                     \
    for (int metalang99_priv_break_for = 0; metalang99_priv_break_for != 1;)                       \
        for (var_def; metalang99_priv_break_for != 1; metalang99_priv_break_for = 1)
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
#define METALANG99_leftUnderscored_IMPL(x)         v(_##x)
#define METALANG99_rightUnderscored_IMPL(x)        v(x##_)
#define METALANG99_consume_IMPL(...)               v(METALANG99_consumePlain(__VA_ARGS__))
#define METALANG99_braced_IMPL(...)                v({__VA_ARGS__})

#define METALANG99_stateless_IMPL(f)                                                               \
    METALANG99_callTrivial(METALANG99_appl, METALANG99_PRIV_stateless, f)
#define METALANG99_PRIV_stateless_IMPL(f, _state, ...)                                             \
    METALANG99_terms(v(~, ), METALANG99_callTrivial(METALANG99_appl, f, __VA_ARGS__))

#define METALANG99_stateless2_IMPL(f)                                                              \
    METALANG99_callTrivial(METALANG99_appl, METALANG99_PRIV_stateless2, f)
#define METALANG99_PRIV_stateless2_IMPL(f, _state, a, ...)                                         \
    METALANG99_terms(v(~, ), METALANG99_callTrivial(METALANG99_appl2, f, a, __VA_ARGS__))

#define METALANG99_stateless3_IMPL(f)                                                              \
    METALANG99_callTrivial(METALANG99_appl, METALANG99_PRIV_stateless3, f)
#define METALANG99_PRIV_stateless3_IMPL(f, _state, a, b, ...)                                      \
    METALANG99_terms(v(~, ), METALANG99_callTrivial(METALANG99_appl3, f, a, b, __VA_ARGS__))
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
#define METALANG99_leftUnderscored_ARITY    1
#define METALANG99_rightUnderscored_ARITY   1
#define METALANG99_consume_ARITY            1
#define METALANG99_braced_ARITY             1
#define METALANG99_stateless_ARITY          1
#define METALANG99_stateless2_ARITY         1
#define METALANG99_stateless3_ARITY         1

#define METALANG99_PRIV_flip_ARITY       3
#define METALANG99_PRIV_stateless_ARITY  3
#define METALANG99_PRIV_stateless2_ARITY 4
#define METALANG99_PRIV_stateless3_ARITY 5
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
#define M_leftUnderscored    METALANG99_leftUnderscored
#define M_rightUnderscored   METALANG99_rightUnderscored
#define M_consume            METALANG99_consume
#define M_braced             METALANG99_braced
#define M_terms              METALANG99_terms
#define M_stateless          METALANG99_stateless
#define M_stateless2         METALANG99_stateless2
#define M_stateless3         METALANG99_stateless3
#define M_catPrimitive       METALANG99_catPrimitive
#define M_stringifyPrimitive METALANG99_stringifyPrimitive
#define M_semicolon          METALANG99_semicolon
#define M_introduceVarToStmt METALANG99_introduceVarToStmt

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
