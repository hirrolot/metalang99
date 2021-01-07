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
#define epMaybeJust(x) epCall(epMaybeJust, x)

/**
 * No value.
 */
#define epMaybeNothing() epCall(epMaybeNothing, )

/**
 * 1 if @p maybe contains some value, otherwise 0.
 */
#define epMaybeIsJust(maybe) epCall(epMaybeIsJust, maybe)

/**
 * 1 if @p maybe contains no value, otherwise 0.
 */
#define epMaybeIsNothing(maybe) epCall(epMaybeIsNothing, maybe)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define epMaybeJust_IMPL(x)   epChoice(v(MaybeJust), v(x))
#define epMaybeNothing_IMPL() epChoiceEmpty(v(MaybeNothing))

#define epMaybeIsJust_IMPL(maybe)                     epMatch(v(maybe), v(EPILEPSY_PRIV_MaybeIsJust_))
#define EPILEPSY_PRIV_MaybeIsJust_MaybeJust_IMPL(_x)  v(1)
#define EPILEPSY_PRIV_MaybeIsJust_MaybeNothing_IMPL() v(0)

#define epMaybeIsNothing_IMPL(maybe) epNot(epMaybeIsJust(v(maybe)))
// }

// Arity specifiers {
#define epMaybeJust_ARITY      1
#define epMaybeNothing_ARITY   1
#define epMaybeIsJust_ARITY    1
#define epMaybeIsNothing_ARITY 1
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_MAYBE_H
