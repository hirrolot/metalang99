#ifndef EPILEPSY_PRIV_LOGICAL_H
#define EPILEPSY_PRIV_LOGICAL_H

#include <epilepsy/lang.h>

/**
 * @brief Negates @p x.
 */
#define EPILEPSY_NOT(x) call(EPILEPSY_NOT_REAL, x)

/**
 * @brief Performs logical conjunction on @p and @p y.
 */
#define EPILEPSY_AND(x, y) call(EPILEPSY_AND_REAL, x y)

/**
 * @brief Performs inclusive OR on @p and @p y.
 */
#define EPILEPSY_OR(x, y) call(EPILEPSY_OR_REAL, x y)

/**
 * @brief Performs exclusive OR on @p and @p y.
 */
#define EPILEPSY_XOR(x, y) call(EPILEPSY_XOR_REAL, x y)

/**
 * @brief Consumes all arguments and returns 1.
 */
#define EPILEPSY_TRUE(...) call(EPILEPSY_TRUE_REAL, __VA_ARGS__)

/**
 * @brief Consumes all arguments and returns 0.
 */
#define EPILEPSY_FALSE(...) call(EPILEPSY_FALSE_REAL, __VA_ARGS__)

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#define EPILEPSY_NOT_REAL(x)  call(EPILEPSY_NOT_REAL_##x, )
#define EPILEPSY_NOT_REAL_0() v(1)
#define EPILEPSY_NOT_REAL_1() v(0)

#define EPILEPSY_AND_REAL(x, y) call(EPILEPSY_AND_REAL_##x##y, )
#define EPILEPSY_AND_REAL_00()  v(0)
#define EPILEPSY_AND_REAL_01()  v(0)
#define EPILEPSY_AND_REAL_10()  v(0)
#define EPILEPSY_AND_REAL_11()  v(1)

#define EPILEPSY_OR_REAL(x, y) call(EPILEPSY_OR_REAL_##x##y, )
#define EPILEPSY_OR_REAL_00()  v(0)
#define EPILEPSY_OR_REAL_01()  v(1)
#define EPILEPSY_OR_REAL_10()  v(1)
#define EPILEPSY_OR_REAL_11()  v(1)

#define EPILEPSY_XOR_REAL(x, y) call(EPILEPSY_XOR_REAL_##x##y, )
#define EPILEPSY_XOR_REAL_00()  v(0)
#define EPILEPSY_XOR_REAL_01()  v(1)
#define EPILEPSY_XOR_REAL_10()  v(1)
#define EPILEPSY_XOR_REAL_11()  v(0)

#define EPILEPSY_TRUE_REAL(...)  v(1)
#define EPILEPSY_FALSE_REAL(...) v(0)

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // EPILEPSY_PRIV_LOGICAL_H
