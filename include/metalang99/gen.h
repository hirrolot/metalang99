/**
 * @file
 * Support for C language constructions.
 *
 * # Statement chaining
 *
 * This module exports a bunch of so-called _statement chaining macros_: they expect a statement
 * right after their invocation, and moreover, an invocation of such a macro with a statement
 * afterwards altogether form a single statement.
 *
 * How can this be helpful? Imagine you are writing a macro with the following syntax:
 *
 * @code
 * MY_MACRO(...) { bla bla bla }
 * @endcode
 *
 * Then `MY_MACRO` must expand to a _statement prefix_, i.e. something that expects a statement
 * after itself. One possible solution is to make `MY_MACRO` expand to a sequence of statement
 * chaining macros like this:
 *
 * @code
 * #define MY_MACRO(...) \
 *     ML99_INTRODUCE_VAR_TO_STMT(int x = 5) \
 *         ML99_CHAIN_EXPR_STMT(printf("%d\n", x)) \
 *             and so on...
 * @endcode
 *
 * Here `ML99_CHAIN_EXPR_STMT` accepts the statement formed by `ML99_CHAIN_EXPR_STMT`, which in turn
 * accepts the next statement and so on, until a caller of `MY_MACRO` specifies the final statement,
 * thus completing the chain.
 *
 * @see https://www.chiark.greenend.org.uk/~sgtatham/mp/ for a more involved explanation.
 */

#ifndef ML99_GEN_H
#define ML99_GEN_H

#include <metalang99/choice.h>
#include <metalang99/lang.h>
#include <metalang99/list.h>
#include <metalang99/nat.h>
#include <metalang99/tuple.h>
#include <metalang99/util.h>
#include <metalang99/variadics.h>

#ifdef __COUNTER__

/**
 * Generates a unique identifier @p id in the namespace @p prefix.
 *
 * Let `FOO` be the name of an enclosing macro. Then `FOO_` must be specified for @p prefix, and @p
 * id should be given any meaningful name (this makes debugging easier).
 *
 * # Examples
 *
 * @code
 * #include <metalang99/gen.h>
 *
 * #define FOO(...) FOO_NAMED(ML99_GEN_SYM(FOO_, x), __VA_ARGS__)
 * #define FOO_NAMED(x_sym, ...) \
 *      do { int x_sym = 5; __VA_ARGS__ } while (0)
 *
 * // `x` here will not conflict with the `x` inside `FOO`.
 * FOO({
 *     int x = 7;
 *     printf("x is %d\n", x); // x is 7
 * });
 * @endcode
 *
 * @note Two identical calls to #ML99_GEN_SYM will yield different identifiers, therefore, to refer
 * to the result later, you must save it in an auxiliary macro's parameter, as shown in the example
 * above.
 * @note #ML99_GEN_SYM is defined only if `__COUNTER__` is defined, which must be a macro yielding
 * integral literals starting from 0 incremented by 1 each time it is called. Currently, it is
 * supported at least by Clang, GCC, TCC, and MSVC.
 * @see https://en.wikipedia.org/wiki/Hygienic_macro
 */
#define ML99_GEN_SYM(prefix, id) ML99_CAT4(prefix, id, _, __COUNTER__)

#endif // __COUNTER__

/**
 * Forces a caller to put a trailing semicolon.
 *
 * It is useful when defining macros, to make them formatted as complete statements.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/gen.h>
 *
 * #define MY_MACRO(fn_name, val_ty, val) \
 *     inline static val_ty fn_name(void) { return val; } \
 *     ML99_TRAILING_SEMICOLON()
 *
 * // Defines a function which always returns 0.
 * MY_MACRO(zero, int, 0);
 * @endcode
 *
 * @note This macro expands to a C declaration, therefore, it can be used outside of functions too.
 */
#define ML99_TRAILING_SEMICOLON(...) struct ml99_priv_trailing_semicolon

/**
 * Puts a semicolon after provided arguments.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/gen.h>
 *
 * // int x = 5;
 * ML99_semicoloned(v(int x = 5))
 * @endcode
 */
