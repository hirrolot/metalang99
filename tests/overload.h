#include "assert.h"

#include "../include/macrolop/eval.h"
#include "../include/macrolop/lang.h"
#include "../include/macrolop/overload.h"

#include <assert.h>

// MACROLOP_OVERLOAD_CALL

#define X(...)    MACROLOP_OVERLOAD_CALL(v(X_), v(__VA_ARGS__))
#define X_1(a)    v(static_assert(a == 123, "");)
#define X_2(a, b) v(static_assert(a == 93145, ""); static_assert(b == 456, "");)
#define X_7(a, b, c, d, e, f, g)                                                                   \
    v(static_assert(a == 1516, ""); static_assert(b == 1, ""); static_assert(c == 9, "");          \
      static_assert(d == 111, ""); static_assert(e == 119, ""); static_assert(f == 677, "");       \
      static_assert(g == 62, "");)

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

ASSERT_EQ(call(X, v(~)), v(27));
ASSERT_EQ(call(X, v(~) v(~)), v(12));
ASSERT_EQ(call(X, v(~) v(~) v(~)), v(0));
ASSERT_EQ(call(X, v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~)), v(7));

// An empty token list is also an argument.
ASSERT_EQ(call(X, v()), v(27));
ASSERT_EQ(call(X, v() v()), v(12));
ASSERT_EQ(call(X, v() v() v()), v(0));
ASSERT_EQ(call(X, v() v() v() v() v() v() v() v()), v(7));

#undef X
#undef X_1
#undef X_2
#undef X_3
#undef X_8
