/**
 * @file
 * @brief An optional value.
 */

#ifndef EPILEPSY_MAYBE_H
#define EPILEPSY_MAYBE_H

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#include <epilepsy/logical.h>

#endif // DOXYGEN_SHOULD_SKIP_THIS

#include <epilepsy/choice.h>

/**
 * @brief Some value @p x.
 */
#define EPILEPSY_MaybeJust(x) call(EPILEPSY_MaybeJust_REAL, x)

/**
 * @brief No value.
 */
#define EPILEPSY_MaybeNothing() call(EPILEPSY_MaybeNothing_REAL, )

/**
 * @brief 1 if @p maybe contains some value, otherwise 0.
 */
#define EPILEPSY_MaybeIsJust(maybe) call(EPILEPSY_MaybeIsJust_REAL, maybe)

/**
 * @brief 1 if @p maybe contains no value, otherwise 0.
 */
#define EPILEPSY_MaybeIsNothing(maybe) call(EPILEPSY_MaybeIsNothing_REAL, maybe)

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#define EPILEPSY_MaybeJust_REAL(x)   EPILEPSY_CHOICE(v(MaybeJust) v(x))
#define EPILEPSY_MaybeNothing_REAL() EPILEPSY_CHOICE(v(MaybeNothing))

#define EPILEPSY_MaybeIsJust_REAL(maybe)                                                           \
    EPILEPSY_CHOICE_MATCH(v(maybe), v(EPILEPSY_PRIV_MaybeIsJust_), v(~))
#define EPILEPSY_PRIV_MaybeIsJust_MaybeJust(_x, _)        v(1)
#define EPILEPSY_PRIV_MaybeIsJust_MaybeNothing(_dummy, _) v(0)

#define EPILEPSY_MaybeIsNothing_REAL(maybe) EPILEPSY_NOT(EPILEPSY_MaybeIsJust(v(maybe)))

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // EPILEPSY_MAYBE_H
