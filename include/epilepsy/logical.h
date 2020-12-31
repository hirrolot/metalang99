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

/**
 * Expands to 1, consuming all arguments.
 */
#define EPILEPSY_CONST_TRUE(...) EPILEPSY_DESUGAR(EPILEPSY_CONST_TRUE, __VA_ARGS__)

/**
 * Expands to 0, consuming all arguments.
 */
#define EPILEPSY_CONST_FALSE(...) EPILEPSY_DESUGAR(EPILEPSY_CONST_FALSE, __VA_ARGS__)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define EPILEPSY_NOT_IMPL(x)  EPILEPSY_CALL(EPILEPSY_PRIV_NOT_##x, )
#define EPILEPSY_PRIV_NOT_0() v(1)
#define EPILEPSY_PRIV_NOT_1() v(0)

#define EPILEPSY_AND_IMPL(x, y) EPILEPSY_CALL(EPILEPSY_PRIV_AND_##x##y, )
#define EPILEPSY_PRIV_AND_00()  v(0)
#define EPILEPSY_PRIV_AND_01()  v(0)
#define EPILEPSY_PRIV_AND_10()  v(0)
#define EPILEPSY_PRIV_AND_11()  v(1)

#define EPILEPSY_OR_IMPL(x, y) EPILEPSY_CALL(EPILEPSY_PRIV_OR_##x##y, )
#define EPILEPSY_PRIV_OR_00()  v(0)
#define EPILEPSY_PRIV_OR_01()  v(1)
#define EPILEPSY_PRIV_OR_10()  v(1)
#define EPILEPSY_PRIV_OR_11()  v(1)

#define EPILEPSY_XOR_IMPL(x, y) EPILEPSY_CALL(EPILEPSY_PRIV_XOR_##x##y, )
#define EPILEPSY_PRIV_XOR_00()  v(0)
#define EPILEPSY_PRIV_XOR_01()  v(1)
#define EPILEPSY_PRIV_XOR_10()  v(1)
#define EPILEPSY_PRIV_XOR_11()  v(0)

#define EPILEPSY_CONST_TRUE_IMPL(...)  v(1)
#define EPILEPSY_CONST_FALSE_IMPL(...) v(0)
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_PRIV_LOGICAL_H
