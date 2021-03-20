/**
 * @file
 * Variadic arguments manipulation.
 *.
 *
 * Metalang99 does not provide a lot of stuff in this module; if a needed function is missed,
 * invoking #ML99_list and then manipulating with the resulting Cons-list might be helpful.
 */

#ifndef ML99_VARIADICS_H
#define ML99_VARIADICS_H

#include <metalang99/priv/variadics/count.h>

#include <metalang99/control.h>
#include <metalang99/lang.h>
#include <metalang99/nat.h>
#include <metalang99/util.h>

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
 * ML99_variadicsCount(v(~, ~, ~))
 *
 * // 1
 * ML99_variadicsCount()
 * @endcode
 */
#define ML99_variadicsCount(...) ML99_call(ML99_variadicsCount, __VA_ARGS__)

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
 * ML99_variadicsGet(1)(v(1, 2, 3))
 * @endcode
 */
#define ML99_variadicsGet(i) ML99_CAT(ML99_PRIV_variadicsGet_, i)

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
 * ML99_variadicsTail(v(1, 2, 3))
 * @endcode
 */
#define ML99_variadicsTail(...) ML99_call(ML99_variadicsTail, __VA_ARGS__)

/**
 * Applies @p f to each argument.
 *
 * The result is `ML99_appl(v(f), v(x1)) ... ML99_appl(v(f), v(xN))`.
 *
 * If you already have variadics, using this macro is more efficient than
 * `ML99_listUnwrap(ML99_listMap(v(f), ML99_list(v(...))))`.
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
 * ML99_variadicsForEach(v(F), v(1, 2, 3))
 * @endcode
 *
 * @note Unlike #ML99_listMap, @p f can evaluate to many Metalang99 terms.
 */
#define ML99_variadicsForEach(f, ...) ML99_call(ML99_variadicsForEach, f, __VA_ARGS__)

/**
 * Applies @p f to each argument with an index.
 *
 * The result is `ML99_appl2(v(f), v(x1), v(0)) ... ML99_appl2(v(f), v(xN), v(N))`.
 *
 * If you already have variadics, using this macro is more efficient than
 * `ML99_listUnwrap(ML99_listMapI(v(f), ML99_list(v(...))))`.
 *
 * At most 63 variadic arguments are acceptable.
 *
 * @note Unlike #ML99_listMapI, @p f can evaluate to many Metalang99 terms.
 */
#define ML99_variadicsForEachI(f, ...) ML99_call(ML99_variadicsForEachI, f, __VA_ARGS__)

#define ML99_VARIADICS_COUNT(...) ML99_PRIV_VARIADICS_COUNT(__VA_ARGS__)
#define ML99_VARIADICS_GET(i)     ML99_CAT(ML99_PRIV_VARIADICS_GET_, i)
#define ML99_VARIADICS_TAIL(...)  ML99_PRIV_VARIADICS_TAIL(__VA_ARGS__)

#ifndef DOXYGEN_IGNORE

#define ML99_variadicsCount_IMPL(...) v(ML99_VARIADICS_COUNT(__VA_ARGS__))

#define ML99_PRIV_variadicsGet_0(...) ML99_call(ML99_PRIV_variadicsGet_0, __VA_ARGS__)
#define ML99_PRIV_variadicsGet_1(...) ML99_call(ML99_PRIV_variadicsGet_1, __VA_ARGS__)
#define ML99_PRIV_variadicsGet_2(...) ML99_call(ML99_PRIV_variadicsGet_2, __VA_ARGS__)
#define ML99_PRIV_variadicsGet_3(...) ML99_call(ML99_PRIV_variadicsGet_3, __VA_ARGS__)
#define ML99_PRIV_variadicsGet_4(...) ML99_call(ML99_PRIV_variadicsGet_4, __VA_ARGS__)
#define ML99_PRIV_variadicsGet_5(...) ML99_call(ML99_PRIV_variadicsGet_5, __VA_ARGS__)
#define ML99_PRIV_variadicsGet_6(...) ML99_call(ML99_PRIV_variadicsGet_6, __VA_ARGS__)
#define ML99_PRIV_variadicsGet_7(...) ML99_call(ML99_PRIV_variadicsGet_7, __VA_ARGS__)

#define ML99_PRIV_variadicsGet_0_IMPL(...) v(ML99_VARIADICS_GET(0)(__VA_ARGS__))
#define ML99_PRIV_variadicsGet_1_IMPL(...) v(ML99_VARIADICS_GET(1)(__VA_ARGS__))
#define ML99_PRIV_variadicsGet_2_IMPL(...) v(ML99_VARIADICS_GET(2)(__VA_ARGS__))
#define ML99_PRIV_variadicsGet_3_IMPL(...) v(ML99_VARIADICS_GET(3)(__VA_ARGS__))
#define ML99_PRIV_variadicsGet_4_IMPL(...) v(ML99_VARIADICS_GET(4)(__VA_ARGS__))
#define ML99_PRIV_variadicsGet_5_IMPL(...) v(ML99_VARIADICS_GET(5)(__VA_ARGS__))
#define ML99_PRIV_variadicsGet_6_IMPL(...) v(ML99_VARIADICS_GET(6)(__VA_ARGS__))
#define ML99_PRIV_variadicsGet_7_IMPL(...) v(ML99_VARIADICS_GET(7)(__VA_ARGS__))

