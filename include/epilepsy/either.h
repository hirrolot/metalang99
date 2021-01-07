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
#define EPILEPSY_eitherLeft(x) EPILEPSY_call(EPILEPSY_eitherLeft, x)

/**
 * The right value @p x.
 */
#define EPILEPSY_eitherRight(x) EPILEPSY_call(EPILEPSY_eitherRight, x)

/**
 * 1 if @p either contains a left value, otherwise 0.
 */
#define EPILEPSY_eitherIsLeft(either) EPILEPSY_call(EPILEPSY_eitherIsLeft, either)

/**
 * 1 if @p either contains a right value, otherwise 0.
 */
#define EPILEPSY_eitherIsRight(either) EPILEPSY_call(EPILEPSY_eitherIsRight, either)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define EPILEPSY_eitherLeft_IMPL(x)  EPILEPSY_choice(v(eitherLeft), v(x))
#define EPILEPSY_eitherRight_IMPL(x) EPILEPSY_choice(v(eitherRight), v(x))

#define EPILEPSY_eitherIsLeft_IMPL(either)              EPILEPSY_match(v(either), v(EPILEPSY_PRIV_eitherIsLeft_))
#define EPILEPSY_PRIV_eitherIsLeft_eitherLeft_IMPL(_x)  v(1)
#define EPILEPSY_PRIV_eitherIsLeft_eitherRight_IMPL(_x) v(0)

#define EPILEPSY_eitherIsRight_IMPL(either) EPILEPSY_not(EPILEPSY_eitherIsLeft(v(either)))
// }

// Arity specifiers {
#define EPILEPSY_eitherLeft_ARITY    1
#define EPILEPSY_eitherRight_ARITY   1
#define EPILEPSY_eitherIsLeft_ARITY  1
#define EPILEPSY_eitherIsRight_ARITY 1
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_EITHER_H
