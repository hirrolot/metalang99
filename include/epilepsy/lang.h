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
 * Invokes a metafunction @p ident with unevaluated arguments.
 *
 * It is semantically the same as `EPILEPSY_call(ident, v(...))` but performs one less reduction
 * steps.
 */
#define EPILEPSY_callTrivial(ident, ...) (0callTrivial, ident, __VA_ARGS__),

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
 * #EPILEPSY_appl. If @p f is a macro name, then a macro named `<f>_ARITY` (its arity specifier)
 * shall denote how many times @p f will be applied to its arguments. (In Epilepsy, an arity is an
 * intentionally more flexible concept than just a number of parameters, see below.) Each time
 * #EPILEPSY_appl is invoked, it accumulates provided variadic arguments and reduces the arity of @p
 * f by 1; when the arity of @p f is already 1, it eventually calls the initial @p f with all the
 * accumulated arguments and provided variadic arguments.
 *
 * Most often, an arity specifier denotes a count of all named parameters plus 1 if a macro is
 * variadic (all the functions in the standard library follow this pattern). However, feel free to
 * specify arities as you wish, with regard to the aforementioned semantics; for example, you can
 * have a macro accepting `x, y, z` with an arity specifier `2`, then you must invoke #EPILEPSY_appl
 * exactly 2 times (either `x` + `y, z` or `x, y` + `z`). One common pattern is to match a head and
 * a tail of variadic arguments:
 *
 * @code
 * #include <epilepsy/lang.h>
 * #include <epilepsy/eval.h>
 *
 * #define F_IMPL(x, y, z, head, ...) // ...
 * #define F_ARITY 4
 * @endcode
 *
 * In this case, `x`, `y`, and `z` can be specified separately but other arguments at once.
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
 * Functional composition of @p f and @p g.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/lang.h>
 *
 * #define F_IMPL(x) v((x + 1))
 * #define G_IMPL(x) v((x * 8))
 *
 * #define F_ARITY 1
 * #define G_ARITY 1
 *
 * // ((3 * 8) + 1)
 * E_appl(E_compose(v(F), v(G)), v(3))
 * @endcode
 */
#define EPILEPSY_compose(f, g) EPILEPSY_call(EPILEPSY_compose, f g)

/**
 * A value that is pasted as-is; no evaluation occurs on provided arguments.
 */
#define v(...) (0v, __VA_ARGS__),

/**
 * Emits a fatal error.
 */
#define EPILEPSY_fatal(f, ...) (0fatal, f, #__VA_ARGS__),

/**
 * Immediately aborts the interpretation with evaluated arguments.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/eval.h>
 * #include <epilepsy/lang.h>
 *
 * #define FOO_IMPL(x) v(~)
 *
 * // 123
 * E_call(E_abort(v(123)))
 * @endcode
 */
#define EPILEPSY_abort(...) (0abort, __VA_ARGS__),
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define EPILEPSY_PRIV_call(op, ...)                                                                \
    EPILEPSY_PRIV_IF(                                                                              \
        EPILEPSY_PRIV_IS_UNPARENTHESISED(op),                                                      \
        EPILEPSY_PRIV_call_0args,                                                                  \
        EPILEPSY_PRIV_call_0op)                                                                    \
    (op, __VA_ARGS__)
#define EPILEPSY_PRIV_call_0args(ident, ...)        (0args, ident, __VA_ARGS__),
#define EPILEPSY_PRIV_call_0op(op, _emptiness, ...) (0op, op, __VA_ARGS__),

#define EPILEPSY_compose_IMPL(f, g)                                                                \
    EPILEPSY_callTrivial(EPILEPSY_appl2, EPILEPSY_PRIV_compose_CLOSURE, f, g)
#define EPILEPSY_PRIV_compose_CLOSURE_IMPL(f, g, x)                                                \
    EPILEPSY_appl(v(f), EPILEPSY_callTrivial(EPILEPSY_appl, g, x))
//

// Arity specifiers {
#define EPILEPSY_appl_ARITY    2
#define EPILEPSY_appl2_ARITY   3
#define EPILEPSY_appl3_ARITY   4
#define EPILEPSY_compose_ARITY 2

#define EPILEPSY_PRIV_compose_CLOSURE_ARITY 3
// }

// Aliases {
#ifndef EPILEPSY_NO_SMALL_PREFIX

#define E_call        EPILEPSY_call
#define E_callTrivial EPILEPSY_callTrivial
#define E_appl        EPILEPSY_appl
#define E_appl2       EPILEPSY_appl2
#define E_appl3       EPILEPSY_appl3
#define E_compose     EPILEPSY_compose
#define E_fatal       EPILEPSY_fatal
#define E_abort       EPILEPSY_abort

#endif // EPILEPSY_NO_SMALL_PREFIX
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_LANG_H