#define ML99_semicoloned(...) ML99_call(ML99_semicoloned, __VA_ARGS__)

/**
 * Puts provided arguments into braces.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/gen.h>
 *
 * // { int a, b, c; }
 * ML99_braced(v(int a, b, c;))
 * @endcode
 */
#define ML99_braced(...) ML99_call(ML99_braced, __VA_ARGS__)

/**
 * Generates an assignment of provided variadic arguments to @p lhs.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/gen.h>
 *
 * // x = 5, 6, 7
 * ML99_assign(v(x), v(5, 6, 7))
 * @endcode
 */
#define ML99_assign(lhs, ...) ML99_call(ML99_assign, lhs, __VA_ARGS__)

/**
 * A shortcut for `ML99_assign(lhs, ML99_braced(...))`.
 */
#define ML99_assignInitializerList(lhs, ...) ML99_call(ML99_assignInitializerList, lhs, __VA_ARGS__)

/**
 * A shortcut for `ML99_semicoloned(ML99_assign(lhs, ...))`.
 */
#define ML99_assignStmt(lhs, ...) ML99_call(ML99_assignStmt, lhs, __VA_ARGS__)

/**
 * A shortcut for `ML99_assignStmt(lhs, ML99_braced(...))`.
 */
#define ML99_assignInitializerListStmt(lhs, ...)                                                   \
    ML99_call(ML99_assignInitializerListStmt, lhs, __VA_ARGS__)

/**
 * Generates a function/macro invocation.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/gen.h>
 *
 * // If you are on C11.
 * ML99_invoke(v(_Static_assert), v(1 == 1, "Must be true"))
 * @endcode
 */
#define ML99_invoke(f, ...) ML99_call(ML99_invoke, f, __VA_ARGS__)

/**
 * A shortcut for `ML99_semicoloned(ML99_invoked(f, ...))`.
 */
#define ML99_invokeStmt(f, ...) ML99_call(ML99_invokeStmt, f, __VA_ARGS__)

/**
 * Generates `prefix { code }`.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/gen.h>
 *
 * // ML99_INTRODUCE_VAR_TO_STMT(int x = 5) {
 * //     printf("x = %d\n", x);
 * // }
 * ML99_prefixedBlock(
 *     v(ML99_INTRODUCE_VAR_TO_STMT(int x = 5)),
 *     v(printf("x = %d\n", x);))
 * @endcode
 */
#define ML99_prefixedBlock(prefix, ...) ML99_call(ML99_prefixedBlock, prefix, __VA_ARGS__)

/**
 * Generates a type definition.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/gen.h>
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
 * #include <metalang99/gen.h>
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
 * #include <metalang99/gen.h>
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
 * Pastes provided arguments @p n times.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/gen.h>
 *
 * // ~ ~ ~ ~ ~
 * ML99_times(v(5), v(~))
 * @endcode
 */
#define ML99_times(n, ...) ML99_call(ML99_times, n, __VA_ARGS__)

/**
 * Invokes @p f @p n times, providing an iteration index each time.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/gen.h>
 * #include <metalang99/util.h>
 *
 * // _0 _1 _2
 * ML99_repeat(v(3), ML99_appl(v(ML99_cat), v(_)))
 * @endcode
 */
#define ML99_repeat(n, f) ML99_call(ML99_repeat, n, f)

/**
 * Generates \f$(T_0 \ \_0, ..., T_n \ \_n)\f$.
 *
 * If @p type_list is empty, this macro results in `(void)`.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/gen.h>
 *
 * // (int _0, long long _1, const char * _2)
 * ML99_indexedParams(ML99_list(v(int, long long, const char *)))
 *
 * // (void)
 * ML99_indexedParams(ML99_nil())
 * @endcode
 */
#define ML99_indexedParams(type_list) ML99_call(ML99_indexedParams, type_list)

/**
 * Generates \f$T_0 \ \_0; ...; T_n \ \_n\f$.
 *
 * If @p type_list is empty, this macro results in emptiness.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/gen.h>
 *
 * // int _0; long long _1; const char * _2;
 * ML99_indexedFields(ML99_list(v(int, long long, const char *)))
 *
 * // ML99_empty()
 * ML99_indexedFields(ML99_nil())
 * @endcode
 */
