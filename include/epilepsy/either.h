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
#define EPILEPSY_EITHER_LEFT(x) call(EPILEPSY_EITHER_LEFT_REAL, x)

/**
 * @brief No value.
 */
#define EPILEPSY_EITHER_RIGHT(x) call(EPILEPSY_EITHER_RIGHT_REAL, x)

/**
 * @brief 1 if @p either contains some value, otherwise 0.
 */
#define EPILEPSY_EITHER_IS_LEFT(either) call(EPILEPSY_EITHER_IS_LEFT_REAL, either)

/**
 * @brief 1 if @p either contains no value, otherwise 0.
 */
#define EPILEPSY_EITHER_IS_RIGHT(either) call(EPILEPSY_EITHER_IS_RIGHT_REAL, either)

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#define EPILEPSY_EITHER_LEFT_REAL(x)  EPILEPSY_CHOICE(v(LEFT) v(x))
#define EPILEPSY_EITHER_RIGHT_REAL(x) EPILEPSY_CHOICE(v(RIGHT) v(x))

#define EPILEPSY_EITHER_IS_LEFT_REAL(either)                                                       \
    EPILEPSY_CHOICE_MATCH(v(either), v(EPILEPSY_PRIV_EITHER_IS_LEFT_), v(~))
#define EPILEPSY_PRIV_EITHER_IS_LEFT_LEFT(_x, _)  v(1)
#define EPILEPSY_PRIV_EITHER_IS_LEFT_RIGHT(_x, _) v(0)

#define EPILEPSY_EITHER_IS_RIGHT_REAL(either) EPILEPSY_NOT(EPILEPSY_EITHER_IS_LEFT(v(either)))

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // EPILEPSY_EITHER_H
