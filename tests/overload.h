#include "test.h"

#include "../include/koshmar_pp/overload.h"

#define X(...) KOSHMAR_PP_OVERLOAD(X_, __VA_ARGS__)(__VA_ARGS__)
#define X_1(a) TEST(a == 123);
#define X_2(a, b)                                                                                  \
    TEST(a == 93145);                                                                              \
    TEST(b == 456);
#define X_7(a, b, c, d, e, f, g)                                                                   \
    TEST(a == 1516);                                                                               \
    TEST(b == 1);                                                                                  \
    TEST(c == 9);                                                                                  \
    TEST(d == 111);                                                                                \
    TEST(e == 119);                                                                                \
    TEST(f == 677);                                                                                \
    TEST(g == 62);

X(123)
X(93145, 456)
X(1516, 1, 9, 111, 119, 677, 62)

// An argument consisting of an empty token list is also an argument, so the line below is
// equivalent to X_1(123).
KOSHMAR_PP_OVERLOAD(X_, )(123)

#undef X
#undef X_1
#undef X_2
#undef X_7
