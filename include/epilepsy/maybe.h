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
#define EPILEPSY_MAYBE_JUST(x) call(EPILEPSY_MAYBE_JUST_REAL, x)

/**
 * @brief No value.
 */
#define EPILEPSY_MAYBE_NOTHING() call(EPILEPSY_MAYBE_NOTHING_REAL, )

/**
 * @brief 1 if @p maybe contains some value, otherwise 0.
 */
#define EPILEPSY_MAYBE_IS_JUST(maybe) call(EPILEPSY_MAYBE_IS_JUST_REAL, maybe)

/**
 * @brief 1 if @p maybe contains no value, otherwise 0.
 */
#define EPILEPSY_MAYBE_IS_NOTHING(maybe) call(EPILEPSY_MAYBE_IS_NOTHING_REAL, maybe)

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#define EPILEPSY_MAYBE_JUST_REAL(x)   EPILEPSY_CHOICE(v(JUST) v(x))
#define EPILEPSY_MAYBE_NOTHING_REAL() EPILEPSY_CHOICE(v(NOTHING))

#define EPILEPSY_MAYBE_IS_JUST_REAL(maybe)                                                         \
    EPILEPSY_CHOICE_MATCH(v(maybe), v(EPILEPSY_PRIV_MAYBE_IS_JUST_), v(~))
#define EPILEPSY_PRIV_MAYBE_IS_JUST_JUST(_x, _)        v(1)
#define EPILEPSY_PRIV_MAYBE_IS_JUST_NOTHING(_dummy, _) v(0)

#define EPILEPSY_MAYBE_IS_NOTHING_REAL(maybe) EPILEPSY_NOT(EPILEPSY_MAYBE_IS_JUST(v(maybe)))

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // EPILEPSY_MAYBE_H
