/**
 * @file
 * @brief Unsigned integers.
 */

#ifndef MACROLOP_UINT_H
#define MACROLOP_UINT_H

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#include "priv/uint.h"

#endif // DOXYGEN_SHOULD_SKIP_THIS

#include "lang.h"

/**
 * @brief Increments @p x.
 */
#define MACROLOP_UINT_INC(x) call(MACROLOP_UINT_INC_REAL, x)

/**
 * @brief Decrements @p x.
 */
#define MACROLOP_UINT_DEC(x) call(MACROLOP_UINT_DEC_REAL, x)

/**
 * @brief Checks whether @p x and @p y are equal.
 */
#define MACROLOP_UINT_EQ(x, y) call(MACROLOP_UINT_EQ_REAL, x y)

/**
 * @brief Checks whether @p x and @p y are **not** equal.
 */
#define MACROLOP_UINT_NEQ(x, y) call(MACROLOP_UINT_NEQ_REAL, x y)

/**
 * @brief Checks whether @p x is greater than @p y.
 */
#define MACROLOP_UINT_GREATER(x, y) call(MACROLOP_UINT_GREATER_REAL, x y)

/**
 * @brief Checks whether @p x is greater or equal than @p y.
 */
#define MACROLOP_UINT_GREATER_EQUAL(x, y) call(MACROLOP_UINT_GREATER_EQUAL_REAL, x y)

/**
 * @brief Checks whether @p x is lesser than @p y.
 */
#define MACROLOP_UINT_LESSER(x, y) call(MACROLOP_UINT_LESSER_REAL, x y)

/**
 * @brief Checks whether @p x is lesser or equal than @p y.
 */
#define MACROLOP_UINT_LESSER_EQUAL(x, y) call(MACROLOP_UINT_LESSER_EQUAL_REAL, x y)

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#define MACROLOP_UINT_INC_REAL(x)              v(MACROLOP_PRIV_UINT_INC(x))
#define MACROLOP_UINT_DEC_REAL(x)              v(MACROLOP_PRIV_UINT_DEC(x))
#define MACROLOP_UINT_EQ_REAL(x, y)            v(MACROLOP_PRIV_UINT_EQ(x, y))
#define MACROLOP_UINT_NEQ_REAL(x, y)           v(MACROLOP_PRIV_UINT_NEQ(x, y))
#define MACROLOP_UINT_GREATER_REAL(x, y)       v(MACROLOP_PRIV_UINT_GREATER(x, y))
#define MACROLOP_UINT_GREATER_EQUAL_REAL(x, y) v(MACROLOP_PRIV_UINT_GREATER_EQUAL(x, y))
#define MACROLOP_UINT_LESSER_REAL(x, y)        v(MACROLOP_PRIV_UINT_LESSER(x, y))
#define MACROLOP_UINT_LESSER_EQUAL_REAL(x, y)  v(MACROLOP_PRIV_UINT_LESSER_EQUAL(x, y))

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // MACROLOP_UINT_H
