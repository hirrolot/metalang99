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
 * @note Currently, this function can accept at most 256 arguments.
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
 * At least two arguments shall be specified.
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
 * Maps a sequence of arguments with @p f.
 *
 * The result is `METALANG99_appl(v(f), v(x1)) ... METALANG99_appl(v(f), v(xN))`.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/variadics.h>
 * #include <metalang99/uint.h>
 *
 * // 2 3 4
 * M_variadicsMap(M_appl(v(M_uintAdd), v(1)), v(1, 2, 3))
 * @endcode
 *
 * @note @p f can evaluate to many Metalang99 terms.
 */
#define METALANG99_variadicsMap(f, ...) METALANG99_call(METALANG99_variadicsMap, f __VA_ARGS__)

/**
 * The same as #METALANG99_variadicsMap but intersperses a comma between invocations of @p f.
 *
 * The result is `METALANG99_appl(v(f), v(x1)) v(,) ... v(,) METALANG99_appl(v(f), v(xN))`.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/variadics.h>
 * #include <metalang99/uint.h>
 *
 * // 2, 3, 4
 * M_variadicsMapCommaSep(M_appl(v(M_uintAdd), v(1)), v(1, 2, 3))
 * @endcode
 *
 * @note @p f can evaluate to many Metalang99 terms.
 */
#define METALANG99_variadicsMapCommaSep(f, ...)                                                    \
    METALANG99_call(METALANG99_variadicsMapCommaSep, f __VA_ARGS__)

/**
 * The same as #METALANG99_listMapI but for variadics.
 *
 * The result is `METALANG99_appl2(v(f), v(x1), v(0)) ... METALANG99_appl2(v(f), v(xN), v(N))`.
 *
 * @note Unlike #METALANG99_listMapI, @p f can evaluate to many Metalang99 terms.
 */
#define METALANG99_variadicsMapI(f, ...) METALANG99_call(METALANG99_variadicsMapI, f __VA_ARGS__)

/**
 * The same as #METALANG99_variadicsMapI but intersperses a comma between invocations of @p f.
 *
 * The result is `METALANG99_appl2(v(f), v(x1), v(0)) v(,) ... v(,) METALANG99_appl2(v(f), v(xN),
 * v(N))`.
 *
 * @note @p f can evaluate to many Metalang99 terms.
 */
#define METALANG99_variadicsMapICommaSep(f, ...)                                                   \
    METALANG99_call(METALANG99_variadicsMapICommaSep, f __VA_ARGS__)

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
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define METALANG99_variadicsCount_IMPL(...) v(METALANG99_PRIV_VARIADICS_COUNT(__VA_ARGS__))
#define METALANG99_variadicsHead_IMPL(...)  v(METALANG99_variadicsHeadPlain(__VA_ARGS__))
#define METALANG99_variadicsTail_IMPL(...)  v(METALANG99_variadicsTailPlain(__VA_ARGS__))

// TODO: refactor this boilerplate.

// METALANG99_variadicsMap_IMPL {
#define METALANG99_variadicsMap_IMPL(f, ...)                                                       \
    METALANG99_variadicsMap_AUX_IMPL(                                                              \
        f,                                                                                         \
        METALANG99_PRIV_VARIADICS_COUNT(__VA_ARGS__),                                              \
        __VA_ARGS__,                                                                               \
        ~)

#define METALANG99_variadicsMap_AUX_IMPL(f, count, ...)                                            \
    METALANG99_callTrivial(                                                                        \
        METALANG99_PRIV_IF(                                                                        \
            METALANG99_PRIV_uintEq(count, 1),                                                      \
            METALANG99_variadicsMap_DONE,                                                          \
            METALANG99_variadicsMap_PROGRESS),                                                     \
        f,                                                                                         \
        count,                                                                                     \
        __VA_ARGS__)

#define METALANG99_variadicsMap_DONE_IMPL(f, _count, x, _)                                         \
    METALANG99_callTrivial(METALANG99_appl, f, x)
#define METALANG99_variadicsMap_PROGRESS_IMPL(f, count, x, ...)                                    \
    METALANG99_callTrivial(METALANG99_appl, f, x) METALANG99_callTrivial(                          \
        METALANG99_variadicsMap_AUX,                                                               \
        f,                                                                                         \
        METALANG99_PRIV_uintDec(count),                                                            \
        __VA_ARGS__)
// }

// METALANG99_variadicsMapCommaSep_IMPL {
#define METALANG99_variadicsMapCommaSep_IMPL(f, ...)                                               \
    METALANG99_variadicsMapCommaSep_AUX_IMPL(                                                      \
        f,                                                                                         \
        METALANG99_PRIV_VARIADICS_COUNT(__VA_ARGS__),                                              \
        __VA_ARGS__,                                                                               \
        ~)

#define METALANG99_variadicsMapCommaSep_AUX_IMPL(f, count, ...)                                    \
    METALANG99_callTrivial(                                                                        \
        METALANG99_PRIV_IF(                                                                        \
            METALANG99_PRIV_uintEq(count, 1),                                                      \
            METALANG99_variadicsMapCommaSep_DONE,                                                  \
            METALANG99_variadicsMapCommaSep_PROGRESS),                                             \
        f,                                                                                         \
        count,                                                                                     \
        __VA_ARGS__)

