/**
 * @file
 * Unsigned integers.
 *
 * @note Currently, unsigned integers can range only from 0 to 255, inclusively.
 */

#ifndef METALANG99_UINT_H
#define METALANG99_UINT_H

#include <metalang99/aux.h>
#include <metalang99/control.h>
#include <metalang99/lang.h>
#include <metalang99/list.h>
#include <metalang99/logical.h>
#include <metalang99/maybe.h>

#include <metalang99/uint/dec.h>
#include <metalang99/uint/div.h>
#include <metalang99/uint/eq.h>
#include <metalang99/uint/inc.h>

// Desugaring {
/**
 * \f$x + 1\f$
 *
 * # Examples
 *
 * @code
 * #include <metalang99/uint.h>
 *
 * // 6
 * M_uintInc(v(5))
 * @endcode
 *
 * @note If @p x is 255, the result is 0.
 */
#define METALANG99_uintInc(x) METALANG99_call(METALANG99_uintInc, x)

/**
 * \f$x - 1\f$
 *
 * # Examples
 *
 * @code
 * #include <metalang99/uint.h>
 *
 * // 4
 * M_uintDec(v(5))
 * @endcode
 *
 * @note If @p x is 0, the result is 255.
 */
#define METALANG99_uintDec(x) METALANG99_call(METALANG99_uintDec, x)

/**
 * Matches @p x to the two cases: if it is zero or positive.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/uint.h>
 *
 * #define MATCH_Z_IMPL()  v(Billie)
 * #define MATCH_S_IMPL(x) v(Jean ~ x)
 *
 * // Billie
 * M_uintMatch(v(0), v(MATCH_))
 *
 * // Jean ~ 122
 * M_uintMatch(v(123), v(MATCH_))
 * @endcode
 *
 * @note This function calls @p f with #METALANG99_call, so no partial application occurs, and so
 * arity specifiers are not needed.
 */
#define METALANG99_uintMatch(x, matcher) METALANG99_call(METALANG99_uintMatch, x matcher)

/**
 * The same as #METALANG99_uintMatch but provides additional arguments to all branches.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/uint.h>
 *
 * #define MATCH_Z_IMPL(x, y, z)    v(Billie ~ x y z)
 * #define MATCH_S_IMPL(n, x, y, z) v(Jean ~ n ~ x y z)
 *
 * // Billie ~ 1 2 3
 * M_uintMatchWithArgs(v(0), v(MATCH_), v(1, 2, 3))
 *
 * // Jean ~ 122 ~ 1 2 3
 * M_uintMatchWithArgs(v(123), v(MATCH_), v(1, 2, 3))
 * @endcode
 *
 * @note This function calls @p f with #METALANG99_call, so no partial application occurs, and so
 * arity specifiers are not needed.
 */
#define METALANG99_uintMatchWithArgs(x, matcher, ...)                                              \
    METALANG99_call(METALANG99_uintMatchWithArgs, x matcher __VA_ARGS__)

/**
 * \f$x = y\f$
 *
 * # Examples
 *
 * @code
 * #include <metalang99/uint.h>
 *
 * // 1
 * M_uintEq(v(5), v(5))
 *
 * // 0
 * M_uintEq(v(3), v(8))
 * @endcode
 */
#define METALANG99_uintEq(x, y) METALANG99_call(METALANG99_uintEq, x y)

/**
 * \f$x \neq y\f$
 *
 * # Examples
 *
 * @code
 * #include <metalang99/uint.h>
 *
 * // 0
 * M_uintNeq(v(5), v(5))
 *
 * // 1
 * M_uintNeq(v(3), v(8))
 * @endcode
 */
#define METALANG99_uintNeq(x, y) METALANG99_call(METALANG99_uintNeq, x y)

/**
 * \f$x > y\f$
 *
 * # Examples
 *
 * @code
 * #include <metalang99/uint.h>
 *
 * // 1
 * M_uintGreater(v(8), v(3))
 *
 * // 0
 * M_uintGreater(v(3), v(8))
 * @endcode
 */
#define METALANG99_uintGreater(x, y) METALANG99_call(METALANG99_uintGreater, x y)

/**
 * \f$x \geq y\f$
 *
 * # Examples
 *
 * @code
 * #include <metalang99/uint.h>
 *
 * // 1
 * M_uintGreaterEq(v(8), v(8))
 *
 * // 0
 * M_uintGreaterEq(v(3), v(8))
 * @endcode
 */
