#ifndef KOSHMAR_PP_UINT_GREATER_EQUAL_H
#define KOSHMAR_PP_UINT_GREATER_EQUAL_H

#include "../aux.h"
#include "../if_then_else.h"
#include "../logical.h"
#include "eq.h"
#include "greater.h"

#define KOSHMAR_PP_UINT_GREATER_EQUAL(x, y)                                                        \
    KOSHMAR_PP_IF(KOSHMAR_PP_UINT_EQ(x, y), 1 KOSHMAR_PP_IGNORE, KOSHMAR_PP_UINT_GREATER)(x, y)

#endif // KOSHMAR_PP_UINT_GREATER_EQUAL_H
