/**
 * @file
 * @brief Static assertions.
 */

#ifndef EPILEPSY_ASSERT_H
#define EPILEPSY_ASSERT_H

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#include <epilepsy/aux.h>
#include <epilepsy/eval.h>
#include <epilepsy/priv/aux.h>
#include <epilepsy/priv/overload.h>

#endif // DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Asserts `EPILEPSY_EVAL(expr)`.
 */
#define EPILEPSY_ASSERT(expr) EPILEPSY_ASSERT_EQ(EPILEPSY_EXPAND(expr), v(1))

/**
 * @brief Asserts that `EPILEPSY_EVAL(lhs)` is equal to `EPILEPSY_EVAL(rhs)`.
 */
#define EPILEPSY_ASSERT_EQ(lhs, rhs)                                                               \
    EPILEPSY_C_STATIC_ASSERT(EPILEPSY_EVAL(lhs) == EPILEPSY_EVAL(rhs))

/**
 * @brief Asserts a constant expression @p expr.
 */
#define EPILEPSY_C_STATIC_ASSERT(expr) EPILEPSY_PRIV_C_STATIC_ASSERT_IMPL(expr)

#ifndef DOXYGEN_SHOULD_SKIP_THIS

// How to imitate static assertions in C99: https://stackoverflow.com/a/3385694/13166656.

#define EPILEPSY_PRIV_C_STATIC_ASSERT_IMPL(expr)                                                   \
    static const char EPILEPSY_PRIV_CAT(epilepsy_static_assert_, __LINE__)[(expr) ? 1 : -1]

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // EPILEPSY_ASSERT_H
