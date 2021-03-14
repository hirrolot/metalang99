/**
 * @file
 * Variadic macro utilities.
 *
 * Metalang99 does not provide a lot of stuff in this module; if a needed function is missed,
 * invoking #METALANG99_list and then manipulating with the resulting Cons-list might be helpful.
 */

#ifndef METALANG99_VARIADICS_H
#define METALANG99_VARIADICS_H

#include <metalang99/priv/variadics/count.h>

#include <metalang99/lang.h>
#include <metalang99/nat/dec.h>
#include <metalang99/nat/eq.h>
#include <metalang99/util.h>

// Desugaring {
/**
 * Computes a count of its arguments.
 *
 * At most 63 arguments are acceptable.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/variadics.h>
 *
 * // 3
 * M_variadicsCount(v(~, ~, ~))
 *
 * // 1
 * M_variadicsCount()
 * @endcode
 */
#define METALANG99_variadicsCount(...) METALANG99_call(METALANG99_variadicsCount, __VA_ARGS__)

/**
 * Expands to a metafunction extracting the @p i -indexed argument.
 *
 * @p i can range from 0 to 7, inclusively.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/variadics.h>
 *
 * // 2
 * M_variadicsGet(1)(v(1, 2, 3))
 * @endcode
 */
#define METALANG99_variadicsGet(i) METALANG99_CAT(METALANG99_PRIV_variadicsGet_, i)

/**
 * Extracts the tail of its arguments.
 *
 * At least two arguments must be specified.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/variadics.h>
 *
 * // 2, 3
 * M_variadicsTail(v(1, 2, 3))
 * @endcode
 */
#define METALANG99_variadicsTail(...) METALANG99_call(METALANG99_variadicsTail, __VA_ARGS__)

/**
 * Applies @p f to each argument.
 *
 * The result is `M_appl(v(f), v(x1)) ... M_appl(v(f), v(xN))`.
 *
 * If you already have variadics, using this macro is more efficient than
 * `M_listUnwrap(M_listMap(v(f), M_list(v(...))))`.
 *
 * At most 63 variadic arguments are acceptable.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/misc.h>
 *
 * #define F_IMPL(x) v(@x)
 * #define F_ARITY   1
 *
 * // @1 @2 @3
 * M_variadicsForEach(v(F), v(1, 2, 3))
 * @endcode
 *
 * @note Unlike #METALANG99_listMap, @p f can evaluate to many Metalang99 terms.
 */
#define METALANG99_variadicsForEach(f, ...)                                                        \
    METALANG99_call(METALANG99_variadicsForEach, f, __VA_ARGS__)

/**
 * Applies @p f to each argument with an index.
 *
 * The result is `M_appl2(v(f), v(x1), v(0)) ... M_appl2(v(f), v(xN), v(N))`.
 *
 * If you already have variadics, using this macro is more efficient than
 * `M_listUnwrap(M_listMapI(v(f), M_list(v(...))))`.
 *
 * At most 63 variadic arguments are acceptable.
 *
 * @note Unlike #METALANG99_listMapI, @p f can evaluate to many Metalang99 terms.
 */
#define METALANG99_variadicsForEachI(f, ...)                                                       \
    METALANG99_call(METALANG99_variadicsForEachI, f, __VA_ARGS__)

#define METALANG99_VARIADICS_COUNT(...) METALANG99_PRIV_VARIADICS_COUNT(__VA_ARGS__)
#define METALANG99_VARIADICS_GET(i)     METALANG99_CAT(METALANG99_PRIV_VARIADICS_GET_, i)
#define METALANG99_VARIADICS_TAIL(...)  METALANG99_PRIV_VARIADICS_TAIL(__VA_ARGS__)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define METALANG99_variadicsCount_IMPL(...) v(METALANG99_VARIADICS_COUNT(__VA_ARGS__))

#define METALANG99_PRIV_variadicsGet_0(...)                                                        \
    METALANG99_call(METALANG99_PRIV_variadicsGet_0, __VA_ARGS__)
#define METALANG99_PRIV_variadicsGet_1(...)                                                        \
    METALANG99_call(METALANG99_PRIV_variadicsGet_1, __VA_ARGS__)
#define METALANG99_PRIV_variadicsGet_2(...)                                                        \
    METALANG99_call(METALANG99_PRIV_variadicsGet_2, __VA_ARGS__)
#define METALANG99_PRIV_variadicsGet_3(...)                                                        \
    METALANG99_call(METALANG99_PRIV_variadicsGet_3, __VA_ARGS__)