#define ML99_indexedFields(type_list) ML99_call(ML99_indexedFields, type_list)

/**
 * Generates \f$\{ \_0, ..., \_{n - 1} \}\f$.
 *
 * If @p n is 0, this macro results in `{ 0 }`.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/gen.h>
 *
 * // { _0, _1, _2 }
 * ML99_indexedInitializerList(v(3))
 *
 * // { 0 }
 * ML99_indexedInitializerList(v(0))
 * @endcode
 */
#define ML99_indexedInitializerList(n) ML99_call(ML99_indexedInitializerList, n)

/**
 * Generates \f$\_0, ..., \_{n - 1}\f$.
 *
 * If @p n is 0, this macro results in emptiness.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/gen.h>
 *
 * // _0, _1, _2
 * ML99_indexedArgs(v(3))
 *
 * // ML99_empty()
 * ML99_indexedArgs(v(0))
 * @endcode
 */
#define ML99_indexedArgs(n) ML99_call(ML99_indexedArgs, n)

/**
 * A statement chaining macro which introduces several variable definitions to a statement right
 * after its invocation.
 *
 * Variable definitions must be specified as in the first clause of the for-loop.
 *
 * Top-level `break`/`continue` inside a user-provided statement are prohibited.
 *
 * # Example
 *
 * @code
 * #include <metalang99/gen.h>
 *
 * for (int i = 0; i < 10; i++)
 *     ML99_INTRODUCE_VAR_TO_STMT(double x = 5.0, y = 7.0)
 *         if (i % 2 == 0)
 *             printf("i = %d, x = %f, y = %f\n", i, x, y);
 * @endcode
 */
#define ML99_INTRODUCE_VAR_TO_STMT(...)                                                            \
    ML99_PRIV_SHADOWS(for (__VA_ARGS__, *ml99_priv_break = (void *)0;                              \
                           ml99_priv_break != (void *)1;                                           \
                           ml99_priv_break = (void *)1))

/**
 * The same as #ML99_INTRODUCE_VAR_TO_STMT but deals with a single non-`NULL` pointer.
 *
 * In comparison with #ML99_INTRODUCE_VAR_TO_STMT, this macro generates a little less code. It
 * introduces a pointer to @p ty identified by @p name and initialised to @p init.
 *
 * Top-level `break`/`continue` inside a user-provided statement are prohibited.
 *
 * # Example
 *
 * @code
 * #include <metalang99/gen.h>
 *
 * double x = 5.0, y = 7.0;
 *
 * for (int i = 0; i < 10; i++)
 *     ML99_INTRODUCE_NON_NULL_PTR_TO_STMT(double, x_ptr, &x)
 *         ML99_INTRODUCE_NON_NULL_PTR_TO_STMT(double, y_ptr, &y)
 *             printf("i = %d, x = %f, y = %f\n", i, *x_ptr, *y_ptr);
 * @endcode
 *
 * @note Unlike #ML99_INTRODUCE_VAR_TO_STMT, the generated pointer is guaranteed to be used at least
 * once, meaning that you do not need to suppress the unused variable warning.
 * @note @p init is guaranteed to be executed only once.
 */
#define ML99_INTRODUCE_NON_NULL_PTR_TO_STMT(ty, name, init)                                        \
    ML99_PRIV_SHADOWS(for (ty *name = (init); name != (void *)0; name = (void *)0))

/**
 * A statement chaining macro which executes an expression statement derived from @p expr right
 * before the next statement.
 *
 * Top-level `break`/`continue` inside a user-provided statement are prohibited.
 *
 * # Example
 *
 * @code
 * #include <metalang99/gen.h>
 *
 * int x;
 *
 * for(;;)
 *     ML99_CHAIN_EXPR_STMT(x = 5)
 *         ML99_CHAIN_EXPR_STMT(printf("%d\n", x))
 *             puts("abc");
 * @endcode
 */
