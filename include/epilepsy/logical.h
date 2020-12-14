/**
 * @file
 * @brief Boolean algebra.
 */

#ifndef EPILEPSY_LOGICAL_H
#define EPILEPSY_LOGICAL_H

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#include <epilepsy/priv/logical.h>

#endif // DOXYGEN_SHOULD_SKIP_THIS

#include <epilepsy/lang.h>

/**
 * @brief Negates @p x.
 */
#define EPILEPSY_NOT(x) call(EPILEPSY_NOT_REAL, x)

/**
 * @brief Performs logical conjunction on @p and @p y.
 */
#define EPILEPSY_AND(x, y) call(EPILEPSY_AND_REAL, x y)

/**
 * @brief Performs inclusive OR on @p and @p y.
 */
#define EPILEPSY_OR(x, y) call(EPILEPSY_OR_REAL, x y)

/**
 * @brief Performs exclusive OR on @p and @p y.
 */
#define EPILEPSY_XOR(x, y) call(EPILEPSY_XOR_REAL, x y)

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#define EPILEPSY_NOT_REAL(x)    v(EPILEPSY_PRIV_NOT(x))
#define EPILEPSY_AND_REAL(x, y) v(EPILEPSY_PRIV_AND(x, y))
#define EPILEPSY_OR_REAL(x, y)  v(EPILEPSY_PRIV_OR(x, y))
#define EPILEPSY_XOR_REAL(x, y) v(EPILEPSY_PRIV_XOR(x, y))

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // EPILEPSY_LOGICAL_H
