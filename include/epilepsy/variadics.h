/**
 * @file
 * @brief Utilities for variadic macros.
 */

#ifndef EPILEPSY_VARIADICS_H
#define EPILEPSY_VARIADICS_H

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#include <epilepsy/priv/variadics/count.h>

#endif // DOXYGEN_SHOULD_SKIP_THIS

#include <epilepsy/lang.h>

/**
 * @brief Computes a count of the provided arguments.
 */
#define EPILEPSY_VARIADICS_COUNT(...) call(EPILEPSY_VARIADICS_COUNT_REAL, __VA_ARGS__)

/**
 * @brief Extracts a head of the provided arguments.
 */
#define EPILEPSY_VARIADICS_HEAD(...) call(EPILEPSY_VARIADICS_HEAD_REAL, __VA_ARGS__)

/**
 * @brief Extracts a tail of the provided arguments.
 */
#define EPILEPSY_VARIADICS_TAIL(...) call(EPILEPSY_VARIADICS_TAIL_REAL, __VA_ARGS__)

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#define EPILEPSY_VARIADICS_COUNT_REAL(...)   v(EPILEPSY_PRIV_VARIADICS_COUNT(__VA_ARGS__))
#define EPILEPSY_VARIADICS_HEAD_REAL(x, ...) v(x)
#define EPILEPSY_VARIADICS_TAIL_REAL(x, ...) v(__VA_ARGS__)

#endif // DOXYGEN_SHOULD_SKIP_THIS

#endif // EPILEPSY_VARIADICS_H
