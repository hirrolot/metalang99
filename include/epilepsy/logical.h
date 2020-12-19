#ifndef EPILEPSY_PRIV_LOGICAL_H
#define EPILEPSY_PRIV_LOGICAL_H

#include <epilepsy/lang.h>

/**
 * @brief Negates @p x.
 */
#define EPILEPSY_NOT(x) call(EPILEPSY_NOT_IMPL, x)

/**
 * @brief Performs logical conjunction on @p and @p y.
 */
#define EPILEPSY_AND(x, y) call(EPILEPSY_AND_IMPL, x y)

/**
 * @brief Performs inclusive OR on @p and @p y.
 */
#define EPILEPSY_OR(x, y) call(EPILEPSY_OR_IMPL, x y)

/**
 * @brief Performs exclusive OR on @p and @p y.
 */
#define EPILEPSY_XOR(x, y) call(EPILEPSY_XOR_IMPL, x y)

/**
 * @brief Consumes all arguments and returns 1.
 */
#define EPILEPSY_TRUE(...) call(EPILEPSY_TRUE_IMPL, __VA_ARGS__)

/**
 * @brief Consumes all arguments and returns 0.
 */
#define EPILEPSY_FALSE(...) call(EPILEPSY_FALSE_IMPL, __VA_ARGS__)

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#define EPILEPSY_NOT_IMPL(x)  call(EPILEPSY_NOT_IMPL_##x, )
#define EPILEPSY_NOT_IMPL_0() v(1)
#define EPILEPSY_NOT_IMPL_1() v(0)

#define EPILEPSY_AND_IMPL(x, y) call(EPILEPSY_AND_IMPL_##x##y, )
#define EPILEPSY_AND_IMPL_00()  v(0)
#define EPILEPSY_AND_IMPL_01()  v(0)
#define EPILEPSY_AND_IMPL_10()  v(0)
#define EPILEPSY_AND_IMPL_11()  v(1)

#define EPILEPSY_OR_IMPL(x, y) call(EPILEPSY_OR_IMPL_##x##y, )
#define EPILEPSY_OR_IMPL_00()  v(0)
#define EPILEPSY_OR_IMPL_01()  v(1)
#define EPILEPSY_OR_IMPL_10()  v(1)
#define EPILEPSY_OR_IMPL_11()  v(1)

#define EPILEPSY_XOR_IMPL(x, y) call(EPILEPSY_XOR_IMPL_##x##y, )
#define EPILEPSY_XOR_IMPL_00()  v(0)
#define EPILEPSY_XOR_IMPL_01()  v(1)
#define EPILEPSY_XOR_IMPL_10()  v(1)
#define EPILEPSY_XOR_IMPL_11()  v(0)

#define EPILEPSY_TRUE_IMPL(...)  v(1)
#define EPILEPSY_FALSE_IMPL(...) v(0)

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // EPILEPSY_PRIV_LOGICAL_H
