/**
 * @file
 * Unsigned integers.
 *
 * @note Currently, unsigned integers can range only from 0 to 255, inclusively.
 */

#ifndef METALANG99_UINT_H
#define METALANG99_UINT_H

#include <metalang99/uint/dec.h>
#include <metalang99/uint/div.h>
#include <metalang99/uint/eq.h>
#include <metalang99/uint/inc.h>

#include <metalang99/control.h>
#include <metalang99/lang.h>
#include <metalang99/logical.h>
#include <metalang99/maybe.h>

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
 * M_inc(v(5))
 * @endcode
 *
 * @note If @p x is 255, the result is 0.
 */
#define METALANG99_inc(x) METALANG99_call(METALANG99_inc, x)

/**
 * \f$x - 1\f$
 *
 * # Examples
 *
 * @code
 * #include <metalang99/uint.h>
 *
 * // 4
 * M_dec(v(5))
 * @endcode
 *
 * @note If @p x is 0, the result is 255.
 */
#define METALANG99_dec(x) METALANG99_call(METALANG99_dec, x)

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
#define METALANG99_uintMatch(x, matcher) METALANG99_call(METALANG99_uintMatch, x, matcher)

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
    METALANG99_call(METALANG99_uintMatchWithArgs, x, matcher, __VA_ARGS__)

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
#define METALANG99_uintEq(x, y) METALANG99_call(METALANG99_uintEq, x, y)

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
#define METALANG99_uintNeq(x, y) METALANG99_call(METALANG99_uintNeq, x, y)

/**
 * \f$x > y\f$
 *
 * # Examples
 *
 * @code
 * #include <metalang99/uint.h>
 *
 * // 1
 * M_greater(v(8), v(3))
 *
 * // 0
 * M_greater(v(3), v(8))
 * @endcode
 */
#define METALANG99_greater(x, y) METALANG99_call(METALANG99_greater, x, y)

/**
 * \f$x \geq y\f$
 *
 * # Examples
 *
 * @code
 * #include <metalang99/uint.h>
 *
 * // 1
 * M_greaterEq(v(8), v(8))
 *
 * // 0
 * M_greaterEq(v(3), v(8))
 * @endcode
 */
#define METALANG99_greaterEq(x, y) METALANG99_call(METALANG99_greaterEq, x, y)

/**
 * \f$x < y\f$
 *
 * # Examples
 *
 * @code
 * #include <metalang99/uint.h>
 *
 * // 1
 * M_lesser(v(3), v(8))
 *
 * // 0
 * M_lesser(v(8), v(3))
 * @endcode
 */
#define METALANG99_lesser(x, y) METALANG99_call(METALANG99_lesser, x, y)

/**
 * \f$x \leq y\f$
 *
 * # Examples
 *
 * @code
 * #include <metalang99/uint.h>
 *
 * // 1
 * M_lesserEq(v(8), v(8))
 *
 * // 0
 * M_lesserEq(v(8), v(3))
 * @endcode
 */
#define METALANG99_lesserEq(x, y) METALANG99_call(METALANG99_lesserEq, x, y)

/**
 * \f$x + y\f$
 *
 * # Examples
 *
 * @code
 * #include <metalang99/uint.h>
 *
 * // 11
 * M_add(v(5), v(6))
 * @endcode
 */
#define METALANG99_add(x, y) METALANG99_call(METALANG99_add, x, y)

/**
 * \f$x - y\f$
 *
 * # Examples
 *
 * @code
 * #include <metalang99/uint.h>
 *
 * // 6
 * M_sub(v(11), v(5))
 * @endcode
 */
#define METALANG99_sub(x, y) METALANG99_call(METALANG99_sub, x, y)

/**
 * \f$x * y\f$
 *
 * # Examples
 *
 * @code
 * #include <metalang99/uint.h>
 *
 * // 12
 * M_mul(v(3), v(4))
 * @endcode
 */
#define METALANG99_mul(x, y) METALANG99_call(METALANG99_mul, x, y)

/**
 * \f$\frac{x}{y}\f$
 *
 * # Examples
 *
 * @code
 * #include <metalang99/uint.h>
 *
 * // 3
 * M_div(v(12), v(4))
 * @endcode
 *
 * @note A compile-time error if \f$\frac{x}{y}\f$ is not an unsigned integer.
 */
#define METALANG99_div(x, y) METALANG99_call(METALANG99_div, x, y)