#define METALANG99_variadicsMapCommaSep_DONE_IMPL(f, _count, x, _)                                 \
    METALANG99_callTrivial(METALANG99_appl, f, x)
#define METALANG99_variadicsMapCommaSep_PROGRESS_IMPL(f, count, x, ...)                            \
    METALANG99_callTrivial(METALANG99_appl, f, x) v(, ) METALANG99_callTrivial(                    \
        METALANG99_variadicsMapCommaSep_AUX,                                                       \
        f,                                                                                         \
        METALANG99_PRIV_uintDec(count),                                                            \
        __VA_ARGS__)
// }

// METALANG99_variadicsMapI_IMPL {
#define METALANG99_variadicsMapI_IMPL(f, ...)                                                      \
    METALANG99_variadicsMapI_AUX_IMPL(                                                             \
        f,                                                                                         \
        0,                                                                                         \
        METALANG99_PRIV_VARIADICS_COUNT(__VA_ARGS__),                                              \
        __VA_ARGS__,                                                                               \
        ~)

#define METALANG99_variadicsMapI_AUX_IMPL(f, i, count, ...)                                        \
    METALANG99_callTrivial(                                                                        \
        METALANG99_PRIV_IF(                                                                        \
            METALANG99_PRIV_uintEq(count, 1),                                                      \
            METALANG99_variadicsMapI_DONE,                                                         \
            METALANG99_variadicsMapI_PROGRESS),                                                    \
        f,                                                                                         \
        i,                                                                                         \
        count,                                                                                     \
        __VA_ARGS__)

#define METALANG99_variadicsMapI_DONE_IMPL(f, i, _count, x, _)                                     \
    METALANG99_callTrivial(METALANG99_appl2, f, x, i)
#define METALANG99_variadicsMapI_PROGRESS_IMPL(f, i, count, x, ...)                                \
    METALANG99_callTrivial(METALANG99_appl2, f, x, i) METALANG99_callTrivial(                      \
        METALANG99_variadicsMapI_AUX,                                                              \
        f,                                                                                         \
        METALANG99_PRIV_uintInc(i),                                                                \
        METALANG99_PRIV_uintDec(count),                                                            \
        __VA_ARGS__)
// }

// METALANG99_variadicsMapICommaSep_IMPL {
#define METALANG99_variadicsMapICommaSep_IMPL(f, ...)                                              \
    METALANG99_variadicsMapICommaSep_AUX_IMPL(                                                     \
        f,                                                                                         \
        0,                                                                                         \
        METALANG99_PRIV_VARIADICS_COUNT(__VA_ARGS__),                                              \
        __VA_ARGS__,                                                                               \
        ~)

#define METALANG99_variadicsMapICommaSep_AUX_IMPL(f, i, count, ...)                                \
    METALANG99_callTrivial(                                                                        \
        METALANG99_PRIV_IF(                                                                        \
            METALANG99_PRIV_uintEq(count, 1),                                                      \
            METALANG99_variadicsMapICommaSep_DONE,                                                 \
            METALANG99_variadicsMapICommaSep_PROGRESS),                                            \
        f,                                                                                         \
        i,                                                                                         \
        count,                                                                                     \
        __VA_ARGS__)

#define METALANG99_variadicsMapICommaSep_DONE_IMPL(f, i, _count, x, _)                             \
    METALANG99_callTrivial(METALANG99_appl2, f, x, i)
#define METALANG99_variadicsMapICommaSep_PROGRESS_IMPL(f, i, count, x, ...)                        \
    METALANG99_callTrivial(METALANG99_appl2, f, x, i) v(, ) METALANG99_callTrivial(                \
        METALANG99_variadicsMapICommaSep_AUX,                                                      \
        f,                                                                                         \
        METALANG99_PRIV_uintInc(i),                                                                \
        METALANG99_PRIV_uintDec(count),                                                            \
        __VA_ARGS__)
// }

// } (Implementation)

// Arity specifiers {
#define METALANG99_variadicsCount_ARITY        1
#define METALANG99_variadicsHead_ARITY         1
#define METALANG99_variadicsTail_ARITY         1
#define METALANG99_variadicsMap_ARITY          2
#define METALANG99_variadicsMapCommaSep_ARITY  2
#define METALANG99_variadicsMapI_ARITY         2
#define METALANG99_variadicsMapICommaSep_ARITY 2
// }

// Aliases {
#ifndef METALANG99_NO_SMALL_PREFIX

#define M_variadicsCount        METALANG99_variadicsCount
#define M_variadicsHead         METALANG99_variadicsHead
#define M_variadicsTail         METALANG99_variadicsTail
#define M_variadicsMap          METALANG99_variadicsMap
#define M_variadicsMapCommaSep  METALANG99_variadicsMapCommaSep
#define M_variadicsMapI         METALANG99_variadicsMapI
#define M_variadicsMapICommaSep METALANG99_variadicsMapICommaSep

#define M_variadicsCountPlain METALANG99_variadicsCountPlain
#define M_variadicsHeadPlain  METALANG99_variadicsHeadPlain
#define M_variadicsTailPlain  METALANG99_variadicsTailPlain

#endif // METALANG99_NO_SMALL_PREFIX
// }

#endif // DOXYGEN_IGNORE

#endif // METALANG99_VARIADICS_H
