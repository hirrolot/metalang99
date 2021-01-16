/**
 * @file
 * Unsigned integers.
 */

#ifndef EPILEPSY_UINT_H
#define EPILEPSY_UINT_H

#include <epilepsy/aux.h>
#include <epilepsy/lang.h>
#include <epilepsy/list.h>
#include <epilepsy/logical.h>

#include <epilepsy/uint/dec.h>
#include <epilepsy/uint/div.h>
#include <epilepsy/uint/eq.h>
#include <epilepsy/uint/inc.h>

// Desugaring {
/**
 * \f$x + 1\f$
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/uint.h>
 *
 * // 6
 * E_uintInc(v(5))
 * @endcode
 */
#define EPILEPSY_uintInc(x) EPILEPSY_call(EPILEPSY_uintInc, x)

/**
 * \f$x - 1\f$
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/uint.h>
 *
 * // 4
 * E_uintDec(v(5))
 * @endcode
 */
#define EPILEPSY_uintDec(x) EPILEPSY_call(EPILEPSY_uintDec, x)

/**
 * \f$x = y\f$
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/uint.h>
 *
 * // 1
 * E_uintEq(v(5), v(5))
 *
 * // 0
 * E_uintEq(v(3), v(8))
 * @endcode
 */
#define EPILEPSY_uintEq(x, y) EPILEPSY_call(EPILEPSY_uintEq, x y)

/**
 * \f$x \neq y\f$
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/uint.h>
 *
 * // 0
 * E_uintNeq(v(5), v(5))
 *
 * // 1
 * E_uintNeq(v(3), v(8))
 * @endcode
 */
#define EPILEPSY_uintNeq(x, y) EPILEPSY_call(EPILEPSY_uintNeq, x y)

/**
 * \f$x > y\f$
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/uint.h>
 *
 * // 1
 * E_uintGreater(v(8), v(3))
 *
 * // 0
 * E_uintGreater(v(3), v(8))
 * @endcode
 */
#define EPILEPSY_uintGreater(x, y) EPILEPSY_call(EPILEPSY_uintGreater, x y)

/**
 * \f$x \geq y\f$
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/uint.h>
 *
 * // 1
 * E_uintGreaterEq(v(8), v(8))
 *
 * // 0
 * E_uintGreaterEq(v(3), v(8))
 * @endcode
 */
#define EPILEPSY_uintGreaterEq(x, y) EPILEPSY_call(EPILEPSY_uintGreaterEq, x y)

/**
 * \f$x < y\f$
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/uint.h>
 *
 * // 1
 * E_uintLesser(v(3), v(8))
 *
 * // 0
 * E_uintLesser(v(8), v(3))
 * @endcode
 */
#define EPILEPSY_uintLesser(x, y) EPILEPSY_call(EPILEPSY_uintLesser, x y)

/**
 * \f$x \leq y\f$
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/uint.h>
 *
 * // 1
 * E_uintLesserEq(v(8), v(8))
 *
 * // 0
 * E_uintLesserEq(v(8), v(3))
 * @endcode
 */
#define EPILEPSY_uintLesserEq(x, y) EPILEPSY_call(EPILEPSY_uintLesserEq, x y)

/**
 * \f$x + y\f$
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/uint.h>
 *
 * // 11
 * E_uintAdd(v(5), v(6))
 * @endcode
 */
#define EPILEPSY_uintAdd(x, y) EPILEPSY_call(EPILEPSY_uintAdd, x y)

/**
 * \f$x - y\f$
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/uint.h>
 *
 * // 6
 * E_uintSub(v(11), v(5))
 * @endcode
 */
#define EPILEPSY_uintSub(x, y) EPILEPSY_call(EPILEPSY_uintSub, x y)

/**
 * \f$x * y\f$
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/uint.h>
 *
 * // 12
 * E_uintMul(v(3), v(4))
 * @endcode
 */
#define EPILEPSY_uintMul(x, y) EPILEPSY_call(EPILEPSY_uintMul, x y)

/**
 * \f$\frac{x}{y}\f$
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/uint.h>
 *
 * // 3
 * E_uintDiv(v(12), v(4))
 * @endcode
 *
 * @note A compile-time error if \f$\frac{x}{y}\f$ is not an unsigned integer.
 */
#define EPILEPSY_uintDiv(x, y) EPILEPSY_call(EPILEPSY_uintDiv, x y)