#define METALANG99_uintGreaterEq(x, y) METALANG99_call(METALANG99_uintGreaterEq, x y)

/**
 * \f$x < y\f$
 *
 * # Examples
 *
 * @code
 * #include <metalang99/uint.h>
 *
 * // 1
 * M_uintLesser(v(3), v(8))
 *
 * // 0
 * M_uintLesser(v(8), v(3))
 * @endcode
 */
#define METALANG99_uintLesser(x, y) METALANG99_call(METALANG99_uintLesser, x y)

/**
 * \f$x \leq y\f$
 *
 * # Examples
 *
 * @code
 * #include <metalang99/uint.h>
 *
 * // 1
 * M_uintLesserEq(v(8), v(8))
 *
 * // 0
 * M_uintLesserEq(v(8), v(3))
 * @endcode
 */
#define METALANG99_uintLesserEq(x, y) METALANG99_call(METALANG99_uintLesserEq, x y)

/**
 * \f$x + y\f$
 *
 * # Examples
 *
 * @code
 * #include <metalang99/uint.h>
 *
 * // 11
 * M_uintAdd(v(5), v(6))
 * @endcode
 */
#define METALANG99_uintAdd(x, y) METALANG99_call(METALANG99_uintAdd, x y)

/**
 * \f$x - y\f$
 *
 * # Examples
 *
 * @code
 * #include <metalang99/uint.h>
 *
 * // 6
 * M_uintSub(v(11), v(5))
 * @endcode
 */
#define METALANG99_uintSub(x, y) METALANG99_call(METALANG99_uintSub, x y)

/**
 * \f$x * y\f$
 *
 * # Examples
 *
 * @code
 * #include <metalang99/uint.h>
 *
 * // 12
 * M_uintMul(v(3), v(4))
 * @endcode
 */
#define METALANG99_uintMul(x, y) METALANG99_call(METALANG99_uintMul, x y)

/**
 * \f$\frac{x}{y}\f$
 *
 * # Examples
 *
 * @code
 * #include <metalang99/uint.h>
 *
 * // 3
 * M_uintDiv(v(12), v(4))
 * @endcode
 *
 * @note A compile-time error if \f$\frac{x}{y}\f$ is not an unsigned integer.
 */
#define METALANG99_uintDiv(x, y) METALANG99_call(METALANG99_uintDiv, x y)

/**
 * Like #METALANG99_uintDiv but returns #METALANG99_nothing is @p x is not divisible by @p y,
 * otherwise, #METALANG99_just.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/uint.h>
 *
 * // M_just(3)
 * M_uintDivChecked(v(12), v(4))
 *
 * // M_nothing()
 * M_uintDivChecked(v(14), v(5))
 *
 * // M_nothing()
 * M_uintDivChecked(v(1), v(0))
 * @endcode
 */
#define METALANG99_uintDivChecked(x, y) METALANG99_call(METALANG99_uintDivChecked, x y)

/**
 * Computes the remainder of division.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/uint.h>
 *
 * // 2
 * M_uintMod(v(8), v(3))
 * @endcode
 *
 * @note A compile-time error if @p y is 0.
 */
#define METALANG99_uintMod(x, y) METALANG99_call(METALANG99_uintMod, x y)

/**
 * \f$x + y + z\f$
 *
 * # Examples
 *
 * @code
 * #include <metalang99/uint.h>
 *
 * // 15
 * M_uintAdd3(v(1), v(6), v(8))
 * @endcode
 */
#define METALANG99_uintAdd3(x, y, z) METALANG99_call(METALANG99_uintAdd3, x y z)

/**
 * \f$x - y - z\f$
 *
 * # Examples
 *
 * @code
 * #include <metalang99/uint.h>
 *
 * // 3
 * M_uintSub3(v(8), v(2), v(3))
 * @endcode
 */
#define METALANG99_uintSub3(x, y, z) METALANG99_call(METALANG99_uintSub3, x y z)

/**
 * \f$x * y * z\f$
 *
 * # Examples
 *
 * @code
 * #include <metalang99/uint.h>
 *
 * // 24
 * M_uintMul3(v(2), v(3), v(4))
 * @endcode
 */
#define METALANG99_uintMul3(x, y, z) METALANG99_call(METALANG99_uintMul3, x y z)

