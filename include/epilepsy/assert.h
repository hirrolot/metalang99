/**
 * @file
 * Static assertions.
 */

#ifndef EPILEPSY_ASSERT_H
#define EPILEPSY_ASSERT_H

#include <epilepsy/aux.h>
#include <epilepsy/eval.h>
#include <epilepsy/lang.h>
#include <epilepsy/logical.h>
#include <epilepsy/priv/compiler_attr.h>

// Desugaring {
/**
 * Asserts `EPILEPSY_eval(expr)` at compile-time.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/assert.h>
 *
 * EPILEPSY_assert(v(123 == 123));
 * @endcode
 */
#define EPILEPSY_assert(expr) EPILEPSY_assertEq(EPILEPSY_expand(expr), v(1))

/**
 * Asserts the equality of `EPILEPSY_eval(lhs)` and `EPILEPSY_eval(rhs)` at compile-time.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/assert.h>
 *
 * E_assertEq(v(123), v(123));
 * @endcode
 */
#define EPILEPSY_assertEq(lhs, rhs) EPILEPSY_assertPlain(EPILEPSY_eval(lhs) == EPILEPSY_eval(rhs))

/**
 * Asserts the C constant expression @p expr; <a
 * href="https://en.cppreference.com/w/c/error/static_assert">static_assert</a> in pure C99.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/assert.h>
 *
 * E_assertPlain(123 == 123);
 * @endcode
 */
#define EPILEPSY_assertPlain(expr)                                                                 \
    /* How to imitate static assertions in C99: https://stackoverflow.com/a/3385694/13166656. */   \
    static const char EPILEPSY_PRIV_CAT(                                                           \
        epilepsy_assert_, __LINE__)[(expr) ? 1 : -1] EPILEPSY_PRIV_COMPILER_ATTR_UNUSED

/**
 * Asserts that `EPILEPSY_eval(expr)` is emptiness.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/assert.h>
 *
 * // Passes:
 * E_assertEmpty(v());
 *
 * // Fails:
 * E_assertEmpty(v(123));
 * @endcode
 */
#define EPILEPSY_assertEmpty(expr) EPILEPSY_assertEmptyPlain(EPILEPSY_eval(expr))

/**
 * Asserts that @p expr is emptiness.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/assert.h>
 *
 * // Passes:
 * E_assertEmptyPlain();
 *
 * // Fails:
 * E_assertEmptyPlain(123);
 * @endcode
 */
#define EPILEPSY_assertEmptyPlain(expr)                                                            \
    EPILEPSY_assertPlain(EPILEPSY_PRIV_CAT(EPILEPSY_PRIV_assertEmpty_, expr))
// }

#ifndef DOXYGEN_IGNORE

#define EPILEPSY_PRIV_assertEmpty_ 1

// Aliases {
#ifndef EPILEPSY_NO_SMALL_PREFIX

#define E_assert           EPILEPSY_assert
#define E_assertEq         EPILEPSY_assertEq
#define E_assertPlain      EPILEPSY_assertPlain
#define E_assertEmpty      EPILEPSY_assertEmpty
#define E_assertEmptyPlain EPILEPSY_assertEmptyPlain

#endif // EPILEPSY_NO_SMALL_PREFIX
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_ASSERT_H
