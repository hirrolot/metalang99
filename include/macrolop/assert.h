/**
 * @file
 * @brief Static assertions.
 */

#ifndef MACROLOP_ASSERT_H
#define MACROLOP_ASSERT_H

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#include <macrolop/aux.h>
#include <macrolop/eval.h>
#include <macrolop/priv/aux.h>
#include <macrolop/priv/overload.h>

#endif // DOXYGEN_SHOULD_SKIP_THIS

#include <stdbool.h>

/**
 * @brief Asserts `MACROLOP_EVAL(expr)`.
 */
#define MACROLOP_ASSERT(expr) MACROLOP_ASSERT_EQ(MACROLOP_EXPAND(expr), v(true))

/**
 * @brief The same as #MACROLOP_ASSERT but accepts an error message.
 */
#define MACROLOP_ASSERT_WITH_MSG(expr, message)                                                    \
    MACROLOP_ASSERT_EQ_WITH_MSG(MACROLOP_EXPAND(expr), v(true), message)

/**
 * @brief Asserts that `MACROLOP_EVAL(lhs)` is equal to `MACROLOP_EVAL(rhs)`.
 */
#define MACROLOP_ASSERT_EQ(lhs, rhs)                                                               \
    MACROLOP_REGULAR_ASSERT(MACROLOP_EVAL(lhs) == MACROLOP_EVAL(rhs))

/**
 * @brief The same as #MACROLOP_ASSERT_EQ but accepts an error message.
 */
#define MACROLOP_ASSERT_EQ_WITH_MSG(lhs, rhs, message)                                             \
    MACROLOP_REGULAR_ASSERT_WITH_MSG(MACROLOP_EVAL(lhs) == MACROLOP_EVAL(rhs), message)

/**
 * @brief Asserts a constant expression @p expr.
 */
#define MACROLOP_REGULAR_ASSERT(expr) MACROLOP_PRIV_REGULAR_ASSERT_IMPL(expr)

/**
 * @brief The same as #MACROLOP_REGULAR_ASSERT but accept an error message.
 */
#define MACROLOP_REGULAR_ASSERT_WITH_MSG(expr, message)                                            \
    MACROLOP_PRIV_REGULAR_ASSERT_WITH_MSG_IMPL(expr, message)

#ifndef DOXYGEN_SHOULD_SKIP_THIS

// How to imitate static assertions in C99: https://stackoverflow.com/a/3385694/13166656.

#define MACROLOP_PRIV_REGULAR_ASSERT_IMPL(expr)                                                    \
    static const char MACROLOP_PRIV_AUX_CAT(macrolop_static_assert_, __LINE__)[(expr) ? 1 : -1]
#define MACROLOP_PRIV_REGULAR_ASSERT_WITH_MSG_IMPL(expr, message)                                  \
    static const char MACROLOP_PRIV_AUX_CAT_4(                                                     \
        macrolop_static_assert_, __LINE__, _, message)[(expr) ? 1 : -1]

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // MACROLOP_ASSERT_H
