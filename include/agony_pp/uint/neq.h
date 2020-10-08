#ifndef AGONY_PP_UINT_NEQ_H
#define AGONY_PP_UINT_NEQ_H

#include "../logical.h"
#include "eq.h"

#define AGONY_PP_PRIVATE_UINT_NEQ(x, y) AGONY_PP_NOT(AGONY_PP_PRIVATE_UINT_EQ(x, y))

#endif // AGONY_PP_UINT_NEQ_H
