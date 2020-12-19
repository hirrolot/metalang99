#ifndef EPILEPSY_CONTROL_IF_H
#define EPILEPSY_CONTROL_IF_H

#include <epilepsy/lang.h>

#define EPILEPSY_IF_IMPL(cond, x, y) call(EPILEPSY_PRIV_CONTROL_IF_##cond, v(x) v(y))

#define EPILEPSY_PRIV_CONTROL_IF_0(_x, y) v(y)
#define EPILEPSY_PRIV_CONTROL_IF_1(x, _y) v(x)

#endif // EPILEPSY_CONTROL_IF_H
