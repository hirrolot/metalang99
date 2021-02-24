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
 * Transforms a sequence of arguments into a parenthesized normal form.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/util.h>
 *
 * // (v(1, 2, 3))
 * M_parenthesizeEval(v(1, 2, 3))
 * @endcode
 */
#define METALANG99_parenthesizeEval(...) METALANG99_call(METALANG99_parenthesizeEval, __VA_ARGS__)

/**
 * Parenthesises a sequence of arguments.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/util.h>
 *
 * // (1, 2, 3)
 * M_parenthesize(v(1, 2, 3))
 * @endcode
 */
#define METALANG99_parenthesize(...) METALANG99_call(METALANG99_parenthesize, __VA_ARGS__)

/**
 * Unparenthesizes a sequence of arguments and evaluates the result.
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
 * M_unparenthesizeEval(v((v(1, 2, 3))))
 * @endcode
 */
#define METALANG99_unparenthesizeEval(x) METALANG99_call(METALANG99_unparenthesizeEval, x)

/**
 * Unparenthesizes a sequence of arguments, leaving the result unevaluated.
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
 * M_unparenthesize(v((1, 2, 3)))
 * @endcode
 */
#define METALANG99_unparenthesize(x) METALANG99_call(METALANG99_unparenthesize, x)

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
 * M_isParenthesized(v(123))
 *
 * // 1
 * M_isParenthesized(v((123)))
 * @endcode
 */
#define METALANG99_isParenthesized(x) METALANG99_call(METALANG99_isParenthesized, x)

/**
 * The inverse of #METALANG99_isParenthesized.
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
 * M_isUnparenthesized(v(123))
 *
 * // 0
 * M_isUnparenthesized(v((123)))
 * @endcode
 */
#define METALANG99_isUnparenthesized(x) METALANG99_call(METALANG99_isUnparenthesized, x)

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
 * Generates a type definition.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/util.h>
 *
 * // typedef struct { int x, y; } Point;
 * M_typedef(v(Point), v(struct { int x, y; }))
 * @endcode
 */
#define METALANG99_typedef(ident, ...) METALANG99_call(METALANG99_typedef, ident, __VA_ARGS__)

/**
 * Generates a C structure.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/util.h>
 *
 * // struct Point { int x, y; }
 * M_struct(v(Point), v(int x, y;))
 * @endcode
 */
#define METALANG99_struct(ident, ...) METALANG99_call(METALANG99_struct, ident, __VA_ARGS__)

/**
 * Generates an anonymous C structure.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/util.h>
 *
 * // struct { int x, y; }
 * M_struct(v(int x, y;))
 * @endcode
 */
#define METALANG99_anonStruct(...) METALANG99_call(METALANG99_anonStruct, __VA_ARGS__)

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
 * The plain version of #METALANG99_parenthesize.
 */
#define METALANG99_parenthesizePlain(...) (__VA_ARGS__)

/**
 * The plain version of #METALANG99_unparenthesize.
 */
#define METALANG99_unparenthesizePlain(x) METALANG99_PRIV_EXPAND x

/**
 * The plain version of #METALANG99_isParenthesized.
 */
#define METALANG99_isParenthesizedPlain(x) METALANG99_PRIV_IS_PARENTHESIZED(x)

/**
 * The plain version of #METALANG99_isUnparenthesized.
 */
#define METALANG99_isUnparenthesizedPlain(x) METALANG99_PRIV_IS_UNPARENTHESIZED(x)

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
#define METALANG99_parenthesizeEval_IMPL(...)      v((v(__VA_ARGS__)))
#define METALANG99_parenthesize_IMPL(...)          v(METALANG99_parenthesizePlain(__VA_ARGS__))
#define METALANG99_unparenthesizeEval_IMPL(x)      METALANG99_PRIV_UNPARENTHESIZE(x)
#define METALANG99_unparenthesize_IMPL(x)          v(METALANG99_unparenthesizePlain(x))
#define METALANG99_isParenthesized_IMPL(x)         v(METALANG99_isParenthesizedPlain(x))
#define METALANG99_isUnparenthesized_IMPL(x)       v(METALANG99_isUnparenthesizedPlain(x))
#define METALANG99_const_IMPL(x, _a)               v(x)
#define METALANG99_flip_IMPL(f)                    METALANG99_callTrivial(METALANG99_appl, METALANG99_PRIV_flip, f)
#define METALANG99_PRIV_flip_IMPL(f, a, b)         METALANG99_callTrivial(METALANG99_appl2, f, b, a)
#define METALANG99_putBefore_IMPL(right, x)        v(x right)
#define METALANG99_putAfter_IMPL(left, x)          v(left x)
#define METALANG99_putBetween_IMPL(left, right, x) v(left x right)
#define METALANG99_leftUnderscored_IMPL(x)         v(_##x)
#define METALANG99_rightUnderscored_IMPL(x)        v(x##_)
#define METALANG99_consume_IMPL(...)               v(METALANG99_consumePlain(__VA_ARGS__))
#define METALANG99_braced_IMPL(...)                v({__VA_ARGS__})
#define METALANG99_typedef_IMPL(ident, ...)        v(typedef __VA_ARGS__ ident;)
#define METALANG99_struct_IMPL(ident, ...)         v(struct ident{__VA_ARGS__})
#define METALANG99_anonStruct_IMPL(...)            v(struct {__VA_ARGS__})
// }

