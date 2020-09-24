#ifndef KOSHMAR_PP_IF_THEN_ELSE_H
#define KOSHMAR_PP_IF_THEN_ELSE_H

#include "aux.h"

#define KOSHMAR_PP_IF(cond, x, y)                                                                  \
    KOSHMAR_PP_PRIVATE_IF_EXTRACT KOSHMAR_PP_CAT(KOSHMAR_PP_PRIVATE_IF_, cond)((x), (y))

#define KOSHMAR_PP_PRIVATE_IF_0(_x, y) y
#define KOSHMAR_PP_PRIVATE_IF_1(x, _y) x

#define KOSHMAR_PP_PRIVATE_IF_EXTRACT(...) __VA_ARGS__

#endif // KOSHMAR_PP_IF_THEN_ELSE_H
