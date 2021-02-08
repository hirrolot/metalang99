/**
 * @file
 * Static assertions.
 */

#ifndef METALANG99_ASSERT_H
#define METALANG99_ASSERT_H

#include <metalang99/eval.h>
#include <metalang99/lang.h>
#include <metalang99/logical.h>
#include <metalang99/priv/compiler_attr.h>
#include <metalang99/priv/util.h>
#include <metalang99/util.h>

// Desugaring {
/**
 * Asserts `METALANG99_eval(expr)` at compile-time.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/assert.h>
 *
 * METALANG99_assert(v(123 == 123));
 * @endcode
 */
#define METALANG99_assert(expr)                                                                    \
    METALANG99_assertEq(METALANG99_PRIV_EXPAND(expr), v(METALANG99_true))

/**
 * Asserts the equality of `METALANG99_eval(lhs)` and `METALANG99_eval(rhs)` at compile-time.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/assert.h>
 *
 * M_assertEq(v(123), v(123));
 * @endcode
 */
#define METALANG99_assertEq(lhs, rhs)                                                              \
    METALANG99_assertPlain(METALANG99_eval(lhs) == METALANG99_eval(rhs))

/**
 * Asserts the C constant expression @p expr; <a
 * href="https://en.cppreference.com/w/c/error/static_assert">static_assert</a> in pure C99.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/assert.h>
 *
 * M_assertPlain(123 == 123);
 * @endcode
 */
#define METALANG99_assertPlain(expr)                                                               \
    /* How to imitate static assertions in C99: https://stackoverflow.com/a/3385694/13166656. */   \
    static const char METALANG99_PRIV_CAT(                                                         \
        metalang99_assert_,                                                                        \
        __LINE__)[(expr) ? 1 : -1] METALANG99_PRIV_COMPILER_ATTR_UNUSED

/**
 * Asserts that `METALANG99_eval(expr)` is emptiness.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/assert.h>
 *
 * // Passes:
 * M_assertEmpty(v());
 *
 * // Fails:
 * M_assertEmpty(v(123));
 * @endcode
 */
#define METALANG99_assertEmpty(expr) METALANG99_assertEmptyPlain(METALANG99_eval(expr))

/**
 * Asserts that @p expr is emptiness.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/assert.h>
 *
 * // Passes:
 * M_assertEmptyPlain();
 *
 * // Fails:
 * M_assertEmptyPlain(123);
 * @endcode
 */
#define METALANG99_assertEmptyPlain(expr)                                                          \
    METALANG99_assertPlain(METALANG99_PRIV_CAT(METALANG99_PRIV_assertEmpty_, expr))
// }

#ifndef DOXYGEN_IGNORE

#define METALANG99_PRIV_assertEmpty_ 1

// Aliases {
#ifndef METALANG99_NO_SMALL_PREFIX

#define M_assert           METALANG99_assert
#define M_assertEq         METALANG99_assertEq
#define M_assertPlain      METALANG99_assertPlain
#define M_assertEmpty      METALANG99_assertEmpty
#define M_assertEmptyPlain METALANG99_assertEmptyPlain

#endif // METALANG99_NO_SMALL_PREFIX
// }

#endif // DOXYGEN_IGNORE

#endif // METALANG99_ASSERT_H
