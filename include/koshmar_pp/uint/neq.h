#ifndef KOSHMAR_PP_UINT_NEQ_H
#define KOSHMAR_PP_UINT_NEQ_H

#include "../logical.h"
#include "eq.h"

#define KOSHMAR_PP_PRIVATE_UINT_NEQ(x, y) KOSHMAR_PP_NOT(KOSHMAR_PP_PRIVATE_UINT_EQ(x, y))

#endif // KOSHMAR_PP_UINT_NEQ_H
