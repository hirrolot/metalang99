/**
 * @file
 * A choice type with two cases.
 */

#ifndef EPILEPSY_EITHER_H
#define EPILEPSY_EITHER_H

#include <epilepsy/choice.h>
#include <epilepsy/logical.h>

// Desugaring {
/**
 * The left value @p x.
 */
#define EPILEPSY_left(x) EPILEPSY_call(EPILEPSY_left, x)

/**
 * The right value @p x.
 */
#define EPILEPSY_right(x) EPILEPSY_call(EPILEPSY_right, x)

/**
 * 1 if @p either contains a left value, otherwise 0.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/either.h>
 *
 * // 1
 * E_isLeft(E_left(v(123)))
 *
 * // 0
 * E_isLeft(E_right(v(123)))
 * @endcode
 */
#define EPILEPSY_isLeft(either) EPILEPSY_call(EPILEPSY_isLeft, either)

/**
 * 1 if @p either contains a right value, otherwise 0.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/either.h>
 *
 * // 1
 * E_isRight(E_right(v(123)))
 *
 * // 0
 * E_isRight(E_left(v(123)))
 * @endcode
 */
#define EPILEPSY_isRight(either) EPILEPSY_call(EPILEPSY_isRight, either)

/**
 * Tests @p maybe and @p other for equality.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/either.h>
 * #include <epilepsy/uint.h>
 *
 * // 1
 * E_eitherEq(v(E_uintEq), E_left(v(123)), E_left(v(123)))
 *
 * // 0
 * E_eitherEq(v(E_uintEq), E_right(v(123)), E_left(v(8)))
 *
 * // 0
 * E_eitherEq(v(E_uintEq), E_right(v(123)), E_left(v(123)))
 * @endcode
 */
#define EPILEPSY_eitherEq(compare, either, other)                                                  \
    EPILEPSY_call(EPILEPSY_eitherEq, compare either other)

/**
 * Returns the left value on #EPILEPSY_left or emits a fatal error on #EPILEPSY_right.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/either.h>
 *
 * // 123
 * E_unwrapLeft(E_left(v(123)))
 *
 * // Emits a fatal error.
 * E_unwrapLeft(E_right(v(123)))
 * @endcode
 */
#define EPILEPSY_unwrapLeft(either) EPILEPSY_call(EPILEPSY_unwrapLeft, either)

/**
 * Returns the right value on #EPILEPSY_right or emits a fatal error on #EPILEPSY_left.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/either.h>
 *
 * // 123
 * E_unwrapRight(E_right(v(123)))
 *
 * // Emits a fatal error.
 * E_unwrapRight(E_left(v(123)))
 * @endcode
 */
#define EPILEPSY_unwrapRight(either) EPILEPSY_call(EPILEPSY_unwrapRight, either)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define EPILEPSY_left_IMPL(x)  EPILEPSY_choice(v(left), v(x))
#define EPILEPSY_right_IMPL(x) EPILEPSY_choice(v(right), v(x))

#define EPILEPSY_isLeft_IMPL(either)        EPILEPSY_match(v(either), v(EPILEPSY_PRIV_isLeft_))
#define EPILEPSY_PRIV_isLeft_left_IMPL(_x)  v(EPILEPSY_true)
#define EPILEPSY_PRIV_isLeft_right_IMPL(_x) v(EPILEPSY_false)

#define EPILEPSY_isRight_IMPL(either) EPILEPSY_not(EPILEPSY_isLeft(v(either)))

// EPILEPSY_eitherEq_IMPL {
#define EPILEPSY_eitherEq_IMPL(compare, maybe, other)                                              \
    EPILEPSY_matchWithArgs(v(maybe), v(EPILEPSY_PRIV_eitherEq_), v(other, compare))

#define EPILEPSY_PRIV_eitherEq_left_IMPL(x, other, compare)                                        \
    EPILEPSY_matchWithArgs(v(other), v(EPILEPSY_PRIV_eitherEq_left_), v(x, compare))
#define EPILEPSY_PRIV_eitherEq_right_IMPL(x, other, compare)                                       \
    EPILEPSY_matchWithArgs(v(other), v(EPILEPSY_PRIV_eitherEq_right_), v(x, compare))

#define EPILEPSY_PRIV_eitherEq_left_left_IMPL(y, x, compare)  EPILEPSY_appl2(v(compare), v(x), v(y))
#define EPILEPSY_PRIV_eitherEq_left_right_IMPL(y, x, compare) v(EPILEPSY_false)
#define EPILEPSY_PRIV_eitherEq_right_left_IMPL(y, x, compare) v(EPILEPSY_false)
#define EPILEPSY_PRIV_eitherEq_right_right_IMPL(y, x, compare)                                     \
    EPILEPSY_appl2(v(compare), v(x), v(y))
// } (EPILEPSY_eitherEq_IMPL)

#define EPILEPSY_unwrapLeft_IMPL(either)      EPILEPSY_match(v(either), v(EPILEPSY_PRIV_unwrapLeft_))
#define EPILEPSY_PRIV_unwrapLeft_left_IMPL(x) v(x)
#define EPILEPSY_PRIV_unwrapLeft_right_IMPL(_x)                                                    \
    EPILEPSY_fatal(EPILEPSY_unwrapLeft, expected EPILEPSY_left but found EPILEPSY_right)

#define EPILEPSY_unwrapRight_IMPL(either) EPILEPSY_match(v(either), v(EPILEPSY_PRIV_unwrapRight_))
#define EPILEPSY_PRIV_unwrapRight_left_IMPL(_x)                                                    \
    EPILEPSY_fatal(EPILEPSY_unwrapRight, expected EPILEPSY_right but found EPILEPSY_left)
#define EPILEPSY_PRIV_unwrapRight_right_IMPL(x) v(x)
// }

// Arity specifiers {
#define EPILEPSY_left_ARITY        1
#define EPILEPSY_right_ARITY       1
#define EPILEPSY_isLeft_ARITY      1
#define EPILEPSY_isRight_ARITY     1
#define EPILEPSY_eitherEq_ARITY    3
#define EPILEPSY_unwrapLeft_ARITY  1
#define EPILEPSY_unwrapRight_ARITY 1
// }

// Aliases {
#ifndef EPILEPSY_NO_SMALL_PREFIX

#define E_left        EPILEPSY_left
#define E_right       EPILEPSY_right
#define E_isLeft      EPILEPSY_isLeft
#define E_isRight     EPILEPSY_isRight
#define E_eitherEq    EPILEPSY_eitherEq
#define E_unwrapLeft  EPILEPSY_unwrapLeft
#define E_unwrapRight EPILEPSY_unwrapRight

#endif // EPILEPSY_NO_SMALL_PREFIX
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_EITHER_H
