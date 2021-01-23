#include <epilepsy/assert.h>
#include <epilepsy/control.h>

// E_times {
E_assertEmpty(E_times(v(0), v(~, ~, ~)));

#define CHECK(...) CHECK_AUX(__VA_ARGS__)
#define CHECK_AUX(a, b, c, d, e, f)                                                                \
    E_assertPlain(a == 3 && b == 3 && c == 3 && d == 3 && e == 3 && f == 7)

CHECK(E_eval(E_times(v(5), v(3, ))) 7);

#undef CHECK
#undef CHECK_AUX
// }
