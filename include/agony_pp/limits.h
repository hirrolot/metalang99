/**
 * @file
 * @brief Implementation limits.
 */

#ifndef AGONY_PP_LIMITS_H
#define AGONY_PP_LIMITS_H

/**
 * @brief The maximum supported unsigned integer.
 */
#define AGONY_PP_UINT_MAX 1023

/**
 * @brief How many times an operation can be called during recursion.
 */
#define AGONY_PP_REC_LIMIT 1024

/**
 * @brief How many times an operation can be called in #AGONY_PP_WHILE.
 */
#define AGONY_PP_WHILE_LIMIT AGONY_PP_REC_LIMIT

#endif // AGONY_PP_LIMITS_H
