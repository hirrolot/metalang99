#ifndef AGONY_PP_UINT_LESSER_EQUAL_H
#define AGONY_PP_UINT_LESSER_EQUAL_H

#include "../aux.h"
#include "../control.h"
#include "../logical.h"
#include "eq.h"
#include "lesser.h"

#define AGONY_PP_PRIVATE_UINT_LESSER_EQUAL(x, y)                                                   \
    AGONY_PP_IF(AGONY_PP_PRIVATE_UINT_EQ(x, y), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER)  \
    (x, y)

#endif // AGONY_PP_UINT_LESSER_EQUAL_H
