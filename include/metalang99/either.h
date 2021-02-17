/**
 * @file
 * A choice type with two cases.
 */

#ifndef METALANG99_EITHER_H
#define METALANG99_EITHER_H

#include <metalang99/choice.h>
#include <metalang99/logical.h>

// Desugaring {
/**
 * The left value @p x.
 */
#define METALANG99_left(x) METALANG99_call(METALANG99_left, x)

/**
 * The right value @p x.
 */
#define METALANG99_right(x) METALANG99_call(METALANG99_right, x)

/**
 * 1 if @p either contains a left value, otherwise 0.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/either.h>
 *
 * // 1
 * M_isLeft(M_left(v(123)))
 *
 * // 0
 * M_isLeft(M_right(v(123)))
 * @endcode
 */
#define METALANG99_isLeft(either) METALANG99_call(METALANG99_isLeft, either)

/**
 * 1 if @p either contains a right value, otherwise 0.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/either.h>
 *
 * // 1
 * M_isRight(M_right(v(123)))
 *
 * // 0
 * M_isRight(M_left(v(123)))
 * @endcode
 */
#define METALANG99_isRight(either) METALANG99_call(METALANG99_isRight, either)

/**
 * Tests @p maybe and @p other for equality.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/either.h>
 * #include <metalang99/uint.h>
 *
 * // 1
 * M_eitherEq(v(M_uintEq), M_left(v(123)), M_left(v(123)))
 *
 * // 0
 * M_eitherEq(v(M_uintEq), M_right(v(123)), M_left(v(8)))
 *
 * // 0
 * M_eitherEq(v(M_uintEq), M_right(v(123)), M_left(v(123)))
 * @endcode
 */
#define METALANG99_eitherEq(compare, either, other)                                                \
    METALANG99_call(METALANG99_eitherEq, compare, either, other)

/**
 * Returns the left value on #METALANG99_left or emits a fatal error on #METALANG99_right.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/either.h>
 *
 * // 123
 * M_unwrapLeft(M_left(v(123)))
 *
 * // Emits a fatal error.
 * M_unwrapLeft(M_right(v(123)))
 * @endcode
 */
#define METALANG99_unwrapLeft(either) METALANG99_call(METALANG99_unwrapLeft, either)

/**
 * Returns the right value on #METALANG99_right or emits a fatal error on #METALANG99_left.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/either.h>
 *
 * // 123
 * M_unwrapRight(M_right(v(123)))
 *
 * // Emits a fatal error.
 * M_unwrapRight(M_left(v(123)))
 * @endcode
 */
#define METALANG99_unwrapRight(either) METALANG99_call(METALANG99_unwrapRight, either)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define METALANG99_left_IMPL(x)  v(METALANG99_PRIV_choice(left, x))
#define METALANG99_right_IMPL(x) v(METALANG99_PRIV_choice(right, x))

#define METALANG99_isLeft_IMPL(either)                                                             \
    METALANG99_callTrivial(METALANG99_match, either, METALANG99_PRIV_isLeft_)
#define METALANG99_PRIV_isLeft_left_IMPL(_x)  v(METALANG99_true)
#define METALANG99_PRIV_isLeft_right_IMPL(_x) v(METALANG99_false)

#define METALANG99_isRight_IMPL(either)                                                            \
    METALANG99_not(METALANG99_callTrivial(METALANG99_isLeft, either))

// METALANG99_eitherEq_IMPL {
#define METALANG99_eitherEq_IMPL(compare, maybe, other)                                            \
    METALANG99_callTrivial(                                                                        \
        METALANG99_matchWithArgs,                                                                  \
        maybe,                                                                                     \
        METALANG99_PRIV_eitherEq_,                                                                 \
        other,                                                                                     \
        compare)

#define METALANG99_PRIV_eitherEq_left_IMPL(x, other, compare)                                      \
    METALANG99_callTrivial(                                                                        \
        METALANG99_matchWithArgs,                                                                  \
        other,                                                                                     \
        METALANG99_PRIV_eitherEq_left_,                                                            \
        x,                                                                                         \
        compare)
#define METALANG99_PRIV_eitherEq_right_IMPL(x, other, compare)                                     \
    METALANG99_callTrivial(                                                                        \
        METALANG99_matchWithArgs,                                                                  \
        other,                                                                                     \
        METALANG99_PRIV_eitherEq_right_,                                                           \
        x,                                                                                         \
        compare)

#define METALANG99_PRIV_eitherEq_left_left_IMPL(y, x, compare)                                     \
    METALANG99_callTrivial(METALANG99_appl2, compare, x, y)
#define METALANG99_PRIV_eitherEq_left_right_IMPL(y, x, compare) v(METALANG99_false)
#define METALANG99_PRIV_eitherEq_right_left_IMPL(y, x, compare) v(METALANG99_false)
#define METALANG99_PRIV_eitherEq_right_right_IMPL(y, x, compare)                                   \
    METALANG99_callTrivial(METALANG99_appl2, compare, x, y)
// } (METALANG99_eitherEq_IMPL)

#define METALANG99_unwrapLeft_IMPL(either)                                                         \
    METALANG99_callTrivial(METALANG99_match, either, METALANG99_PRIV_unwrapLeft_)
#define METALANG99_PRIV_unwrapLeft_left_IMPL(x) v(x)
#define METALANG99_PRIV_unwrapLeft_right_IMPL(_x)                                                  \
    METALANG99_fatal(METALANG99_unwrapLeft, expected METALANG99_left but found METALANG99_right)

#define METALANG99_unwrapRight_IMPL(either)                                                        \
    METALANG99_callTrivial(METALANG99_match, either, METALANG99_PRIV_unwrapRight_)
#define METALANG99_PRIV_unwrapRight_left_IMPL(_x)                                                  \
    METALANG99_fatal(METALANG99_unwrapRight, expected METALANG99_right but found METALANG99_left)
#define METALANG99_PRIV_unwrapRight_right_IMPL(x) v(x)
// }

// Arity specifiers {
#define METALANG99_left_ARITY        1
#define METALANG99_right_ARITY       1
#define METALANG99_isLeft_ARITY      1
#define METALANG99_isRight_ARITY     1
#define METALANG99_eitherEq_ARITY    3
#define METALANG99_unwrapLeft_ARITY  1
#define METALANG99_unwrapRight_ARITY 1
// }

// Aliases {
#ifndef METALANG99_NO_SMALL_PREFIX

#define M_left        METALANG99_left
#define M_right       METALANG99_right
#define M_isLeft      METALANG99_isLeft
#define M_isRight     METALANG99_isRight
#define M_eitherEq    METALANG99_eitherEq
#define M_unwrapLeft  METALANG99_unwrapLeft
#define M_unwrapRight METALANG99_unwrapRight

#endif // METALANG99_NO_SMALL_PREFIX
// }

#endif // DOXYGEN_IGNORE

#endif // METALANG99_EITHER_H
