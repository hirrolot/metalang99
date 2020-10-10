#include "test.h"

#include "../include/agony_pp/eval.h"
#include "../include/agony_pp/lang.h"

#include "../include/agony_pp/overload.h"

// AGONY_PP_OVERLOAD_CALL

#define X(...)    c(AGONY_PP_OVERLOAD_CALL, v(X_) v(__VA_ARGS__))
#define X_1(a)    v(TEST(a == 123);)
#define X_2(a, b) v(TEST(a == 93145); TEST(b == 456);)
#define X_7(a, b, c, d, e, f, g)                                                                   \
    v(TEST(a == 1516); TEST(b == 1); TEST(c == 9); TEST(d == 111); TEST(e == 119); TEST(f == 677); \
      TEST(g == 62);)

AGONY_PP_EVAL(c(X, v(123)))
AGONY_PP_EVAL(c(X, v(93145) v(456)))
AGONY_PP_EVAL(c(X, v(1516) v(1) v(9) v(111) v(119) v(677) v(62)))

#undef X
#undef X_1
#undef X_2
#undef X_7

// AGONY_PP_OVERLOAD

#define X(...) c(AGONY_PP_OVERLOAD, v(X_) v(__VA_ARGS__))
#define X_1    27
#define X_2    12
#define X_3    0
#define X_8    7

TEST(AGONY_PP_EVAL(c(X, v(~))) == 27);
TEST(AGONY_PP_EVAL(c(X, v(~) v(~))) == 12);
TEST(AGONY_PP_EVAL(c(X, v(~) v(~) v(~))) == 0);
TEST(AGONY_PP_EVAL(c(X, v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~))) == 7);

// An empty token list is also an argument.
TEST(AGONY_PP_EVAL(c(X, v())) == 27);
TEST(AGONY_PP_EVAL(c(X, v() v())) == 12);
TEST(AGONY_PP_EVAL(c(X, v() v() v())) == 0);
TEST(AGONY_PP_EVAL(c(X, v() v() v() v() v() v() v() v())) == 7);

#undef X
#undef X_1
#undef X_2
#undef X_3
#undef X_8
