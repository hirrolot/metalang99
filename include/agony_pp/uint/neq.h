#ifndef AGONY_PP_UINT_NEQ_H
#define AGONY_PP_UINT_NEQ_H

#include "../lang.h"
#include "../logical.h"
#include "eq.h"

#define AGONY_PP_PRIVATE_UINT_NEQ(x, y) c(AGONY_PP_NOT, c(AGONY_PP_PRIVATE_UINT_EQ, v(x) v(y)))

#endif // AGONY_PP_UINT_NEQ_H
