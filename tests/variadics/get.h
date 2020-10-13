#include "../test.h"

#include "../../include/agony_pp/eval.h"
#include "../../include/agony_pp/lang.h"
#include "../../include/agony_pp/variadics.h"

#include <assert.h>

TEST_EQ(AGONY_PP_VARIADICS_HEAD(v(51) v(21) v(1) v(7378)), v(51));
TEST_EQ(AGONY_PP_VARIADICS_HEAD(v(51) v(21) v(1) v(7378)), v(51));

#define CHECK_TAIL(a, b, c, d)                                                                     \
    v(static_assert(a == 51, ""); static_assert(b == 21, ""); static_assert(c == 1, "");           \
      static_assert(d == 7378, "");)

TEST_EQ(AGONY_PP_VARIADICS_TAIL(v(120) v(19801)), v(19801));
// AGONY_PP_EVAL(c(CHECK_TAIL, c(AGONY_PP_VARIADICS_TAIL, v(9191) v(51) v(21) v(7378))))

#undef CHECK_TAIL
