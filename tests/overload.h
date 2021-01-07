#include <epilepsy/assert.h>
#include <epilepsy/overload.h>
#include <epilepsy/uint.h>

// epOverloadCall

#define X_IMPL(...)    epOverloadCall(v(X_), v(__VA_ARGS__))
#define X_1_IMPL(a)    v(epAssertPlain(a == 123);)
#define X_2_IMPL(a, b) v(epAssertPlain(a == 93145); epAssertPlain(b == 456);)
#define X_7_IMPL(a, b, c, d, e, f, g)                                                              \
    v(epAssertPlain(a == 1516); epAssertPlain(b == 1); epAssertPlain(c == 9);                      \
      epAssertPlain(d == 111);                                                                     \
      epAssertPlain(e == 119);                                                                     \
      epAssertPlain(f == 677);                                                                     \
      epAssertPlain(g == 62);)

epEval(epCall(X, v(123))) epEval(epCall(X, v(93145) v(456)))
    epEval(epCall(X, v(1516) v(1) v(9) v(111) v(119) v(677) v(62)))

#undef X_IMPL
#undef X_1_IMPL
#undef X_2_IMPL
#undef X_7_IMPL

// epOverload

#define X_IMPL(...) epOverload(v(X_), v(__VA_ARGS__))
#define X_1         27
#define X_2         12
#define X_3         0
#define X_8         7

        epAssertEq(epCall(X, v(~)), v(27));
epAssertEq(epCall(X, v(~) v(~)), v(12));
epAssertEq(epCall(X, v(~) v(~) v(~)), v(0));
epAssertEq(epCall(X, v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~)), v(7));

// An empty token list is also an argument.
epAssertEq(epCall(X, v()), v(27));
epAssertEq(epCall(X, v() v()), v(12));
epAssertEq(epCall(X, v() v() v()), v(0));
epAssertEq(epCall(X, v() v() v() v() v() v() v() v()), v(7));

#undef X_IMPL
#undef X_1
#undef X_2
#undef X_3
#undef X_8
