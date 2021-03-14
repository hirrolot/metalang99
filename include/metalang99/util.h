/**
 * @file
 * Utilitary stuff.
 */

#ifndef METALANG99_UTIL_H
#define METALANG99_UTIL_H

#include <metalang99/priv/compiler_specific.h>

#include <metalang99/lang.h>

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
 * The same as #METALANG99_struct but generates a union.
 */
#define METALANG99_union(ident, ...) METALANG99_call(METALANG99_union, ident, __VA_ARGS__)

/**
 * The same as #METALANG99_anonStruct but generates a union.
 */
#define METALANG99_anonUnion(...) METALANG99_call(METALANG99_anonUnion, __VA_ARGS__)

/**
 * The same as #METALANG99_struct but generates an enumeration.
 */
#define METALANG99_enum(ident, ...) METALANG99_call(METALANG99_enum, ident, __VA_ARGS__)

/**
 * The same as #METALANG99_anonStruct but generates an enumeration.
 */
#define METALANG99_anonEnum(...) METALANG99_call(METALANG99_anonEnum, __VA_ARGS__)

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
 * @note This macro does not expand to a Metalang99 term.
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
 * @note This macro does not expand to a Metalang99 term.
 */
#define METALANG99_stringifyPrimitive(...) #__VA_ARGS__

/**
 * Introduces the variable definition @p var_def to a statement right after its invocation.
 *
 * An invocation of #METALANG99_introduceVarToStmt together with a statement right after it forms a
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
 * #include <metalang99/util.h>
 *
 * for (int i = 0; i < 10; i++)
 *     M_introduceVarToStmt(double x = 5.0)
 *     M_introduceVarToStmt(double y = 7.0)
 *         printf("i = %d, x = %f, y = %f\n", i, x, y);
 * @endcode
 *
 * @note This macro does not expand to a Metalang99 term.
 */
#define METALANG99_introduceVarToStmt(var_def)                                                     \
    METALANG99_clangPragma("clang diagnostic push")                                                \
    METALANG99_clangPragma("clang diagnostic ignored \"-Wshadow\"")                                \
    for (int metalang99_priv_introduceVarToStmt_break = 0;                                         \
         metalang99_priv_introduceVarToStmt_break != 1;)                                           \
        for (var_def; metalang99_priv_introduceVarToStmt_break != 1;                               \
             metalang99_priv_introduceVarToStmt_break = 1)                                         \
            METALANG99_clangPragma("clang diagnostic pop")

/**
 * Suppresses the "unused X" warning right before a statement after its invocation.
 *
 * An invocation of #METALANG99_suppressUnusedBeforeStmt together with a statement right after it
 * forms a single statement.
 *
 * # Example
 *
 * @code
 * #include <metalang99/util.h>
 *
 * int x, y;
 *
 * for(;;)
 *     M_suppressUnusedBeforeStmt(x)
 *     M_suppressUnusedBeforeStmt(y)
 *         puts("abc");
 * @endcode
 *
 * @note This macro does not expand to a Metalang99 term.
 */
#define METALANG99_suppressUnusedBeforeStmt(expr)                                                  \
    METALANG99_clangPragma("clang diagnostic push")                                                \
    METALANG99_clangPragma("clang diagnostic ignored \"-Wshadow\"")                                \
    for (int metalang99_priv_suppressUnusedBeforeStmt_break = 0;                                   \
         ((void)(expr), metalang99_priv_suppressUnusedBeforeStmt_break != 1);                      \
         metalang99_priv_suppressUnusedBeforeStmt_break = 1)                                       \
        METALANG99_clangPragma("clang diagnostic pop")

/**
 * Tells whether @p ident belongs to a set of identifiers defined by @p prefix.
 *
 * If `<prefix><ident>` exists, it must be an object-like macro which expands to `()`. If so,
 * `M_detectIdent(prefix, ident)` will expand to 1, otherwise (`<prefix><ident>` does **not**
 * exist), `M_detectIdent(prefix, ident)` will expand to 0.
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
 * M_detectIdent(FOO_, x)
 *
 * // 1
 * M_detectIdent(FOO_, y)
 *
 * // 0
 * M_detectIdent(FOO_, z)
 * @endcode
 *
 * @note This macro does not expand to a Metalang99 term.
 */
#define METALANG99_detectIdent(prefix, ident) METALANG99_PRIV_IS_PARENTHESIZED(M_CAT(prefix, ident))

/**
 * If you are compiling on GCC, this macro expands to `_Pragma(str)`, otherwise to emptiness.
 */
#define METALANG99_gccPragma(str) METALANG99_PRIV_GCC_PRAGMA(str)

/**
 * If you are compiling on Clang, this macro expands to `_Pragma(str)`, otherwise to emptiness.
 */
#define METALANG99_clangPragma(str) METALANG99_PRIV_CLANG_PRAGMA(str)

