#include <epilepsy/assert.h>
#include <epilepsy/eval.h>
#include <epilepsy/lang.h>
#include <epilepsy/variadics.h>

EPILEPSY_ASSERT_EQ(EPILEPSY_VARIADICS_HEAD(v(51) v(21) v(1) v(7378)), v(51));
EPILEPSY_ASSERT_EQ(EPILEPSY_VARIADICS_HEAD(v(51) v(21) v(1) v(7378)), v(51));

#define CHECK_TAIL(a, b, c, d)                                                                     \
    v(EPILEPSY_C_STATIC_ASSERT(a == 51, ""); EPILEPSY_C_STATIC_ASSERT(b == 21, "");                \
      EPILEPSY_C_STATIC_ASSERT(c == 1, ""); EPILEPSY_C_STATIC_ASSERT(d == 7378, "");)

EPILEPSY_ASSERT_EQ(EPILEPSY_VARIADICS_TAIL(v(120) v(19801)), v(19801));
// EPILEPSY_EVAL(call(CHECK_TAIL, call(EPILEPSY_VARIADICS_TAIL, v(9191) v(51) v(21) v(7378))))

#undef CHECK_TAIL
