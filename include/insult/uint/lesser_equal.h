#ifndef INSULT_UINT_LESSER_EQUAL_H
#define INSULT_UINT_LESSER_EQUAL_H

#include "../control/if.h"
#include "eq.h"
#include "lesser.h"

#define INSULT_UINT_LESSER_EQUAL_REAL(x, y)                                                        \
    call(                                                                                          \
        call(                                                                                      \
            INSULT_IF_REAL,                                                                        \
            call(INSULT_UINT_EQ_REAL, v(x) v(y)) v(INSULT_UINT_LESSER_EQUAL_REAL_TRUE)             \
                v(INSULT_UINT_LESSER_REAL)),                                                       \
        v(x) v(y))

#define INSULT_UINT_LESSER_EQUAL_REAL_TRUE(_x, _y) v(1)

#endif // INSULT_UINT_LESSER_EQUAL_H
