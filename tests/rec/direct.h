#include "../test.h"

#include "../../include/agony_pp/rec.h"
#include "../../include/agony_pp/uint.h"

#define TEST_REC_LIMIT 17

#define TEST_REC(x) AGONY_PP_REC(TEST_REC_AUX(x, _))

#define TEST_REC_AUX(x, _)                                                                         \
    AGONY_PP_REC_IF(                                                                               \
        AGONY_PP_UINT_EQ(x, TEST_REC_LIMIT),                                                       \
        AGONY_PP_REC_STOP(x),                                                                      \
        AGONY_PP_REC_CONTINUE(TEST_REC_HOOK, AGONY_PP_UINT_INC(x), _))

#define TEST_REC_HOOK() TEST_REC_AUX

TEST(TEST_REC(0) == TEST_REC_LIMIT);

#undef TEST_REC
#undef TEST_REC_AUX
#undef TEST_REC_HOOK
#undef TEST_REC_LIMIT
