#ifndef KOSHMAR_PP_OVERLOAD_H
#define KOSHMAR_PP_OVERLOAD_H

#include "aux.h"
#include "variadics.h"

#define KOSHMAR_PP_OVERLOAD(op, ...) KOSHMAR_PP_CAT(op, KOSHMAR_PP_VARIADICS_COUNT(__VA_ARGS__))

#endif // KOSHMAR_PP_OVERLOAD_H
