#include "../test.h"

#include "../../include/koshmar_pp/rec.h"
#include "../../include/koshmar_pp/uint.h"

#define TEST_REC_LIMIT 17

#define TEST_REC(x) KOSHMAR_PP_REC(TEST_REC_AUX_0(x, 0))

#define TEST_REC_AUX_0(x, counter)                                                                 \
    KOSHMAR_PP_REC_IF(                                                                             \
        KOSHMAR_PP_UINT_EQ(counter, TEST_REC_LIMIT),                                               \
        KOSHMAR_PP_REC_STOP(x),                                                                    \
        KOSHMAR_PP_REC_CONTINUE(TEST_REC_HOOK_0, x + 1, KOSHMAR_PP_UINT_INC(counter)))

#define TEST_REC_HOOK_0() TEST_REC_AUX_1

#define TEST_REC_AUX_1(x, counter)                                                                 \
    KOSHMAR_PP_REC_IF(                                                                             \
        KOSHMAR_PP_UINT_EQ(counter, TEST_REC_LIMIT),                                               \
        KOSHMAR_PP_REC_STOP(x),                                                                    \
        KOSHMAR_PP_REC_CONTINUE(TEST_REC_HOOK_1, x + 3, KOSHMAR_PP_UINT_INC(counter)))

#define TEST_REC_HOOK_1() TEST_REC_AUX_0

TEST(TEST_REC(0) == 0 + 1 + 3 + 1 + 3 + 1 + 3 + 1 + 3 + 1 + 3 + 1 + 3 + 1 + 3 + 1 + 3 + 1);

#undef TEST_REC_0
#undef TEST_REC_AUX_0
#undef TEST_REC_HOOK
#undef TEST_REC_LIMIT
