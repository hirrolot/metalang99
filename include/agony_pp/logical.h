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
#define AGONY_PP_NOT(x) c(AGONY_PP_NOT_REAL, x)

/**
 * @brief Performs logical conjunction on @p and @p y.
 */
#define AGONY_PP_AND(x, y) c(AGONY_PP_AND_REAL, x y)

/**
 * @brief Performs inclusive OR on @p and @p y.
 */
#define AGONY_PP_OR(x, y) c(AGONY_PP_OR_REAL, x y)

/**
 * @brief Performs exclusive OR on @p and @p y.
 */
#define AGONY_PP_XOR(x, y) c(AGONY_PP_XOR_REAL, x y)

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#define AGONY_PP_NOT_REAL(x)  c(AGONY_PP_NOT_REAL_##x, )
#define AGONY_PP_NOT_REAL_0() v(1)
#define AGONY_PP_NOT_REAL_1() v(0)

#define AGONY_PP_AND_REAL(x, y) c(AGONY_PP_AND_REAL_##x##y, )
#define AGONY_PP_AND_REAL_00()  v(0)
#define AGONY_PP_AND_REAL_01()  v(0)
#define AGONY_PP_AND_REAL_10()  v(0)
#define AGONY_PP_AND_REAL_11()  v(1)

#define AGONY_PP_OR_REAL(x, y) c(AGONY_PP_OR_REAL_##x##y, )
#define AGONY_PP_OR_REAL_00()  v(0)
#define AGONY_PP_OR_REAL_01()  v(1)
#define AGONY_PP_OR_REAL_10()  v(1)
#define AGONY_PP_OR_REAL_11()  v(1)

#define AGONY_PP_XOR_REAL(x, y) c(AGONY_PP_XOR_REAL_##x##y, )
#define AGONY_PP_XOR_REAL_00()  v(0)
#define AGONY_PP_XOR_REAL_01()  v(1)
#define AGONY_PP_XOR_REAL_10()  v(1)
#define AGONY_PP_XOR_REAL_11()  v(0)

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // AGONY_PP_BOOL_H
