#ifndef EPILEPSY_PRIV_UINT_GREATER_EQUAL_H
#define EPILEPSY_PRIV_UINT_GREATER_EQUAL_H

#include <epilepsy/priv/aux.h>
#include <epilepsy/priv/uint/eq.h>
#include <epilepsy/priv/uint/greater.h>

#define EPILEPSY_PRIV_UINT_GREATER_EQUAL(x, y)                                                     \
    EPILEPSY_PRIV_IF(                                                                              \
        EPILEPSY_PRIV_UINT_EQ(x, y), EPILEPSY_PRIV_UINT_GREATER_EQUAL_TRUE,                        \
        EPILEPSY_PRIV_UINT_GREATER)                                                                \
    (x, y)

#define EPILEPSY_PRIV_UINT_GREATER_EQUAL_TRUE(_x, _y) 1

#endif // EPILEPSY_PRIV_UINT_GREATER_EQUAL_H
