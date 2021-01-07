/**
 * @file
 * Static assertions.
 */

#ifndef EPILEPSY_assert_H
#define EPILEPSY_assert_H

#include <epilepsy/aux.h>
#include <epilepsy/eval.h>
#include <epilepsy/lang.h>
#include <epilepsy/priv/overload.h>

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
 * EPILEPSY_assertEq(v(123), v(123));
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
 * EPILEPSY_assertPlain(123 == 123);
 * @endcode
 */
#define EPILEPSY_assertPlain(expr)                                                                 \
    /* How to imitate static assertions in C99: https://stackoverflow.com/a/3385694/13166656. */   \
    static const char EPILEPSY_catPlain(                                                           \
        epilepsy_static_assert_, __LINE__)[(expr) ? 1 : -1] EPILEPSY_PRIV_ATTR_UNUSED
// }

#ifndef DOXYGEN_IGNORE

#ifdef __GNUC__
#define EPILEPSY_PRIV_ATTR_UNUSED __attribute__((unused))
#else
#define EPILEPSY_PRIV_ATTR_UNUSED
#endif

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_assert_H
