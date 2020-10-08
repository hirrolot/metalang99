#include "../test.h"

#include "../../include/agony_pp/rec.h"
#include "../../include/agony_pp/uint.h"

#define TEST_REC_LIMIT 17

#define TEST_REC(x) AGONY_PP_REC(TEST_REC_AUX_0(x, 0))

#define TEST_REC_AUX_0(x, counter)                                                                 \
    AGONY_PP_REC_IF(                                                                               \
        AGONY_PP_UINT_EQ(counter, TEST_REC_LIMIT),                                                 \
        AGONY_PP_REC_STOP(x),                                                                      \
        AGONY_PP_REC_CONTINUE(TEST_REC_HOOK_0, x + 1, AGONY_PP_UINT_INC(counter)))

#define TEST_REC_HOOK_0() TEST_REC_AUX_1

#define TEST_REC_AUX_1(x, counter)                                                                 \
    AGONY_PP_REC_IF(                                                                               \
        AGONY_PP_UINT_EQ(counter, TEST_REC_LIMIT),                                                 \
        AGONY_PP_REC_STOP(x),                                                                      \
        AGONY_PP_REC_CONTINUE(TEST_REC_HOOK_1, x + 3, AGONY_PP_UINT_INC(counter)))

#define TEST_REC_HOOK_1() TEST_REC_AUX_0

TEST(TEST_REC(0) == 0 + 1 + 3 + 1 + 3 + 1 + 3 + 1 + 3 + 1 + 3 + 1 + 3 + 1 + 3 + 1 + 3 + 1);

#undef TEST_REC_0
#undef TEST_REC_AUX_0
#undef TEST_REC_HOOK
#undef TEST_REC_LIMIT
