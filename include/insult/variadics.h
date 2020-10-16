/**
 * @file
 * @brief Utilities for variadic macros.
 */

#ifndef INSULT_VARIADICS_H
#define INSULT_VARIADICS_H

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#include "variadics/count.h"
#include "variadics/get.h"

#endif // DOXYGEN_SHOULD_SKIP_THIS

#include "lang.h"

/**
 * @brief Computes a count of the provided arguments.
 */
#define INSULT_VARIADICS_COUNT(...) c(INSULT_VARIADICS_COUNT_REAL, __VA_ARGS__)

/**
 * @brief Extracts a head of the provided arguments.
 */
#define INSULT_VARIADICS_HEAD(...) c(INSULT_VARIADICS_HEAD_REAL, __VA_ARGS__)

/**
 * @brief Extracts a tail of the provided arguments.
 */
#define INSULT_VARIADICS_TAIL(...) c(INSULT_VARIADICS_TAIL_REAL, __VA_ARGS__)

#endif // INSULT_VARIADICS_H
