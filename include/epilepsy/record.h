/**
 * @file
 * Record types.
 */

#ifndef EPILEPSY_record_H
#define EPILEPSY_record_H

#include <epilepsy/list.h>

// Desugaring {
/**
 * Constructs an instance of a record type.
 */
#define EPILEPSY_record(...) EPILEPSY_call(EPILEPSY_record, __VA_ARGS__)

/**
 * Extracts a field of a record type.
 */
#define EPILEPSY_get(record, i) EPILEPSY_call(EPILEPSY_get, record i)
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define EPILEPSY_record_IMPL(...)    EPILEPSY_list(v(__VA_ARGS__))
#define EPILEPSY_get_IMPL(record, i) EPILEPSY_listGet(v(record), v(i))
// }

// Arity specifiers {
#define EPILEPSY_record_ARITY 1
#define EPILEPSY_get_ARITY    2
// }

// Aliases {
#ifndef EPILEPSY_NO_SMALL_PREFIX

#define E_record EPILEPSY_record
#define E_get    EPILEPSY_get

#endif // EPILEPSY_NO_SMALL_PREFIX
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_record_H
