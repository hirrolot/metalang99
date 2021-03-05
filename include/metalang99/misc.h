/**
 * @file
 * Miscellaneous stuff.
 */

#ifndef METALANG99_MISC_H
#define METALANG99_MISC_H

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
 * M_repeat(M_appl(v(M_cat), v(_)), v(3))
 * @endcode
 */
#define METALANG99_repeat(f, n) METALANG99_call(METALANG99_repeat, f, n)

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
 * M_indexedParams(M_list(v(int, long long, const char *)))
 *
 * // (void)
 * M_indexedParams(M_nil())
 * @endcode
 */
#define METALANG99_indexedParams(type_list) METALANG99_call(METALANG99_indexedParams, type_list)

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
 * M_indexedFields(M_list(v(int, long long, const char *)))
 *
 * // M_empty()
 * M_indexedFields(M_nil())
 * @endcode
 */
#define METALANG99_indexedFields(type_list) METALANG99_call(METALANG99_indexedFields, type_list)

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
 * M_indexedInitializerList(v(3))
 *
 * // { 0 }
 * M_indexedInitializerList(v(0))
 * @endcode
 */
#define METALANG99_indexedInitializerList(n) METALANG99_call(METALANG99_indexedInitializerList, n)

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
 * M_indexedArgs(v(3))
 *
 * // M_empty()
 * M_indexedArgs(v(0))
 * @endcode
 */
#define METALANG99_indexedArgs(n) METALANG99_call(METALANG99_indexedArgs, n)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {

// METALANG99_repeat_IMPL {
#define METALANG99_repeat_IMPL(f, n)      METALANG99_natMatchWithArgs_IMPL(n, METALANG99_PRIV_repeat_, f)
#define METALANG99_PRIV_repeat_Z_IMPL(_f) METALANG99_empty()
#define METALANG99_PRIV_repeat_S_IMPL(i, f)                                                        \
    METALANG99_terms(METALANG99_repeat_IMPL(f, i), METALANG99_appl_IMPL(f, i))
// }

// METALANG99_indexedParams_IMPL {
#define METALANG99_indexedParams_IMPL(type_list)                                                   \
    METALANG99_tuple(METALANG99_ifPlain(                                                           \
        METALANG99_isNilPlain(type_list),                                                          \
        v(void),                                                                                   \
        METALANG99_variadicsTail(METALANG99_PRIV_indexedParamsAux_IMPL(type_list, 0))))

#define METALANG99_PRIV_indexedParamsAux_IMPL(type_list, i)                                        \
    METALANG99_matchWithArgs_IMPL(type_list, METALANG99_PRIV_indexedParamsAux_, i)
#define METALANG99_PRIV_indexedParamsAux_nil_IMPL(_, _i) METALANG99_empty()
#define METALANG99_PRIV_indexedParamsAux_cons_IMPL(x, xs, i)                                       \
    METALANG99_terms(v(, x _##i), METALANG99_PRIV_indexedParamsAux_IMPL(xs, METALANG99_incPlain(i)))
// }

// METALANG99_indexedFields_IMPL {
#define METALANG99_indexedFields_IMPL(type_list) METALANG99_PRIV_indexedFieldsAux_IMPL(type_list, 0)

#define METALANG99_PRIV_indexedFieldsAux_IMPL(type_list, i)                                        \
    METALANG99_matchWithArgs_IMPL(type_list, METALANG99_PRIV_indexedFields_, i)
#define METALANG99_PRIV_indexedFields_nil_IMPL(_, _i) METALANG99_empty()
#define METALANG99_PRIV_indexedFields_cons_IMPL(x, xs, i)                                          \
    METALANG99_terms(v(x _##i;), METALANG99_PRIV_indexedFieldsAux_IMPL(xs, METALANG99_incPlain(i)))
// }

// METALANG99_indexedInitializerList_IMPL {
#define METALANG99_indexedInitializerList_IMPL(n)                                                  \
    METALANG99_braced(METALANG99_PRIV_indexedItems(n, v(0)))
// }

// METALANG99_indexedArgs_IMPL {
#define METALANG99_indexedArgs_IMPL(n) METALANG99_PRIV_indexedItems(n, METALANG99_empty())
// }

#define METALANG99_PRIV_indexedItems(n, empty_case)                                                \
    METALANG99_ifPlain(                                                                            \
        METALANG99_natEqPlain(n, 0),                                                               \
        empty_case,                                                                                \
        METALANG99_variadicsTail(METALANG99_repeat_IMPL(METALANG99_PRIV_indexedItem, n)))

#define METALANG99_PRIV_indexedItem_IMPL(i) v(, _##i)

// } (Implementation)

// Arity specifiers {
#define METALANG99_repeat_ARITY                 2
#define METALANG99_indexedParams_ARITY          1
#define METALANG99_indexedFields_ARITY          1
#define METALANG99_indexedInitializerList_ARITY 1
#define METALANG99_indexedArgs_ARITY            1

#define METALANG99_PRIV_indexedItem_ARITY 1
// }

// Aliases {
#ifndef METALANG99_FULL_PREFIX_ONLY

#define M_repeat                 METALANG99_repeat
#define M_indexedParams          METALANG99_indexedParams
#define M_indexedFields          METALANG99_indexedFields
#define M_indexedInitializerList METALANG99_indexedInitializerList
#define M_indexedArgs            METALANG99_indexedArgs

#endif // METALANG99_FULL_PREFIX_ONLY
// }

#endif // DOXYGEN_IGNORE

#endif // METALANG99_MISC_H
