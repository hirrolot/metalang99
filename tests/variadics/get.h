#include <epilepsy/assert.h>
#include <epilepsy/variadics.h>

// E_variadicsHead {
E_assertEq(E_variadicsHead(v(19, 8)), v(19));
E_assertEq(E_variadicsHead(v(19, 8, 7378)), v(19));
// }

// E_variadicsTail {
#define CHECK_TAIL(...) CHECK_TAIL_AUX(__VA_ARGS__)
#define CHECK_TAIL_AUX(a, b, c, d)                                                                 \
    E_assertPlain(a == 51);                                                                        \
    E_assertPlain(b == 21);                                                                        \
    E_assertPlain(c == 1);                                                                         \
    E_assertPlain(d == 7378)

CHECK_TAIL(E_eval(E_variadicsTail(v(9191, 51, 21, 1, 7378))));

#undef CHECK_TAIL
#undef CHECK_TAIL_AUX
// }
