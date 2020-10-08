#include "../test.h"

#include "../../include/agony_pp/aux.h"
#include "../../include/agony_pp/variadics.h"

#include <string.h>

TEST(AGONY_PP_VARIADICS_HEAD(51, 21, 1, 7378) == 51);
TEST(AGONY_PP_VARIADICS_HEAD(981, ) == 981);

#define CHECK_TAIL(a, b, c, d)                                                                     \
    TEST(a == 51);                                                                                 \
    TEST(b == 21);                                                                                 \
    TEST(c == 1);                                                                                  \
    TEST(d == 7378);

TEST(AGONY_PP_VARIADICS_TAIL(120, 19801) == 19801);
AGONY_PP_CALL_MACRO(CHECK_TAIL, AGONY_PP_VARIADICS_TAIL(9191, 51, 21, 1, 7378))

#undef CHECK_TAIL
