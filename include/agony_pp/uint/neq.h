#ifndef AGONY_PP_UINT_NEQ_H
#define AGONY_PP_UINT_NEQ_H

#include "../lang.h"
#include "../logical.h"
#include "eq.h"

#define AGONY_PP_UINT_NEQ_REAL(x, y) c(AGONY_PP_NOT_REAL, c(AGONY_PP_UINT_EQ_REAL, v(x) v(y)))

#endif // AGONY_PP_UINT_NEQ_H
