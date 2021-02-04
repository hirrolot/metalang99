/**
 * @file
 * Variadic macro utilities.
 *
 * Epilepsy does not provide a lot of stuff in this module; if a needed function is missed, invoking
 * #EPILEPSY_list and then manipulating with the resulting Cons-list might be helpful.
 */

#ifndef EPILEPSY_VARIADICS_H
#define EPILEPSY_VARIADICS_H

#include <epilepsy/lang.h>
#include <epilepsy/priv/variadics/count.h>
#include <epilepsy/uint/dec.h>
#include <epilepsy/uint/eq.h>

// Desugaring {
/**
 * Computes a count of its arguments.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/variadics.h>
 *
 * // 3
 * E_variadicsCount(v(~, ~, ~))
 *
 * // 1
 * E_variadicsCount()
 * @endcode
 *
 * @note Currently, this function can accept at most 256 arguments.
 */
#define EPILEPSY_variadicsCount(...) EPILEPSY_call(EPILEPSY_variadicsCount, __VA_ARGS__)

/**
 * Extracts a head of its arguments.
 *
 * At least two arguments shall be specified.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/variadics.h>
 *
 * // 1
 * E_variadicsHead(v(1, 2, 3))
 * @endcode
 */
#define EPILEPSY_variadicsHead(...) EPILEPSY_call(EPILEPSY_variadicsHead, __VA_ARGS__)

/**
 * Extracts a tail of its arguments.
 *
 * At least two arguments shall be specified.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/variadics.h>
 *
 * // 2, 3
 * E_variadicsTail(v(1, 2, 3))
 * @endcode
 */
#define EPILEPSY_variadicsTail(...) EPILEPSY_call(EPILEPSY_variadicsTail, __VA_ARGS__)

/**
 * Maps a sequence of arguments with @p f.
 *
 * The result is `EPILEPSY_appl(v(f), v(x1)) ... EPILEPSY_appl(v(f), v(xN))`.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/variadics.h>
 * #include <epilepsy/uint.h>
 *
 * // 2 3 4
 * E_variadicsMap(E_appl(v(E_uintAdd), v(1)), v(1, 2, 3))
 * @endcode
 *
 * @note @p f can evaluate to many Epilepsy terms.
 */
#define EPILEPSY_variadicsMap(f, ...) EPILEPSY_call(EPILEPSY_variadicsMap, f __VA_ARGS__)

/**
 * The same as #EPILEPSY_variadicsMap but intersperses a comma between invocations of @p f.
 *
 * The result is `EPILEPSY_appl(v(f), v(x1)) v(,) ... v(,) EPILEPSY_appl(v(f), v(xN))`.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/variadics.h>
 * #include <epilepsy/uint.h>
 *
 * // 2, 3, 4
 * E_variadicsMapCommaSep(E_appl(v(E_uintAdd), v(1)), v(1, 2, 3))
 * @endcode
 *
 * @note @p f can evaluate to many Epilepsy terms.
 */
#define EPILEPSY_variadicsMapCommaSep(f, ...)                                                      \
    EPILEPSY_call(EPILEPSY_variadicsMapCommaSep, f __VA_ARGS__)

/**
 * The same as #EPILEPSY_listMapI but for variadics.
 *
 * The result is `EPILEPSY_appl2(v(f), v(x1), v(0)) ... EPILEPSY_appl2(v(f), v(xN), v(N))`.
 *
 * @note Unlike #EPILEPSY_listMapI, @p f can evaluate to many Epilepsy terms.
 */
#define EPILEPSY_variadicsMapI(f, ...) EPILEPSY_call(EPILEPSY_variadicsMapI, f __VA_ARGS__)

/**
 * The same as #EPILEPSY_variadicsMapI but intersperses a comma between invocations of @p f.
 *
 * The result is `EPILEPSY_appl2(v(f), v(x1), v(0)) v(,) ... v(,) EPILEPSY_appl2(v(f), v(xN),
 * v(N))`.
 *
 * @note @p f can evaluate to many Epilepsy terms.
 */
#define EPILEPSY_variadicsMapICommaSep(f, ...)                                                     \
    EPILEPSY_call(EPILEPSY_variadicsMapICommaSep, f __VA_ARGS__)

/**
 * The plain version of #EPILEPSY_variadicsCount.
 */
#define EPILEPSY_variadicsCountPlain(...) EPILEPSY_PRIV_VARIADICS_COUNT(__VA_ARGS__)

