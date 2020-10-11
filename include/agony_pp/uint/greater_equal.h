#ifndef AGONY_PP_UINT_GREATER_EQUAL_H
#define AGONY_PP_UINT_GREATER_EQUAL_H

#include "../control/if.h"
#include "../lang.h"
#include "eq.h"
#include "greater.h"

#define AGONY_PP_UINT_GREATER_EQUAL_REAL(x, y)                                                     \
    c(c(AGONY_PP_IF_REAL,                                                                          \
        c(AGONY_PP_UINT_EQ_REAL, v(x) v(y)) v(AGONY_PP_UINT_GREATER_EQUAL_REAL_TRUE)               \
            v(AGONY_PP_UINT_GREATER_REAL)),                                                        \
      v(x) v(y))

#define AGONY_PP_UINT_GREATER_EQUAL_REAL_TRUE(_x, _y) v(1)

#endif // AGONY_PP_UINT_GREATER_EQUAL_H
