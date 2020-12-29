#ifndef EPILEPSY_PRIV_OVERLOAD_H
#define EPILEPSY_PRIV_OVERLOAD_H

#include <epilepsy/priv/aux.h>
#include <epilepsy/priv/variadics/count.h>

#define EPILEPSY_PRIV_OVERLOAD(f, ...)                                                             \
    EPILEPSY_PRIV_CAT(f, EPILEPSY_PRIV_VARIADICS_COUNT(__VA_ARGS__))
#define EPILEPSY_PRIV_OVERLOAD_CALL(f, ...) EPILEPSY_PRIV_OVERLOAD(f, __VA_ARGS__)(__VA_ARGS__)

#endif // EPILEPSY_PRIV_OVERLOAD_H
