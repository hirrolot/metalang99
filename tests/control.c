#include <metalang99/assert.h>
#include <metalang99/control.h>
#include <metalang99/util.h>

// M_if {
M_assertEq(M_if(v(M_true), v(24), v(848)), v(24));
M_assertEq(M_if(v(M_true), v(1549), v(1678)), v(1549));

M_assertEq(M_if(v(M_false), v(516), v(115)), v(115));
M_assertEq(M_if(v(M_false), v(10), v(6)), v(6));
// }

// M_when {
M_assertEq(M_when(v(M_true), v(123)), v(123));
M_assertEmpty(M_when(v(M_false), v(123)));
// }

// M_whenLazy {
M_assertEq(M_call(M_whenLazy(v(M_true), v(M_id)), v(123)), v(123));
M_assertEmpty(M_call(M_whenLazy(v(M_false), v(M_id)), v(123)));
// }

// M_whenLazyPlain {
M_assertPlain(M_whenLazyPlain(M_true, M_idPlain)(123) == 123);
M_assertEmpty(v(M_whenLazyPlain(M_false, M_idPlain)(123)));
// }

// M_overload {
#define X(...)    M_overload(X_, __VA_ARGS__)
#define X_1(a)    M_assertPlain(a == 123)
#define X_2(a, b) M_assertPlain(a == 93145 && b == 456)
#define X_7(a, b, c, d, e, f, g)                                                                   \
    M_assertPlain(a == 1516 && b == 1 && c == 9 && d == 111 && e == 119 && f == 677 && g == 62)

X(123);
X(93145, 456);
X(1516, 1, 9, 111, 119, 677, 62);

#undef X_IMPL
#undef X_1_IMPL
#undef X_2_IMPL
#undef X_7_IMPL
// }

int main(void) {}
