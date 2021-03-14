/**
 * @file
 * Utilitary stuff.
 */

#ifndef ML99_UTIL_H
#define ML99_UTIL_H

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
#define ML99_empty() ML99_callTrivial(ML99_empty, )

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
 * Consumes all its arguments and expands to emptiness.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/util.h>
 *
 * // ML99_empty()
 * ML99_consume(v(1, 2, 3))
 * @endcode
 */
#define ML99_consume(...) ML99_call(ML99_consume, __VA_ARGS__)

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
 * ML99_braced(v(int a, b, c;))
 * @endcode
 */
#define ML99_braced(...) ML99_call(ML99_braced, __VA_ARGS__)

/**
 * Generates a type definition.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/util.h>
 *
 * // typedef struct { int x, y; } Point;
 * ML99_typedef(v(Point), v(struct { int x, y; }))
 * @endcode
 */
#define ML99_typedef(ident, ...) ML99_call(ML99_typedef, ident, __VA_ARGS__)

/**
 * Generates a C structure.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/util.h>
 *
 * // struct Point { int x, y; }
 * ML99_struct(v(Point), v(int x, y;))
 * @endcode
 */
#define ML99_struct(ident, ...) ML99_call(ML99_struct, ident, __VA_ARGS__)

/**
 * Generates an anonymous C structure.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/util.h>
 *
 * // struct { int x, y; }
 * ML99_struct(v(int x, y;))
 * @endcode
 */
#define ML99_anonStruct(...) ML99_call(ML99_anonStruct, __VA_ARGS__)

/**
 * The same as #ML99_struct but generates a union.
 */
#define ML99_union(ident, ...) ML99_call(ML99_union, ident, __VA_ARGS__)

/**
 * The same as #ML99_anonStruct but generates a union.
 */
#define ML99_anonUnion(...) ML99_call(ML99_anonUnion, __VA_ARGS__)

/**
 * The same as #ML99_struct but generates an enumeration.
 */
#define ML99_enum(ident, ...) ML99_call(ML99_enum, ident, __VA_ARGS__)

/**
 * The same as #ML99_anonStruct but generates an enumeration.
 */
#define ML99_anonEnum(...) ML99_call(ML99_anonEnum, __VA_ARGS__)

/**
 * A convenience macro to emphasise that your metafunction expands to more than one term.
 *
 * This macro just expands to provided arguments.
 *
 * # Examples
 *
 * @code
 * #define F_IMPL(x) ML99_terms(v(1), v(x), v(2))
 * @endcode
 */
#define ML99_terms(...) __VA_ARGS__

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
 * ML99_catPrimitive(ABC, 123)
 * @endcode
 *
 * @note This macro does not expand to a Metalang99 term.
 */
#define ML99_catPrimitive(x, y) x##y

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
 * ML99_stringifyPrimitive(ABC)
 * @endcode
 *
 * @note This macro does not expand to a Metalang99 term.
 */
#define ML99_stringifyPrimitive(...) #__VA_ARGS__

/**
 * Introduces the variable definition @p var_def to a statement right after its invocation.
 *
 * An invocation of #ML99_introduceVarToStmt together with a statement right after it forms a
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
 *     ML99_introduceVarToStmt(double x = 5.0)
 *     ML99_introduceVarToStmt(double y = 7.0)
 *         printf("i = %d, x = %f, y = %f\n", i, x, y);
 * @endcode
 *
 * @note This macro does not expand to a Metalang99 term.
 */
#define ML99_introduceVarToStmt(var_def)                                                           \
    ML99_clangPragma("clang diagnostic push")                                                      \
    ML99_clangPragma("clang diagnostic ignored \"-Wshadow\"")                                      \
    for (int metalang99_priv_introduceVarToStmt_break = 0;                                         \
         metalang99_priv_introduceVarToStmt_break != 1;)                                           \
        for (var_def; metalang99_priv_introduceVarToStmt_break != 1;                               \
             metalang99_priv_introduceVarToStmt_break = 1)                                         \
            ML99_clangPragma("clang diagnostic pop")

/**
 * Suppresses the "unused X" warning right before a statement after its invocation.
 *
 * An invocation of #ML99_suppressUnusedBeforeStmt together with a statement right after it
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
 *     ML99_suppressUnusedBeforeStmt(x)
 *     ML99_suppressUnusedBeforeStmt(y)
 *         puts("abc");
 * @endcode
 *
 * @note This macro does not expand to a Metalang99 term.
 */
