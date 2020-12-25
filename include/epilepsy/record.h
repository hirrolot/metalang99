/**
 * @file
 * Record types.
 */

#ifndef EPILEPSY_RECORD_H
#define EPILEPSY_RECORD_H

#include <epilepsy/list.h>

// Desugaring {
/**
 * Constructs an instance of a record type.
 */
#define EPILEPSY_RECORD(...) call(EPILEPSY_RECORD_IMPL, __VA_ARGS__)

/**
 * Extracts a field of a record type.
 */
#define EPILEPSY_GET(record, i) call(EPILEPSY_GET_IMPL, record i)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define EPILEPSY_RECORD_IMPL(...)    EPILEPSY_List(v(__VA_ARGS__))
#define EPILEPSY_GET_IMPL(record, i) EPILEPSY_ListGet(v(record), v(i))
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_RECORD_H
