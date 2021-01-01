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
#define EPILEPSY_RECORD(...) EPILEPSY_DESUGAR(EPILEPSY_RECORD, __VA_ARGS__)

/**
 * Extracts a field of a record type.
 */
#define EPILEPSY_GET(record, i) EPILEPSY_DESUGAR(EPILEPSY_GET, record i)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define EPILEPSY_RECORD_IMPL(...)    EPILEPSY_List(v(__VA_ARGS__))
#define EPILEPSY_GET_IMPL(record, i) EPILEPSY_ListGet(v(record), v(i))
// }

// Arity specifiers {
#define EPILEPSY_RECORD_IMPL_ARITY 1
#define EPILEPSY_GET_IMPL_ARITY    2
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_RECORD_H
