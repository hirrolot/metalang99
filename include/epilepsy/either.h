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
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define EPILEPSY_left_IMPL(x)  EPILEPSY_choice(v(left), v(x))
#define EPILEPSY_right_IMPL(x) EPILEPSY_choice(v(right), v(x))

#define EPILEPSY_isLeft_IMPL(either)        EPILEPSY_match(v(either), v(EPILEPSY_PRIV_isLeft_))
#define EPILEPSY_PRIV_isLeft_left_IMPL(_x)  v(1)
#define EPILEPSY_PRIV_isLeft_right_IMPL(_x) v(0)

#define EPILEPSY_isRight_IMPL(either) EPILEPSY_not(EPILEPSY_isLeft(v(either)))

// EPILEPSY_eitherEq_IMPL {
#define EPILEPSY_eitherEq_IMPL(compare, maybe, other)                                              \
    EPILEPSY_matchWithArgs(v(maybe), v(EPILEPSY_PRIV_eitherEq_), v(other, compare))

#define EPILEPSY_PRIV_eitherEq_left_IMPL(x, other, compare)                                        \
    EPILEPSY_matchWithArgs(v(other), v(EPILEPSY_PRIV_eitherEq_left_), v(x, compare))
#define EPILEPSY_PRIV_eitherEq_right_IMPL(x, other, compare)                                       \
    EPILEPSY_matchWithArgs(v(other), v(EPILEPSY_PRIV_eitherEq_right_), v(x, compare))

#define EPILEPSY_PRIV_eitherEq_left_left_IMPL(y, x, compare)  EPILEPSY_appl2(v(compare), v(x), v(y))
#define EPILEPSY_PRIV_eitherEq_left_right_IMPL(y, x, compare) v(0)
#define EPILEPSY_PRIV_eitherEq_right_left_IMPL(y, x, compare) v(0)
#define EPILEPSY_PRIV_eitherEq_right_right_IMPL(y, x, compare)                                     \
    EPILEPSY_appl2(v(compare), v(x), v(y))
// } (EPILEPSY_eitherEq_IMPL)
// }

// Arity specifiers {
#define EPILEPSY_left_ARITY     1
#define EPILEPSY_right_ARITY    1
#define EPILEPSY_isLeft_ARITY   1
#define EPILEPSY_isRight_ARITY  1
#define EPILEPSY_eitherEq_ARITY 3
// }

// Aliases {
#ifndef EPILEPSY_NO_SMALL_PREFIX

#define E_left     EPILEPSY_left
#define E_right    EPILEPSY_right
#define E_isLeft   EPILEPSY_isLeft
#define E_isRight  EPILEPSY_isRight
#define E_eitherEq EPILEPSY_eitherEq

#endif // EPILEPSY_NO_SMALL_PREFIX
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_EITHER_H
