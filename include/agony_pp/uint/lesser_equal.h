#ifndef AGONY_PP_UINT_LESSER_EQUAL_H
#define AGONY_PP_UINT_LESSER_EQUAL_H

#include "../control/if.h"
#include "eq.h"
#include "lesser.h"

#define AGONY_PP_PRIVATE_UINT_LESSER_EQUAL(x, y)                                                   \
    c(c(AGONY_PP_PRIVATE_IF,                                                                       \
        c(AGONY_PP_PRIVATE_UINT_EQ, v(x) v(y)) v(AGONY_PP_PRIVATE_UINT_LESSER_EQUAL_TRUE)          \
            v(AGONY_PP_PRIVATE_UINT_LESSER)),                                                      \
      v(x) v(y))

#define AGONY_PP_PRIVATE_UINT_LESSER_EQUAL_TRUE(_x, _y) v(1)

#endif // AGONY_PP_UINT_LESSER_EQUAL_H
