/**
 * @file
 * @brief A choice type with two cases.
 */

#ifndef EPILEPSY_EITHER_H
#define EPILEPSY_EITHER_H

#include <epilepsy/choice.h>
#include <epilepsy/logical.h>

// Desugaring {
/**
 * @brief Some value @p x.
 */
#define EPILEPSY_EitherLeft(x) call(EPILEPSY_EitherLeft_IMPL, x)

/**
 * @brief No value.
 */
#define EPILEPSY_EitherRight(x) call(EPILEPSY_EitherRight_IMPL, x)

/**
 * @brief 1 if @p either contains some value, otherwise 0.
 */
#define EPILEPSY_EitherIsLeft(either) call(EPILEPSY_EitherIsLeft_IMPL, either)

/**
 * @brief 1 if @p either contains no value, otherwise 0.
 */
#define EPILEPSY_EitherIsRight(either) call(EPILEPSY_EitherIsRight_IMPL, either)
// }

// Implementation {
#define EPILEPSY_EitherLeft_IMPL(x)  EPILEPSY_CHOICE(v(EitherLeft) v(x))
#define EPILEPSY_EitherRight_IMPL(x) EPILEPSY_CHOICE(v(EitherRight) v(x))

#define EPILEPSY_EitherIsLeft_IMPL(either)         EPILEPSY_MATCH(v(either), v(EPILEPSY_PRIV_EitherIsLeft_))
#define EPILEPSY_PRIV_EitherIsLeft_EitherLeft(_x)  v(1)
#define EPILEPSY_PRIV_EitherIsLeft_EitherRight(_x) v(0)

#define EPILEPSY_EitherIsRight_IMPL(either) EPILEPSY_NOT(EPILEPSY_EitherIsLeft(v(either)))
// }

#endif // EPILEPSY_EITHER_H
