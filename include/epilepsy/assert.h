/**
 * @file
 * Static assertions.
 */

#ifndef EPILEPSY_ASSERT_H
#define EPILEPSY_ASSERT_H

#include <epilepsy/aux.h>
#include <epilepsy/eval.h>
#include <epilepsy/priv/aux.h>
#include <epilepsy/priv/overload.h>

// Desugaring {
/**
 * Asserts `EPILEPSY_EVAL(expr)`.
 */
#define EPILEPSY_ASSERT(expr) EPILEPSY_ASSERT_EQ(EPILEPSY_EXPAND(expr), v(1))

/**
 * Asserts the equality of `EPILEPSY_EVAL(lhs)` and `EPILEPSY_EVAL(rhs)`.
 */
#define EPILEPSY_ASSERT_EQ(lhs, rhs)                                                               \
    EPILEPSY_STATIC_ASSERT_PLAIN(EPILEPSY_EVAL(lhs) == EPILEPSY_EVAL(rhs))

/**
 * Asserts the C constant expression @p expr.
 */
#define EPILEPSY_STATIC_ASSERT_PLAIN(expr) EPILEPSY_PRIV_PLAIN_STATIC_ASSERT_IMPL(expr)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
// How to imitate static assertions in C99: https://stackoverflow.com/a/3385694/13166656.
#define EPILEPSY_PRIV_PLAIN_STATIC_ASSERT_IMPL(expr)                                               \
    static const char EPILEPSY_PRIV_CAT(epilepsy_static_assert_, __LINE__)[(expr) ? 1 : -1]
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_ASSERT_H
