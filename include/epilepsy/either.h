/**
 * @file
 * A choice type with two cases.
 */

#ifndef EPILEPSY_EITHER_H
#define EPILEPSY_EITHER_H

#include <epilepsy/choice.h>
#include <epilepsy/logical.h>

// Desugaring {
/**
 * The left value @p x.
 */
#define EPILEPSY_EitherLeft(x) desugar(EPILEPSY_EitherLeft, x)

/**
 * The right value @p x.
 */
#define EPILEPSY_EitherRight(x) desugar(EPILEPSY_EitherRight, x)

/**
 * 1 if @p either contains a left value, otherwise 0.
 */
#define EPILEPSY_EitherIsLeft(either) desugar(EPILEPSY_EitherIsLeft, either)

/**
 * 1 if @p either contains a right value, otherwise 0.
 */
#define EPILEPSY_EitherIsRight(either) desugar(EPILEPSY_EitherIsRight, either)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define EPILEPSY_EitherLeft_IMPL(x)  EPILEPSY_CHOICE(v(EitherLeft), v(x))
#define EPILEPSY_EitherRight_IMPL(x) EPILEPSY_CHOICE(v(EitherRight), v(x))

#define EPILEPSY_EitherIsLeft_IMPL(either)         EPILEPSY_MATCH(v(either), v(EPILEPSY_PRIV_EitherIsLeft_))
#define EPILEPSY_PRIV_EitherIsLeft_EitherLeft(_x)  v(1)
#define EPILEPSY_PRIV_EitherIsLeft_EitherRight(_x) v(0)

#define EPILEPSY_EitherIsRight_IMPL(either) EPILEPSY_NOT(EPILEPSY_EitherIsLeft(v(either)))
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_EITHER_H