#define METALANG99_PRIV_variadicsGet_4(...)                                                        \
    METALANG99_call(METALANG99_PRIV_variadicsGet_4, __VA_ARGS__)
#define METALANG99_PRIV_variadicsGet_5(...)                                                        \
    METALANG99_call(METALANG99_PRIV_variadicsGet_5, __VA_ARGS__)
#define METALANG99_PRIV_variadicsGet_6(...)                                                        \
    METALANG99_call(METALANG99_PRIV_variadicsGet_6, __VA_ARGS__)
#define METALANG99_PRIV_variadicsGet_7(...)                                                        \
    METALANG99_call(METALANG99_PRIV_variadicsGet_7, __VA_ARGS__)

#define METALANG99_PRIV_variadicsGet_0_IMPL(...) v(METALANG99_VARIADICS_GET(0)(__VA_ARGS__))
#define METALANG99_PRIV_variadicsGet_1_IMPL(...) v(METALANG99_VARIADICS_GET(1)(__VA_ARGS__))
#define METALANG99_PRIV_variadicsGet_2_IMPL(...) v(METALANG99_VARIADICS_GET(2)(__VA_ARGS__))
#define METALANG99_PRIV_variadicsGet_3_IMPL(...) v(METALANG99_VARIADICS_GET(3)(__VA_ARGS__))
#define METALANG99_PRIV_variadicsGet_4_IMPL(...) v(METALANG99_VARIADICS_GET(4)(__VA_ARGS__))
#define METALANG99_PRIV_variadicsGet_5_IMPL(...) v(METALANG99_VARIADICS_GET(5)(__VA_ARGS__))
#define METALANG99_PRIV_variadicsGet_6_IMPL(...) v(METALANG99_VARIADICS_GET(6)(__VA_ARGS__))
#define METALANG99_PRIV_variadicsGet_7_IMPL(...) v(METALANG99_VARIADICS_GET(7)(__VA_ARGS__))

#define METALANG99_PRIV_VARIADICS_GET_0(...) METALANG99_PRIV_VARIADICS_GET_AUX_0(__VA_ARGS__, ~)
#define METALANG99_PRIV_VARIADICS_GET_1(...) METALANG99_PRIV_VARIADICS_GET_AUX_1(__VA_ARGS__, ~)
#define METALANG99_PRIV_VARIADICS_GET_2(...) METALANG99_PRIV_VARIADICS_GET_AUX_2(__VA_ARGS__, ~)
#define METALANG99_PRIV_VARIADICS_GET_3(...) METALANG99_PRIV_VARIADICS_GET_AUX_3(__VA_ARGS__, ~)
#define METALANG99_PRIV_VARIADICS_GET_4(...) METALANG99_PRIV_VARIADICS_GET_AUX_4(__VA_ARGS__, ~)
#define METALANG99_PRIV_VARIADICS_GET_5(...) METALANG99_PRIV_VARIADICS_GET_AUX_5(__VA_ARGS__, ~)
#define METALANG99_PRIV_VARIADICS_GET_6(...) METALANG99_PRIV_VARIADICS_GET_AUX_6(__VA_ARGS__, ~)
#define METALANG99_PRIV_VARIADICS_GET_7(...) METALANG99_PRIV_VARIADICS_GET_AUX_7(__VA_ARGS__, ~)

#define METALANG99_PRIV_VARIADICS_GET_AUX_0(a, ...)                             a
#define METALANG99_PRIV_VARIADICS_GET_AUX_1(_a, b, ...)                         b
#define METALANG99_PRIV_VARIADICS_GET_AUX_2(_a, _b, c, ...)                     c
#define METALANG99_PRIV_VARIADICS_GET_AUX_3(_a, _b, _c, d, ...)                 d
#define METALANG99_PRIV_VARIADICS_GET_AUX_4(_a, _b, _c, _d, e, ...)             e
#define METALANG99_PRIV_VARIADICS_GET_AUX_5(_a, _b, _c, _d, _e, f, ...)         f
#define METALANG99_PRIV_VARIADICS_GET_AUX_6(_a, _b, _c, _d, _e, _f, g, ...)     g
#define METALANG99_PRIV_VARIADICS_GET_AUX_7(_a, _b, _c, _d, _e, _f, _g, h, ...) h

#define METALANG99_variadicsTail_IMPL(...) v(METALANG99_VARIADICS_TAIL(__VA_ARGS__))

