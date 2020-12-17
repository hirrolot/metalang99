/**
 * @file
 * @brief A choice type with two cases.
 */

#ifndef EPILEPSY_EITHER_H
#define EPILEPSY_EITHER_H

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#include <epilepsy/logical.h>

#endif // DOXYGEN_SHOULD_SKIP_THIS

#include <epilepsy/choice.h>

/**
 * @brief Some value @p x.
 */
#define EPILEPSY_EitherLeft(x) call(EPILEPSY_EitherLeft_REAL, x)

/**
 * @brief No value.
 */
#define EPILEPSY_EitherRight(x) call(EPILEPSY_EitherRight_REAL, x)

/**
 * @brief 1 if @p either contains some value, otherwise 0.
 */
#define EPILEPSY_EitherIsLeft(either) call(EPILEPSY_EitherIsLeft_REAL, either)

/**
 * @brief 1 if @p either contains no value, otherwise 0.
 */
#define EPILEPSY_EitherIsRight(either) call(EPILEPSY_EitherIsRight_REAL, either)

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#define EPILEPSY_EitherLeft_REAL(x)  EPILEPSY_CHOICE(v(EitherLeft) v(x))
#define EPILEPSY_EitherRight_REAL(x) EPILEPSY_CHOICE(v(EitherRight) v(x))

#define EPILEPSY_EitherIsLeft_REAL(either)                                                         \
    EPILEPSY_CHOICE_MATCH(v(either), v(EPILEPSY_PRIV_EitherIsLeft_), v(~))
#define EPILEPSY_PRIV_EitherIsLeft_EitherLeft(_x, _)  v(1)
#define EPILEPSY_PRIV_EitherIsLeft_EitherRight(_x, _) v(0)

#define EPILEPSY_EitherIsRight_REAL(either) EPILEPSY_NOT(EPILEPSY_EitherIsLeft(v(either)))

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // EPILEPSY_EITHER_H
