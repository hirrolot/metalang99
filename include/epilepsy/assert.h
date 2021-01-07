/**
 * @file
 * Static assertions.
 */

#ifndef epAssert_H
#define epAssert_H

#include <epilepsy/aux.h>
#include <epilepsy/eval.h>
#include <epilepsy/lang.h>
#include <epilepsy/priv/overload.h>

// Desugaring {
/**
 * Asserts `epEval(expr)` at compile-time.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/assert.h>
 *
 * epAssert(v(123 == 123));
 * @endcode
 */
#define epAssert(expr) epAssertEq(epExpand(expr), v(1))

/**
 * Asserts the equality of `epEval(lhs)` and `epEval(rhs)` at compile-time.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/assert.h>
 *
 * epAssertEq(v(123), v(123));
 * @endcode
 */
#define epAssertEq(lhs, rhs) epAssertPlain(epEval(lhs) == epEval(rhs))

/**
 * Asserts the C constant expression @p expr; <a
 * href="https://en.cppreference.com/w/c/error/static_assert">static_assert</a> in pure C99.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/assert.h>
 *
 * epAssertPlain(123 == 123);
 * @endcode
 */
#define epAssertPlain(expr)                                                                        \
    /* How to imitate static assertions in C99: https://stackoverflow.com/a/3385694/13166656. */   \
    static const char epCatPlain(                                                                  \
        epilepsy_static_assert_, __LINE__)[(expr) ? 1 : -1] EPILEPSY_PRIV_ATTR_UNUSED
// }

#ifndef DOXYGEN_IGNORE

#ifdef __GNUC__
#define EPILEPSY_PRIV_ATTR_UNUSED __attribute__((unused))
#else
#define EPILEPSY_PRIV_ATTR_UNUSED
#endif

#endif // DOXYGEN_IGNORE

#endif // epAssert_H