#define ML99_suppressUnusedBeforeStmt(expr)                                                        \
    ML99_clangPragma("clang diagnostic push")                                                      \
    ML99_clangPragma("clang diagnostic ignored \"-Wshadow\"")                                      \
    for (int metalang99_priv_suppressUnusedBeforeStmt_break = 0;                                   \
         ((void)(expr), metalang99_priv_suppressUnusedBeforeStmt_break != 1);                      \
         metalang99_priv_suppressUnusedBeforeStmt_break = 1)                                       \
        ML99_clangPragma("clang diagnostic pop")

/**
 * Tells whether @p ident belongs to a set of identifiers defined by @p prefix.
 *
 * If `<prefix><ident>` exists, it must be an object-like macro which expands to `()`. If so,
 * `ML99_detectIdent(prefix, ident)` will expand to 1, otherwise (`<prefix><ident>` does **not**
 * exist), `ML99_detectIdent(prefix, ident)` will expand to 0.
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
 * ML99_detectIdent(FOO_, x)
 *
 * // 1
 * ML99_detectIdent(FOO_, y)
 *
 * // 0
 * ML99_detectIdent(FOO_, z)
 * @endcode
 *
 * @note This macro does not expand to a Metalang99 term.
 */
#define ML99_detectIdent(prefix, ident) ML99_PRIV_IS_PARENTHESIZED(ML99_CAT(prefix, ident))

/**
 * If you are compiling on GCC, this macro expands to `_Pragma(str)`, otherwise to emptiness.
 */
#define ML99_gccPragma(str) ML99_PRIV_GCC_PRAGMA(str)

/**
 * If you are compiling on Clang, this macro expands to `_Pragma(str)`, otherwise to emptiness.
 */
#define ML99_clangPragma(str) ML99_PRIV_CLANG_PRAGMA(str)

#define ML99_CAT(x, y)      ML99_catPrimitive(x, y)
#define ML99_STRINGIFY(...) ML99_stringifyPrimitive(__VA_ARGS__)
#define ML99_EMPTY()
#define ML99_ID(...) __VA_ARGS__
#define ML99_CONSUME(...)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define ML99_catEval_IMPL(x, y)       x##y
#define ML99_cat_IMPL(x, y)           v(ML99_CAT(x, y))
#define ML99_stringify_IMPL(...)      v(ML99_STRINGIFY(__VA_ARGS__))
#define ML99_empty_IMPL()             v(ML99_EMPTY())
#define ML99_id_IMPL(...)             v(ML99_ID(__VA_ARGS__))
#define ML99_const_IMPL(x, _a)        v(x)
#define ML99_flip_IMPL(f)             ML99_appl_IMPL(ML99_PRIV_flip, f)
#define ML99_PRIV_flip_IMPL(f, a, b)  ML99_appl2_IMPL(f, b, a)
#define ML99_consume_IMPL(...)        v(ML99_CONSUME(__VA_ARGS__))
#define ML99_braced_IMPL(...)         v({__VA_ARGS__})
#define ML99_typedef_IMPL(ident, ...) v(typedef __VA_ARGS__ ident;)
#define ML99_struct_IMPL(ident, ...)  v(struct ident{__VA_ARGS__})
#define ML99_anonStruct_IMPL(...)     v(struct {__VA_ARGS__})
#define ML99_union_IMPL(ident, ...)   v(union ident{__VA_ARGS__})
#define ML99_anonUnion_IMPL(...)      v(union {__VA_ARGS__})
#define ML99_enum_IMPL(ident, ...)    v(enum ident{__VA_ARGS__})
#define ML99_anonEnum_IMPL(...)       v(enum {__VA_ARGS__})

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
// }

// Arity specifiers {
#define ML99_catEval_ARITY    2
#define ML99_cat_ARITY        2
#define ML99_stringify_ARITY  1
#define ML99_empty_ARITY      1
#define ML99_id_ARITY         1
#define ML99_const_ARITY      2
#define ML99_flip_ARITY       1
#define ML99_consume_ARITY    1
#define ML99_braced_ARITY     1
#define ML99_typedef_ARITY    2
#define ML99_struct_ARITY     2
#define ML99_anonStruct_ARITY 1
#define ML99_union_ARITY      2
#define ML99_anonUnion_ARITY  1
#define ML99_enum_ARITY       2
#define ML99_anonEnum_ARITY   1

#define ML99_PRIV_flip_ARITY 3
// }

#endif // DOXYGEN_IGNORE

#endif // ML99_UTIL_H
