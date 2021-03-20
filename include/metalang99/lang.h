/**
 * @file
 * The core metalanguage.
 */

#ifndef ML99_LANG_H
#define ML99_LANG_H

#include <metalang99/priv/util.h>

#include <metalang99/eval/eval.h>
#include <metalang99/lang/closure.h>

/**
 * Evaluates a metaprogram.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/lang.h>
 *
 * #define F_IMPL(x, y) v(x + y)
 *
 * ML99_EVAL(v(abc ~ 123), ML99_call(F, v(1, 2)))
 * @endcode
 */
#define ML99_EVAL(...) ML99_PRIV_EVAL(__VA_ARGS__)

/**
 * Invokes a metafunction with arguments.
 */
#define ML99_call(op, ...) (ML99_PRIV_IF(ML99_PRIV_IS_UNTUPLE(op), 0args, 0op), op, __VA_ARGS__)

/**
 * Invokes a metafunction @p ident with unevaluated arguments.
 *
 * It is semantically the same as `ML99_call(ident, v(...))` but performs one less reduction
 * steps.
 */
#define ML99_callUneval(ident, ...) (0callUneval, ident, __VA_ARGS__)

/**
 * Applies arguments to @p f.
 *
 * This function implements <a href="https://en.wikipedia.org/wiki/Partial_application">partial
 * application</a>: instead of invoking a metafunction with all arguments at once, you specify each
 * argument separately. This concept allows better re-use of metafunctions by specifying some
 * arguments immediately, and the other arguments later, even in different execution contexts (for
 * example, see this <a href="https://stackoverflow.com/a/12414292/13166656">SO answer</a>).
 *
 * @p f must be either a term reducing to a macro name or a term obtained via another call to
 * #ML99_appl. If @p f is a macro name, then a macro named `<f>_ARITY` (its arity specifier)
 * must denote how many times @p f will be applied to its arguments. (In Metalang99, an arity is an
 * intentionally more flexible concept than just a number of parameters, see below.) Each time
 * #ML99_appl is invoked, it accumulates provided variadic arguments and decrements the arity
 * of @p f; when the arity of @p f is already 1, it eventually calls the initial @p f with all the
 * accumulated arguments and provided variadic arguments.
 *
 * Most often, an arity specifier denotes a count of all named parameters plus 1 if a macro is
 * variadic (all the functions in the standard library follow this pattern). However, feel free to
 * specify arities as you wish, with regard to the aforementioned semantics; for example, you can
 * have a macro accepting `x, y, z` with an arity specifier `2`, then you must invoke
 * #ML99_appl exactly 2 times (either `x` + `y, z` or `x, y` + `z`). One common pattern is to
 * match a head and a tail of variadic arguments:
 *
 * @code
 * #include <metalang99/lang.h>
 *
 * #define F_IMPL(x, y, z, head, ...) // ...
 * #define F_ARITY 4
 * @endcode
 *
 * In this case, `x`, `y`, and `z` can be specified separately but other arguments all at once.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/lang.h>
 *
 * #define F_IMPL(x, y) v(x##y)
 * #define F_ARITY      2
 *
 * // ab
 * ML99_appl(ML99_appl(v(F), v(a)), v(b))
 * @endcode
 *
 * @note Currently, the maximum arity is #ML99_NAT_MAX. However, some compilers might not support
 * more than 127 macro parameters.
 */
#define ML99_appl(f, ...) ML99_call(ML99_appl, f, __VA_ARGS__)

/**
 * Applies @p a and @p b to @p f.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/lang.h>
 *
 * #define F_IMPL(x, y) v(x##y)
 * #define F_ARITY      2
 *
 * // ab
 * ML99_appl2(v(F), v(a), v(b))
 * @endcode
 */
#define ML99_appl2(f, a, b) ML99_call(ML99_appl2, f, a, b)

/**
 * Applies @p a, @p b, and @p c to @p f.
 */
#define ML99_appl3(f, a, b, c) ML99_call(ML99_appl3, f, a, b, c)

/**
 * Applies @p a, @p b, @p c, and @p d to @p f.
 */
#define ML99_appl4(f, a, b, c, d) ML99_call(ML99_appl4, f, a, b, c, d)

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
 * ML99_appl(ML99_compose(v(F), v(G)), v(3))
 * @endcode
 */
#define ML99_compose(f, g) ML99_call(ML99_compose, f, g)

/**
 * A value that is pasted as-is; no evaluation occurs on provided arguments.
 */
#define v(...) (0v, __VA_ARGS__)

/**
 * Emits a fatal error.
 */
#define ML99_fatal(f, ...) (0fatal, f, #__VA_ARGS__)

/**
 * Immediately aborts the interpretation with evaluated arguments.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/lang.h>
 *
 * #define F_IMPL(x) v(~)
 *
 * // 123
 * ML99_call(F, ML99_abort(v(123)))
 * @endcode
 */
#define ML99_abort(...) (0abort, __VA_ARGS__)

#ifndef DOXYGEN_IGNORE

#define ML99_compose_IMPL(f, g)         ML99_appl2_IMPL(ML99_PRIV_compose, f, g)
#define ML99_PRIV_compose_IMPL(f, g, x) ML99_appl(v(f), ML99_appl_IMPL(g, x))

// Arity specifiers {
#define ML99_appl_ARITY    2
#define ML99_appl2_ARITY   3
#define ML99_appl3_ARITY   4
#define ML99_appl4_ARITY   5
#define ML99_compose_ARITY 2

#define ML99_PRIV_compose_ARITY 3
// }

#endif // DOXYGEN_IGNORE

#endif // ML99_LANG_H