/**
 * \f$\frac{(\frac{x}{y})}{z}\f$
 *
 * # Examples
 *
 * @code
 * #include <metalang99/uint.h>
 *
 * // 5
 * M_uintDiv(v(30), v(3), v(2))
 * @endcode
 *
 * @note A compile-time error if \f$\frac{(\frac{x}{y})}{z}\f$ is not an unsigned integer.
 */
#define METALANG99_uintDiv3(x, y, z) METALANG99_call(METALANG99_uintDiv3, x y z)

/**
 * \f$min(x, y)\f$
 *
 * # Examples
 *
 * @code
 * #include <metalang99/uint.h>
 *
 * // 5
 * M_uintMin(v(5), v(7))
 * @endcode
 */
#define METALANG99_uintMin(x, y) METALANG99_call(METALANG99_uintMin, x y)

/**
 * \f$max(x, y)\f$
 *
 * # Examples
 *
 * @code
 * #include <metalang99/uint.h>
 *
 * // 7
 * M_uintMax(v(5), v(7))
 * @endcode
 */
#define METALANG99_uintMax(x, y) METALANG99_call(METALANG99_uintMax, x y)

/**
 * The plain version of #METALANG99_uintEq.
 */
#define METALANG99_uintEqPlain(x, y) METALANG99_PRIV_uintEq(x, y)

/**
 * The plain version of #METALANG99_uintNeq.
 */
#define METALANG99_uintNeqPlain(x, y) METALANG99_notPlain(METALANG99_uintEqPlain(x, y))

/**
 * The plain version of #METALANG99_uintIncPlain.
 */
#define METALANG99_uintIncPlain(x) METALANG99_PRIV_uintInc(x)

/**
 * The plain version of #METALANG99_uintDecPlain.
 */