#define ML99_CHAIN_EXPR_STMT(expr)                                                                 \
    ML99_PRIV_SHADOWS(for (int ml99_priv_expr_stmt_break = ((expr), 0);                            \
                           ml99_priv_expr_stmt_break != 1;                                         \
                           ml99_priv_expr_stmt_break = 1))

/**
 * The same as #ML99_CHAIN_EXPR_STMT but executes @p expr **after** the next statement.
 */
#define ML99_CHAIN_EXPR_STMT_AFTER(expr)                                                           \
    ML99_PRIV_SHADOWS(for (int ml99_priv_expr_stmt_after_break = 0;                                \
                           ml99_priv_expr_stmt_after_break != 1;                                   \
                           ((expr), ml99_priv_expr_stmt_after_break = 1)))

/**
 * A statement chaining macro which suppresses the "unused X" warning right before a statement after
 * its invocation.
 *
 * Top-level `break`/`continue` inside a user-provided statement are prohibited.
 *
 * # Example
 *
 * @code
 * #include <metalang99/gen.h>
 *
 * int x, y;
 *
 * for(;;)
 *     ML99_SUPPRESS_UNUSED_BEFORE_STMT(x)
 *         ML99_SUPPRESS_UNUSED_BEFORE_STMT(y)
 *             puts("abc");
 * @endcode
 *
 * @deprecated Use `ML99_CHAIN_EXPR_STMT((void)expr)` instead.
 */
#define ML99_SUPPRESS_UNUSED_BEFORE_STMT(expr) ML99_CHAIN_EXPR_STMT((void)expr)

#ifndef DOXYGEN_IGNORE

#define ML99_PRIV_SHADOWS(...)                                                                     \
    ML99_CLANG_PRAGMA("clang diagnostic push")                                                     \
    ML99_CLANG_PRAGMA("clang diagnostic ignored \"-Wshadow\"")                                     \
    __VA_ARGS__                                                                                    \
    ML99_CLANG_PRAGMA("clang diagnostic pop")

#define ML99_semicoloned_IMPL(...)                    v(__VA_ARGS__;)
#define ML99_braced_IMPL(...)                         v({__VA_ARGS__})
#define ML99_assign_IMPL(lhs, ...)                    v(lhs = __VA_ARGS__)
#define ML99_assignStmt_IMPL(lhs, ...)                v(lhs = __VA_ARGS__;)
#define ML99_assignInitializerList_IMPL(lhs, ...)     v(lhs = {__VA_ARGS__})
#define ML99_assignInitializerListStmt_IMPL(lhs, ...) v(lhs = {__VA_ARGS__};)
#define ML99_invoke_IMPL(f, ...)                      v(f(__VA_ARGS__))
#define ML99_invokeStmt_IMPL(f, ...)                  v(f(__VA_ARGS__);)
#define ML99_typedef_IMPL(ident, ...)                 v(typedef __VA_ARGS__ ident;)

// clang-format off
#define ML99_prefixedBlock_IMPL(prefix, ...) v(prefix {__VA_ARGS__})
#define ML99_struct_IMPL(ident, ...) v(struct ident {__VA_ARGS__})
#define ML99_anonStruct_IMPL(...) v(struct {__VA_ARGS__})
#define ML99_union_IMPL(ident, ...) v(union ident {__VA_ARGS__})
#define ML99_anonUnion_IMPL(...) v(union {__VA_ARGS__})
#define ML99_enum_IMPL(ident, ...) v(enum ident {__VA_ARGS__})
#define ML99_anonEnum_IMPL(...) v(enum {__VA_ARGS__})
// clang-format on

#define ML99_times_IMPL(n, ...)        ML99_natMatchWithArgs_IMPL(n, ML99_PRIV_times_, __VA_ARGS__)
#define ML99_PRIV_times_Z_IMPL         ML99_empty_IMPL
#define ML99_PRIV_times_S_IMPL(i, ...) ML99_TERMS(v(__VA_ARGS__), ML99_times_IMPL(i, __VA_ARGS__))

