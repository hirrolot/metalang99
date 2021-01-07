#include <epilepsy/assert.h>
#include <epilepsy/variadics.h>

EPILEPSY_assertEq(EPILEPSY_variadicsHead(v(51) v(21) v(1) v(7378)), v(51));
EPILEPSY_assertEq(EPILEPSY_variadicsHead(v(51) v(21) v(1) v(7378)), v(51));

#define CHECK_TAIL_IMPL(a, b, c, d)                                                                \
    v(EPILEPSY_assertPlain(a == 51, ""); EPILEPSY_assertPlain(b == 21, "");                        \
      EPILEPSY_assertPlain(c == 1, "");                                                            \
      EPILEPSY_assertPlain(d == 7378, "");)

EPILEPSY_assertEq(EPILEPSY_variadicsTail(v(120) v(19801)), v(19801));
// EPILEPSY_eval(EPILEPSY_call(CHECK_TAIL, EPILEPSY_call(EPILEPSY_variadicsTail, v(9191) v(51)
// v(21) v(7378))))

#undef CHECK_TAIL_IMPL
