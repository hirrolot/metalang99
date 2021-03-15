/**
 * @file
 * An optional value.
 */

#ifndef ML99_MAYBE_H
#define ML99_MAYBE_H

#include <metalang99/choice.h>
#include <metalang99/logical.h>

// Desugaring {
/**
 * Some value @p x.
 */
#define ML99_just(x) ML99_call(ML99_just, x)

/**
 * No value.
 */
#define ML99_nothing() ML99_callTrivial(ML99_nothing, )

/**
 * 1 if @p maybe contains some value, otherwise 0.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/maybe.h>
 *
 * // 1
 * ML99_isJust(ML99_just(v(123)))
 *
 * // 0
 * ML99_isJust(ML99_nothing())
 * @endcode
 */
#define ML99_isJust(maybe) ML99_call(ML99_isJust, maybe)

/**
 * 1 if @p maybe contains no value, otherwise 0.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/maybe.h>
 *
 * // 1
 * ML99_isNothing(ML99_nothing())
 *
 * // 0
 * ML99_isNothing(ML99_just(v(123)))
 * @endcode
 */
#define ML99_isNothing(maybe) ML99_call(ML99_isNothing, maybe)

/**
 * Tests @p maybe and @p other for equality.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/maybe.h>
 * #include <metalang99/nat.h>
 *
 * // 1
 * ML99_maybeEq(v(ML99_natEq), ML99_just(v(123)), ML99_just(v(123)));
 *
 * // 0
 * ML99_maybeEq(v(ML99_natEq), ML99_just(v(4)), ML99_just(v(6)));
 *
 * // 0
 * ML99_maybeEq(v(ML99_natEq), ML99_just(v(4)), ML99_nothing());
 * @endcode
 */
#define ML99_maybeEq(compare, maybe, other) ML99_call(ML99_maybeEq, compare, maybe, other)

/**
 * Returns the contained value on #ML99_just or emits a fatal error on #ML99_nothing.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/maybe.h>
 *
 * // 123
 * ML99_maybeUnwrap(ML99_just(v(123)))
 *
 * // Emits a fatal error.
 * ML99_maybeUnwrap(ML99_nothing())
 * @endcode
 */
#define ML99_maybeUnwrap(maybe) ML99_call(ML99_maybeUnwrap, maybe)

#define ML99_JUST(x)           ML99_CHOICE(just, x)
#define ML99_NOTHING()         ML99_CHOICE(nothing, ~)
#define ML99_IS_JUST(maybe)    ML99_PRIV_IS_JUST(maybe)
#define ML99_IS_NOTHING(maybe) ML99_NOT(ML99_IS_JUST(maybe))
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define ML99_just_IMPL(x)   v(ML99_JUST(x))
#define ML99_nothing_IMPL() v(ML99_NOTHING())

#define ML99_isJust_IMPL(maybe)    v(ML99_IS_JUST(maybe))
#define ML99_isNothing_IMPL(maybe) v(ML99_IS_NOTHING(maybe))

// ML99_IS_JUST {
#define ML99_PRIV_IS_JUST(maybe) ML99_DETECT_IDENT(ML99_PRIV_IS_JUST_, ML99_CHOICE_TAG(maybe))
#define ML99_PRIV_IS_JUST_just   ()
// }

// ML99_maybeEq_IMPL {
#define ML99_maybeEq_IMPL(compare, maybe, other)                                                   \
    ML99_matchWithArgs_IMPL(maybe, ML99_PRIV_maybeEq_, other, compare)

#define ML99_PRIV_maybeEq_nothing_IMPL(_, other, _compare) ML99_isNothing_IMPL(other)
#define ML99_PRIV_maybeEq_just_IMPL(x, other, compare)                                             \
    ML99_matchWithArgs_IMPL(other, ML99_PRIV_maybeEq_just_, x, compare)

#define ML99_PRIV_maybeEq_just_nothing_IMPL             ML99_PRIV_constFalse_IMPL
#define ML99_PRIV_maybeEq_just_just_IMPL(y, x, compare) ML99_appl2_IMPL(compare, x, y)
// } (ML99_maybeEq_IMPL)

// ML99_maybeUnwrap_IMPL {
#define ML99_maybeUnwrap_IMPL(maybe) ML99_match_IMPL(maybe, ML99_PRIV_maybeUnwrap_)
#define ML99_PRIV_maybeUnwrap_nothing_IMPL(_)                                                      \
    ML99_fatal(ML99_maybeUnwrap, expected ML99_just but found ML99_nothing)
#define ML99_PRIV_maybeUnwrap_just_IMPL(x) v(x)
// }

// } (Implementation)

// Arity specifiers {
#define ML99_just_ARITY        1
#define ML99_nothing_ARITY     1
#define ML99_isJust_ARITY      1
#define ML99_isNothing_ARITY   1
#define ML99_maybeEq_ARITY     3
#define ML99_maybeUnwrap_ARITY 1
// }

#endif // DOXYGEN_IGNORE

#endif // ML99_MAYBE_H
