#include <epilepsy/assert.h>
#include <epilepsy/overload.h>
#include <epilepsy/uint.h>

// EPILEPSY_overloadCall

#define X_IMPL(...)    EPILEPSY_overloadCall(v(X_), v(__VA_ARGS__))
#define X_1_IMPL(a)    v(EPILEPSY_assertPlain(a == 123);)
#define X_2_IMPL(a, b) v(EPILEPSY_assertPlain(a == 93145); EPILEPSY_assertPlain(b == 456);)
#define X_7_IMPL(a, b, c, d, e, f, g)                                                              \
    v(EPILEPSY_assertPlain(a == 1516); EPILEPSY_assertPlain(b == 1); EPILEPSY_assertPlain(c == 9); \
      EPILEPSY_assertPlain(d == 111);                                                              \
      EPILEPSY_assertPlain(e == 119);                                                              \
      EPILEPSY_assertPlain(f == 677);                                                              \
      EPILEPSY_assertPlain(g == 62);)

EPILEPSY_eval(EPILEPSY_call(X, v(123))) EPILEPSY_eval(EPILEPSY_call(X, v(93145) v(456)))
    EPILEPSY_eval(EPILEPSY_call(X, v(1516) v(1) v(9) v(111) v(119) v(677) v(62)))

#undef X_IMPL
#undef X_1_IMPL
#undef X_2_IMPL
#undef X_7_IMPL

// EPILEPSY_overload

#define X_IMPL(...) EPILEPSY_overload(v(X_), v(__VA_ARGS__))
#define X_1         27
#define X_2         12
#define X_3         0
#define X_8         7

        EPILEPSY_assertEq(EPILEPSY_call(X, v(~)), v(27));
EPILEPSY_assertEq(EPILEPSY_call(X, v(~) v(~)), v(12));
EPILEPSY_assertEq(EPILEPSY_call(X, v(~) v(~) v(~)), v(0));
EPILEPSY_assertEq(EPILEPSY_call(X, v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~)), v(7));

// An empty token list is also an argument.
EPILEPSY_assertEq(EPILEPSY_call(X, v()), v(27));
EPILEPSY_assertEq(EPILEPSY_call(X, v() v()), v(12));
EPILEPSY_assertEq(EPILEPSY_call(X, v() v() v()), v(0));
EPILEPSY_assertEq(EPILEPSY_call(X, v() v() v() v() v() v() v() v()), v(7));

#undef X_IMPL
#undef X_1
#undef X_2
#undef X_3
#undef X_8
