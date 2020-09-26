/**
 * @file
 * @brief Boolean algebra.
 */

#ifndef KOSHMAR_PP_BOOL_H
#define KOSHMAR_PP_BOOL_H

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#include "aux.h"

#endif // DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Negates @p x.
 */
#define KOSHMAR_PP_NOT(x) KOSHMAR_PP_PRIVATE_NOT(x)

/**
 * @brief Performs logical conjunction on @p and @p y.
 */
#define KOSHMAR_PP_AND(x, y) KOSHMAR_PP_PRIVATE_AND(x, y)

/**
 * @brief Performs inclusive OR on @p and @p y.
 */
#define KOSHMAR_PP_OR(x, y) KOSHMAR_PP_PRIVATE_OR(x, y)

/**
 * @brief Performs exclusive OR on @p and @p y.
 */
#define KOSHMAR_PP_XOR(x, y) KOSHMAR_PP_PRIVATE_XOR(x, y)

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#define KOSHMAR_PP_PRIVATE_NOT(x) KOSHMAR_PP_PRIVATE_BOOL_OVERLOAD_1(KOSHMAR_PP_PRIVATE_NOT_, x)

#define KOSHMAR_PP_PRIVATE_NOT_0() 1
#define KOSHMAR_PP_PRIVATE_NOT_1() 0

#define KOSHMAR_PP_PRIVATE_AND(x, y)                                                               \
    KOSHMAR_PP_PRIVATE_BOOL_OVERLOAD_2(KOSHMAR_PP_PRIVATE_AND_, x, y)

#define KOSHMAR_PP_PRIVATE_AND_00() 0
#define KOSHMAR_PP_PRIVATE_AND_01() 0
#define KOSHMAR_PP_PRIVATE_AND_10() 0
#define KOSHMAR_PP_PRIVATE_AND_11() 1

#define KOSHMAR_PP_PRIVATE_OR(x, y) KOSHMAR_PP_PRIVATE_BOOL_OVERLOAD_2(KOSHMAR_PP_PRIVATE_OR_, x, y)

#define KOSHMAR_PP_PRIVATE_OR_00() 0
#define KOSHMAR_PP_PRIVATE_OR_01() 1
#define KOSHMAR_PP_PRIVATE_OR_10() 1
#define KOSHMAR_PP_PRIVATE_OR_11() 1

#define KOSHMAR_PP_PRIVATE_XOR(x, y)                                                               \
    KOSHMAR_PP_PRIVATE_BOOL_OVERLOAD_2(KOSHMAR_PP_PRIVATE_XOR_, x, y)

#define KOSHMAR_PP_PRIVATE_XOR_00() 0
#define KOSHMAR_PP_PRIVATE_XOR_01() 1
#define KOSHMAR_PP_PRIVATE_XOR_10() 1
#define KOSHMAR_PP_PRIVATE_XOR_11() 0

#define KOSHMAR_PP_PRIVATE_BOOL_OVERLOAD_1(op, x)    KOSHMAR_PP_CAT(op, x)()
#define KOSHMAR_PP_PRIVATE_BOOL_OVERLOAD_2(op, x, y) KOSHMAR_PP_CAT(op, KOSHMAR_PP_CAT(x, y))()

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // KOSHMAR_PP_BOOL_H
