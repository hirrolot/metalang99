#ifndef MACROLOP_PRIV_OVERLOAD_H
#define MACROLOP_PRIV_OVERLOAD_H

#include <macrolop/priv/aux.h>
#include <macrolop/priv/variadics/count.h>

#define MACROLOP_PRIV_OVERLOAD(op, ...)                                                            \
    MACROLOP_PRIV_AUX_CAT(op, MACROLOP_PRIV_VARIADICS_COUNT(__VA_ARGS__))
#define MACROLOP_PRIV_OVERLOAD_CALL(op, ...) MACROLOP_PRIV_OVERLOAD(op, __VA_ARGS__)(__VA_ARGS__)

#endif // MACROLOP_PRIV_OVERLOAD_H
