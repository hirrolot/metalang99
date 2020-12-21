/**
 * @file
 * @brief Utilities for variadic macros.
 */

#ifndef EPILEPSY_VARIADICS_H
#define EPILEPSY_VARIADICS_H

#include <epilepsy/lang.h>
#include <epilepsy/priv/variadics/count.h>

// Desugaring {
/**
 * @brief Computes a count of provided arguments.
 */
#define EPILEPSY_VARIADICS_COUNT(...) call(EPILEPSY_VARIADICS_COUNT_IMPL, __VA_ARGS__)

/**
 * @brief Extracts a head of provided arguments.
 */
#define EPILEPSY_VARIADICS_HEAD(...) call(EPILEPSY_VARIADICS_HEAD_IMPL, __VA_ARGS__)

/**
 * @brief Extracts a tail of provided arguments.
 */
#define EPILEPSY_VARIADICS_TAIL(...) call(EPILEPSY_VARIADICS_TAIL_IMPL, __VA_ARGS__)
// }

// Implementation {
#define EPILEPSY_VARIADICS_COUNT_IMPL(...)   v(EPILEPSY_PRIV_VARIADICS_COUNT(__VA_ARGS__))
#define EPILEPSY_VARIADICS_HEAD_IMPL(x, ...) v(x)
#define EPILEPSY_VARIADICS_TAIL_IMPL(x, ...) v(__VA_ARGS__)
// }

#endif // EPILEPSY_VARIADICS_H
