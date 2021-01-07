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
#define epRecord(...) epCall(epRecord, __VA_ARGS__)

/**
 * Extracts a field of a record type.
 */
#define epGet(record, i) epCall(epGet, record i)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define epRecord_IMPL(...)    epList(v(__VA_ARGS__))
#define epGet_IMPL(record, i) epListGet(v(record), v(i))
// }

// Arity specifiers {
#define epRecord_ARITY 1
#define epGet_ARITY    2
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_RECORD_H
