#include <epilepsy/assert.h>
#include <epilepsy/variadics.h>

E_assertEq(E_variadicsHead(v(51) v(21) v(1) v(7378)), v(51));
E_assertEq(E_variadicsHead(v(51) v(21) v(1) v(7378)), v(51));

#define CHECK_TAIL_IMPL(a, b, c, d)                                                                \
    v(E_assertPlain(a == 51, ""); E_assertPlain(b == 21, ""); E_assertPlain(c == 1, "");           \
      E_assertPlain(d == 7378, "");)

E_assertEq(E_variadicsTail(v(120) v(19801)), v(19801));
// E_eval(E_call(CHECK_TAIL, E_call(E_variadicsTail, v(9191) v(51)
// v(21) v(7378))))

#undef CHECK_TAIL_IMPL
