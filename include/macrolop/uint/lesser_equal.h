#ifndef MACROLOP_UINT_LESSER_EQUAL_H
#define MACROLOP_UINT_LESSER_EQUAL_H

#include "../control/if.h"
#include "eq.h"
#include "lesser.h"

#define MACROLOP_UINT_LESSER_EQUAL_REAL(x, y)                                                        \
    call(                                                                                          \
        call(                                                                                      \
            MACROLOP_IF_REAL,                                                                        \
            call(MACROLOP_UINT_EQ_REAL, v(x) v(y)) v(MACROLOP_UINT_LESSER_EQUAL_REAL_TRUE)             \
                v(MACROLOP_UINT_LESSER_REAL)),                                                       \
        v(x) v(y))

#define MACROLOP_UINT_LESSER_EQUAL_REAL_TRUE(_x, _y) v(1)

#endif // MACROLOP_UINT_LESSER_EQUAL_H