/**
 * Like #EPILEPSY_uintDiv but returns #EPILEPSY_nothing is @p x is not divisible by @p y, otherwise,
 * #EPILEPSY_just.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/uint.h>
 *
 * // E_just(3)
 * E_uintDivChecked(v(12), v(4))
 *
 * // E_nothing()
 * E_uintDivChecked(v(14), v(5))
 *
 * // E_nothing()
 * E_uintDivChecked(v(1), v(0))
 * @endcode
 */
#define EPILEPSY_uintDivChecked(x, y) EPILEPSY_call(EPILEPSY_uintDivChecked, x y)

/**
 * \f$x + y + z\f$
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/uint.h>
 *
 * // 15
 * E_uintAdd3(v(1), v(6), v(8))
 * @endcode
 */
#define EPILEPSY_uintAdd3(x, y, z) EPILEPSY_call(EPILEPSY_uintAdd3, x y z)

/**
 * \f$x - y - z\f$
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/uint.h>
 *
 * // 3
 * E_uintSub3(v(8), v(2), v(3))
 * @endcode
 */
#define EPILEPSY_uintSub3(x, y, z) EPILEPSY_call(EPILEPSY_uintSub3, x y z)

/**
 * \f$x * y * z\f$
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/uint.h>
 *
 * // 24
 * E_uintMul3(v(2), v(3), v(4))
 * @endcode
 */
#define EPILEPSY_uintMul3(x, y, z) EPILEPSY_call(EPILEPSY_uintMul3, x y z)

/**
 * \f$\frac{(\frac{x}{y})}{z}\f$
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/uint.h>
 *
 * // 5
 * E_uintDiv(v(30), v(3), v(2))
 * @endcode
 *
 * @note A compile-time error if \f$\frac{(\frac{x}{y})}{z}\f$ is not an unsigned integer.
 */
#define EPILEPSY_uintDiv3(x, y, z) EPILEPSY_call(EPILEPSY_uintDiv3, x y z)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define EPILEPSY_uintNeq_IMPL(x, y)      EPILEPSY_not(EPILEPSY_uintEq(v(x), v(y)))
#define EPILEPSY_uintGreater_IMPL(x, y)  EPILEPSY_uintLesser(v(y), v(x))
#define EPILEPSY_uintLesserEq_IMPL(x, y) EPILEPSY_uintGreaterEq(v(y), v(x))

#define EPILEPSY_uintGreaterEq_IMPL(x, y)                                                          \
    EPILEPSY_appl2(                                                                                \
        EPILEPSY_PRIV_IF(                                                                          \
            EPILEPSY_PRIV_uintEq(x, y),                                                            \
            EPILEPSY_appl(EPILEPSY_const2, v(1)),                                                  \
            v(EPILEPSY_uintGreater)),                                                              \
        v(x),                                                                                      \
        v(y))

#define EPILEPSY_uintLesser_IMPL(x, y)                                                             \
    EPILEPSY_appl2(                                                                                \
        EPILEPSY_PRIV_IF(                                                                          \
            EPILEPSY_PRIV_uintEq(y, 0),                                                            \
            EPILEPSY_appl(EPILEPSY_const2, v(0)),                                                  \
            v(EPILEPSY_PRIV_uintLesser_PROGRESS)),                                                 \
        v(x),                                                                                      \
        v(y))
#define EPILEPSY_PRIV_uintLesser_PROGRESS_IMPL(x, y)                                               \
    EPILEPSY_appl2(                                                                                \
        EPILEPSY_PRIV_IF(                                                                          \
            EPILEPSY_PRIV_uintEq(x, EPILEPSY_PRIV_uintDec(y)),                                     \
            EPILEPSY_appl(EPILEPSY_const2, v(1)),                                                  \
            v(EPILEPSY_uintLesser)),                                                               \
        v(x),                                                                                      \
        EPILEPSY_uintDec(v(y)))

#define EPILEPSY_uintAdd_IMPL(x, y)                                                                \
    EPILEPSY_appl2(                                                                                \
        EPILEPSY_PRIV_IF(                                                                          \
            EPILEPSY_PRIV_uintEq(y, 0),                                                            \
            EPILEPSY_appl(EPILEPSY_const2, v(x)),                                                  \
            v(EPILEPSY_PRIV_uintAdd_PROGRESS)),                                                    \
        v(x),                                                                                      \
        v(y))
#define EPILEPSY_PRIV_uintAdd_PROGRESS_IMPL(x, y)                                                  \
    EPILEPSY_uintAdd(EPILEPSY_uintInc(v(x)), EPILEPSY_uintDec(v(y)))

