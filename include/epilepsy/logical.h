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
#define EPILEPSY_NOT(x) EPILEPSY_DESUGAR(EPILEPSY_NOT, x)

/**
 * Logical conjunction.
 */
#define EPILEPSY_AND(x, y) EPILEPSY_DESUGAR(EPILEPSY_AND, x y)

/**
 * Logical inclusive OR.
 */
#define EPILEPSY_OR(x, y) EPILEPSY_DESUGAR(EPILEPSY_OR, x y)

/**
 * Logical exclusive OR.
 */
#define EPILEPSY_XOR(x, y) EPILEPSY_DESUGAR(EPILEPSY_XOR, x y)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define EPILEPSY_NOT_IMPL(x)       EPILEPSY_CALL(EPILEPSY_PRIV_NOT_##x, )
#define EPILEPSY_PRIV_NOT_0_IMPL() v(1)
#define EPILEPSY_PRIV_NOT_1_IMPL() v(0)

#define EPILEPSY_AND_IMPL(x, y)     EPILEPSY_CALL(EPILEPSY_PRIV_AND_##x##y, )
#define EPILEPSY_PRIV_AND_00_IMPL() v(0)
#define EPILEPSY_PRIV_AND_01_IMPL() v(0)
#define EPILEPSY_PRIV_AND_10_IMPL() v(0)
#define EPILEPSY_PRIV_AND_11_IMPL() v(1)

#define EPILEPSY_OR_IMPL(x, y)     EPILEPSY_CALL(EPILEPSY_PRIV_OR_##x##y, )
#define EPILEPSY_PRIV_OR_00_IMPL() v(0)
#define EPILEPSY_PRIV_OR_01_IMPL() v(1)
#define EPILEPSY_PRIV_OR_10_IMPL() v(1)
#define EPILEPSY_PRIV_OR_11_IMPL() v(1)

#define EPILEPSY_XOR_IMPL(x, y)     EPILEPSY_CALL(EPILEPSY_PRIV_XOR_##x##y, )
#define EPILEPSY_PRIV_XOR_00_IMPL() v(0)
#define EPILEPSY_PRIV_XOR_01_IMPL() v(1)
#define EPILEPSY_PRIV_XOR_10_IMPL() v(1)
#define EPILEPSY_PRIV_XOR_11_IMPL() v(0)
// }

// Arity specifiers {
#define EPILEPSY_NOT_ARITY 1
#define EPILEPSY_AND_ARITY 2
#define EPILEPSY_OR_ARITY  2
#define EPILEPSY_XOR_ARITY 2
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_PRIV_LOGICAL_H
