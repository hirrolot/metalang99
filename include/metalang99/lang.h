/**
 * @file
 * The Metalang99 syntax.
 */

#ifndef METALANG99_LANG_H
#define METALANG99_LANG_H

#include <metalang99/lang/closure.h>
#include <metalang99/priv/util.h>

// Desugaring {
/**
 * Invokes a metafunction with arguments.
 */
#define METALANG99_call(op, ...)                                                                   \
    (METALANG99_PRIV_IF(METALANG99_PRIV_IS_UNPARENTHESISED(op), 0args, 0op), op, __VA_ARGS__)

/**
 * Invokes a metafunction @p ident with unevaluated arguments.
 *
 * It is semantically the same as `METALANG99_call(ident, v(...))` but performs one less reduction
 * steps.
 */
#define METALANG99_callTrivial(ident, ...) (0callTrivial, ident, __VA_ARGS__)

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
 * #METALANG99_appl. If @p f is a macro name, then a macro named `<f>_ARITY` (its arity specifier)
 * shall denote how many times @p f will be applied to its arguments. (In Metalang99, an arity is an
 * intentionally more flexible concept than just a number of parameters, see below.) Each time
 * #METALANG99_appl is invoked, it accumulates provided variadic arguments and reduces the arity of
 * @p f by 1; when the arity of @p f is already 1, it eventually calls the initial @p f with all the
 * accumulated arguments and provided variadic arguments.
 *
 * Most often, an arity specifier denotes a count of all named parameters plus 1 if a macro is
 * variadic (all the functions in the standard library follow this pattern). However, feel free to
 * specify arities as you wish, with regard to the aforementioned semantics; for example, you can
 * have a macro accepting `x, y, z` with an arity specifier `2`, then you must invoke
 * #METALANG99_appl exactly 2 times (either `x` + `y, z` or `x, y` + `z`). One common pattern is to
 * match a head and a tail of variadic arguments:
 *
 * @code
 * #include <metalang99/lang.h>
 * #include <metalang99/eval.h>
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
 * #include <metalang99/lang.h>
 * #include <metalang99/eval.h>
 *
 * #define F_IMPL(x, y) v(x##y)
 * #define F_ARITY      2
 *
 * // ab
 * M_appl(M_appl(v(F), v(a)), v(b))
 * @endcode
 *
 * @note Currently, the maximum arity is 16.
 */
#define METALANG99_appl(f, ...) METALANG99_call(METALANG99_appl, f, __VA_ARGS__)

/**
 * Applies @p a and @p b to @p f.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/lang.h>
 * #include <metalang99/eval.h>
 *
 * #define F_IMPL(x, y) v(x##y)
 * #define F_ARITY      2
 *
 * // ab
 * M_appl2(v(F), v(a), v(b))
 * @endcode
 */
#define METALANG99_appl2(f, a, b) METALANG99_call(METALANG99_appl2, f, a, b)

/**
 * Applies @p a, @p b, and @p c @p f.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/lang.h>
 * #include <metalang99/eval.h>
 *
 * #define F_IMPL(x, y, z) v(x##y##z)
 * #define F_ARITY         3
 *
 * // abc
 * M_appl3(v(F), v(a), v(b), v(c))
 * @endcode
 */
#define METALANG99_appl3(f, a, b, c) METALANG99_call(METALANG99_appl3, f, a, b, c)

/**
 * Functional composition of @p f and @p g.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/lang.h>
 *
 * #define F_IMPL(x) v((x + 1))
 * #define G_IMPL(x) v((x * 8))
 *
 * #define F_ARITY 1
 * #define G_ARITY 1
 *
 * // ((3 * 8) + 1)
 * M_appl(M_compose(v(F), v(G)), v(3))
 * @endcode
 */
#define METALANG99_compose(f, g) METALANG99_call(METALANG99_compose, f, g)

/**
 * A value that is pasted as-is; no evaluation occurs on provided arguments.
 */
#define v(...) (0v, __VA_ARGS__)

/**
 * Emits a fatal error.
 */
#define METALANG99_fatal(f, ...) (0fatal, f, #__VA_ARGS__)

/**
 * Immediately aborts the interpretation with evaluated arguments.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/eval.h>
 * #include <metalang99/lang.h>
 *
 * #define FOO_IMPL(x) v(~)
 *
 * // 123
 * M_call(M_abort(v(123)))
 * @endcode
 */
#define METALANG99_abort(...) (0abort, __VA_ARGS__),
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define METALANG99_compose_IMPL(f, g)                                                              \
    METALANG99_callTrivial(METALANG99_appl2, METALANG99_PRIV_compose_CLOSURE, f, g)
#define METALANG99_PRIV_compose_CLOSURE_IMPL(f, g, x)                                              \
    METALANG99_appl(v(f), METALANG99_callTrivial(METALANG99_appl, g, x))
//

// Arity specifiers {
#define METALANG99_appl_ARITY    2
#define METALANG99_appl2_ARITY   3
#define METALANG99_appl3_ARITY   4
#define METALANG99_compose_ARITY 2

#define METALANG99_PRIV_compose_CLOSURE_ARITY 3
// }

// Aliases {
#ifndef METALANG99_NO_SMALL_PREFIX

#define M_call        METALANG99_call
#define M_callTrivial METALANG99_callTrivial
#define M_appl        METALANG99_appl
#define M_appl2       METALANG99_appl2
#define M_appl3       METALANG99_appl3
#define M_compose     METALANG99_compose
#define M_fatal       METALANG99_fatal
#define M_abort       METALANG99_abort

#endif // METALANG99_NO_SMALL_PREFIX
// }

#endif // DOXYGEN_IGNORE

#endif // METALANG99_LANG_H
