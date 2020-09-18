#include "../include/koshmar/call_macro.h"

#include <string.h>

{
#define X(bring, it, on, home)                                                                     \
    assert(strcmp(bring, "Bring") == 0);                                                           \
    assert(strcmp(it, "It") == 0);                                                                 \
    assert(strcmp(on, "On") == 0);                                                                 \
    assert(strcmp(home, "Home") == 0);

#define ARGS "Bring", "It", "On", "Home"

    // X(ARGS) doesn't work because ARGS is treated as a single argument.
    KOSHMAR_CALL_MACRO(X, ARGS)

#undef X
#undef ARGS
}
