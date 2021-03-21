#include <metalang99/assert.h>
#include <metalang99/control.h>
#include <metalang99/tuple.h>
#include <metalang99/util.h>

// ML99_if {
ML99_ASSERT_EQ(ML99_if(ML99_true, v(24), v(848)), v(24));
ML99_ASSERT_EQ(ML99_if(ML99_true, v(1549), v(1678)), v(1549));

ML99_ASSERT_EQ(ML99_if(ML99_false, v(516), v(115)), v(115));
ML99_ASSERT_EQ(ML99_if(ML99_false, v(10), v(6)), v(6));
// }

// ML99_IF {
#define CHECK(...)         CHECK_AUX(__VA_ARGS__)
#define CHECK_AUX(a, b, c) ML99_ASSERT_UNEVAL(a == 1 && b == 2 && c == 3)

#define X 1, 2, 3

// Test multiple commas in branches.
CHECK(ML99_IF(ML99_TRUE, X, ~));
CHECK(ML99_IF(ML99_FALSE, ~, X));

#undef CHECK
#undef CHECK_AUX
#undef X
// }

// ML99_OVERLOAD {
#define X(...)    ML99_OVERLOAD(X_, __VA_ARGS__)
#define X_1(a)    ML99_ASSERT_UNEVAL(a == 123)
#define X_2(a, b) ML99_ASSERT_UNEVAL(a == 93145 && b == 456)
#define X_7(a, b, c, d, e, f, g)                                                                   \
    ML99_ASSERT_UNEVAL(a == 1516 && b == 1 && c == 9 && d == 111 && e == 119 && f == 677 && g == 62)

X(123);
X(93145, 456);
X(1516, 1, 9, 111, 119, 677, 62);

#undef X_IMPL
#undef X_1_IMPL
#undef X_2_IMPL
#undef X_7_IMPL
// }

// ML99_repeat {
#define CHECK(_, x, y, z) ML99_ASSERT_UNEVAL(x == 0 && y == 1 && z == 2)
#define F_IMPL(x)         v(, x)
#define F_ARITY           1

ML99_EVAL(v(CHECK), ML99_tuple(ML99_repeat(v(F), v(3))));

#undef CHECK
#undef F_IMPL
#undef F_ARITY
// }

int main(void) {}
