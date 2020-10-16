#ifndef INSULT_UINT_GREATER_H
#define INSULT_UINT_GREATER_H

#include "../lang.h"
#include "lesser.h"

#define INSULT_UINT_GREATER_REAL(x, y) call(INSULT_UINT_LESSER_REAL, v(y) v(x))

#endif // INSULT_UINT_GREATER_H
