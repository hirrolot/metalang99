#include <macrolop/assert.h>
#include <macrolop/eval.h>
#include <macrolop/lang.h>
#include <macrolop/overload.h>

// MACROLOP_OVERLOAD_CALL

#define X(...)    MACROLOP_OVERLOAD_CALL(v(X_), v(__VA_ARGS__))
#define X_1(a)    v(MACROLOP_STATIC_ASSERT(a == 123);)
#define X_2(a, b) v(MACROLOP_STATIC_ASSERT(a == 93145); MACROLOP_STATIC_ASSERT(b == 456);)
#define X_7(a, b, c, d, e, f, g)                                                                   \
    v(MACROLOP_STATIC_ASSERT(a == 1516); MACROLOP_STATIC_ASSERT(b == 1);                           \
      MACROLOP_STATIC_ASSERT(c == 9); MACROLOP_STATIC_ASSERT(d == 111);                            \
      MACROLOP_STATIC_ASSERT(e == 119); MACROLOP_STATIC_ASSERT(f == 677);                          \
      MACROLOP_STATIC_ASSERT(g == 62);)

MACROLOP_EVAL(call(X, v(123)))
MACROLOP_EVAL(call(X, v(93145) v(456)))
MACROLOP_EVAL(call(X, v(1516) v(1) v(9) v(111) v(119) v(677) v(62)))

#undef X
#undef X_1
#undef X_2
#undef X_7

// MACROLOP_OVERLOAD

#define X(...) MACROLOP_OVERLOAD(v(X_), v(__VA_ARGS__))
#define X_1    27
#define X_2    12
#define X_3    0
#define X_8    7

MACROLOP_ASSERT_EQ(call(X, v(~)), v(27));
MACROLOP_ASSERT_EQ(call(X, v(~) v(~)), v(12));
MACROLOP_ASSERT_EQ(call(X, v(~) v(~) v(~)), v(0));
MACROLOP_ASSERT_EQ(call(X, v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~)), v(7));

// An empty token list is also an argument.
MACROLOP_ASSERT_EQ(call(X, v()), v(27));
MACROLOP_ASSERT_EQ(call(X, v() v()), v(12));
MACROLOP_ASSERT_EQ(call(X, v() v() v()), v(0));
MACROLOP_ASSERT_EQ(call(X, v() v() v() v() v() v() v() v()), v(7));

#undef X
#undef X_1
#undef X_2
#undef X_3
#undef X_8