// METALANG99_variadicsForEach_IMPL {
#define METALANG99_variadicsForEach_IMPL(f, ...)                                                   \
    METALANG99_PRIV_variadicsForEachAux_IMPL(                                                      \
        f,                                                                                         \
        METALANG99_PRIV_VARIADICS_COUNT(__VA_ARGS__),                                              \
        __VA_ARGS__,                                                                               \
        ~)

#define METALANG99_PRIV_variadicsForEachAux_IMPL(f, count, ...)                                    \
    METALANG99_callTrivial(                                                                        \
        METALANG99_PRIV_IF(                                                                        \
            METALANG99_PRIV_natEq(count, 1),                                                       \
            METALANG99_PRIV_variadicsForEachDone,                                                  \
            METALANG99_PRIV_variadicsForEachProgress),                                             \
        f,                                                                                         \
        count,                                                                                     \
        __VA_ARGS__)

#define METALANG99_PRIV_variadicsForEachDone_IMPL(f, _count, x, _) METALANG99_appl_IMPL(f, x)
#define METALANG99_PRIV_variadicsForEachProgress_IMPL(f, count, x, ...)                            \
    METALANG99_terms(                                                                              \
        METALANG99_appl_IMPL(f, x),                                                                \
        METALANG99_PRIV_variadicsForEachAux_IMPL(f, METALANG99_PRIV_dec(count), __VA_ARGS__))
// }

// METALANG99_variadicsForEachI_IMPL {
#define METALANG99_variadicsForEachI_IMPL(f, ...)                                                  \
    METALANG99_PRIV_variadicsForEachIAux_IMPL(                                                     \
        f,                                                                                         \
        0,                                                                                         \
        METALANG99_PRIV_VARIADICS_COUNT(__VA_ARGS__),                                              \
        __VA_ARGS__,                                                                               \
        ~)

#define METALANG99_PRIV_variadicsForEachIAux_IMPL(f, i, count, ...)                                \
    METALANG99_callTrivial(                                                                        \
        METALANG99_PRIV_IF(                                                                        \
            METALANG99_PRIV_natEq(count, 1),                                                       \
            METALANG99_PRIV_variadicsForEachIDone,                                                 \
            METALANG99_PRIV_variadicsForEachIProgress),                                            \
        f,                                                                                         \
        i,                                                                                         \
        count,                                                                                     \
        __VA_ARGS__)

#define METALANG99_PRIV_variadicsForEachIDone_IMPL(f, i, _count, x, _)                             \
    METALANG99_appl2_IMPL(f, x, i)
#define METALANG99_PRIV_variadicsForEachIProgress_IMPL(f, i, count, x, ...)                        \
    METALANG99_terms(                                                                              \
        METALANG99_appl2_IMPL(f, x, i),                                                            \
        METALANG99_PRIV_variadicsForEachIAux_IMPL(                                                 \
            f,                                                                                     \
            METALANG99_PRIV_inc(i),                                                                \
            METALANG99_PRIV_dec(count),                                                            \
            __VA_ARGS__))
// }

// } (Implementation)

// Arity specifiers {
#define METALANG99_variadicsCount_ARITY    1
#define METALANG99_variadicsTail_ARITY     1
#define METALANG99_variadicsForEach_ARITY  2
#define METALANG99_variadicsForEachI_ARITY 2

#define METALANG99_PRIV_variadicsGet_0_ARITY 1
#define METALANG99_PRIV_variadicsGet_1_ARITY 1
#define METALANG99_PRIV_variadicsGet_2_ARITY 1
#define METALANG99_PRIV_variadicsGet_3_ARITY 1
#define METALANG99_PRIV_variadicsGet_4_ARITY 1
#define METALANG99_PRIV_variadicsGet_5_ARITY 1
#define METALANG99_PRIV_variadicsGet_6_ARITY 1
#define METALANG99_PRIV_variadicsGet_7_ARITY 1
// }

// Aliases {
#ifndef METALANG99_FULL_PREFIX_ONLY

#define M_variadicsCount    METALANG99_variadicsCount
#define M_variadicsGet      METALANG99_variadicsGet
#define M_variadicsTail     METALANG99_variadicsTail
#define M_variadicsForEach  METALANG99_variadicsForEach
#define M_variadicsForEachI METALANG99_variadicsForEachI

#define M_VARIADICS_COUNT METALANG99_VARIADICS_COUNT
#define M_VARIADICS_GET   METALANG99_VARIADICS_GET
#define M_VARIADICS_TAIL  METALANG99_VARIADICS_TAIL

#endif // METALANG99_FULL_PREFIX_ONLY
// }

#endif // DOXYGEN_IGNORE

#endif // METALANG99_VARIADICS_H
