/**
 * @file
 * Miscellaneous stuff.
 */

#ifndef ML99_MISC_H
#define ML99_MISC_H

#include <metalang99/choice.h>
#include <metalang99/control.h>
#include <metalang99/lang.h>
#include <metalang99/list.h>
#include <metalang99/nat.h>
#include <metalang99/util.h>
#include <metalang99/variadics.h>

// Desugaring {
/**
 * Invokes @p f @p n times, providing an iteration index each time.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/misc.h>
 * #include <metalang99/util.h>
 *
 * // _0 _1 _2
 * ML99_repeat(ML99_appl(v(ML99_cat), v(_)), v(3))
 * @endcode
 */
#define ML99_repeat(f, n) ML99_call(ML99_repeat, f, n)

/**
 * Generates \f$(T_0 \ \_0, ..., T_n \ \_n)\f$.
 *
 * If @p type_list is empty, this macro results in `(void)`.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/misc.h>
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
 * #include <metalang99/misc.h>
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
 * #include <metalang99/misc.h>
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
 * #include <metalang99/misc.h>
 *
 * // _0, _1, _2
 * ML99_indexedArgs(v(3))
 *
 * // ML99_empty()
 * ML99_indexedArgs(v(0))
 * @endcode
 */
#define ML99_indexedArgs(n) ML99_call(ML99_indexedArgs, n)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {

// ML99_repeat_IMPL {
#define ML99_repeat_IMPL(f, n)        ML99_natMatchWithArgs_IMPL(n, ML99_PRIV_repeat_, f)
#define ML99_PRIV_repeat_Z_IMPL(_f)   ML99_empty()
#define ML99_PRIV_repeat_S_IMPL(i, f) ML99_TERMS(ML99_repeat_IMPL(f, i), ML99_appl_IMPL(f, i))
// }

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
#define ML99_repeat_ARITY                 2
#define ML99_indexedParams_ARITY          1
#define ML99_indexedFields_ARITY          1
#define ML99_indexedInitializerList_ARITY 1
#define ML99_indexedArgs_ARITY            1

#define ML99_PRIV_indexedItem_ARITY 1
// }

#endif // DOXYGEN_IGNORE

#endif // ML99_MISC_H
