#include "../../include/koshmar/call_macro.h"
#include "../../include/koshmar/variadics/get.h"

#include <string.h>

{
#define ARGS 87.2157, "Hello", 123, NULL, bla *bla - bla

    assert(KOSHMAR_CALL_MACRO(KOSHMAR_VARIADICS_HEAD, ARGS) == 87.2157);
    assert(KOSHMAR_VARIADICS_HEAD(981, ) == 981);

#define CHECK_TAIL(hello, _123, null, number)                                                      \
    assert(strcmp(hello, "Hello") == 0);                                                           \
    assert(_123 == 123);                                                                           \
    assert(null == NULL);                                                                          \
    assert(number == bla * bla - bla);

    const int bla = 5;

    KOSHMAR_CALL_MACRO(CHECK_TAIL, KOSHMAR_CALL_MACRO(KOSHMAR_VARIADICS_TAIL, ARGS))

#undef ARGS
#undef CHECK_TAIL
}
