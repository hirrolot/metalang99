#ifndef MACROLOP_UINT_GREATER_H
#define MACROLOP_UINT_GREATER_H

#include "../lang.h"
#include "lesser.h"

#define MACROLOP_UINT_GREATER_REAL(x, y) call(MACROLOP_UINT_LESSER_REAL, v(y) v(x))

#endif // MACROLOP_UINT_GREATER_H
