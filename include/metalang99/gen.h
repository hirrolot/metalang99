/**
 * @file
 * Support for C language constructions.
 */

#ifndef ML99_GEN_H
#define ML99_GEN_H

#include <metalang99/choice.h>
#include <metalang99/control.h>
#include <metalang99/lang.h>
#include <metalang99/list.h>
#include <metalang99/nat.h>
#include <metalang99/tuple.h>
#include <metalang99/util.h>
#include <metalang99/variadics.h>

// Desugaring {

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
 * Introduces the variable definition @p var_def to a statement right after its invocation.
 *
 * An invocation of #ML99_INTRODUCE_VAR_TO_STMT together with a statement right after it forms a
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
 * #include <metalang99/gen.h>
 *
 * for (int i = 0; i < 10; i++)
 *     ML99_INTRODUCE_VAR_TO_STMT(double x = 5.0)
 *     ML99_INTRODUCE_VAR_TO_STMT(double y = 7.0)
 *         printf("i = %d, x = %f, y = %f\n", i, x, y);
 * @endcode
 */
#define ML99_INTRODUCE_VAR_TO_STMT(var_def)                                                        \
    ML99_CLANG_PRAGMA("clang diagnostic push")                                                     \
    ML99_CLANG_PRAGMA("clang diagnostic ignored \"-Wshadow\"")                                     \
    for (int metalang99_priv_INTRODUCE_VAR_TO_STMT_break = 0;                                      \
         metalang99_priv_INTRODUCE_VAR_TO_STMT_break != 1;)                                        \
        for (var_def; metalang99_priv_INTRODUCE_VAR_TO_STMT_break != 1;                            \
             metalang99_priv_INTRODUCE_VAR_TO_STMT_break = 1)                                      \
            ML99_CLANG_PRAGMA("clang diagnostic pop")

/**
 * Suppresses the "unused X" warning right before a statement after its invocation.
 *
 * An invocation of #ML99_SUPPRESS_UNUSED_BEFORE_STMT together with a statement right after it
 * forms a single statement.
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
 *     ML99_SUPPRESS_UNUSED_BEFORE_STMT(y)
 *         puts("abc");
 * @endcode
 */
#define ML99_SUPPRESS_UNUSED_BEFORE_STMT(expr)                                                     \
    ML99_CLANG_PRAGMA("clang diagnostic push")                                                     \
    ML99_CLANG_PRAGMA("clang diagnostic ignored \"-Wshadow\"")                                     \
    for (int metalang99_priv_SUPPRESS_UNUSED_BEFORE_STMT_break = 0;                                \
         ((void)(expr), metalang99_priv_SUPPRESS_UNUSED_BEFORE_STMT_break != 1);                   \
         metalang99_priv_SUPPRESS_UNUSED_BEFORE_STMT_break = 1)                                    \
        ML99_CLANG_PRAGMA("clang diagnostic pop")
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define ML99_braced_IMPL(...)         v({__VA_ARGS__})
#define ML99_typedef_IMPL(ident, ...) v(typedef __VA_ARGS__ ident;)
#define ML99_struct_IMPL(ident, ...)  v(struct ident{__VA_ARGS__})
#define ML99_anonStruct_IMPL(...)     v(struct {__VA_ARGS__})
#define ML99_union_IMPL(ident, ...)   v(union ident{__VA_ARGS__})
#define ML99_anonUnion_IMPL(...)      v(union {__VA_ARGS__})
#define ML99_enum_IMPL(ident, ...)    v(enum ident{__VA_ARGS__})
#define ML99_anonEnum_IMPL(...)       v(enum {__VA_ARGS__})

// ML99_indexedParams_IMPL {
#define ML99_indexedParams_IMPL(type_list)                                                         \
    ML99_tuple(ML99_IF(                                                                            \
        ML99_IS_NIL(type_list),                                                                    \
        v(void),                                                                                   \
        ML99_variadicsTail(ML99_PRIV_indexedParamsAux_IMPL(type_list, 0))))

#define ML99_PRIV_indexedParamsAux_IMPL(type_list, i)                                              \
    ML99_matchWithArgs_IMPL(type_list, ML99_PRIV_indexedParamsAux_, i)
#define ML99_PRIV_indexedParamsAux_nil_IMPL(_, _i) ML99_empty()
#define ML99_PRIV_indexedParamsAux_cons_IMPL(x, xs, i)                                             \
    ML99_TERMS(v(, x _##i), ML99_PRIV_indexedParamsAux_IMPL(xs, ML99_INC(i)))
// }

// ML99_indexedFields_IMPL {
#define ML99_indexedFields_IMPL(type_list) ML99_PRIV_indexedFieldsAux_IMPL(type_list, 0)

#define ML99_PRIV_indexedFieldsAux_IMPL(type_list, i)                                              \
    ML99_matchWithArgs_IMPL(type_list, ML99_PRIV_indexedFields_, i)
#define ML99_PRIV_indexedFields_nil_IMPL(_, _i) ML99_empty()
#define ML99_PRIV_indexedFields_cons_IMPL(x, xs, i)                                                \
    ML99_TERMS(v(x _##i;), ML99_PRIV_indexedFieldsAux_IMPL(xs, ML99_INC(i)))
// }

// ML99_indexedInitializerList_IMPL {
#define ML99_indexedInitializerList_IMPL(n) ML99_braced(ML99_PRIV_indexedItems(n, v(0)))
// }

// ML99_indexedArgs_IMPL {
#define ML99_indexedArgs_IMPL(n) ML99_PRIV_indexedItems(n, ML99_empty())
// }

#define ML99_PRIV_indexedItems(n, empty_case)                                                      \
    ML99_IF(                                                                                       \
        ML99_NAT_EQ(n, 0),                                                                         \
        empty_case,                                                                                \
        ML99_variadicsTail(ML99_repeat_IMPL(ML99_PRIV_indexedItem, n)))

#define ML99_PRIV_indexedItem_IMPL(i) v(, _##i)
// } (Implementation)

// Arity specifiers {
#define ML99_braced_ARITY                 1
#define ML99_typedef_ARITY                2
#define ML99_struct_ARITY                 2
#define ML99_anonStruct_ARITY             1
#define ML99_union_ARITY                  2
#define ML99_anonUnion_ARITY              1
#define ML99_enum_ARITY                   2
#define ML99_anonEnum_ARITY               1
#define ML99_indexedParams_ARITY          1
#define ML99_indexedFields_ARITY          1
#define ML99_indexedInitializerList_ARITY 1
#define ML99_indexedArgs_ARITY            1

#define ML99_PRIV_indexedItem_ARITY 1
// }

#endif // DOXYGEN_IGNORE

#endif // ML99_GEN_H
