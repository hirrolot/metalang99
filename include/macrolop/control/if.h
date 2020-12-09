#ifndef MACROLOP_CONTROL_IF_H
#define MACROLOP_CONTROL_IF_H

#include "../lang.h"

#define MACROLOP_IF_REAL(cond, x, y) call(MACROLOP_PRIV_CONTROL_IF_##cond, v(x) v(y))

#define MACROLOP_PRIV_CONTROL_IF_0(_x, y) v(y)
#define MACROLOP_PRIV_CONTROL_IF_1(x, _y) v(x)

#endif // MACROLOP_CONTROL_IF_H
