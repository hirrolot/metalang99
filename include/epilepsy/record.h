/**
 * @file
 * @brief Record types.
 */

#ifndef EPILEPSY_RECORD_H
#define EPILEPSY_RECORD_H

#include <epilepsy/list.h>

// Desugaring {
#define EPILEPSY_RECORD(...)    call(EPILEPSY_RECORD_IMPL, __VA_ARGS__)
#define EPILEPSY_GET(record, i) call(EPILEPSY_GET_IMPL, record i)
// }

// Implementation {
/**
 * @brief Constructs a record.
 */
#define EPILEPSY_RECORD_IMPL(...) EPILEPSY_List(v(__VA_ARGS__))

/**
 * @brief Extracts a field from a record.
 */
#define EPILEPSY_GET_IMPL(record, i) EPILEPSY_ListGet(v(record), v(i))
// }

#endif // EPILEPSY_RECORD_H
