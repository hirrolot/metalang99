#ifndef AGONY_PP_VARIADICS_GET_H
#define AGONY_PP_VARIADICS_GET_H

#include "../lang.h"

#define AGONY_PP_VARIADICS_HEAD_REAL(x, ...) v(x)
#define AGONY_PP_VARIADICS_TAIL_REAL(x, ...) v(__VA_ARGS__)

#endif // AGONY_PP_VARIADICS_GET_H
