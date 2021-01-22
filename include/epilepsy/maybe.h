/**
 * @file
 * An optional value.
 */

#ifndef EPILEPSY_MAYBE_H
#define EPILEPSY_MAYBE_H

#include <epilepsy/choice.h>
#include <epilepsy/logical.h>

// Desugaring {
/**
 * Some value @p x.
 */
#define EPILEPSY_just(x) EPILEPSY_call(EPILEPSY_just, x)

/**
 * No value.
 */
#define EPILEPSY_nothing() EPILEPSY_call(EPILEPSY_nothing, )

/**
 * 1 if @p maybe contains some value, otherwise 0.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/maybe.h>
 *
 * // 1
 * E_isJust(E_just(v(123)))
 *
 * // 0
 * E_isJust(E_nothing())
 * @endcode
 */
#define EPILEPSY_isJust(maybe) EPILEPSY_call(EPILEPSY_isJust, maybe)

/**
 * 1 if @p maybe contains no value, otherwise 0.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/maybe.h>
 *
 * // 1
 * E_isNothing(E_nothing())
 *
 * // 0
 * E_isNothing(E_just(v(123)))
 * @endcode
 */
#define EPILEPSY_isNothing(maybe) EPILEPSY_call(EPILEPSY_isNothing, maybe)

/**
 * Tests @p maybe and @p other for equality.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/maybe.h>
 * #include <epilepsy/uint.h>
 *
 * // 1
 * E_maybeEq(v(E_uintEq), E_just(v(123)), E_just(v(123)));
 *
 * // 0
 * E_maybeEq(v(E_uintEq), E_just(v(4)), E_just(v(6)));
 *
 * // 0
 * E_maybeEq(v(E_uintEq), E_just(v(4)), E_nothing());
 * @endcode
 */
#define EPILEPSY_maybeEq(compare, maybe, other) EPILEPSY_call(EPILEPSY_maybeEq, compare maybe other)

/**
 * Returns the contained value if #EPILEPSY_just or emits a fatal error on #EPILEPSY_nothing.
 *
 * # Examples
 *
 * @code
 * #include <epilepsy/maybe.h>
 *
 * // 123
 * E_maybeUnwrap(E_just(v(123)))
 *
 * // Emits a fatal error.
 * E_maybeUnwrap(E_nothing())
 * @endcode
 */
#define EPILEPSY_maybeUnwrap(maybe) EPILEPSY_call(EPILEPSY_maybeUnwrap, maybe)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define EPILEPSY_just_IMPL(x)   EPILEPSY_choice(v(just), v(x))
#define EPILEPSY_nothing_IMPL() EPILEPSY_choiceEmpty(v(nothing))

#define EPILEPSY_isJust_IMPL(maybe)         EPILEPSY_match(v(maybe), v(EPILEPSY_PRIV_isJust_))
#define EPILEPSY_PRIV_isJust_just_IMPL(_x)  v(EPILEPSY_true)
#define EPILEPSY_PRIV_isJust_nothing_IMPL() v(EPILEPSY_false)

#define EPILEPSY_isNothing_IMPL(maybe) EPILEPSY_not(EPILEPSY_isJust(v(maybe)))

// EPILEPSY_maybeEq_IMPL {
#define EPILEPSY_maybeEq_IMPL(compare, maybe, other)                                               \
    EPILEPSY_matchWithArgs(v(maybe), v(EPILEPSY_PRIV_maybeEq_), v(other, compare))

#define EPILEPSY_PRIV_maybeEq_nothing_IMPL(other, _compare) EPILEPSY_isNothing(v(other))
#define EPILEPSY_PRIV_maybeEq_just_IMPL(x, other, compare)                                         \
    EPILEPSY_matchWithArgs(v(other), v(EPILEPSY_PRIV_maybeEq_just_), v(x, compare))

#define EPILEPSY_PRIV_maybeEq_just_nothing_IMPL(other, _compare) v(EPILEPSY_false)
#define EPILEPSY_PRIV_maybeEq_just_just_IMPL(y, x, compare)      EPILEPSY_appl2(v(compare), v(x), v(y))
// } (EPILEPSY_maybeEq_IMPL)

#define EPILEPSY_maybeUnwrap_IMPL(maybe) EPILEPSY_match(v(maybe), v(EPILEPSY_PRIV_maybeUnwrap_))
#define EPILEPSY_PRIV_maybeUnwrap_nothing_IMPL()                                                   \
    EPILEPSY_fatal(EPILEPSY_maybeUnwrap, expected EPILEPSY_just but found EPILEPSY_nothing)
#define EPILEPSY_PRIV_maybeUnwrap_just_IMPL(x) v(x)
// }

// Arity specifiers {
#define EPILEPSY_just_ARITY        1
#define EPILEPSY_nothing_ARITY     1
#define EPILEPSY_isJust_ARITY      1
#define EPILEPSY_isNothing_ARITY   1
#define EPILEPSY_maybeEq_ARITY     3
#define EPILEPSY_maybeUnwrap_ARITY 1
// }

// Aliases {
#ifndef EPILEPSY_NO_SMALL_PREFIX

#define E_just        EPILEPSY_just
#define E_nothing     EPILEPSY_nothing
#define E_isJust      EPILEPSY_isJust
#define E_isNothing   EPILEPSY_isNothing
#define E_maybeEq     EPILEPSY_maybeEq
#define E_maybeUnwrap EPILEPSY_maybeUnwrap

#endif // EPILEPSY_NO_SMALL_PREFIX
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_MAYBE_H
