/**
 * @file
 * @brief Boolean algebra.
 */

#ifndef INSULT_BOOL_H
#define INSULT_BOOL_H

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#include "aux.h"

#endif // DOXYGEN_SHOULD_SKIP_THIS

#include "lang.h"

/**
 * @brief Negates @p x.
 */
#define INSULT_NOT(x) c(INSULT_NOT_REAL, x)

/**
 * @brief Performs logical conjunction on @p and @p y.
 */
#define INSULT_AND(x, y) c(INSULT_AND_REAL, x y)

/**
 * @brief Performs inclusive OR on @p and @p y.
 */
#define INSULT_OR(x, y) c(INSULT_OR_REAL, x y)

/**
 * @brief Performs exclusive OR on @p and @p y.
 */
#define INSULT_XOR(x, y) c(INSULT_XOR_REAL, x y)

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#define INSULT_NOT_REAL(x)  c(INSULT_NOT_REAL_##x, )
#define INSULT_NOT_REAL_0() v(1)
#define INSULT_NOT_REAL_1() v(0)

#define INSULT_AND_REAL(x, y) c(INSULT_AND_REAL_##x##y, )
#define INSULT_AND_REAL_00()  v(0)
#define INSULT_AND_REAL_01()  v(0)
#define INSULT_AND_REAL_10()  v(0)
#define INSULT_AND_REAL_11()  v(1)

#define INSULT_OR_REAL(x, y) c(INSULT_OR_REAL_##x##y, )
#define INSULT_OR_REAL_00()  v(0)
#define INSULT_OR_REAL_01()  v(1)
#define INSULT_OR_REAL_10()  v(1)
#define INSULT_OR_REAL_11()  v(1)

#define INSULT_XOR_REAL(x, y) c(INSULT_XOR_REAL_##x##y, )
#define INSULT_XOR_REAL_00()  v(0)
#define INSULT_XOR_REAL_01()  v(1)
#define INSULT_XOR_REAL_10()  v(1)
#define INSULT_XOR_REAL_11()  v(0)

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // INSULT_BOOL_H
