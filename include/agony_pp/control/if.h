#ifndef AGONY_PP_CONTROL_IF_H
#define AGONY_PP_CONTROL_IF_H

#include "../lang.h"

#define AGONY_PP_PRIVATE_IF(cond, x, y) c(AGONY_PP_PRIVATE_CONTROL_IF_##cond, v(x) v(y))

#define AGONY_PP_PRIVATE_CONTROL_IF_0(_x, y) v(y)
#define AGONY_PP_PRIVATE_CONTROL_IF_1(x, _y) v(x)

#endif // AGONY_PP_CONTROL_IF_H
