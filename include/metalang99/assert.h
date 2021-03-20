/**
 * @file
 * Static assertions.
 */

#ifndef ML99_ASSERT_H
#define ML99_ASSERT_H

#include <metalang99/priv/compiler_specific.h>

#include <metalang99/lang.h>
#include <metalang99/logical.h>
#include <metalang99/util.h>

/**
 * Asserts `ML99_EVAL(expr)` at compile-time.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/assert.h>
 *
 * ML99_ASSERT(v(123 == 123));
 * @endcode
 */
#define ML99_ASSERT(expr) ML99_ASSERT_EQ(expr, ML99_true)

/**
 * Asserts the equality of `ML99_EVAL(lhs)` and `ML99_EVAL(rhs)` at compile-time.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/assert.h>
 *
 * ML99_ASSERT_EQ(v(123), v(123));
 * @endcode
 */
#define ML99_ASSERT_EQ(lhs, rhs) ML99_ASSERT_UNEVAL(ML99_EVAL(lhs) == ML99_EVAL(rhs))

/**
 * Asserts the C constant expression @p expr; <a
 * href="https://en.cppreference.com/w/c/error/static_assert">static_assert</a> in pure C99.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/assert.h>
 *
 * ML99_ASSERT_UNEVAL(123 == 123);
 * @endcode
 */
#define ML99_ASSERT_UNEVAL(expr)                                                                   \
    /* How to imitate static assertions in C99: <https://stackoverflow.com/a/3385694/13166656>. */ \
    static const char ML99_CAT(                                                                    \
        metalang99_assert_,                                                                        \
        __LINE__)[(expr) ? 1 : -1] ML99_PRIV_COMPILER_ATTR_UNUSED = {0}

/**
 * Asserts that `ML99_EVAL(expr)` is emptiness.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/assert.h>
 *
 * // Passes:
 * ML99_ASSERT_EMPTY(v());
 *
 * // Fails:
 * ML99_ASSERT_EMPTY(v(123));
 * @endcode
 */
#define ML99_ASSERT_EMPTY(expr) ML99_ASSERT_EMPTY_UNEVAL(ML99_EVAL(expr))

/**
 * Asserts that @p expr is emptiness.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/assert.h>
 *
 * // Passes:
 * ML99_ASSERT_EMPTY_UNEVAL();
 *
 * // Fails:
 * ML99_ASSERT_EMPTY_UNEVAL(123);
 * @endcode
 */
#define ML99_ASSERT_EMPTY_UNEVAL(expr) ML99_ASSERT_UNEVAL(ML99_CAT(ML99_PRIV_ASSERT_EMPTY_, expr))

#ifndef DOXYGEN_IGNORE

#define ML99_PRIV_ASSERT_EMPTY_ 1

#endif // DOXYGEN_IGNORE

#endif // ML99_ASSERT_H
