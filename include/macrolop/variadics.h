/**
 * @file
 * @brief Utilities for variadic macros.
 */

#ifndef MACROLOP_VARIADICS_H
#define MACROLOP_VARIADICS_H

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#include "variadics/count.h"
#include "variadics/get.h"

#endif // DOXYGEN_SHOULD_SKIP_THIS

#include "lang.h"

/**
 * @brief Computes a count of the provided arguments.
 */
#define MACROLOP_VARIADICS_COUNT(...) call(MACROLOP_VARIADICS_COUNT_REAL, __VA_ARGS__)

/**
 * @brief Extracts a head of the provided arguments.
 */
#define MACROLOP_VARIADICS_HEAD(...) call(MACROLOP_VARIADICS_HEAD_REAL, __VA_ARGS__)

/**
 * @brief Extracts a tail of the provided arguments.
 */
#define MACROLOP_VARIADICS_TAIL(...) call(MACROLOP_VARIADICS_TAIL_REAL, __VA_ARGS__)

#endif // MACROLOP_VARIADICS_H