/**
 * Like #METALANG99_div but returns #METALANG99_nothing is @p x is not divisible by @p y,
 * otherwise, #METALANG99_just.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/uint.h>
 *
 * // M_just(3)
 * M_divChecked(v(12), v(4))
 *
 * // M_nothing()
 * M_divChecked(v(14), v(5))
 *
 * // M_nothing()
 * M_divChecked(v(1), v(0))
 * @endcode
 */
#define METALANG99_divChecked(x, y) METALANG99_call(METALANG99_divChecked, x, y)

/**
 * Computes the remainder of division.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/uint.h>
 *
 * // 2
 * M_mod(v(8), v(3))
 * @endcode
 *
 * @note A compile-time error if @p y is 0.
 */
#define METALANG99_mod(x, y) METALANG99_call(METALANG99_mod, x, y)

/**
 * \f$x + y + z\f$
 *
 * # Examples
 *
 * @code
 * #include <metalang99/uint.h>
 *
 * // 15
 * M_add3(v(1), v(6), v(8))
 * @endcode
 */
#define METALANG99_add3(x, y, z) METALANG99_call(METALANG99_add3, x, y, z)

/**
 * \f$x - y - z\f$
 *
 * # Examples
 *
 * @code
 * #include <metalang99/uint.h>
 *
 * // 3
 * M_sub3(v(8), v(2), v(3))
 * @endcode
 */
#define METALANG99_sub3(x, y, z) METALANG99_call(METALANG99_sub3, x, y, z)

/**
 * \f$x * y * z\f$
 *
 * # Examples
 *
 * @code
 * #include <metalang99/uint.h>
 *
 * // 24
 * M_mul3(v(2), v(3), v(4))
 * @endcode
 */
#define METALANG99_mul3(x, y, z) METALANG99_call(METALANG99_mul3, x, y, z)

/**
 * \f$\frac{(\frac{x}{y})}{z}\f$
 *
 * # Examples
 *
 * @code
 * #include <metalang99/uint.h>
 *
 * // 5
 * M_div(v(30), v(3), v(2))
 * @endcode
 *
 * @note A compile-time error if \f$\frac{(\frac{x}{y})}{z}\f$ is not an unsigned integer.
 */
#define METALANG99_div3(x, y, z) METALANG99_call(METALANG99_div3, x, y, z)

/**
 * \f$min(x, y)\f$
 *
 * # Examples
 *
 * @code
 * #include <metalang99/uint.h>
 *
 * // 5
 * M_min(v(5), v(7))
 * @endcode
 */
#define METALANG99_min(x, y) METALANG99_call(METALANG99_min, x, y)

/**
 * \f$max(x, y)\f$
 *
 * # Examples
 *
 * @code
 * #include <metalang99/uint.h>
 *
 * // 7
 * M_max(v(5), v(7))
 * @endcode
 */
#define METALANG99_max(x, y) METALANG99_call(METALANG99_max, x, y)

/**
 * The plain version of #METALANG99_uintEq.
 */
#define METALANG99_uintEqPlain(x, y) METALANG99_PRIV_uintEq(x, y)

/**
 * The plain version of #METALANG99_uintNeq.
 */
#define METALANG99_uintNeqPlain(x, y) METALANG99_notPlain(METALANG99_uintEqPlain(x, y))

/**
 * The plain version of #METALANG99_incPlain.
 */
#define METALANG99_incPlain(x) METALANG99_PRIV_inc(x)

/**
 * The plain version of #METALANG99_decPlain.
 */
#define METALANG99_decPlain(x) METALANG99_PRIV_dec(x)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {

