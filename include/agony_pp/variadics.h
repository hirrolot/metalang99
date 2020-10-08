/**
 * @file
 * @brief Utilities for variadic macros.
 */

#ifndef AGONY_PP_VARIADICS_H
#define AGONY_PP_VARIADICS_H

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#include "variadics/count.h"
#include "variadics/get.h"

#endif // DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Computes a count of the provided arguments.
 */
#define AGONY_PP_VARIADICS_COUNT(...) AGONY_PP_PRIVATE_VARIADICS_COUNT(__VA_ARGS__)

/**
 * @brief Extracts a head of the provided arguments.
 */
#define AGONY_PP_VARIADICS_HEAD(...) AGONY_PP_PRIVATE_VARIADICS_HEAD(__VA_ARGS__)

/**
 * @brief Extracts a tail of the provided arguments.
 */
#define AGONY_PP_VARIADICS_TAIL(...) AGONY_PP_PRIVATE_VARIADICS_TAIL(__VA_ARGS__)

#endif // AGONY_PP_VARIADICS_H
