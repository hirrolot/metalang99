/**
 * @file
 * @brief Unsigned integers.
 */

#ifndef AGONY_PP_UINT_H
#define AGONY_PP_UINT_H

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#include "uint/dec.h"
#include "uint/eq.h"
#include "uint/greater.h"
#include "uint/greater_equal.h"
#include "uint/inc.h"
#include "uint/lesser.h"
#include "uint/lesser_equal.h"
#include "uint/neq.h"

#endif // DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Increments @p x.
 */
#define AGONY_PP_UINT_INC(x) AGONY_PP_PRIVATE_UINT_INC(x)

/**
 * @brief Decrements @p x.
 */
#define AGONY_PP_UINT_DEC(x) AGONY_PP_PRIVATE_UINT_DEC(x)

/**
 * @brief Checks whether @p x and @p y are equal.
 */
#define AGONY_PP_UINT_EQ(x, y) AGONY_PP_PRIVATE_UINT_EQ(x, y)

/**
 * @brief Checks whether @p x and @p y are **not** equal.
 */
#define AGONY_PP_UINT_NEQ(x, y) AGONY_PP_PRIVATE_UINT_NEQ(x, y)

/**
 * @brief Checks whether @p x is greater than @p y.
 */
#define AGONY_PP_UINT_GREATER(x, y) AGONY_PP_PRIVATE_UINT_GREATER(x, y)

/**
 * @brief Checks whether @p x is greater or equal than @p y.
 */
#define AGONY_PP_UINT_GREATER_EQUAL(x, y) AGONY_PP_PRIVATE_UINT_GREATER_EQUAL(x, y)

/**
 * @brief Checks whether @p x is lesser than @p y.
 */
#define AGONY_PP_UINT_LESSER(x, y) AGONY_PP_PRIVATE_UINT_LESSER(x, y)

/**
 * @brief Checks whether @p x is lesser or equal than @p y.
 */
#define AGONY_PP_UINT_LESSER_EQUAL(x, y) AGONY_PP_PRIVATE_UINT_LESSER_EQUAL(x, y)

#endif // AGONY_PP_UINT_H
