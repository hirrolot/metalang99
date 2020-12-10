/**
 * @file
 * @brief Boolean algebra.
 */

#ifndef MACROLOP_LOGICAL_H
#define MACROLOP_LOGICAL_H

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#include <macrolop/priv/logical.h>

#endif // DOXYGEN_SHOULD_SKIP_THIS

#include <macrolop/lang.h>

/**
 * @brief Negates @p x.
 */
#define MACROLOP_NOT(x) call(MACROLOP_NOT_REAL, x)

/**
 * @brief Performs logical conjunction on @p and @p y.
 */
#define MACROLOP_AND(x, y) call(MACROLOP_AND_REAL, x y)

/**
 * @brief Performs inclusive OR on @p and @p y.
 */
#define MACROLOP_OR(x, y) call(MACROLOP_OR_REAL, x y)

/**
 * @brief Performs exclusive OR on @p and @p y.
 */
#define MACROLOP_XOR(x, y) call(MACROLOP_XOR_REAL, x y)

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#define MACROLOP_NOT_REAL(x)    v(MACROLOP_PRIV_NOT(x))
#define MACROLOP_AND_REAL(x, y) v(MACROLOP_PRIV_AND(x, y))
#define MACROLOP_OR_REAL(x, y)  v(MACROLOP_PRIV_OR(x, y))
#define MACROLOP_XOR_REAL(x, y) v(MACROLOP_PRIV_XOR(x, y))

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // MACROLOP_LOGICAL_H
