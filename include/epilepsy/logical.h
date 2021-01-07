/**
 * @file
 * Boolean algebra.
 */

#ifndef EPILEPSY_PRIV_LOGICAL_H
#define EPILEPSY_PRIV_LOGICAL_H

#include <epilepsy/lang.h>

// Desugaring {
/**
 * Logical negation.
 */
#define epNot(x) epCall(epNot, x)

/**
 * Logical conjunction.
 */
#define epAnd(x, y) epCall(epAnd, x y)

/**
 * Logical inclusive OR.
 */
#define epOr(x, y) epCall(epOr, x y)

/**
 * Logical exclusive OR.
 */
#define epXor(x, y) epCall(epXor, x y)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define epNot_IMPL(x)              epCall(EPILEPSY_PRIV_NOT_##x, )
#define EPILEPSY_PRIV_NOT_0_IMPL() v(1)
#define EPILEPSY_PRIV_NOT_1_IMPL() v(0)

#define epAnd_IMPL(x, y)            epCall(EPILEPSY_PRIV_AND_##x##y, )
#define EPILEPSY_PRIV_AND_00_IMPL() v(0)
#define EPILEPSY_PRIV_AND_01_IMPL() v(0)
#define EPILEPSY_PRIV_AND_10_IMPL() v(0)
#define EPILEPSY_PRIV_AND_11_IMPL() v(1)

#define epOr_IMPL(x, y)            epCall(EPILEPSY_PRIV_OR_##x##y, )
#define EPILEPSY_PRIV_OR_00_IMPL() v(0)
#define EPILEPSY_PRIV_OR_01_IMPL() v(1)
#define EPILEPSY_PRIV_OR_10_IMPL() v(1)
#define EPILEPSY_PRIV_OR_11_IMPL() v(1)

#define epXor_IMPL(x, y)            epCall(EPILEPSY_PRIV_XOR_##x##y, )
#define EPILEPSY_PRIV_XOR_00_IMPL() v(0)
#define EPILEPSY_PRIV_XOR_01_IMPL() v(1)
#define EPILEPSY_PRIV_XOR_10_IMPL() v(1)
#define EPILEPSY_PRIV_XOR_11_IMPL() v(0)
// }

// Arity specifiers {
#define epNot_ARITY 1
#define epAnd_ARITY 2
#define epOr_ARITY  2
#define epXor_ARITY 2
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_PRIV_LOGICAL_H
