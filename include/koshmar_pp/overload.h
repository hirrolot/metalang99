/**
 * @file
 * @brief Overloading on a number of arguments.
 */

#ifndef KOSHMAR_PP_OVERLOAD_H
#define KOSHMAR_PP_OVERLOAD_H

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#include "aux.h"
#include "variadics/count.h"

#endif // DOXYGEN_SHOULD_SKIP_THIS

#define KOSHMAR_PP_OVERLOAD(op, ...) KOSHMAR_PP_PRIVATE_OVERLOAD(op, __VA_ARGS__)

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#define KOSHMAR_PP_PRIVATE_OVERLOAD(op, ...)                                                       \
    KOSHMAR_PP_CAT(op, KOSHMAR_PP_PRIVATE_VARIADICS_COUNT(__VA_ARGS__))

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // KOSHMAR_PP_OVERLOAD_H
