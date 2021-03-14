/**
 * @file
 * Static assertions.
 */

#ifndef ML99_ASSERT_H
#define ML99_ASSERT_H

#include <metalang99/priv/compiler_specific.h>

#include <metalang99/eval.h>
#include <metalang99/lang.h>
#include <metalang99/logical.h>
#include <metalang99/util.h>

// Desugaring {
/**
 * Asserts `ML99_eval(expr)` at compile-time.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/assert.h>
 *
 * ML99_assert(v(123 == 123));
 * @endcode
 */
#define ML99_assert(expr) ML99_assertEq(expr, ML99_true)

/**
 * Asserts the equality of `ML99_eval(lhs)` and `ML99_eval(rhs)` at compile-time.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/assert.h>
 *
 * ML99_assertEq(v(123), v(123));
 * @endcode
 */
#define ML99_assertEq(lhs, rhs) ML99_assertPlain(ML99_eval(lhs) == ML99_eval(rhs))

/**
 * Asserts the C constant expression @p expr; <a
 * href="https://en.cppreference.com/w/c/error/static_assert">static_assert</a> in pure C99.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/assert.h>
 *
 * ML99_assertPlain(123 == 123);
 * @endcode
 */
#define ML99_assertPlain(expr)                                                                     \
    /* How to imitate static assertions in C99: https://stackoverflow.com/a/3385694/13166656. */   \
    static const char ML99_PRIV_CAT(                                                               \
        metalang99_assert_,                                                                        \
        __LINE__)[(expr) ? 1 : -1] ML99_PRIV_COMPILER_ATTR_UNUSED = {0}

/**
 * Asserts that `ML99_eval(expr)` is emptiness.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/assert.h>
 *
 * // Passes:
 * ML99_assertEmpty(v());
 *
 * // Fails:
 * ML99_assertEmpty(v(123));
 * @endcode
 */
#define ML99_assertEmpty(expr) ML99_assertEmptyPlain(ML99_eval(expr))

/**
 * Asserts that @p expr is emptiness.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/assert.h>
 *
 * // Passes:
 * ML99_assertEmptyPlain();
 *
 * // Fails:
 * ML99_assertEmptyPlain(123);
 * @endcode
 */
#define ML99_assertEmptyPlain(expr) ML99_assertPlain(ML99_PRIV_CAT(ML99_PRIV_assertEmpty_, expr))
// }

#ifndef DOXYGEN_IGNORE

#define ML99_PRIV_assertEmpty_ 1

#endif // DOXYGEN_IGNORE

#endif // ML99_ASSERT_H
