#ifndef AGONY_PP_UINT_LESSER_H
#define AGONY_PP_UINT_LESSER_H

#include "../control/if.h"
#include "../lang.h"
#include "../logical.h"
#include "dec.h"
#include "eq.h"

#define AGONY_PP_PRIVATE_UINT_LESSER(x, y)                                                         \
    c(c(AGONY_PP_PRIVATE_IF,                                                                       \
        c(AGONY_PP_PRIVATE_UINT_EQ, v(y) v(0)) v(AGONY_PP_PRIVATE_UINT_LESSER_FALSE)               \
            v(AGONY_PP_PRIVATE_UINT_LESSER_STEP)),                                                 \
      v(x) v(y))

#define AGONY_PP_PRIVATE_UINT_LESSER_STEP(x, y)                                                    \
    c(c(AGONY_PP_PRIVATE_IF,                                                                       \
        c(AGONY_PP_PRIVATE_UINT_EQ, v(x) c(AGONY_PP_PRIVATE_UINT_DEC, v(y)))                       \
            v(AGONY_PP_PRIVATE_UINT_LESSER_TRUE) v(AGONY_PP_PRIVATE_UINT_LESSER)),                 \
      v(x) c(AGONY_PP_PRIVATE_UINT_DEC, v(y)))

#define AGONY_PP_PRIVATE_UINT_LESSER_TRUE(_x, _y)  v(1)
#define AGONY_PP_PRIVATE_UINT_LESSER_FALSE(_x, _y) v(0)

#endif // AGONY_PP_UINT_LESSER_H
