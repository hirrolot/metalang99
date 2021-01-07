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
#define epEitherLeft(x) epCall(epEitherLeft, x)

/**
 * The right value @p x.
 */
#define epEitherRight(x) epCall(epEitherRight, x)

/**
 * 1 if @p either contains a left value, otherwise 0.
 */
#define epEitherIsLeft(either) epCall(epEitherIsLeft, either)

/**
 * 1 if @p either contains a right value, otherwise 0.
 */
#define epEitherIsRight(either) epCall(epEitherIsRight, either)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define epEitherLeft_IMPL(x)  epChoice(v(EitherLeft), v(x))
#define epEitherRight_IMPL(x) epChoice(v(EitherRight), v(x))

#define epEitherIsLeft_IMPL(either)                     epMatch(v(either), v(EPILEPSY_PRIV_EitherIsLeft_))
#define EPILEPSY_PRIV_EitherIsLeft_EitherLeft_IMPL(_x)  v(1)
#define EPILEPSY_PRIV_EitherIsLeft_EitherRight_IMPL(_x) v(0)

#define epEitherIsRight_IMPL(either) epNot(epEitherIsLeft(v(either)))
// }

// Arity specifiers {
#define epEitherLeft_ARITY    1
#define epEitherRight_ARITY   1
#define epEitherIsLeft_ARITY  1
#define epEitherIsRight_ARITY 1
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_EITHER_H
