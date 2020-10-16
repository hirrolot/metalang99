#ifndef INSULT_CONTROL_IF_H
#define INSULT_CONTROL_IF_H

#include "../lang.h"

#define INSULT_IF_REAL(cond, x, y) call(INSULT_PRIVATE_CONTROL_IF_##cond, v(x) v(y))

#define INSULT_PRIVATE_CONTROL_IF_0(_x, y) v(y)
#define INSULT_PRIVATE_CONTROL_IF_1(x, _y) v(x)

#endif // INSULT_CONTROL_IF_H
