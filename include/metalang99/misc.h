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
#include <metalang99/uint.h>
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
// }

#ifndef DOXYGEN_IGNORE

// Implementation {

// METALANG99_repeat_IMPL {
#define METALANG99_repeat_IMPL(f, n)                                                               \
    METALANG99_callTrivial(METALANG99_uintMatchWithArgs, n, METALANG99_PRIV_repeat_, f)
#define METALANG99_PRIV_repeat_Z_IMPL(_f) METALANG99_empty()
#define METALANG99_PRIV_repeat_S_IMPL(i, f)                                                        \
    METALANG99_callTrivial(METALANG99_repeat, f, i), METALANG99_callTrivial(METALANG99_appl, f, i)
// }

// METALANG99_indexedParams_IMPL {
#define METALANG99_indexedParams_IMPL(type_list)                                                   \
    METALANG99_parenthesise(METALANG99_variadicsTail(METALANG99_call(                              \
        METALANG99_call(                                                                           \
            METALANG99_if,                                                                         \
            METALANG99_callTrivial(METALANG99_isNil, type_list),                                   \
            v(METALANG99_PRIV_indexedParamsEmpty, METALANG99_PRIV_indexedParamsNonEmpty)),         \
        v(type_list, 0))))

#define METALANG99_PRIV_indexedParamsEmpty_IMPL(_type_list, _i) v(, void)

#define METALANG99_PRIV_indexedParamsNonEmpty_IMPL(type_list, i)                                   \
    METALANG99_callTrivial(                                                                        \
        METALANG99_matchWithArgs,                                                                  \
        type_list,                                                                                 \
        METALANG99_PRIV_indexedParamsNonEmpty_,                                                    \
        i)
#define METALANG99_PRIV_indexedParamsNonEmpty_nil_IMPL(_i) METALANG99_empty()
#define METALANG99_PRIV_indexedParamsNonEmpty_cons_IMPL(x, xs, i)                                  \
    METALANG99_terms(                                                                              \
        v(, x METALANG99_catPlain(_, i)),                                                          \
        METALANG99_callTrivial(                                                                    \
            METALANG99_PRIV_indexedParamsNonEmpty,                                                 \
            xs,                                                                                    \
            METALANG99_uintIncPlain(i)))
// }

// } (Implementation)

// Arity specifiers {
#define METALANG99_repeat_ARITY        2
#define METALANG99_indexedParams_ARITY 1
// }

// Aliases {
#ifndef METALANG99_NO_SMALL_PREFIX

#define M_repeat        METALANG99_repeat
#define M_indexedParams METALANG99_indexedParams

#endif // METALANG99_NO_SMALL_PREFIX
// }

#endif // DOXYGEN_IGNORE

#endif // METALANG99_MISC_H
