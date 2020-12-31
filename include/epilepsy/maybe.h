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
#define EPILEPSY_MaybeJust(x) EPILEPSY_DESUGAR(EPILEPSY_MaybeJust, x)

/**
 * No value.
 */
#define EPILEPSY_MaybeNothing() EPILEPSY_DESUGAR(EPILEPSY_MaybeNothing, )

/**
 * 1 if @p maybe contains some value, otherwise 0.
 */
#define EPILEPSY_MaybeIsJust(maybe) EPILEPSY_DESUGAR(EPILEPSY_MaybeIsJust, maybe)

/**
 * 1 if @p maybe contains no value, otherwise 0.
 */
#define EPILEPSY_MaybeIsNothing(maybe) EPILEPSY_DESUGAR(EPILEPSY_MaybeIsNothing, maybe)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define EPILEPSY_MaybeJust_IMPL(x)   EPILEPSY_CHOICE(v(MaybeJust), v(x))
#define EPILEPSY_MaybeNothing_IMPL() EPILEPSY_CHOICE_EMPTY(v(MaybeNothing))

#define EPILEPSY_MaybeIsJust_IMPL(maybe)         EPILEPSY_MATCH(v(maybe), v(EPILEPSY_PRIV_MaybeIsJust_))
#define EPILEPSY_PRIV_MaybeIsJust_MaybeJust(_x)  v(1)
#define EPILEPSY_PRIV_MaybeIsJust_MaybeNothing() v(0)

#define EPILEPSY_MaybeIsNothing_IMPL(maybe) EPILEPSY_NOT(EPILEPSY_MaybeIsJust(v(maybe)))
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_MAYBE_H
