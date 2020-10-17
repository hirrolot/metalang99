/**
 * @file
 * @brief Boolean algebra.
 */

#ifndef MACROLOP_BOOL_H
#define MACROLOP_BOOL_H

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#include "aux.h"

#endif // DOXYGEN_SHOULD_SKIP_THIS

#include "lang.h"

/**
 * @brief Negates @p x.
 */
#define MACROLOP_NOT(x) call(MACROLOP_NOT_REAL, x)

/**
 * @brief Performs logical conjunction on @p and @p y.
 */
#define MACROLOP_AND(x, y) call(MACROLOP_AND_REAL, x y)

/**
 * @brief Performs inclusive OR on @p and @p y.
 */
#define MACROLOP_OR(x, y) call(MACROLOP_OR_REAL, x y)

/**
 * @brief Performs exclusive OR on @p and @p y.
 */
#define MACROLOP_XOR(x, y) call(MACROLOP_XOR_REAL, x y)

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#define MACROLOP_NOT_REAL(x)  call(MACROLOP_NOT_REAL_##x, )
#define MACROLOP_NOT_REAL_0() v(1)
#define MACROLOP_NOT_REAL_1() v(0)

#define MACROLOP_AND_REAL(x, y) call(MACROLOP_AND_REAL_##x##y, )
#define MACROLOP_AND_REAL_00()  v(0)
#define MACROLOP_AND_REAL_01()  v(0)
#define MACROLOP_AND_REAL_10()  v(0)
#define MACROLOP_AND_REAL_11()  v(1)

#define MACROLOP_OR_REAL(x, y) call(MACROLOP_OR_REAL_##x##y, )
#define MACROLOP_OR_REAL_00()  v(0)
#define MACROLOP_OR_REAL_01()  v(1)
#define MACROLOP_OR_REAL_10()  v(1)
#define MACROLOP_OR_REAL_11()  v(1)

#define MACROLOP_XOR_REAL(x, y) call(MACROLOP_XOR_REAL_##x##y, )
#define MACROLOP_XOR_REAL_00()  v(0)
#define MACROLOP_XOR_REAL_01()  v(1)
#define MACROLOP_XOR_REAL_10()  v(1)
#define MACROLOP_XOR_REAL_11()  v(0)

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // MACROLOP_BOOL_H