#define ML99_repeat_IMPL(n, f)        ML99_natMatchWithArgs_IMPL(n, ML99_PRIV_repeat_, f)
#define ML99_PRIV_repeat_Z_IMPL       ML99_empty_IMPL
#define ML99_PRIV_repeat_S_IMPL(i, f) ML99_TERMS(ML99_repeat_IMPL(i, f), ML99_appl_IMPL(f, i))

// ML99_indexedParams_IMPL {

#define ML99_indexedParams_IMPL(type_list)                                                         \
    ML99_tuple(ML99_PRIV_IF(                                                                       \
        ML99_IS_NIL(type_list),                                                                    \
        v(void),                                                                                   \
        ML99_variadicsTail(ML99_PRIV_indexedParamsAux_IMPL(type_list, 0))))

#define ML99_PRIV_indexedParamsAux_IMPL(type_list, i)                                              \
    ML99_matchWithArgs_IMPL(type_list, ML99_PRIV_indexedParams_, i)
#define ML99_PRIV_indexedParams_nil_IMPL ML99_empty_IMPL
#define ML99_PRIV_indexedParams_cons_IMPL(x, xs, i)                                                \
    ML99_TERMS(v(, x _##i), ML99_PRIV_indexedParamsAux_IMPL(xs, ML99_INC(i)))
// } (ML99_indexedParams_IMPL)

// ML99_indexedFields_IMPL {

#define ML99_indexedFields_IMPL(type_list) ML99_PRIV_indexedFieldsAux_IMPL(type_list, 0)

#define ML99_PRIV_indexedFieldsAux_IMPL(type_list, i)                                              \
    ML99_matchWithArgs_IMPL(type_list, ML99_PRIV_indexedFields_, i)
#define ML99_PRIV_indexedFields_nil_IMPL ML99_empty_IMPL
#define ML99_PRIV_indexedFields_cons_IMPL(x, xs, i)                                                \
    ML99_TERMS(v(x _##i;), ML99_PRIV_indexedFieldsAux_IMPL(xs, ML99_INC(i)))
// } (ML99_indexedFields_IMPL)

#define ML99_indexedInitializerList_IMPL(n) ML99_braced(ML99_PRIV_INDEXED_ITEMS(n, v(0)))
#define ML99_indexedArgs_IMPL(n)            ML99_PRIV_INDEXED_ITEMS(n, v(ML99_EMPTY()))

#define ML99_PRIV_INDEXED_ITEMS(n, empty_case)                                                     \
    ML99_PRIV_IF(                                                                                  \
        ML99_NAT_EQ(n, 0),                                                                         \
        empty_case,                                                                                \
        ML99_variadicsTail(ML99_repeat_IMPL(n, ML99_PRIV_indexedItem)))

#define ML99_PRIV_indexedItem_IMPL(i) v(, _##i)

// Arity specifiers {

#define ML99_semicoloned_ARITY               1
#define ML99_braced_ARITY                    1
#define ML99_assign_ARITY                    2
#define ML99_assignStmt_ARITY                2
#define ML99_assignInitializerList_ARITY     2
#define ML99_assignInitializerListStmt_ARITY 2
#define ML99_invoke_ARITY                    2
#define ML99_invokeStmt_ARITY                2
#define ML99_prefixedBlock_ARITY             2
#define ML99_typedef_ARITY                   2
#define ML99_struct_ARITY                    2
#define ML99_anonStruct_ARITY                1
#define ML99_union_ARITY                     2
#define ML99_anonUnion_ARITY                 1
#define ML99_enum_ARITY                      2
#define ML99_anonEnum_ARITY                  1
#define ML99_repeat_ARITY                    2
#define ML99_times_ARITY                     2
#define ML99_indexedParams_ARITY             1
#define ML99_indexedFields_ARITY             1
#define ML99_indexedInitializerList_ARITY    1
#define ML99_indexedArgs_ARITY               1

#define ML99_PRIV_indexedItem_ARITY 1
// } (Arity specifiers)

#endif // DOXYGEN_IGNORE

#endif // ML99_GEN_H
