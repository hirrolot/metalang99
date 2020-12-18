/**
 * @file
 * @brief Record types.
 */

#ifndef EPILEPSY_RECORD_H
#define EPILEPSY_RECORD_H

#include <epilepsy/list.h>

#define EPILEPSY_RECORD(...)           call(EPILEPSY_RECORD_REAL, __VA_ARGS__)
#define EPILEPSY_RECORD_GET(record, i) call(EPILEPSY_RECORD_GET_REAL, record i)

/**
 * @brief Constructs a record.
 */
#define EPILEPSY_RECORD_REAL(...) EPILEPSY_List(v(__VA_ARGS__))

/**
 * @brief Extracts a field from a record.
 */
#define EPILEPSY_RECORD_GET_REAL(record, i) EPILEPSY_ListGet(v(record), v(i))

#endif // EPILEPSY_RECORD_H
