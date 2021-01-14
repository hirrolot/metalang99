#include <epilepsy/assert.h>
#include <epilepsy/overload.h>

// E_overload {
#define X_IMPL(...)    E_overload(v(X_), v(__VA_ARGS__))
#define X_1_IMPL(a)    v(E_assertPlain(a == 123))
#define X_2_IMPL(a, b) v(E_assertPlain(a == 93145); E_assertPlain(b == 456))
#define X_7_IMPL(a, b, c, d, e, f, g)                                                              \
    v(E_assertPlain(a == 1516); E_assertPlain(b == 1); E_assertPlain(c == 9);                      \
      E_assertPlain(d == 111);                                                                     \
      E_assertPlain(e == 119);                                                                     \
      E_assertPlain(f == 677);                                                                     \
      E_assertPlain(g == 62))

E_eval(E_call(X, v(123)));
E_eval(E_call(X, v(93145, 456)));
E_eval(E_call(X, v(1516, 1, 9, 111, 119, 677, 62)));

#undef X_IMPL
#undef X_1_IMPL
#undef X_2_IMPL
#undef X_7_IMPL
// }