#define METALANG99_CAT(x, y)      METALANG99_catPrimitive(x, y)
#define METALANG99_STRINGIFY(...) METALANG99_stringifyPrimitive(__VA_ARGS__)
#define METALANG99_EMPTY()
#define METALANG99_ID(...) __VA_ARGS__
#define METALANG99_CONSUME(...)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define METALANG99_catEval_IMPL(x, y)              x##y
#define METALANG99_cat_IMPL(x, y)                  v(METALANG99_CAT(x, y))
#define METALANG99_stringify_IMPL(...)             v(METALANG99_STRINGIFY(__VA_ARGS__))
#define METALANG99_empty_IMPL()                    v(METALANG99_EMPTY())
#define METALANG99_id_IMPL(...)                    v(METALANG99_ID(__VA_ARGS__))
#define METALANG99_const_IMPL(x, _a)               v(x)
#define METALANG99_flip_IMPL(f)                    METALANG99_appl_IMPL(METALANG99_PRIV_flip, f)
#define METALANG99_PRIV_flip_IMPL(f, a, b)         METALANG99_appl2_IMPL(f, b, a)
#define METALANG99_putBefore_IMPL(right, x)        v(x right)
#define METALANG99_putAfter_IMPL(left, x)          v(left x)
#define METALANG99_putBetween_IMPL(left, right, x) v(left x right)
#define METALANG99_leftUnderscored_IMPL(x)         v(_##x)
#define METALANG99_rightUnderscored_IMPL(x)        v(x##_)
#define METALANG99_consume_IMPL(...)               v(METALANG99_CONSUME(__VA_ARGS__))
#define METALANG99_braced_IMPL(...)                v({__VA_ARGS__})
#define METALANG99_typedef_IMPL(ident, ...)        v(typedef __VA_ARGS__ ident;)
#define METALANG99_struct_IMPL(ident, ...)         v(struct ident{__VA_ARGS__})
#define METALANG99_anonStruct_IMPL(...)            v(struct {__VA_ARGS__})
#define METALANG99_union_IMPL(ident, ...)          v(union ident{__VA_ARGS__})
#define METALANG99_anonUnion_IMPL(...)             v(union {__VA_ARGS__})
#define METALANG99_enum_IMPL(ident, ...)           v(enum ident{__VA_ARGS__})
#define METALANG99_anonEnum_IMPL(...)              v(enum {__VA_ARGS__})

#if defined(__GNUC__) && !defined(__clang__)
#define METALANG99_PRIV_GCC_PRAGMA(str) _Pragma(str)
#else
#define METALANG99_PRIV_GCC_PRAGMA(str)
#endif

#if defined(__clang__)
#define METALANG99_PRIV_CLANG_PRAGMA(str) _Pragma(str)
#else
#define METALANG99_PRIV_CLANG_PRAGMA(str)
#endif
// }

// Arity specifiers {
#define METALANG99_catEval_ARITY          2
#define METALANG99_cat_ARITY              2
#define METALANG99_stringify_ARITY        1
#define METALANG99_empty_ARITY            1
#define METALANG99_id_ARITY               1
#define METALANG99_const_ARITY            2
#define METALANG99_flip_ARITY             1
#define METALANG99_putBefore_ARITY        2
#define METALANG99_putAfter_ARITY         2
#define METALANG99_putBetween_ARITY       3
#define METALANG99_leftUnderscored_ARITY  1
#define METALANG99_rightUnderscored_ARITY 1
#define METALANG99_consume_ARITY          1
#define METALANG99_braced_ARITY           1
#define METALANG99_typedef_ARITY          2
#define METALANG99_struct_ARITY           2
#define METALANG99_anonStruct_ARITY       1
#define METALANG99_union_ARITY            2
#define METALANG99_anonUnion_ARITY        1
#define METALANG99_enum_ARITY             2
#define METALANG99_anonEnum_ARITY         1

#define METALANG99_PRIV_flip_ARITY 3
// }

// Aliases {
#ifndef METALANG99_FULL_PREFIX_ONLY

#define M_catEval                  METALANG99_catEval
#define M_cat                      METALANG99_cat
#define M_stringify                METALANG99_stringify
#define M_empty                    METALANG99_empty
#define M_id                       METALANG99_id
#define M_const                    METALANG99_const
#define M_flip                     METALANG99_flip
#define M_putBefore                METALANG99_putBefore
#define M_putAfter                 METALANG99_putAfter
#define M_putBetween               METALANG99_putBetween
#define M_leftUnderscored          METALANG99_leftUnderscored
#define M_rightUnderscored         METALANG99_rightUnderscored
#define M_consume                  METALANG99_consume
#define M_braced                   METALANG99_braced
#define M_typedef                  METALANG99_typedef
#define M_struct                   METALANG99_struct
#define M_anonStruct               METALANG99_anonStruct
#define M_union                    METALANG99_union
#define M_anonUnion                METALANG99_anonUnion
#define M_enum                     METALANG99_enum
#define M_anonEnum                 METALANG99_anonEnum
#define M_terms                    METALANG99_terms
#define M_catPrimitive             METALANG99_catPrimitive
#define M_stringifyPrimitive       METALANG99_stringifyPrimitive
#define M_introduceVarToStmt       METALANG99_introduceVarToStmt
#define M_suppressUnusedBeforeStmt METALANG99_suppressUnusedBeforeStmt
#define M_detectIdent              METALANG99_detectIdent

#define M_CAT       METALANG99_CAT
#define M_STRINGIFY METALANG99_STRINGIFY
#define M_EMPTY     METALANG99_EMPTY
#define M_ID        METALANG99_ID
#define M_CONSUME   METALANG99_CONSUME

#endif // METALANG99_FULL_PREFIX_ONLY
// }

#endif // DOXYGEN_IGNORE

#endif // METALANG99_UTIL_H
