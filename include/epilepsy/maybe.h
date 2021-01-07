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
#define EPILEPSY_maybeJust(x) EPILEPSY_call(EPILEPSY_maybeJust, x)

/**
 * No value.
 */
#define EPILEPSY_maybeNothing() EPILEPSY_call(EPILEPSY_maybeNothing, )

/**
 * 1 if @p maybe contains some value, otherwise 0.
 */
#define EPILEPSY_maybeIsJust(maybe) EPILEPSY_call(EPILEPSY_maybeIsJust, maybe)

/**
 * 1 if @p maybe contains no value, otherwise 0.
 */
#define EPILEPSY_maybeIsNothing(maybe) EPILEPSY_call(EPILEPSY_maybeIsNothing, maybe)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define EPILEPSY_maybeJust_IMPL(x)   EPILEPSY_choice(v(maybeJust), v(x))
#define EPILEPSY_maybeNothing_IMPL() EPILEPSY_choiceEmpty(v(maybeNothing))

#define EPILEPSY_maybeIsJust_IMPL(maybe)              EPILEPSY_match(v(maybe), v(EPILEPSY_PRIV_maybeIsJust_))
#define EPILEPSY_PRIV_maybeIsJust_maybeJust_IMPL(_x)  v(1)
#define EPILEPSY_PRIV_maybeIsJust_maybeNothing_IMPL() v(0)

#define EPILEPSY_maybeIsNothing_IMPL(maybe) EPILEPSY_not(EPILEPSY_maybeIsJust(v(maybe)))
// }

// Arity specifiers {
#define EPILEPSY_maybeJust_ARITY      1
#define EPILEPSY_maybeNothing_ARITY   1
#define EPILEPSY_maybeIsJust_ARITY    1
#define EPILEPSY_maybeIsNothing_ARITY 1
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_MAYBE_H