/**
 * The plain version of #EPILEPSY_variadicsHead.
 */
#define EPILEPSY_variadicsHeadPlain(...) EPILEPSY_PRIV_VARIADICS_HEAD(__VA_ARGS__)

/**
 * The plain version of #EPILEPSY_variadicsTail.
 */
#define EPILEPSY_variadicsTailPlain(...) EPILEPSY_PRIV_VARIADICS_TAIL(__VA_ARGS__)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define EPILEPSY_variadicsCount_IMPL(...) v(EPILEPSY_PRIV_VARIADICS_COUNT(__VA_ARGS__))
#define EPILEPSY_variadicsHead_IMPL(...)  v(EPILEPSY_variadicsHeadPlain(__VA_ARGS__))
#define EPILEPSY_variadicsTail_IMPL(...)  v(EPILEPSY_variadicsTailPlain(__VA_ARGS__))

// TODO: refactor this boilerplate.

// EPILEPSY_variadicsMap_IMPL {
#define EPILEPSY_variadicsMap_IMPL(f, ...)                                                         \
    EPILEPSY_variadicsMap_AUX_IMPL(f, EPILEPSY_PRIV_VARIADICS_COUNT(__VA_ARGS__), __VA_ARGS__, ~)

#define EPILEPSY_variadicsMap_AUX_IMPL(f, count, ...)                                              \
    EPILEPSY_callTrivial(                                                                          \
        EPILEPSY_PRIV_IF(                                                                          \
            EPILEPSY_PRIV_uintEq(count, 1),                                                        \
            EPILEPSY_variadicsMap_DONE,                                                            \
            EPILEPSY_variadicsMap_PROGRESS),                                                       \
        f,                                                                                         \
        count,                                                                                     \
        __VA_ARGS__)

#define EPILEPSY_variadicsMap_DONE_IMPL(f, _count, x, _) EPILEPSY_callTrivial(EPILEPSY_appl, f, x)
#define EPILEPSY_variadicsMap_PROGRESS_IMPL(f, count, x, ...)                                      \
    EPILEPSY_callTrivial(EPILEPSY_appl, f, x) EPILEPSY_callTrivial(                                \
        EPILEPSY_variadicsMap_AUX,                                                                 \
        f,                                                                                         \
        EPILEPSY_PRIV_uintDec(count),                                                              \
        __VA_ARGS__)
// }

// EPILEPSY_variadicsMapCommaSep_IMPL {
#define EPILEPSY_variadicsMapCommaSep_IMPL(f, ...)                                                 \
    EPILEPSY_variadicsMapCommaSep_AUX_IMPL(                                                        \
        f,                                                                                         \
        EPILEPSY_PRIV_VARIADICS_COUNT(__VA_ARGS__),                                                \
        __VA_ARGS__,                                                                               \
        ~)

#define EPILEPSY_variadicsMapCommaSep_AUX_IMPL(f, count, ...)                                      \
    EPILEPSY_callTrivial(                                                                          \
        EPILEPSY_PRIV_IF(                                                                          \
            EPILEPSY_PRIV_uintEq(count, 1),                                                        \
            EPILEPSY_variadicsMapCommaSep_DONE,                                                    \
            EPILEPSY_variadicsMapCommaSep_PROGRESS),                                               \
        f,                                                                                         \
        count,                                                                                     \
        __VA_ARGS__)

#define EPILEPSY_variadicsMapCommaSep_DONE_IMPL(f, _count, x, _)                                   \
    EPILEPSY_callTrivial(EPILEPSY_appl, f, x)
#define EPILEPSY_variadicsMapCommaSep_PROGRESS_IMPL(f, count, x, ...)                              \
    EPILEPSY_callTrivial(EPILEPSY_appl, f, x) v(, ) EPILEPSY_callTrivial(                          \
        EPILEPSY_variadicsMapCommaSep_AUX,                                                         \
        f,                                                                                         \
        EPILEPSY_PRIV_uintDec(count),                                                              \
        __VA_ARGS__)
// }

// EPILEPSY_variadicsMapI_IMPL {
#define EPILEPSY_variadicsMapI_IMPL(f, ...)                                                        \
    EPILEPSY_variadicsMapI_AUX_IMPL(                                                               \
        f,                                                                                         \
        0,                                                                                         \
        EPILEPSY_PRIV_VARIADICS_COUNT(__VA_ARGS__),                                                \
        __VA_ARGS__,                                                                               \
        ~)

