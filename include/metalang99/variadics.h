/**
 * @file
 * Variadic macro utilities.
 *
 * Metalang99 does not provide a lot of stuff in this module; if a needed function is missed,
 * invoking #METALANG99_list and then manipulating with the resulting Cons-list might be helpful.
 */

#ifndef METALANG99_VARIADICS_H
#define METALANG99_VARIADICS_H

#include <metalang99/lang.h>
#include <metalang99/priv/variadics/count.h>
#include <metalang99/uint/dec.h>
#include <metalang99/uint/eq.h>
#include <metalang99/util.h>

// Desugaring {
/**
 * Computes a count of its arguments.
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
 *
 * @note At most 63 arguments are acceptable.
 */
#define METALANG99_variadicsCount(...) METALANG99_call(METALANG99_variadicsCount, __VA_ARGS__)

/**
 * Extracts a head of its arguments.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/variadics.h>
 *
 * // 1
 * M_variadicsHead(v(1, 2, 3))
 *
 * // 1
 * M_variadicsHead(v(1))
 * @endcode
 */
#define METALANG99_variadicsHead(...) METALANG99_call(METALANG99_variadicsHead, __VA_ARGS__)

/**
 * Extracts a tail of its arguments.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/variadics.h>
 *
 * // 2, 3
 * M_variadicsTail(v(1, 2, 3))
 * @endcode
 *
 * @note At least two arguments must be specified.
 */
#define METALANG99_variadicsTail(...) METALANG99_call(METALANG99_variadicsTail, __VA_ARGS__)

/**
 * The same as #METALANG99_variadicsHead but accepts parenthesized variadics.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/variadics.h>
 *
 * // 1
 * M_parenthesizedVariadicsHead(v((1, 2, 3)))
 * @endcode
 */
#define METALANG99_parenthesizedVariadicsHead(x)                                                   \
    METALANG99_call(METALANG99_parenthesizedVariadicsHead, x)

/**
 * The same as #METALANG99_variadicsTail but accepts parenthesized variadics.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/variadics.h>
 *
 * // 2, 3
 * M_parenthesizedVariadicsTail(v((1, 2, 3)))
 * @endcode
 */
#define METALANG99_parenthesizedVariadicsTail(x)                                                   \
    METALANG99_call(METALANG99_parenthesizedVariadicsTail, x)

/**
 * Applies @p f to each argument.
 *
 * The result is `M_appl(v(f), v(x1)) ... M_appl(v(f), v(xN))`.
 *
 * If you already have variadics, using this macro is more efficient than
 * `M_listUnwrap(M_listMap(v(F), M_list(v(...))))`.
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
 * @note At most 63 variadic arguments are acceptable.
 */
#define METALANG99_variadicsForEach(f, ...)                                                        \
    METALANG99_call(METALANG99_variadicsForEach, f, __VA_ARGS__)

/**
 * Applies @p f to each argument with an index.
 *
 * The result is `M_appl2(v(f), v(x1), v(0)) ... M_appl2(v(f), v(xN), v(N))`.
 *
 * If you already have variadics, using this macro is more efficient than
 * `M_listUnwrap(M_listMapI(v(F), M_list(v(...))))`.
 *
 * @note Unlike #METALANG99_listMapI, @p f can evaluate to many Metalang99 terms.
 * @note At most 63 variadic arguments are acceptable.
 */
#define METALANG99_variadicsForEachI(f, ...)                                                       \
    METALANG99_call(METALANG99_variadicsForEachI, f, __VA_ARGS__)

/**
 * The plain version of #METALANG99_variadicsCount.
 */
#define METALANG99_variadicsCountPlain(...) METALANG99_PRIV_VARIADICS_COUNT(__VA_ARGS__)

/**
 * The plain version of #METALANG99_variadicsHead.
 */
#define METALANG99_variadicsHeadPlain(...) METALANG99_PRIV_VARIADICS_HEAD(__VA_ARGS__)

/**
 * The plain version of #METALANG99_variadicsTail.
 */
#define METALANG99_variadicsTailPlain(...) METALANG99_PRIV_VARIADICS_TAIL(__VA_ARGS__)

/**
 * The plain version of #METALANG99_parenthesizedVariadicsHead.
 */
#define METALANG99_parenthesizedVariadicsHeadPlain(x)                                              \
    METALANG99_PRIV_VARIADICS_HEAD(METALANG99_unparenthesizePlain(x))

/**
 * The plain version of #METALANG99_parenthesizedVariadicsTail.
 */
#define METALANG99_parenthesizedVariadicsTailPlain(x)                                              \
    METALANG99_PRIV_VARIADICS_TAIL(METALANG99_unparenthesizePlain(x))
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define METALANG99_variadicsCount_IMPL(...) v(METALANG99_variadicsCountPlain(__VA_ARGS__))
#define METALANG99_variadicsHead_IMPL(...)  v(METALANG99_variadicsHeadPlain(__VA_ARGS__))
#define METALANG99_variadicsTail_IMPL(...)  v(METALANG99_variadicsTailPlain(__VA_ARGS__))
#define METALANG99_parenthesizedVariadicsHead_IMPL(x)                                              \
    v(METALANG99_parenthesizedVariadicsHeadPlain(x))
#define METALANG99_parenthesizedVariadicsTail_IMPL(x)                                              \
    v(METALANG99_parenthesizedVariadicsTailPlain(x))

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
#define METALANG99_variadicsCount_ARITY             1
#define METALANG99_variadicsHead_ARITY              1
#define METALANG99_variadicsTail_ARITY              1
#define METALANG99_parenthesizedVariadicsHead_ARITY 1
#define METALANG99_parenthesizedVariadicsTail_ARITY 1
#define METALANG99_variadicsForEach_ARITY           2
#define METALANG99_variadicsForEachI_ARITY          2
// }

// Aliases {
#ifndef METALANG99_NO_SMALL_PREFIX

#define M_variadicsCount             METALANG99_variadicsCount
#define M_variadicsHead              METALANG99_variadicsHead
#define M_variadicsTail              METALANG99_variadicsTail
#define M_parenthesizedVariadicsHead METALANG99_parenthesizedVariadicsHead
#define M_parenthesizedVariadicsTail METALANG99_parenthesizedVariadicsTail
#define M_variadicsForEach           METALANG99_variadicsForEach
#define M_variadicsForEachI          METALANG99_variadicsForEachI

#define M_variadicsCountPlain             METALANG99_variadicsCountPlain
#define M_variadicsHeadPlain              METALANG99_variadicsHeadPlain
#define M_variadicsTailPlain              METALANG99_variadicsTailPlain
#define M_parenthesizedVariadicsHeadPlain METALANG99_parenthesizedVariadicsHeadPlain
#define M_parenthesizedVariadicsTailPlain METALANG99_parenthesizedVariadicsTailPlain

#endif // METALANG99_NO_SMALL_PREFIX
// }

#endif // DOXYGEN_IGNORE

#endif // METALANG99_VARIADICS_H
