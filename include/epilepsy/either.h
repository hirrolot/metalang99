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
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define EPILEPSY_left_IMPL(x)  EPILEPSY_choice(v(left), v(x))
#define EPILEPSY_right_IMPL(x) EPILEPSY_choice(v(right), v(x))

#define EPILEPSY_isLeft_IMPL(either)        EPILEPSY_match(v(either), v(EPILEPSY_PRIV_isLeft_))
#define EPILEPSY_PRIV_isLeft_left_IMPL(_x)  v(1)
#define EPILEPSY_PRIV_isLeft_right_IMPL(_x) v(0)

#define EPILEPSY_isRight_IMPL(either) EPILEPSY_not(EPILEPSY_isLeft(v(either)))
// }

// Arity specifiers {
#define EPILEPSY_left_ARITY    1
#define EPILEPSY_right_ARITY   1
#define EPILEPSY_isLeft_ARITY  1
#define EPILEPSY_isRight_ARITY 1
// }

// Aliases {
#ifndef EPILEPSY_NO_SMALL_PREFIX

#define E_left    EPILEPSY_left
#define E_right   EPILEPSY_right
#define E_isLeft  EPILEPSY_isLeft
#define E_isRight EPILEPSY_isRight

#endif // EPILEPSY_NO_SMALL_PREFIX
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_EITHER_H
