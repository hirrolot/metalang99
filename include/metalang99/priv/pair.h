#ifndef METALANG99_PRIV_PAIR_H
#define METALANG99_PRIV_PAIR_H

#include <metalang99/priv/variadics/get.h>

#define METALANG99_PRIV_PAIR_FST(pair)                                                             \
    METALANG99_PRIV_PAIR_FST_EXPAND(METALANG99_PRIV_VARIADICS_HEAD pair)
#define METALANG99_PRIV_PAIR_FST_EXPAND(...) __VA_ARGS__

#define METALANG99_PRIV_PAIR_SND(pair)                                                             \
    METALANG99_PRIV_PAIR_SND_EXPAND(METALANG99_PRIV_VARIADICS_TAIL pair)
#define METALANG99_PRIV_PAIR_SND_EXPAND(...) __VA_ARGS__

#endif // METALANG99_PRIV_PAIR_H
