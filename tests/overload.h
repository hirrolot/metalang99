#include "../include/koshmar_pp/overload.h"

{
#define X(...)                   KOSHMAR_PP_OVERLOAD(X_, __VA_ARGS__)(__VA_ARGS__)
#define X_1(a)                   (a)
#define X_2(a, b)                (a - b)
#define X_7(a, b, c, d, e, f, g) (a + b + c + d + e + f + g)

    assert(X(123) == 123);
    assert(X(123, 456) == 123 - 456);
    assert(X(1516, 1, 9, 111, 119, 677, 62) == 1516 + 1 + 9 + 111 + 119 + 677 + 62);

    // KOSHMAR_PP_OVERLOAD(X_, ) expands to 1, then X_1(123) expands to to (123).
    assert(KOSHMAR_PP_OVERLOAD(X_, )(123) == 123);

#undef X
#undef X_1
#undef X_2
#undef X_7
}
