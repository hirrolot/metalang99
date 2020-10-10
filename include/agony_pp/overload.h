/**
 * @file
 * @brief Overloading on a number of arguments.
 */

#ifndef AGONY_PP_OVERLOAD_H
#define AGONY_PP_OVERLOAD_H

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#include "aux.h"
#include "variadics/count.h"

#endif // DOXYGEN_SHOULD_SKIP_THIS

#include "lang.h"

/**
 * @brief Overload @p op on a number of arguments.
 */
#define AGONY_PP_OVERLOAD(op, ...) c(AGONY_PP_PRIVATE_OVERLOAD, v(op) v(__VA_ARGS__))

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#define AGONY_PP_PRIVATE_OVERLOAD(op, ...)                                                         \
    c(AGONY_PP_CAT, v(op) c(AGONY_PP_PRIVATE_VARIADICS_COUNT, v(__VA_ARGS__)))

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // AGONY_PP_OVERLOAD_H
