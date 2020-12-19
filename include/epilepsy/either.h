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

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#define EPILEPSY_EitherLeft_IMPL(x)  EPILEPSY_CHOICE(v(EitherLeft) v(x))
#define EPILEPSY_EitherRight_IMPL(x) EPILEPSY_CHOICE(v(EitherRight) v(x))

#define EPILEPSY_EitherIsLeft_IMPL(either)                                                         \
    EPILEPSY_MATCH_WITH_ARGS(v(either), v(EPILEPSY_PRIV_EitherIsLeft_), v(~))
#define EPILEPSY_PRIV_EitherIsLeft_EitherLeft(_x, _)  v(1)
#define EPILEPSY_PRIV_EitherIsLeft_EitherRight(_x, _) v(0)

#define EPILEPSY_EitherIsRight_IMPL(either) EPILEPSY_NOT(EPILEPSY_EitherIsLeft(v(either)))

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // EPILEPSY_EITHER_H
