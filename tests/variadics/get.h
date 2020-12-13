#include <macrolop/assert.h>
#include <macrolop/eval.h>
#include <macrolop/lang.h>
#include <macrolop/variadics.h>

MACROLOP_ASSERT_EQ(MACROLOP_VARIADICS_HEAD(v(51) v(21) v(1) v(7378)), v(51));
MACROLOP_ASSERT_EQ(MACROLOP_VARIADICS_HEAD(v(51) v(21) v(1) v(7378)), v(51));

#define CHECK_TAIL(a, b, c, d)                                                                     \
    v(MACROLOP_C_STATIC_ASSERT(a == 51, ""); MACROLOP_C_STATIC_ASSERT(b == 21, "");                \
      MACROLOP_C_STATIC_ASSERT(c == 1, ""); MACROLOP_C_STATIC_ASSERT(d == 7378, "");)

MACROLOP_ASSERT_EQ(MACROLOP_VARIADICS_TAIL(v(120) v(19801)), v(19801));
// MACROLOP_EVAL(call(CHECK_TAIL, call(MACROLOP_VARIADICS_TAIL, v(9191) v(51) v(21) v(7378))))

#undef CHECK_TAIL