#define METALANG99_uintDecPlain(x) METALANG99_PRIV_uintDec(x)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define METALANG99_uintMatch_IMPL(x, matcher)                                                      \
    METALANG99_PRIV_IF(                                                                            \
        METALANG99_PRIV_uintEq(x, 0),                                                              \
        METALANG99_call(matcher##Z, ),                                                             \
        METALANG99_callTrivial(matcher##S, METALANG99_PRIV_uintDec(x)))

#define METALANG99_uintMatchWithArgs_IMPL(x, matcher, ...)                                         \
    METALANG99_PRIV_IF(                                                                            \
        METALANG99_PRIV_uintEq(x, 0),                                                              \
        METALANG99_callTrivial(matcher##Z, __VA_ARGS__),                                           \
        METALANG99_callTrivial(matcher##S, METALANG99_PRIV_uintDec(x), __VA_ARGS__))

#define METALANG99_uintEq_IMPL(x, y)  v(METALANG99_uintEqPlain(x, y))
#define METALANG99_uintNeq_IMPL(x, y) v(METALANG99_uintNeqPlain(x, y))
#define METALANG99_uintInc_IMPL(x)    v(METALANG99_uintIncPlain(x))
#define METALANG99_uintDec_IMPL(x)    v(METALANG99_uintDecPlain(x))

#define METALANG99_uintGreater_IMPL(x, y)  METALANG99_callTrivial(METALANG99_uintLesser, y, x)
#define METALANG99_uintLesserEq_IMPL(x, y) METALANG99_callTrivial(METALANG99_uintGreaterEq, y, x)

#define METALANG99_uintGreaterEq_IMPL(x, y)                                                        \
    METALANG99_callTrivial(                                                                        \
        METALANG99_PRIV_IF(                                                                        \
            METALANG99_PRIV_uintEq(x, y),                                                          \
            METALANG99_PRIV_CONST_TRUE,                                                            \
            METALANG99_uintGreater),                                                               \
        x,                                                                                         \
        y)

#define METALANG99_uintLesser_IMPL(x, y)                                                           \
    METALANG99_callTrivial(                                                                        \
        METALANG99_PRIV_IF(                                                                        \
            METALANG99_PRIV_uintEq(y, 0),                                                          \
            METALANG99_PRIV_CONST_FALSE,                                                           \
            METALANG99_PRIV_uintLesser_PROGRESS),                                                  \
        x,                                                                                         \
        y)
#define METALANG99_PRIV_uintLesser_PROGRESS_IMPL(x, y)                                             \
    METALANG99_callTrivial(                                                                        \
        METALANG99_PRIV_IF(                                                                        \
            METALANG99_PRIV_uintEq(x, METALANG99_PRIV_uintDec(y)),                                 \
            METALANG99_PRIV_CONST_TRUE,                                                            \
            METALANG99_uintLesser),                                                                \
        x,                                                                                         \
        METALANG99_PRIV_uintDec(y))

#define METALANG99_uintAdd_IMPL(x, y)                                                              \
    METALANG99_callTrivial(                                                                        \
        METALANG99_PRIV_IF(                                                                        \
            METALANG99_PRIV_uintEq(y, 0),                                                          \
            METALANG99_const,                                                                      \
            METALANG99_PRIV_uintAdd_PROGRESS),                                                     \
        x,                                                                                         \
        y)
#define METALANG99_PRIV_uintAdd_PROGRESS_IMPL(x, y)                                                \
    METALANG99_callTrivial(                                                                        \
        METALANG99_uintAdd,                                                                        \
        METALANG99_PRIV_uintInc(x),                                                                \
        METALANG99_PRIV_uintDec(y))

#define METALANG99_uintSub_IMPL(x, y)                                                              \
    METALANG99_callTrivial(                                                                        \
        METALANG99_PRIV_IF(                                                                        \
            METALANG99_PRIV_uintEq(y, 0),                                                          \
            METALANG99_const,                                                                      \
            METALANG99_PRIV_uintSub_PROGRESS),                                                     \
        x,                                                                                         \
        y)
#define METALANG99_PRIV_uintSub_PROGRESS_IMPL(x, y)                                                \
    METALANG99_callTrivial(                                                                        \
        METALANG99_uintSub,                                                                        \
        METALANG99_PRIV_uintDec(x),                                                                \
        METALANG99_PRIV_uintDec(y))

#define METALANG99_uintMul_IMPL(x, y)                                                              \
    METALANG99_callTrivial(                                                                        \
        METALANG99_PRIV_IF(                                                                        \
            METALANG99_PRIV_uintEq(y, 0),                                                          \
            METALANG99_PRIV_UINT_CONST_0,                                                          \
            METALANG99_PRIV_uintMul_PROGRESS),                                                     \
        x,                                                                                         \
        y)
#define METALANG99_PRIV_uintMul_PROGRESS_IMPL(x, y)                                                \
    METALANG99_uintAdd(                                                                            \
        v(x),                                                                                      \
        METALANG99_callTrivial(METALANG99_uintMul, x, METALANG99_PRIV_uintDec(y)))

// METALANG99_uintMod_IMPL {
#define METALANG99_uintMod_IMPL(x, y)                                                              \
    METALANG99_PRIV_IF(                                                                            \
        METALANG99_PRIV_uintEq(y, 0),                                                              \
        METALANG99_fatal(METALANG99_uintMod, modulo by 0),                                         \
        METALANG99_callTrivial(METALANG99_PRIV_uintMod_AUX, x, y, 0))

#define METALANG99_PRIV_uintMod_AUX_IMPL(x, y, acc)                                                \
    METALANG99_appl(                                                                               \
        METALANG99_if(                                                                             \
            METALANG99_isJust(METALANG99_callTrivial(METALANG99_uintDivChecked, x, y)),            \
            METALANG99_callTrivial(METALANG99_appl, METALANG99_const, acc),                        \
            METALANG99_callTrivial(METALANG99_appl2, METALANG99_PRIV_uintMod_PROGRESS, x, y)),     \
        v(acc))

#define METALANG99_PRIV_uintMod_PROGRESS_IMPL(x, y, acc)                                           \
    METALANG99_appl(                                                                               \
        METALANG99_PRIV_IF(                                                                        \
            METALANG99_PRIV_uintEq(x, 0),                                                          \
            METALANG99_callTrivial(METALANG99_appl, METALANG99_const, acc),                        \
            METALANG99_callTrivial(METALANG99_appl2, METALANG99_PRIV_uintMod_PROGRESS_AUX, x, y)), \
        v(acc))

#define METALANG99_PRIV_uintMod_PROGRESS_AUX_IMPL(x, y, acc)                                       \
    METALANG99_callTrivial(                                                                        \
        METALANG99_PRIV_uintMod_AUX,                                                               \
        METALANG99_PRIV_uintDec(x),                                                                \
        y,                                                                                         \
        METALANG99_PRIV_uintInc(acc))
// }

#define METALANG99_uintAdd3_IMPL(x, y, z)                                                          \
    METALANG99_uintAdd(METALANG99_callTrivial(METALANG99_uintAdd, x, y), v(z))
#define METALANG99_uintSub3_IMPL(x, y, z)                                                          \
    METALANG99_uintSub(METALANG99_callTrivial(METALANG99_uintSub, x, y), v(z))
#define METALANG99_uintMul3_IMPL(x, y, z)                                                          \
    METALANG99_uintMul(METALANG99_callTrivial(METALANG99_uintMul, x, y), v(z))
#define METALANG99_uintDiv3_IMPL(x, y, z)                                                          \
    METALANG99_uintDiv(METALANG99_callTrivial(METALANG99_uintDiv, x, y), v(z))

#define METALANG99_uintMin_IMPL(x, y)                                                              \
    METALANG99_if(METALANG99_callTrivial(METALANG99_uintLesser, x, y), v(x), v(y))
#define METALANG99_uintMax_IMPL(x, y)                                                              \
    METALANG99_if(METALANG99_callTrivial(METALANG99_uintLesser, x, y), v(y), v(x))

#define METALANG99_PRIV_UINT_CONST_0_IMPL(...) v(0)
// }

// Arity specifiers {
#define METALANG99_uintInc_ARITY           1
#define METALANG99_uintDec_ARITY           1
#define METALANG99_uintMatch_ARITY         2
#define METALANG99_uintMatchWithArgs_ARITY 3
#define METALANG99_uintEq_ARITY            2
#define METALANG99_uintNeq_ARITY           2
#define METALANG99_uintGreater_ARITY       2
#define METALANG99_uintGreaterEq_ARITY     2
#define METALANG99_uintLesser_ARITY        2
#define METALANG99_uintLesserEq_ARITY      2
#define METALANG99_uintAdd_ARITY           2
#define METALANG99_uintSub_ARITY           2
#define METALANG99_uintMul_ARITY           2
#define METALANG99_uintDiv_ARITY           2
#define METALANG99_uintDivChecked_ARITY    2
#define METALANG99_uintMod_ARITY           2
#define METALANG99_uintAdd3_ARITY          3
#define METALANG99_uintSub3_ARITY          3
#define METALANG99_uintMul3_ARITY          3
#define METALANG99_uintDiv3_ARITY          3
#define METALANG99_uintMin_ARITY           2
#define METALANG99_uintMax_ARITY           2

#define METALANG99_PRIV_uintLesser_PROGRESS_ARITY  2
#define METALANG99_PRIV_uintAdd_PROGRESS_ARITY     2
#define METALANG99_PRIV_uintSub_PROGRESS_ARITY     2
#define METALANG99_PRIV_uintMul_PROGRESS_ARITY     2
#define METALANG99_PRIV_uintMod_PROGRESS_ARITY     3
#define METALANG99_PRIV_uintMod_PROGRESS_AUX_ARITY 3
// }

// Aliases {
#ifndef METALANG99_NO_SMALL_PREFIX

#define M_uintInc           METALANG99_uintInc
#define M_uintDec           METALANG99_uintDec
#define M_uintMatch         METALANG99_uintMatch
#define M_uintMatchWithArgs METALANG99_uintMatchWithArgs
#define M_uintEq            METALANG99_uintEq
#define M_uintNeq           METALANG99_uintNeq
#define M_uintGreater       METALANG99_uintGreater
#define M_uintGreaterEq     METALANG99_uintGreaterEq
#define M_uintLesser        METALANG99_uintLesser
#define M_uintLesserEq      METALANG99_uintLesserEq
#define M_uintAdd           METALANG99_uintAdd
#define M_uintSub           METALANG99_uintSub
#define M_uintMul           METALANG99_uintMul
#define M_uintDiv           METALANG99_uintDiv
#define M_uintDivChecked    METALANG99_uintDivChecked
#define M_uintMod           METALANG99_uintMod
#define M_uintAdd3          METALANG99_uintAdd3
#define M_uintSub3          METALANG99_uintSub3
#define M_uintMul3          METALANG99_uintMul3
#define M_uintDiv3          METALANG99_uintDiv3
#define M_uintMin           METALANG99_uintMin
#define M_uintMax           METALANG99_uintMax

#define M_uintEqPlain  METALANG99_uintEqPlain
#define M_uintNeqPlain METALANG99_uintNeqPlain
#define M_uintIncPlain METALANG99_uintIncPlain
#define M_uintDecPlain METALANG99_uintDecPlain

#endif // METALANG99_NO_SMALL_PREFIX
// }

#endif // DOXYGEN_IGNORE

#endif // METALANG99_UINT_H