#define EPILEPSY_variadicsMapI_AUX_IMPL(f, i, count, ...)                                          \
    EPILEPSY_callTrivial(                                                                          \
        EPILEPSY_PRIV_IF(                                                                          \
            EPILEPSY_PRIV_uintEq(count, 1),                                                        \
            EPILEPSY_variadicsMapI_DONE,                                                           \
            EPILEPSY_variadicsMapI_PROGRESS),                                                      \
        f,                                                                                         \
        i,                                                                                         \
        count,                                                                                     \
        __VA_ARGS__)

#define EPILEPSY_variadicsMapI_DONE_IMPL(f, i, _count, x, _)                                       \
    EPILEPSY_callTrivial(EPILEPSY_appl2, f, x, i)
#define EPILEPSY_variadicsMapI_PROGRESS_IMPL(f, i, count, x, ...)                                  \
    EPILEPSY_callTrivial(EPILEPSY_appl2, f, x, i) EPILEPSY_callTrivial(                            \
        EPILEPSY_variadicsMapI_AUX,                                                                \
        f,                                                                                         \
        EPILEPSY_PRIV_uintInc(i),                                                                  \
        EPILEPSY_PRIV_uintDec(count),                                                              \
        __VA_ARGS__)
// }

// EPILEPSY_variadicsMapICommaSep_IMPL {
#define EPILEPSY_variadicsMapICommaSep_IMPL(f, ...)                                                \
    EPILEPSY_variadicsMapICommaSep_AUX_IMPL(                                                       \
        f,                                                                                         \
        0,                                                                                         \
        EPILEPSY_PRIV_VARIADICS_COUNT(__VA_ARGS__),                                                \
        __VA_ARGS__,                                                                               \
        ~)

#define EPILEPSY_variadicsMapICommaSep_AUX_IMPL(f, i, count, ...)                                  \
    EPILEPSY_callTrivial(                                                                          \
        EPILEPSY_PRIV_IF(                                                                          \
            EPILEPSY_PRIV_uintEq(count, 1),                                                        \
            EPILEPSY_variadicsMapICommaSep_DONE,                                                   \
            EPILEPSY_variadicsMapICommaSep_PROGRESS),                                              \
        f,                                                                                         \
        i,                                                                                         \
        count,                                                                                     \
        __VA_ARGS__)

#define EPILEPSY_variadicsMapICommaSep_DONE_IMPL(f, i, _count, x, _)                               \
    EPILEPSY_callTrivial(EPILEPSY_appl2, f, x, i)
#define EPILEPSY_variadicsMapICommaSep_PROGRESS_IMPL(f, i, count, x, ...)                          \
    EPILEPSY_callTrivial(EPILEPSY_appl2, f, x, i) v(, ) EPILEPSY_callTrivial(                      \
        EPILEPSY_variadicsMapICommaSep_AUX,                                                        \
        f,                                                                                         \
        EPILEPSY_PRIV_uintInc(i),                                                                  \
        EPILEPSY_PRIV_uintDec(count),                                                              \
        __VA_ARGS__)
// }

// } (Implementation)

// Arity specifiers {
#define EPILEPSY_variadicsCount_ARITY        1
#define EPILEPSY_variadicsHead_ARITY         1
#define EPILEPSY_variadicsTail_ARITY         1
#define EPILEPSY_variadicsMap_ARITY          2
#define EPILEPSY_variadicsMapCommaSep_ARITY  2
#define EPILEPSY_variadicsMapI_ARITY         2
#define EPILEPSY_variadicsMapICommaSep_ARITY 2
// }

// Aliases {
#ifndef EPILEPSY_NO_SMALL_PREFIX

#define E_variadicsCount        EPILEPSY_variadicsCount
#define E_variadicsHead         EPILEPSY_variadicsHead
#define E_variadicsTail         EPILEPSY_variadicsTail
#define E_variadicsMap          EPILEPSY_variadicsMap
#define E_variadicsMapCommaSep  EPILEPSY_variadicsMapCommaSep
#define E_variadicsMapI         EPILEPSY_variadicsMapI
#define E_variadicsMapICommaSep EPILEPSY_variadicsMapICommaSep

#define E_variadicsCountPlain EPILEPSY_variadicsCountPlain
#define E_variadicsHeadPlain  EPILEPSY_variadicsHeadPlain
#define E_variadicsTailPlain  EPILEPSY_variadicsTailPlain

#endif // EPILEPSY_NO_SMALL_PREFIX
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_VARIADICS_H
