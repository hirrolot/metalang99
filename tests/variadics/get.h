#include "../test.h"

#include "../../include/agony_pp/eval.h"
#include "../../include/agony_pp/lang.h"

#include "../../include/agony_pp/variadics.h"

TEST(AGONY_PP_EVAL(c(AGONY_PP_VARIADICS_HEAD, v(51) v(21) v(1) v(7378))) == 51);
TEST(AGONY_PP_EVAL(c(AGONY_PP_VARIADICS_HEAD, v(51) v(21) v(1) v(7378))) == 51);

#define CHECK_TAIL(a, b, c, d) v(TEST(a == 51); TEST(b == 21); TEST(c == 1); TEST(d == 7378);)

TEST(AGONY_PP_EVAL(c(AGONY_PP_VARIADICS_TAIL, v(120) v(19801))) == 19801);
// AGONY_PP_EVAL(c(CHECK_TAIL, c(AGONY_PP_VARIADICS_TAIL, v(9191) v(51) v(21) v(7378))))

#undef CHECK_TAIL