// Arity specifiers {
#define METALANG99_catEval_ARITY            2
#define METALANG99_cat_ARITY                2
#define METALANG99_stringify_ARITY          1
#define METALANG99_empty_ARITY              1
#define METALANG99_id_ARITY                 1
#define METALANG99_parenthesize_ARITY       1
#define METALANG99_unparenthesize_ARITY     1
#define METALANG99_unparenthesizeEval_ARITY 1
#define METALANG99_parenthesizeEval_ARITY   1
#define METALANG99_isUnparenthesized_ARITY  1
#define METALANG99_isParenthesized_ARITY    1
#define METALANG99_const_ARITY              2
#define METALANG99_flip_ARITY               1
#define METALANG99_putBefore_ARITY          2
#define METALANG99_putAfter_ARITY           2
#define METALANG99_putBetween_ARITY         3
#define METALANG99_leftUnderscored_ARITY    1
#define METALANG99_rightUnderscored_ARITY   1
#define METALANG99_consume_ARITY            1
#define METALANG99_braced_ARITY             1
#define METALANG99_typedef_ARITY            2
#define METALANG99_struct_ARITY             2
#define METALANG99_anonStruct_ARITY         1

#define METALANG99_PRIV_flip_ARITY 3
// }

// Aliases {
#ifndef METALANG99_NO_SMALL_PREFIX

#define M_catEval            METALANG99_catEval
#define M_cat                METALANG99_cat
#define M_stringify          METALANG99_stringify
#define M_empty              METALANG99_empty
#define M_id                 METALANG99_id
#define M_parenthesizeEval   METALANG99_parenthesizeEval
#define M_parenthesize       METALANG99_parenthesize
#define M_unparenthesizeEval METALANG99_unparenthesizeEval
#define M_unparenthesize     METALANG99_unparenthesize
#define M_isParenthesized    METALANG99_isParenthesized
#define M_isUnparenthesized  METALANG99_isUnparenthesized
#define M_const              METALANG99_const
#define M_flip               METALANG99_flip
#define M_putBefore          METALANG99_putBefore
#define M_putAfter           METALANG99_putAfter
#define M_putBetween         METALANG99_putBetween
#define M_leftUnderscored    METALANG99_leftUnderscored
#define M_rightUnderscored   METALANG99_rightUnderscored
#define M_consume            METALANG99_consume
#define M_braced             METALANG99_braced
#define M_typedef            METALANG99_typedef
#define M_struct             METALANG99_struct
#define M_anonStruct         METALANG99_anonStruct
#define M_terms              METALANG99_terms
#define M_catPrimitive       METALANG99_catPrimitive
#define M_stringifyPrimitive METALANG99_stringifyPrimitive
#define M_semicolon          METALANG99_semicolon
#define M_introduceVarToStmt METALANG99_introduceVarToStmt

#define M_catPlain               METALANG99_catPlain
#define M_stringifyPlain         METALANG99_stringifyPlain
#define M_emptyPlain             METALANG99_emptyPlain
#define M_idPlain                METALANG99_idPlain
#define M_parenthesizePlain      METALANG99_parenthesizePlain
#define M_unparenthesizePlain    METALANG99_unparenthesizePlain
#define M_isParenthesizedPlain   METALANG99_isParenthesizedPlain
#define M_isUnparenthesizedPlain METALANG99_isUnparenthesizedPlain
#define M_consumePlain           METALANG99_consumePlain

#endif // METALANG99_NO_SMALL_PREFIX
// }

#endif // DOXYGEN_IGNORE

#endif // METALANG99_UTIL_H
