/**
 * @file
 * @brief Boolean algebra.
 */

#ifndef AGONY_PP_BOOL_H
#define AGONY_PP_BOOL_H

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#include "aux.h"

#endif // DOXYGEN_SHOULD_SKIP_THIS

#include "lang.h"

/**
 * @brief Negates @p x.
 */
#define AGONY_PP_NOT(x) c(AGONY_PP_PRIVATE_NOT, v(x))

/**
 * @brief Performs logical conjunction on @p and @p y.
 */
#define AGONY_PP_AND(x, y) c(AGONY_PP_PRIVATE_AND, v(x) v(y))

/**
 * @brief Performs inclusive OR on @p and @p y.
 */
#define AGONY_PP_OR(x, y) c(AGONY_PP_PRIVATE_OR, v(x) v(y))

/**
 * @brief Performs exclusive OR on @p and @p y.
 */
#define AGONY_PP_XOR(x, y) c(AGONY_PP_PRIVATE_XOR, v(x) v(y))

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#define AGONY_PP_PRIVATE_NOT(x)  c(AGONY_PP_PRIVATE_NOT_##x, )
#define AGONY_PP_PRIVATE_NOT_0() v(1)
#define AGONY_PP_PRIVATE_NOT_1() v(0)

#define AGONY_PP_PRIVATE_AND(x, y) c(AGONY_PP_PRIVATE_AND_##x##y, )
#define AGONY_PP_PRIVATE_AND_00()  v(0)
#define AGONY_PP_PRIVATE_AND_01()  v(0)
#define AGONY_PP_PRIVATE_AND_10()  v(0)
#define AGONY_PP_PRIVATE_AND_11()  v(1)

#define AGONY_PP_PRIVATE_OR(x, y) c(AGONY_PP_PRIVATE_OR_##x##y, )
#define AGONY_PP_PRIVATE_OR_00()  v(0)
#define AGONY_PP_PRIVATE_OR_01()  v(1)
#define AGONY_PP_PRIVATE_OR_10()  v(1)
#define AGONY_PP_PRIVATE_OR_11()  v(1)

#define AGONY_PP_PRIVATE_XOR(x, y) c(AGONY_PP_PRIVATE_XOR_##x##y, )
#define AGONY_PP_PRIVATE_XOR_00()  v(0)
#define AGONY_PP_PRIVATE_XOR_01()  v(1)
#define AGONY_PP_PRIVATE_XOR_10()  v(1)
#define AGONY_PP_PRIVATE_XOR_11()  v(0)

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // AGONY_PP_BOOL_H
