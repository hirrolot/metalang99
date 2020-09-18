#include "../include/koshmar_pp/stringify.h"

#include <string.h>

{
#define X abc

    assert(strcmp(KOSHMAR_PP_STRINGIFY(X), "abc") == 0);
    assert(strcmp(KOSHMAR_PP_PRIMITIVE_STRINGIFY(X), "X") == 0);

#undef X
}
