/**
 * @file
 * @brief Unsigned integers.
 */

#ifndef EPILEPSY_UINT_H
#define EPILEPSY_UINT_H

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#include <epilepsy/control.h>
#include <epilepsy/logical.h>
#include <epilepsy/uint/dec.h>
#include <epilepsy/uint/eq.h>
#include <epilepsy/uint/inc.h>

#endif // DOXYGEN_SHOULD_SKIP_THIS

#include <epilepsy/lang.h>

/**
 * @brief Increments @p x.
 */
#define EPILEPSY_UINT_INC(x) call(EPILEPSY_UINT_INC_REAL, x)

/**
 * @brief Decrements @p x.
 */
#define EPILEPSY_UINT_DEC(x) call(EPILEPSY_UINT_DEC_REAL, x)

/**
 * @brief Checks whether @p x and @p y are equal.
 */
#define EPILEPSY_UINT_EQ(x, y) call(EPILEPSY_UINT_EQ_REAL, x y)

/**
 * @brief Checks whether @p x and @p y are **not** equal.
 */
#define EPILEPSY_UINT_NEQ(x, y) call(EPILEPSY_UINT_NEQ_REAL, x y)

/**
 * @brief Checks whether @p x is greater than @p y.
 */
#define EPILEPSY_UINT_GREATER(x, y) call(EPILEPSY_UINT_GREATER_REAL, x y)

/**
 * @brief Checks whether @p x is greater or equal than @p y.
 */
#define EPILEPSY_UINT_GREATER_EQUAL(x, y) call(EPILEPSY_UINT_GREATER_EQUAL_REAL, x y)

/**
 * @brief Checks whether @p x is lesser than @p y.
 */
#define EPILEPSY_UINT_LESSER(x, y) call(EPILEPSY_UINT_LESSER_REAL, x y)

/**
 * @brief Checks whether @p x is lesser or equal than @p y.
 */
#define EPILEPSY_UINT_LESSER_EQUAL(x, y) call(EPILEPSY_UINT_LESSER_EQUAL_REAL, x y)

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#define EPILEPSY_UINT_NEQ_REAL(x, y)          EPILEPSY_NOT(EPILEPSY_UINT_EQ(v(x), v(y)))
#define EPILEPSY_UINT_GREATER_REAL(x, y)      EPILEPSY_UINT_LESSER(v(y), v(x))
#define EPILEPSY_UINT_LESSER_EQUAL_REAL(x, y) EPILEPSY_UINT_GREATER_EQUAL(v(y), v(x))

#define EPILEPSY_UINT_GREATER_EQUAL_REAL(x, y)                                                     \
    call(                                                                                          \
        EPILEPSY_IF(                                                                               \
            EPILEPSY_UINT_EQ(v(x), v(y)), v(EPILEPSY_TRUE_REAL), v(EPILEPSY_UINT_GREATER_REAL)),   \
        v(x) v(y))

#define EPILEPSY_UINT_LESSER_REAL(x, y)                                                            \
    call(                                                                                          \
        EPILEPSY_IF(                                                                               \
            EPILEPSY_UINT_EQ(v(y), v(0)), v(EPILEPSY_FALSE_REAL),                                  \
            v(EPILEPSY_PRIV_UINT_LESSER_PROGRESS)),                                                \
        v(x) v(y))

#define EPILEPSY_PRIV_UINT_LESSER_PROGRESS(x, y)                                                   \
    call(                                                                                          \
        EPILEPSY_IF(                                                                               \
            EPILEPSY_UINT_EQ(v(x), EPILEPSY_UINT_DEC(v(y))), v(EPILEPSY_TRUE_REAL),                \
            v(EPILEPSY_UINT_LESSER_REAL)),                                                         \
        v(x) EPILEPSY_UINT_DEC(v(y)))

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // EPILEPSY_UINT_H
