#ifndef MACROLOP_PRIV_UINT_GREATER_EQUAL_H
#define MACROLOP_PRIV_UINT_GREATER_EQUAL_H

#include "../aux.h"
#include "eq.h"
#include "greater.h"

#define MACROLOP_PRIV_UINT_GREATER_EQUAL(x, y)                                                     \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, y), MACROLOP_PRIV_UINT_GREATER_EQUAL_TRUE,                        \
        MACROLOP_PRIV_UINT_GREATER)                                                                \
    (x, y)

#define MACROLOP_PRIV_UINT_GREATER_EQUAL_TRUE(_x, _y) 1

#endif // MACROLOP_PRIV_UINT_GREATER_EQUAL_H
