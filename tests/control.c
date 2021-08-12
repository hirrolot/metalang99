#include <metalang99/assert.h>
#include <metalang99/control.h>
#include <metalang99/logical.h>

// ML99_if {
ML99_ASSERT_EQ(ML99_if(ML99_true(), v(24), v(848)), v(24));
ML99_ASSERT_EQ(ML99_if(ML99_true(), v(1549), v(1678)), v(1549));

ML99_ASSERT_EQ(ML99_if(ML99_false(), v(516), v(115)), v(115));
ML99_ASSERT_EQ(ML99_if(ML99_false(), v(10), v(6)), v(6));
// }

#define CHECK(...)         CHECK_AUX(__VA_ARGS__)
#define CHECK_AUX(a, b, c) ML99_ASSERT_UNEVAL(a == 1 && b == 2 && c == 3)

#define X 1, 2, 3

// ML99_IF {
ML99_ASSERT_UNEVAL(ML99_IF(ML99_TRUE(), 24, 848) == 24);
ML99_ASSERT_UNEVAL(ML99_IF(ML99_FALSE(), 516, 115) == 115);

// Ensure that a branch can expand to multiple commas (`X`).
CHECK(ML99_IF(ML99_TRUE(), X, ~));
CHECK(ML99_IF(ML99_FALSE(), ~, X));
// }

#undef CHECK
#undef CHECK_AUX
#undef X

#define X(...)    ML99_OVERLOAD(X_, __VA_ARGS__)
#define X_1(a)    ML99_ASSERT_UNEVAL(a == 123)
#define X_2(a, b) ML99_ASSERT_UNEVAL(a == 93145 && b == 456)
#define X_7(a, b, c, d, e, f, g)                                                                   \
    ML99_ASSERT_UNEVAL(a == 1516 && b == 1 && c == 9 && d == 111 && e == 119 && f == 677 && g == 62)

// ML99_OVERLOAD {
X(123);
X(93145, 456);
X(1516, 1, 9, 111, 119, 677, 62);
// }

#undef X_IMPL
#undef X_1_IMPL
#undef X_2_IMPL
#undef X_7_IMPL

#define CHECK_EXPAND(args) CHECK(args)

#define CHECK(_, x, y, z) ML99_ASSERT_UNEVAL(x == 0 && y == 1 && z == 2)
#define F_IMPL(x)         v(, x)
#define F_ARITY           1

// ML99_repeat {
CHECK_EXPAND(ML99_EVAL(ML99_repeat(v(3), v(F))));
// }

#undef CHECK
#undef F_IMPL
#undef F_ARITY

#define CHECK(_, x, y, z) ML99_ASSERT_UNEVAL(x == 5 && y == 5 && z == 5)

// ML99_times {
CHECK_EXPAND(ML99_EVAL(ML99_times(v(3), v(, 5))));
// }

#undef CHECK

#undef CHECK_EXPAND

int main(void) {}
