/**
 * @file
 * @brief Conditional expressions.
 */

#ifndef KOSHMAR_PP_IF_THEN_ELSE_H
#define KOSHMAR_PP_IF_THEN_ELSE_H

#include "aux.h"

#define KOSHMAR_PP_IF(cond, x, y) KOSHMAR_PP_PRIVATE_IF(cond, x, y)

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#define KOSHMAR_PP_PRIVATE_IF(cond, x, y)                                                          \
    KOSHMAR_PP_EXPAND(                                                                             \
        KOSHMAR_PP_PRIVATE_IF_EXTRACT KOSHMAR_PP_CAT(KOSHMAR_PP_PRIVATE_IF_, cond)((x), (y)))

#define KOSHMAR_PP_PRIVATE_IF_0(_x, y) y
#define KOSHMAR_PP_PRIVATE_IF_1(x, _y) x

#define KOSHMAR_PP_PRIVATE_IF_EXTRACT(...) __VA_ARGS__

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // KOSHMAR_PP_IF_THEN_ELSE_H
