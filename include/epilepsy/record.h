/**
 * @file
 * @brief Record types.
 */

#ifndef EPILEPSY_RECORD_H
#define EPILEPSY_RECORD_H

#include <epilepsy/list.h>

/**
 * @brief Constructs a record.
 */
#define EPILEPSY_RECORD(...) EPILEPSY_LIST(__VA_ARGS__)

/**
 * @brief Extracts a field from a record.
 */
#define EPILEPSY_RECORD_GET(record, i) EPILEPSY_LIST_GET(record, i)

#endif // EPILEPSY_RECORD_H
