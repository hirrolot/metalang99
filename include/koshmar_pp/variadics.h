/**
 * @file
 * @brief Utilities for variadic macros.
 */

#ifndef KOSHMAR_PP_VARIADICS_H
#define KOSHMAR_PP_VARIADICS_H

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#include "variadics/count.h"
#include "variadics/get.h"

#endif // DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Computes a count of the provided arguments.
 */
#define KOSHMAR_PP_VARIADICS_COUNT(...) KOSHMAR_PP_PRIVATE_VARIADICS_COUNT(__VA_ARGS__)

/**
 * @brief Extracts a head of the provided arguments.
 */
#define KOSHMAR_PP_VARIADICS_HEAD(...) KOSHMAR_PP_PRIVATE_VARIADICS_HEAD(__VA_ARGS__)

/**
 * @brief Extracts a tail of the provided arguments.
 */
#define KOSHMAR_PP_VARIADICS_TAIL(...) KOSHMAR_PP_PRIVATE_VARIADICS_TAIL(__VA_ARGS__)

#endif // KOSHMAR_PP_VARIADICS_H