#define METALANG99_uintMatch_IMPL(x, matcher)                                                      \
    METALANG99_PRIV_IF(                                                                            \
        METALANG99_PRIV_uintEq(x, 0),                                                              \
        METALANG99_callTrivial(matcher##Z, ),                                                      \
        METALANG99_callTrivial(matcher##S, METALANG99_PRIV_dec(x)))

#define METALANG99_uintMatchWithArgs_IMPL(x, matcher, ...)                                         \
    METALANG99_PRIV_IF(                                                                            \
        METALANG99_PRIV_uintEq(x, 0),                                                              \
        METALANG99_callTrivial(matcher##Z, __VA_ARGS__),                                           \
        METALANG99_callTrivial(matcher##S, METALANG99_PRIV_dec(x), __VA_ARGS__))

#define METALANG99_uintEq_IMPL(x, y)   v(METALANG99_uintEqPlain(x, y))
#define METALANG99_uintNeq_IMPL(x, y)  v(METALANG99_uintNeqPlain(x, y))
#define METALANG99_inc_IMPL(x)         v(METALANG99_incPlain(x))
#define METALANG99_dec_IMPL(x)         v(METALANG99_decPlain(x))
#define METALANG99_greater_IMPL(x, y)  METALANG99_lesser_IMPL(y, x)
#define METALANG99_lesserEq_IMPL(x, y) METALANG99_greaterEq_IMPL(y, x)

#define METALANG99_greaterEq_IMPL(x, y)                                                            \
    METALANG99_PRIV_IF(                                                                            \
        METALANG99_PRIV_uintEq(x, y),                                                              \
        v(METALANG99_true),                                                                        \
        METALANG99_greater_IMPL(x, y))

// METALANG99_lesser_IMPL {
#define METALANG99_lesser_IMPL(x, y)                                                               \
    METALANG99_PRIV_IF(                                                                            \
        METALANG99_PRIV_uintEq(y, 0),                                                              \
        v(METALANG99_false),                                                                       \
        METALANG99_callTrivial(METALANG99_PRIV_lesserProgress, x, y))
#define METALANG99_PRIV_lesserProgress_IMPL(x, y)                                                  \
    METALANG99_PRIV_IF(                                                                            \
        METALANG99_PRIV_uintEq(x, METALANG99_PRIV_dec(y)),                                         \
        v(METALANG99_true),                                                                        \
        METALANG99_callTrivial(METALANG99_lesser, x, METALANG99_PRIV_dec(y)))                      \
// }

// METALANG99_add_IMPL {
#define METALANG99_add_IMPL(x, y)                                                                  \
    METALANG99_callTrivial(                                                                        \
        METALANG99_PRIV_IF(                                                                        \
            METALANG99_PRIV_uintEq(y, 0),                                                          \
            METALANG99_const,                                                                      \
            METALANG99_PRIV_addProgress),                                                          \
        x,                                                                                         \
        y)
#define METALANG99_PRIV_addProgress_IMPL(x, y)                                                     \
    METALANG99_add_IMPL(METALANG99_PRIV_inc(x), METALANG99_PRIV_dec(y))
// }

// METALANG99_sub_IMPL {
#define METALANG99_sub_IMPL(x, y)                                                                  \
    METALANG99_callTrivial(                                                                        \
        METALANG99_PRIV_IF(                                                                        \
            METALANG99_PRIV_uintEq(y, 0),                                                          \
            METALANG99_const,                                                                      \
            METALANG99_PRIV_subProgress),                                                          \
        x,                                                                                         \
        y)
#define METALANG99_PRIV_subProgress_IMPL(x, y)                                                     \
    METALANG99_sub_IMPL(METALANG99_PRIV_dec(x), METALANG99_PRIV_dec(y))
// }

// METALANG99_mul_IMPL {
#define METALANG99_mul_IMPL(x, y)                                                                  \
    METALANG99_PRIV_IF(                                                                            \
        METALANG99_PRIV_uintEq(y, 0),                                                              \
        v(0),                                                                                      \
        METALANG99_callTrivial(METALANG99_PRIV_mulProgress, x, y))
#define METALANG99_PRIV_mulProgress_IMPL(x, y)                                                     \
    METALANG99_add(v(x), METALANG99_mul_IMPL(x, METALANG99_PRIV_dec(y)))
// }

// METALANG99_mod_IMPL {
#define METALANG99_mod_IMPL(x, y)                                                                  \
    METALANG99_PRIV_IF(                                                                            \
        METALANG99_PRIV_uintEq(y, 0),                                                              \
        METALANG99_fatal(METALANG99_mod, modulo by 0),                                             \
        METALANG99_callTrivial(METALANG99_PRIV_modAux, x, y, 0))

#define METALANG99_PRIV_modAux_IMPL(x, y, acc)                                                     \
    METALANG99_appl(                                                                               \
        METALANG99_if(                                                                             \
            METALANG99_isJust(METALANG99_divChecked_IMPL(x, y)),                                   \
            METALANG99_appl_IMPL(METALANG99_const, acc),                                           \
            METALANG99_appl2_IMPL(METALANG99_PRIV_modProgress, x, y)),                             \
        v(acc))

#define METALANG99_PRIV_modProgress_IMPL(x, y, acc)                                                \
    METALANG99_appl(                                                                               \
        METALANG99_PRIV_IF(                                                                        \
            METALANG99_PRIV_uintEq(x, 0),                                                          \
            METALANG99_appl_IMPL(METALANG99_const, acc),                                           \
            METALANG99_appl2_IMPL(METALANG99_PRIV_modProgressAux, x, y)),                          \
        v(acc))

#define METALANG99_PRIV_modProgressAux_IMPL(x, y, acc)                                             \
    METALANG99_PRIV_modAux_IMPL(METALANG99_PRIV_dec(x), y, METALANG99_PRIV_inc(acc))
// }

#define METALANG99_add3_IMPL(x, y, z) METALANG99_add(METALANG99_add_IMPL(x, y), v(z))
#define METALANG99_sub3_IMPL(x, y, z) METALANG99_sub(METALANG99_sub_IMPL(x, y), v(z))
#define METALANG99_mul3_IMPL(x, y, z) METALANG99_mul(METALANG99_mul_IMPL(x, y), v(z))
#define METALANG99_div3_IMPL(x, y, z) METALANG99_div(METALANG99_div_IMPL(x, y), v(z))

#define METALANG99_min_IMPL(x, y)                                                                  \
    METALANG99_call(METALANG99_if, METALANG99_lesser_IMPL(x, y), v(x, y))
#define METALANG99_max_IMPL(x, y)                                                                  \
    METALANG99_call(METALANG99_if, METALANG99_lesser_IMPL(x, y), v(y, x))

#define METALANG99_PRIV_uintConst0_IMPL(...) v(0)
// }

// Arity specifiers {
#define METALANG99_inc_ARITY               1
#define METALANG99_dec_ARITY               1
#define METALANG99_uintMatch_ARITY         2
#define METALANG99_uintMatchWithArgs_ARITY 3
#define METALANG99_uintEq_ARITY            2
#define METALANG99_uintNeq_ARITY           2
#define METALANG99_greater_ARITY           2
#define METALANG99_greaterEq_ARITY         2
#define METALANG99_lesser_ARITY            2
#define METALANG99_lesserEq_ARITY          2
#define METALANG99_add_ARITY               2
#define METALANG99_sub_ARITY               2
#define METALANG99_mul_ARITY               2
#define METALANG99_div_ARITY               2
#define METALANG99_divChecked_ARITY        2
#define METALANG99_mod_ARITY               2
#define METALANG99_add3_ARITY              3
#define METALANG99_sub3_ARITY              3
#define METALANG99_mul3_ARITY              3
#define METALANG99_div3_ARITY              3
#define METALANG99_min_ARITY               2
#define METALANG99_max_ARITY               2

#define METALANG99_PRIV_lesserProgress_ARITY 2
#define METALANG99_PRIV_addProgress_ARITY    2
#define METALANG99_PRIV_subProgress_ARITY    2
#define METALANG99_PRIV_mulProgress_ARITY    2
#define METALANG99_PRIV_modProgress_ARITY    3
#define METALANG99_PRIV_modProgressAux_ARITY 3
// }

// Aliases {
#ifndef METALANG99_NO_SMALL_PREFIX

#define M_inc               METALANG99_inc
#define M_dec               METALANG99_dec
#define M_uintMatch         METALANG99_uintMatch
#define M_uintMatchWithArgs METALANG99_uintMatchWithArgs
#define M_uintEq            METALANG99_uintEq
#define M_uintNeq           METALANG99_uintNeq
#define M_greater           METALANG99_greater
#define M_greaterEq         METALANG99_greaterEq
#define M_lesser            METALANG99_lesser
#define M_lesserEq          METALANG99_lesserEq
#define M_add               METALANG99_add
#define M_sub               METALANG99_sub
#define M_mul               METALANG99_mul
#define M_div               METALANG99_div
#define M_divChecked        METALANG99_divChecked
#define M_mod               METALANG99_mod
#define M_add3              METALANG99_add3
#define M_sub3              METALANG99_sub3
#define M_mul3              METALANG99_mul3
#define M_div3              METALANG99_div3
#define M_min               METALANG99_min
#define M_max               METALANG99_max

#define M_uintEqPlain  METALANG99_uintEqPlain
#define M_uintNeqPlain METALANG99_uintNeqPlain
#define M_incPlain     METALANG99_incPlain
#define M_decPlain     METALANG99_decPlain

#endif // METALANG99_NO_SMALL_PREFIX
// }

#endif // DOXYGEN_IGNORE

#endif // METALANG99_UINT_H
