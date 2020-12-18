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

#include <stdbool.h>

/**
 * @brief Asserts `EPILEPSY_EVAL(expr)`.
 */
#define EPILEPSY_ASSERT(expr) EPILEPSY_ASSERT_EQ(EPILEPSY_EXPAND(expr), v(true))

/**
 * @brief The same as #EPILEPSY_ASSERT but accepts an error message.
 */
#define EPILEPSY_ASSERT_WITH_MSG(expr, message)                                                    \
    EPILEPSY_ASSERT_EQ_WITH_MSG(EPILEPSY_EXPAND(expr), v(true), message)

/**
 * @brief Asserts that `EPILEPSY_EVAL(lhs)` is equal to `EPILEPSY_EVAL(rhs)`.
 */
#define EPILEPSY_ASSERT_EQ(lhs, rhs)                                                               \
    EPILEPSY_C_STATIC_ASSERT(EPILEPSY_EVAL(lhs) == EPILEPSY_EVAL(rhs))

/**
 * @brief The same as #EPILEPSY_ASSERT_EQ but accepts an error message.
 */
#define EPILEPSY_ASSERT_EQ_WITH_MSG(lhs, rhs, message)                                             \
    EPILEPSY_C_STATIC_ASSERT_WITH_MSG(EPILEPSY_EVAL(lhs) == EPILEPSY_EVAL(rhs), message)

/**
 * @brief Asserts a constant expression @p expr.
 */
#define EPILEPSY_C_STATIC_ASSERT(expr) EPILEPSY_PRIV_C_STATIC_ASSERT_IMPL(expr)

/**
 * @brief The same as #EPILEPSY_C_STATIC_ASSERT but accept an error message.
 */
#define EPILEPSY_C_STATIC_ASSERT_WITH_MSG(expr, message)                                           \
    EPILEPSY_PRIV_C_STATIC_ASSERT_WITH_MSG_IMPL(expr, message)

#ifndef DOXYGEN_SHOULD_SKIP_THIS

// How to imitate static assertions in C99: https://stackoverflow.com/a/3385694/13166656.

#define EPILEPSY_PRIV_C_STATIC_ASSERT_IMPL(expr)                                                   \
    static const char EPILEPSY_PRIV_CAT(epilepsy_static_assert_, __LINE__)[(expr) ? 1 : -1]
#define EPILEPSY_PRIV_C_STATIC_ASSERT_WITH_MSG_IMPL(expr, message)                                 \
    static const char EPILEPSY_PRIV_CAT_4(                                                         \
        epilepsy_static_assert_, __LINE__, _, message)[(expr) ? 1 : -1]

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // EPILEPSY_ASSERT_H
