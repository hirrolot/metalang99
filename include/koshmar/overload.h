#ifndef KOSHMAR_OVERLOAD_H
#define KOSHMAR_OVERLOAD_H

#include "cat.h"
#include "variadics.h"

#define KOSHMAR_OVERLOAD(op, ...) KOSHMAR_CAT(op, KOSHMAR_VARIADICS_COUNT(__VA_ARGS__))

#endif // KOSHMAR_OVERLOAD_H
