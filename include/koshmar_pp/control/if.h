#ifndef KOSHMAR_PP_CONTROL_IF_H
#define KOSHMAR_PP_CONTROL_IF_H

#include "../aux.h"

#define KOSHMAR_PP_PRIVATE_IF(cond, x, y)                                                          \
    KOSHMAR_PP_UNPARENTHESISE(KOSHMAR_PP_CAT(KOSHMAR_PP_PRIVATE_IF_, cond)((x), (y)))

#define KOSHMAR_PP_PRIVATE_IF_0(_x, y) y
#define KOSHMAR_PP_PRIVATE_IF_1(x, _y) x

#endif // KOSHMAR_PP_CONTROL_IF_H
