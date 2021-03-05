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
#include <metalang99/uint/dec.h>
#include <metalang99/uint/eq.h>
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
 * Extracts the first argument.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/variadics.h>
 *
 * // 1
 * M_variadicsGet0(v(1, 2, 3))
 * @endcode
 */
#define METALANG99_variadicsGet0(...) METALANG99_call(METALANG99_variadicsGet0, __VA_ARGS__)

/**
 * Extracts the second argument.
 *
 * At least two arguments must be specified.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/variadics.h>
 *
 * // 2
 * M_variadicsGet1(v(1, 2, 3))
 * @endcode
 */
#define METALANG99_variadicsGet1(...) METALANG99_call(METALANG99_variadicsGet1, __VA_ARGS__)

/**
 * Extracts the third argument.
 *
 * At least three arguments must be specified.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/variadics.h>
 *
 * // 3
 * M_variadicsGet2(v(1, 2, 3))
 * @endcode
 */
#define METALANG99_variadicsGet2(...) METALANG99_call(METALANG99_variadicsGet2, __VA_ARGS__)

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

/**
 * The plain version of #METALANG99_variadicsCount.
 */
#define METALANG99_variadicsCountPlain(...) METALANG99_PRIV_VARIADICS_COUNT(__VA_ARGS__)

/**
 * The plain version of #METALANG99_variadicsGet0.
 */
#define METALANG99_variadicsGet0Plain(...) METALANG99_PRIV_variadicsGet0(__VA_ARGS__)

/**
 * The plain version of #METALANG99_variadicsGet1.
 */
#define METALANG99_variadicsGet1Plain(...) METALANG99_PRIV_variadicsGet1(__VA_ARGS__)

/**
 * The plain version of #METALANG99_variadicsGet2.
 */
#define METALANG99_variadicsGet2Plain(...) METALANG99_PRIV_variadicsGet2(__VA_ARGS__)

/**
 * The plain version of #METALANG99_variadicsTail.
 */
#define METALANG99_variadicsTailPlain(...) METALANG99_PRIV_VARIADICS_TAIL(__VA_ARGS__)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define METALANG99_variadicsCount_IMPL(...) v(METALANG99_variadicsCountPlain(__VA_ARGS__))

#define METALANG99_variadicsGet0_IMPL(...) v(METALANG99_variadicsGet0Plain(__VA_ARGS__))
#define METALANG99_variadicsGet1_IMPL(...) v(METALANG99_variadicsGet1Plain(__VA_ARGS__))
#define METALANG99_variadicsGet2_IMPL(...) v(METALANG99_variadicsGet2Plain(__VA_ARGS__))

#define METALANG99_PRIV_variadicsGet0(a, ...)         a
#define METALANG99_PRIV_variadicsGet1(_a, b, ...)     b
#define METALANG99_PRIV_variadicsGet2(_a, _b, c, ...) c

#define METALANG99_variadicsTail_IMPL(...) v(METALANG99_variadicsTailPlain(__VA_ARGS__))

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
            METALANG99_PRIV_uintEq(count, 1),                                                      \
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
            METALANG99_PRIV_uintEq(count, 1),                                                      \
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
#define METALANG99_variadicsGet0_ARITY     1
#define METALANG99_variadicsGet1_ARITY     1
#define METALANG99_variadicsGet2_ARITY     1
#define METALANG99_variadicsTail_ARITY     1
#define METALANG99_variadicsForEach_ARITY  2
#define METALANG99_variadicsForEachI_ARITY 2
// }

// Aliases {
#ifndef METALANG99_NO_SMALL_PREFIX

#define M_variadicsCount    METALANG99_variadicsCount
#define M_variadicsGet0     METALANG99_variadicsGet0
#define M_variadicsGet1     METALANG99_variadicsGet1
#define M_variadicsGet2     METALANG99_variadicsGet2
#define M_variadicsTail     METALANG99_variadicsTail
#define M_variadicsForEach  METALANG99_variadicsForEach
#define M_variadicsForEachI METALANG99_variadicsForEachI

#define M_variadicsCountPlain METALANG99_variadicsCountPlain
#define M_variadicsGet0Plain  METALANG99_variadicsGet0Plain
#define M_variadicsGet1Plain  METALANG99_variadicsGet1Plain
#define M_variadicsGet2Plain  METALANG99_variadicsGet2Plain
#define M_variadicsTailPlain  METALANG99_variadicsTailPlain

#endif // METALANG99_NO_SMALL_PREFIX
// }

#endif // DOXYGEN_IGNORE

#endif // METALANG99_VARIADICS_H
