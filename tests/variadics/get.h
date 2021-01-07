#include <epilepsy/assert.h>
#include <epilepsy/variadics.h>

epAssertEq(epVariadicsHead(v(51) v(21) v(1) v(7378)), v(51));
epAssertEq(epVariadicsHead(v(51) v(21) v(1) v(7378)), v(51));

#define CHECK_TAIL_IMPL(a, b, c, d)                                                                \
    v(epAssertPlain(a == 51, ""); epAssertPlain(b == 21, ""); epAssertPlain(c == 1, "");           \
      epAssertPlain(d == 7378, "");)

epAssertEq(epVariadicsTail(v(120) v(19801)), v(19801));
// epEval(epCall(CHECK_TAIL, epCall(epVariadicsTail, v(9191) v(51)
// v(21) v(7378))))

#undef CHECK_TAIL_IMPL