#define ML99_PRIV_VARIADICS_GET_0(...) ML99_PRIV_VARIADICS_GET_AUX_0(__VA_ARGS__, ~)
#define ML99_PRIV_VARIADICS_GET_1(...) ML99_PRIV_VARIADICS_GET_AUX_1(__VA_ARGS__, ~)
#define ML99_PRIV_VARIADICS_GET_2(...) ML99_PRIV_VARIADICS_GET_AUX_2(__VA_ARGS__, ~)
#define ML99_PRIV_VARIADICS_GET_3(...) ML99_PRIV_VARIADICS_GET_AUX_3(__VA_ARGS__, ~)
#define ML99_PRIV_VARIADICS_GET_4(...) ML99_PRIV_VARIADICS_GET_AUX_4(__VA_ARGS__, ~)
#define ML99_PRIV_VARIADICS_GET_5(...) ML99_PRIV_VARIADICS_GET_AUX_5(__VA_ARGS__, ~)
#define ML99_PRIV_VARIADICS_GET_6(...) ML99_PRIV_VARIADICS_GET_AUX_6(__VA_ARGS__, ~)
#define ML99_PRIV_VARIADICS_GET_7(...) ML99_PRIV_VARIADICS_GET_AUX_7(__VA_ARGS__, ~)

#define ML99_PRIV_VARIADICS_GET_AUX_0(a, ...)                             a
#define ML99_PRIV_VARIADICS_GET_AUX_1(_a, b, ...)                         b
#define ML99_PRIV_VARIADICS_GET_AUX_2(_a, _b, c, ...)                     c
#define ML99_PRIV_VARIADICS_GET_AUX_3(_a, _b, _c, d, ...)                 d
#define ML99_PRIV_VARIADICS_GET_AUX_4(_a, _b, _c, _d, e, ...)             e
#define ML99_PRIV_VARIADICS_GET_AUX_5(_a, _b, _c, _d, _e, f, ...)         f
#define ML99_PRIV_VARIADICS_GET_AUX_6(_a, _b, _c, _d, _e, _f, g, ...)     g
#define ML99_PRIV_VARIADICS_GET_AUX_7(_a, _b, _c, _d, _e, _f, _g, h, ...) h

#define ML99_variadicsTail_IMPL(...) v(ML99_VARIADICS_TAIL(__VA_ARGS__))

// ML99_variadicsForEach_IMPL {
#define ML99_variadicsForEach_IMPL(f, ...)                                                         \
    ML99_PRIV_variadicsForEachAux_IMPL(f, ML99_PRIV_VARIADICS_COUNT(__VA_ARGS__), __VA_ARGS__, ~)

#define ML99_PRIV_variadicsForEachAux_IMPL(f, count, ...)                                          \
    ML99_callUneval(                                                                               \
        ML99_IF(                                                                                   \
            ML99_NAT_EQ(count, 1),                                                                 \
            ML99_PRIV_variadicsForEachDone,                                                        \
            ML99_PRIV_variadicsForEachProgress),                                                   \
        f,                                                                                         \
        count,                                                                                     \
        __VA_ARGS__)

#define ML99_PRIV_variadicsForEachDone_IMPL(f, _count, x, _) ML99_appl_IMPL(f, x)
#define ML99_PRIV_variadicsForEachProgress_IMPL(f, count, x, ...)                                  \
    ML99_TERMS(                                                                                    \
        ML99_appl_IMPL(f, x),                                                                      \
        ML99_PRIV_variadicsForEachAux_IMPL(f, ML99_DEC(count), __VA_ARGS__))
// }

// ML99_variadicsForEachI_IMPL {
#define ML99_variadicsForEachI_IMPL(f, ...)                                                        \
    ML99_PRIV_variadicsForEachIAux_IMPL(                                                           \
        f,                                                                                         \
        0,                                                                                         \
        ML99_PRIV_VARIADICS_COUNT(__VA_ARGS__),                                                    \
        __VA_ARGS__,                                                                               \
        ~)

#define ML99_PRIV_variadicsForEachIAux_IMPL(f, i, count, ...)                                      \
    ML99_callUneval(                                                                               \
        ML99_IF(                                                                                   \
            ML99_NAT_EQ(count, 1),                                                                 \
            ML99_PRIV_variadicsForEachIDone,                                                       \
            ML99_PRIV_variadicsForEachIProgress),                                                  \
        f,                                                                                         \
        i,                                                                                         \
        count,                                                                                     \
        __VA_ARGS__)

#define ML99_PRIV_variadicsForEachIDone_IMPL(f, i, _count, x, _) ML99_appl2_IMPL(f, x, i)
#define ML99_PRIV_variadicsForEachIProgress_IMPL(f, i, count, x, ...)                              \
    ML99_TERMS(                                                                                    \
        ML99_appl2_IMPL(f, x, i),                                                                  \
        ML99_PRIV_variadicsForEachIAux_IMPL(f, ML99_INC(i), ML99_DEC(count), __VA_ARGS__))
// }

// Arity specifiers {
#define ML99_variadicsCount_ARITY    1
#define ML99_variadicsTail_ARITY     1
#define ML99_variadicsForEach_ARITY  2
#define ML99_variadicsForEachI_ARITY 2

#define ML99_PRIV_variadicsGet_0_ARITY 1
#define ML99_PRIV_variadicsGet_1_ARITY 1
#define ML99_PRIV_variadicsGet_2_ARITY 1
#define ML99_PRIV_variadicsGet_3_ARITY 1
#define ML99_PRIV_variadicsGet_4_ARITY 1
#define ML99_PRIV_variadicsGet_5_ARITY 1
#define ML99_PRIV_variadicsGet_6_ARITY 1
#define ML99_PRIV_variadicsGet_7_ARITY 1
// }

#endif // DOXYGEN_IGNORE

#endif // ML99_VARIADICS_H
