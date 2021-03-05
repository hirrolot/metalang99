/**
 * @file
 * An optional value.
 */

#ifndef METALANG99_MAYBE_H
#define METALANG99_MAYBE_H

#include <metalang99/choice.h>
#include <metalang99/logical.h>

// Desugaring {
/**
 * Some value @p x.
 */
#define METALANG99_just(x) METALANG99_call(METALANG99_just, x)

/**
 * No value.
 */
#define METALANG99_nothing() METALANG99_callTrivial(METALANG99_nothing, )

/**
 * 1 if @p maybe contains some value, otherwise 0.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/maybe.h>
 *
 * // 1
 * M_isJust(M_just(v(123)))
 *
 * // 0
 * M_isJust(M_nothing())
 * @endcode
 */
#define METALANG99_isJust(maybe) METALANG99_call(METALANG99_isJust, maybe)

/**
 * 1 if @p maybe contains no value, otherwise 0.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/maybe.h>
 *
 * // 1
 * M_isNothing(M_nothing())
 *
 * // 0
 * M_isNothing(M_just(v(123)))
 * @endcode
 */
#define METALANG99_isNothing(maybe) METALANG99_call(METALANG99_isNothing, maybe)

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
 * M_maybeEq(v(M_natEq), M_just(v(123)), M_just(v(123)));
 *
 * // 0
 * M_maybeEq(v(M_natEq), M_just(v(4)), M_just(v(6)));
 *
 * // 0
 * M_maybeEq(v(M_natEq), M_just(v(4)), M_nothing());
 * @endcode
 */
#define METALANG99_maybeEq(compare, maybe, other)                                                  \
    METALANG99_call(METALANG99_maybeEq, compare, maybe, other)

/**
 * Returns the contained value on #METALANG99_just or emits a fatal error on #METALANG99_nothing.
 *
 * # Examples
 *
 * @code
 * #include <metalang99/maybe.h>
 *
 * // 123
 * M_maybeUnwrap(M_just(v(123)))
 *
 * // Emits a fatal error.
 * M_maybeUnwrap(M_nothing())
 * @endcode
 */
#define METALANG99_maybeUnwrap(maybe) METALANG99_call(METALANG99_maybeUnwrap, maybe)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define METALANG99_just_IMPL(x)   v(METALANG99_choicePlain(just, x))
#define METALANG99_nothing_IMPL() v(METALANG99_choicePlain(nothing, ~))

// METALANG99_isJust_IMPL {
#define METALANG99_isJust_IMPL(maybe)          METALANG99_match_IMPL(maybe, METALANG99_PRIV_isJust_)
#define METALANG99_PRIV_isJust_just_IMPL(_x)   v(METALANG99_true)
#define METALANG99_PRIV_isJust_nothing_IMPL(_) v(METALANG99_false)
// }

// METALANG99_isNothing_IMPL {
#define METALANG99_isNothing_IMPL(maybe) METALANG99_not(METALANG99_isJust_IMPL(maybe))
// }

// METALANG99_maybeEq_IMPL {
#define METALANG99_maybeEq_IMPL(compare, maybe, other)                                             \
    METALANG99_matchWithArgs_IMPL(maybe, METALANG99_PRIV_maybeEq_, other, compare)

#define METALANG99_PRIV_maybeEq_nothing_IMPL(_, other, _compare) METALANG99_isNothing_IMPL(other)
#define METALANG99_PRIV_maybeEq_just_IMPL(x, other, compare)                                       \
    METALANG99_matchWithArgs_IMPL(other, METALANG99_PRIV_maybeEq_just_, x, compare)

#define METALANG99_PRIV_maybeEq_just_nothing_IMPL(_, other, _compare) v(METALANG99_false)
#define METALANG99_PRIV_maybeEq_just_just_IMPL(y, x, compare)         METALANG99_appl2_IMPL(compare, x, y)
// } (METALANG99_maybeEq_IMPL)

// METALANG99_maybeUnwrap_IMPL {
#define METALANG99_maybeUnwrap_IMPL(maybe)                                                         \
    METALANG99_match_IMPL(maybe, METALANG99_PRIV_maybeUnwrap_)
#define METALANG99_PRIV_maybeUnwrap_nothing_IMPL(_)                                                \
    METALANG99_fatal(METALANG99_maybeUnwrap, expected METALANG99_just but found METALANG99_nothing)
#define METALANG99_PRIV_maybeUnwrap_just_IMPL(x) v(x)
// }

// } (Implementation)

// Arity specifiers {
#define METALANG99_just_ARITY        1
#define METALANG99_nothing_ARITY     1
#define METALANG99_isJust_ARITY      1
#define METALANG99_isNothing_ARITY   1
#define METALANG99_maybeEq_ARITY     3
#define METALANG99_maybeUnwrap_ARITY 1
// }

// Aliases {
#ifndef METALANG99_FULL_PREFIX_ONLY

#define M_just        METALANG99_just
#define M_nothing     METALANG99_nothing
#define M_isJust      METALANG99_isJust
#define M_isNothing   METALANG99_isNothing
#define M_maybeEq     METALANG99_maybeEq
#define M_maybeUnwrap METALANG99_maybeUnwrap

#endif // METALANG99_FULL_PREFIX_ONLY
// }

#endif // DOXYGEN_IGNORE

#endif // METALANG99_MAYBE_H
