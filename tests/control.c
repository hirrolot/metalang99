#include <metalang99/assert.h>
#include <metalang99/control.h>
#include <metalang99/util.h>

// ML99_if {
ML99_assertEq(ML99_if(v(ML99_true), v(24), v(848)), v(24));
ML99_assertEq(ML99_if(v(ML99_true), v(1549), v(1678)), v(1549));

ML99_assertEq(ML99_if(v(ML99_false), v(516), v(115)), v(115));
ML99_assertEq(ML99_if(v(ML99_false), v(10), v(6)), v(6));
// }

// ML99_overload {
#define X(...)    ML99_overload(X_, __VA_ARGS__)
#define X_1(a)    ML99_assertPlain(a == 123)
#define X_2(a, b) ML99_assertPlain(a == 93145 && b == 456)
#define X_7(a, b, c, d, e, f, g)                                                                   \
    ML99_assertPlain(a == 1516 && b == 1 && c == 9 && d == 111 && e == 119 && f == 677 && g == 62)

X(123);
X(93145, 456);
X(1516, 1, 9, 111, 119, 677, 62);

#undef X_IMPL
#undef X_1_IMPL
#undef X_2_IMPL
#undef X_7_IMPL
// }

int main(void) {}
