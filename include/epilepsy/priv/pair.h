#ifndef EPILEPSY_PRIV_PAIR_H
#define EPILEPSY_PRIV_PAIR_H

#include <epilepsy/priv/variadics/get.h>

#define EPILEPSY_PRIV_PAIR_FST(pair)                                                               \
    EPILEPSY_PRIV_PAIR_FST_EXPAND(EPILEPSY_PRIV_VARIADICS_HEAD pair)
#define EPILEPSY_PRIV_PAIR_FST_EXPAND(...) __VA_ARGS__

#define EPILEPSY_PRIV_PAIR_SND(pair)                                                               \
    EPILEPSY_PRIV_PAIR_SND_EXPAND(EPILEPSY_PRIV_VARIADICS_TAIL pair)
#define EPILEPSY_PRIV_PAIR_SND_EXPAND(...) __VA_ARGS__

#endif // EPILEPSY_PRIV_PAIR_H
