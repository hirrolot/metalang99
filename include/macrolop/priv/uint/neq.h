#ifndef MACROLOP_PRIV_UINT_NEQ_H
#define MACROLOP_PRIV_UINT_NEQ_H

#include <macrolop/priv/logical.h>
#include <macrolop/priv/uint/eq.h>

#define MACROLOP_PRIV_UINT_NEQ(x, y) MACROLOP_PRIV_NOT(MACROLOP_PRIV_UINT_EQ(x, y))

#endif // MACROLOP_PRIV_UINT_NEQ_H
