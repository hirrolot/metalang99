#include <epilepsy/assert.h>
#include <epilepsy/eval.h>
#include <epilepsy/lang.h>
#include <epilepsy/overload.h>
#include <epilepsy/uint.h>

// EPILEPSY_OVERLOAD_CALL

#define X(...) EPILEPSY_OVERLOAD_CALL(v(X_), v(__VA_ARGS__))
#define X_1(a) v(EPILEPSY_STATIC_ASSERT_PLAIN(a == 123);)
#define X_2(a, b)                                                                                  \
    v(EPILEPSY_STATIC_ASSERT_PLAIN(a == 93145); EPILEPSY_STATIC_ASSERT_PLAIN(b == 456);)
#define X_7(a, b, c, d, e, f, g)                                                                   \
    v(EPILEPSY_STATIC_ASSERT_PLAIN(a == 1516); EPILEPSY_STATIC_ASSERT_PLAIN(b == 1);               \
      EPILEPSY_STATIC_ASSERT_PLAIN(c == 9);                                                        \
      EPILEPSY_STATIC_ASSERT_PLAIN(d == 111);                                                      \
      EPILEPSY_STATIC_ASSERT_PLAIN(e == 119);                                                      \
      EPILEPSY_STATIC_ASSERT_PLAIN(f == 677);                                                      \
      EPILEPSY_STATIC_ASSERT_PLAIN(g == 62);)

EPILEPSY_EVAL(EPILEPSY_CALL(X, v(123)))
EPILEPSY_EVAL(EPILEPSY_CALL(X, v(93145) v(456)))
EPILEPSY_EVAL(EPILEPSY_CALL(X, v(1516) v(1) v(9) v(111) v(119) v(677) v(62)))

#undef X
#undef X_1
#undef X_2
#undef X_7

// EPILEPSY_OVERLOAD

#define X(...) EPILEPSY_OVERLOAD(v(X_), v(__VA_ARGS__))
#define X_1    27
#define X_2    12
#define X_3    0
#define X_8    7

EPILEPSY_ASSERT_EQ(EPILEPSY_CALL(X, v(~)), v(27));
EPILEPSY_ASSERT_EQ(EPILEPSY_CALL(X, v(~) v(~)), v(12));
EPILEPSY_ASSERT_EQ(EPILEPSY_CALL(X, v(~) v(~) v(~)), v(0));
EPILEPSY_ASSERT_EQ(EPILEPSY_CALL(X, v(~) v(~) v(~) v(~) v(~) v(~) v(~) v(~)), v(7));

// An empty token list is also an argument.
EPILEPSY_ASSERT_EQ(EPILEPSY_CALL(X, v()), v(27));
EPILEPSY_ASSERT_EQ(EPILEPSY_CALL(X, v() v()), v(12));
EPILEPSY_ASSERT_EQ(EPILEPSY_CALL(X, v() v() v()), v(0));
EPILEPSY_ASSERT_EQ(EPILEPSY_CALL(X, v() v() v() v() v() v() v() v()), v(7));

#undef X
#undef X_1
#undef X_2
#undef X_3
#undef X_8