#define EPILEPSY_uintSub_IMPL(x, y)                                                                \
    EPILEPSY_appl2(                                                                                \
        EPILEPSY_PRIV_IF(                                                                          \
            EPILEPSY_PRIV_uintEq(y, 0),                                                            \
            EPILEPSY_appl(EPILEPSY_const2, v(x)),                                                  \
            v(EPILEPSY_PRIV_uintSub_PROGRESS)),                                                    \
        v(x),                                                                                      \
        v(y))
#define EPILEPSY_PRIV_uintSub_PROGRESS_IMPL(x, y)                                                  \
    EPILEPSY_uintSub(EPILEPSY_uintDec(v(x)), EPILEPSY_uintDec(v(y)))

#define EPILEPSY_uintMul_IMPL(x, y)                                                                \
    EPILEPSY_appl2(                                                                                \
        EPILEPSY_PRIV_IF(                                                                          \
            EPILEPSY_PRIV_uintEq(y, 0),                                                            \
            EPILEPSY_appl(EPILEPSY_const2, v(0)),                                                  \
            v(EPILEPSY_PRIV_uintMul_PROGRESS)),                                                    \
        v(x),                                                                                      \
        v(y))
#define EPILEPSY_PRIV_uintMul_PROGRESS_IMPL(x, y)                                                  \
    EPILEPSY_uintAdd(v(x), EPILEPSY_uintMul(v(x), EPILEPSY_uintDec(v(y))))

#define EPILEPSY_uintAdd3_IMPL(x, y, z) EPILEPSY_uintAdd(EPILEPSY_uintAdd(v(x), v(y)), v(z))
#define EPILEPSY_uintSub3_IMPL(x, y, z) EPILEPSY_uintSub(EPILEPSY_uintSub(v(x), v(y)), v(z))
#define EPILEPSY_uintMul3_IMPL(x, y, z) EPILEPSY_uintMul(EPILEPSY_uintMul(v(x), v(y)), v(z))
#define EPILEPSY_uintDiv3_IMPL(x, y, z) EPILEPSY_uintDiv(EPILEPSY_uintDiv(v(x), v(y)), v(z))
// }

// Arity specifiers {
#define EPILEPSY_uintInc_ARITY       1
#define EPILEPSY_uintDec_ARITY       1
#define EPILEPSY_uintEq_ARITY        2
#define EPILEPSY_uintNeq_ARITY       2
#define EPILEPSY_uintGreater_ARITY   2
#define EPILEPSY_uintGreaterEq_ARITY 2
#define EPILEPSY_uintLesser_ARITY    2
#define EPILEPSY_uintLesserEq_ARITY  2
#define EPILEPSY_uintAdd_ARITY       2
#define EPILEPSY_uintSub_ARITY       2
#define EPILEPSY_uintMul_ARITY       2
#define EPILEPSY_uintDiv_ARITY       2
#define EPILEPSY_uintAdd3_ARITY      3
#define EPILEPSY_uintSub3_ARITY      3
#define EPILEPSY_uintMul3_ARITY      3
#define EPILEPSY_uintDiv3_ARITY      3

#define EPILEPSY_PRIV_uintLesser_PROGRESS_ARITY 2
#define EPILEPSY_PRIV_uintAdd_PROGRESS_ARITY    2
#define EPILEPSY_PRIV_uintSub_PROGRESS_ARITY    2
#define EPILEPSY_PRIV_uintMul_PROGRESS_ARITY    2
// }

// Aliases {
#ifndef EPILEPSY_NO_SMALL_PREFIX

#define E_uintInc       EPILEPSY_uintInc
#define E_uintDec       EPILEPSY_uintDec
#define E_uintEq        EPILEPSY_uintEq
#define E_uintNeq       EPILEPSY_uintNeq
#define E_uintGreater   EPILEPSY_uintGreater
#define E_uintGreaterEq EPILEPSY_uintGreaterEq
#define E_uintLesser    EPILEPSY_uintLesser
#define E_uintLesserEq  EPILEPSY_uintLesserEq
#define E_uintAdd       EPILEPSY_uintAdd
#define E_uintSub       EPILEPSY_uintSub
#define E_uintMul       EPILEPSY_uintMul
#define E_uintDiv       EPILEPSY_uintDiv
#define E_uintAdd3      EPILEPSY_uintAdd3
#define E_uintSub3      EPILEPSY_uintSub3
#define E_uintMul3      EPILEPSY_uintMul3
#define E_uintDiv3      EPILEPSY_uintDiv3

#endif // EPILEPSY_NO_SMALL_PREFIX
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_UINT_H
