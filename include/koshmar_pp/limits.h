/**
 * @file
 * @brief Implementation limits.
 */

#ifndef KOSHMAR_PP_LIMITS_H
#define KOSHMAR_PP_LIMITS_H

/**
 * @brief The maximum supported unsigned integer.
 */
#define KOSHMAR_PP_UINT_MAX 1023

/**
 * @brief How many times an operation can be called during recursion.
 */
#define KOSHMAR_PP_REC_LIMIT 1024

/**
 * @brief How many times an operation can be called in #KOSHMAR_PP_WHILE.
 */
#define KOSHMAR_PP_WHILE_LIMIT KOSHMAR_PP_REC_LIMIT

#endif // KOSHMAR_PP_LIMITS_H
