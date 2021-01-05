/**
 * @file
 * Static assertions.
 */

#ifndef EPILEPSY_ASSERT_H
#define EPILEPSY_ASSERT_H

#include <epilepsy/aux.h>
#include <epilepsy/eval.h>
#include <epilepsy/lang.h>
#include <epilepsy/priv/overload.h>

// Desugaring {
/**
 * Asserts `EPILEPSY_EVAL(expr)` at compile-time.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/assert.h>
 *
 * EPILEPSY_ASSERT(v(123 == 123));
 * @endcode
 */
#define EPILEPSY_ASSERT(expr) EPILEPSY_ASSERT_EQ(EPILEPSY_EXPAND(expr), v(1))

/**
 * Asserts the equality of `EPILEPSY_EVAL(lhs)` and `EPILEPSY_EVAL(rhs)` at compile-time.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/assert.h>
 *
 * EPILEPSY_ASSERT_EQ(v(123), v(123));
 * @endcode
 */
#define EPILEPSY_ASSERT_EQ(lhs, rhs) EPILEPSY_ASSERT_PLAIN(EPILEPSY_EVAL(lhs) == EPILEPSY_EVAL(rhs))

/**
 * Asserts the C constant expression @p expr; <a
 * href="https://en.cppreference.com/w/c/error/static_assert">static_assert</a> in pure C99.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/assert.h>
 *
 * EPILEPSY_ASSERT_PLAIN(123 == 123);
 * @endcode
 */
#define EPILEPSY_ASSERT_PLAIN(expr)                                                                \
    /* How to imitate static assertions in C99: https://stackoverflow.com/a/3385694/13166656. */   \
    static const char EPILEPSY_CAT_PLAIN(                                                          \
        epilepsy_static_assert_, __LINE__)[(expr) ? 1 : -1] EPILEPSY_PRIV_ATTR_UNUSED
// }

#ifndef DOXYGEN_IGNORE

#ifdef __GNUC__
#define EPILEPSY_PRIV_ATTR_UNUSED __attribute__((unused))
#else
#define EPILEPSY_PRIV_ATTR_UNUSED
#endif

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_ASSERT_H
