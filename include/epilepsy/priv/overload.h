#ifndef EPILEPSY_PRIV_OVERLOAD_H
#define EPILEPSY_PRIV_OVERLOAD_H

#include <epilepsy/priv/aux.h>
#include <epilepsy/priv/variadics/count.h>

#define EPILEPSY_PRIV_OVERLOAD(op, ...)                                                            \
    EPILEPSY_PRIV_CAT(op, EPILEPSY_PRIV_VARIADICS_COUNT(__VA_ARGS__))
#define EPILEPSY_PRIV_OVERLOAD_CALL(op, ...) EPILEPSY_PRIV_OVERLOAD(op, __VA_ARGS__)(__VA_ARGS__)

#endif // EPILEPSY_PRIV_OVERLOAD_H
