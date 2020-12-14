#ifndef EPILEPSY_PRIV_UINT_NEQ_H
#define EPILEPSY_PRIV_UINT_NEQ_H

#include <epilepsy/priv/logical.h>
#include <epilepsy/priv/uint/eq.h>

#define EPILEPSY_PRIV_UINT_NEQ(x, y) EPILEPSY_PRIV_NOT(EPILEPSY_PRIV_UINT_EQ(x, y))

#endif // EPILEPSY_PRIV_UINT_NEQ_H
