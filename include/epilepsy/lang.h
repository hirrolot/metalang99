/**
 * @file
 * The Epilepsy syntax.
 */

#ifndef EPILEPSY_LANG_H
#define EPILEPSY_LANG_H

#include <epilepsy/lang/closure.h>
#include <epilepsy/priv/aux.h>

// Desugaring {

/**
 * Invokes a metafunction with arguments.
 */
#define EPILEPSY_call(...) EPILEPSY_PRIV_call(__VA_ARGS__)

/**
 * Applies arguments to @p f.
 *
 * This function implements <a href="https://en.wikipedia.org/wiki/Partial_application">partial
 * application</a>: instead of invoking a metafunction with all arguments at once, you specify each
 * argument separately. This concept allows to re-use existing metafunctions by specifying some
 * arguments immediately, and the other arguments later, even in different execution contexts (for
 * example, see this <a href="https://stackoverflow.com/a/12414292/13166656">SO answer</a>).
 *
 * @p f shall be either a term reducing to a macro name or a term obtained via another call to
 * #EPILEPSY_appl. If @p f is a macro name, then `<f>_ARITY` (its arity specifier) shall denote the
 * arity of @p f (e.g., the number of parameters it accepts), by the following rules:
 *
 *  - A metafunction with no parameters has the arity 1 (because `E_appl(v(F), v())` shall has the
 * meaning of an application of the single empty argument `v()`).
 *  - A single named parameter, as well as an ellipsis denoting variadic arguments, increases the
 * arity of a metafunction by 1.
 *
 * These are some examples of correspondence between the macro signatures and their arity
 * specifiers:
 *
 * @code
 * #define F() // ...
 * #define F_ARITY 1
 *
 * #define F(a, b, c) // ...
 * #define F_ARITY 3
 *
 * #define F(...) // ...
 * #define F_ARITY 1
 *
 * #define F(a, b, c, ...) // ...
 * #define F_ARITY 4
 * @endcode
 *
 * Each time except the last #EPILEPSY_appl returns a term that can be passed further to
 * #EPILEPSY_appl to specify the next argument; when the last argument has been specified, the
 * initial metafunction is invoked with all the accumulated arguments. If a metafunction under
 * partial application is variadic, then all variadic arguments shall be specified at once.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/lang.h>
 * #include <epilepsy/eval.h>
 *
 * #define F_IMPL(x, y) v(x##y)
 * #define F_ARITY      2
 *
 * // ab
 * E_appl(E_appl(v(F), v(a)), v(b))
 * @endcode
 *
 * @note Currently, the maximum arity is 16.
 */
#define EPILEPSY_appl(f, ...) EPILEPSY_call(EPILEPSY_appl, f __VA_ARGS__)

/**
 * Applies @p a and @p b to @p f.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/lang.h>
 * #include <epilepsy/eval.h>
 *
 * #define F_IMPL(x, y) v(x##y)
 * #define F_ARITY      2
 *
 * // ab
 * E_appl2(v(F), v(a), v(b))
 * @endcode
 */
#define EPILEPSY_appl2(f, a, b) EPILEPSY_call(EPILEPSY_appl2, f a b)

/**
 * Applies @p a, @p b, and @p c @p f.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/lang.h>
 * #include <epilepsy/eval.h>
 *
 * #define F_IMPL(x, y, z) v(x##y##z)
 * #define F_ARITY         3
 *
 * // abc
 * E_appl3(v(F), v(a), v(b), v(c))
 * @endcode
 */
#define EPILEPSY_appl3(f, a, b, c) EPILEPSY_call(EPILEPSY_appl3, f a b c)

/**
 * A value that is pasted as-is; no evaluation occurs on provided arguments.
 */
#define v(...) (0v, __VA_ARGS__),

/**
 * Emits a fatal error.
 */
#define EPILEPSY_fatal(f, ...) (0error, f, __VA_ARGS__),

/**
 * Emits a debugging message.
 */
#define EPILEPSY_dbg(...) (0dbg, __VA_ARGS__),
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define EPILEPSY_PRIV_call(op, ...)                                                                \
    EPILEPSY_PRIV_IF(                                                                              \
        EPILEPSY_PRIV_IS_UNPARENTHESISED(op),                                                      \
        EPILEPSY_PRIV_call_0args,                                                                  \
        EPILEPSY_PRIV_call_0op)                                                                    \
    (op, __VA_ARGS__)
#define EPILEPSY_PRIV_call_0args(ident, ...)        (0args, ident##_IMPL, __VA_ARGS__),
#define EPILEPSY_PRIV_call_0op(op, _emptiness, ...) (0op, op, __VA_ARGS__),
//

// Arity specifiers {
#define EPILEPSY_appl_ARITY  2
#define EPILEPSY_appl2_ARITY 3
#define EPILEPSY_appl3_ARITY 4
// }

// Aliases {
#ifndef EPILEPSY_NO_SMALL_PREFIX

#define E_call  EPILEPSY_call
#define E_appl  EPILEPSY_appl
#define E_appl2 EPILEPSY_appl2
#define E_appl3 EPILEPSY_appl3
#define E_fatal EPILEPSY_fatal
#define E_dbg   EPILEPSY_dbg

#endif // EPILEPSY_NO_SMALL_PREFIX
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_LANG_H
