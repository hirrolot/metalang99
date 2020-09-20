#include "../test.h"

#include "../../include/koshmar_pp/aux.h"
#include "../../include/koshmar_pp/variadics/get.h"

#include <string.h>

TEST(KOSHMAR_PP_VARIADICS_HEAD(51, 21, 1, 7378) == 51);
TEST(KOSHMAR_PP_VARIADICS_HEAD(981, ) == 981);

#define CHECK_TAIL(a, b, c, d)                                                                     \
    TEST(a == 51);                                                                                 \
    TEST(b == 21);                                                                                 \
    TEST(c == 1);                                                                                  \
    TEST(d == 7378);

TEST(KOSHMAR_PP_VARIADICS_TAIL(120, 19801) == 19801);
KOSHMAR_PP_CALL_MACRO(CHECK_TAIL, KOSHMAR_PP_VARIADICS_TAIL(9191, 51, 21, 1, 7378))

#undef CHECK_TAIL
