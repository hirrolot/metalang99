#ifndef INSULT_VARIADICS_GET_H
#define INSULT_VARIADICS_GET_H

#include "../lang.h"

#define INSULT_VARIADICS_HEAD_REAL(x, ...) v(x)
#define INSULT_VARIADICS_TAIL_REAL(x, ...) v(__VA_ARGS__)

#endif // INSULT_VARIADICS_GET_H
