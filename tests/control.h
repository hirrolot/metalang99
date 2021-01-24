#include <epilepsy/assert.h>
#include <epilepsy/control.h>

// E_if {
E_assertEq(E_if(v(E_true), v(24), v(848)), v(24));
E_assertEq(E_if(v(E_true), v(1549), v(1678)), v(1549));

E_assertEq(E_if(v(E_false), v(516), v(115)), v(115));
E_assertEq(E_if(v(E_false), v(10), v(6)), v(6));
// }

// E_times {
E_assertEmpty(E_times(v(0), v(~, ~, ~)));

#define CHECK(...) CHECK_AUX(__VA_ARGS__)
#define CHECK_AUX(a, b, c, d, e, f)                                                                \
    E_assertPlain(a == 3 && b == 3 && c == 3 && d == 3 && e == 3 && f == 7)

CHECK(E_eval(E_times(v(5), v(3, ))) 7);

#undef CHECK
#undef CHECK_AUX
// }
