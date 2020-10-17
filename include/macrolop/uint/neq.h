#ifndef MACROLOP_UINT_NEQ_H
#define MACROLOP_UINT_NEQ_H

#include "../lang.h"
#include "../logical.h"
#include "eq.h"

#define MACROLOP_UINT_NEQ_REAL(x, y) call(MACROLOP_NOT_REAL, call(MACROLOP_UINT_EQ_REAL, v(x) v(y)))

#endif // MACROLOP_UINT_NEQ_H
