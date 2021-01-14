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
 */
#define EPILEPSY_isJust(maybe) EPILEPSY_call(EPILEPSY_isJust, maybe)

/**
 * 1 if @p maybe contains no value, otherwise 0.
 */
#define EPILEPSY_isNothing(maybe) EPILEPSY_call(EPILEPSY_isNothing, maybe)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define EPILEPSY_just_IMPL(x)   EPILEPSY_choice(v(just), v(x))
#define EPILEPSY_nothing_IMPL() EPILEPSY_choiceEmpty(v(nothing))

#define EPILEPSY_isJust_IMPL(maybe)         EPILEPSY_match(v(maybe), v(EPILEPSY_PRIV_isJust_))
#define EPILEPSY_PRIV_isJust_just_IMPL(_x)  v(1)
#define EPILEPSY_PRIV_isJust_nothing_IMPL() v(0)

#define EPILEPSY_isNothing_IMPL(maybe) EPILEPSY_not(EPILEPSY_isJust(v(maybe)))
// }

// Arity specifiers {
#define EPILEPSY_just_ARITY      1
#define EPILEPSY_nothing_ARITY   1
#define EPILEPSY_isJust_ARITY    1
#define EPILEPSY_isNothing_ARITY 1
// }

// Aliases {
#ifndef EPILEPSY_NO_SMALL_PREFIX

#define E_just      EPILEPSY_just
#define E_nothing   EPILEPSY_nothing
#define E_isJust    EPILEPSY_isJust
#define E_isNothing EPILEPSY_isNothing

#endif // EPILEPSY_NO_SMALL_PREFIX
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_MAYBE_H
