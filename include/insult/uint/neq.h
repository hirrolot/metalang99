#ifndef INSULT_UINT_NEQ_H
#define INSULT_UINT_NEQ_H

#include "../lang.h"
#include "../logical.h"
#include "eq.h"

#define INSULT_UINT_NEQ_REAL(x, y) c(INSULT_NOT_REAL, c(INSULT_UINT_EQ_REAL, v(x) v(y)))

#endif // INSULT_UINT_NEQ_H
