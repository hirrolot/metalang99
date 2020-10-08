#ifndef AGONY_PP_CONTROL_IF_H
#define AGONY_PP_CONTROL_IF_H

#include "../aux.h"

#define AGONY_PP_PRIVATE_EVAL_AUX_IF(cond, x, y)                                                   \
    AGONY_PP_UNPARENTHESISE(AGONY_PP_CAT(AGONY_PP_PRIVATE_EVAL_AUX_IF_, cond)((x), (y)))

#define AGONY_PP_PRIVATE_EVAL_AUX_IF_0(_x, y) y
#define AGONY_PP_PRIVATE_EVAL_AUX_IF_1(x, _y) x

#endif // AGONY_PP_CONTROL_IF_H
