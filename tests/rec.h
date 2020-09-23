#include "test.h"

#include "../include/koshmar_pp/if_then_else.h"
#include "../include/koshmar_pp/rec.h"
#include "../include/koshmar_pp/uint.h"

#define TEST_REC(x) KOSHMAR_PP_REC(TEST_REC_INDIRECT_0(x))

#define TEST_REC_INDIRECT_0(x)                                                                     \
    KOSHMAR_PP_IF(KOSHMAR_PP_UINT_EQ(x, 3), IF_EQ_3, IF_NOT_EQ_3)(TEST_REC_INDIRECT_1, x)

#define TEST_REC_INDIRECT_1(x)                                                                     \
    KOSHMAR_PP_IF(KOSHMAR_PP_UINT_EQ(x, 3), IF_EQ_3, IF_NOT_EQ_3)(TEST_REC_INDIRECT_0, x)

#define IF_EQ_3(_indirect_op, x)    KOSHMAR_PP_REC_STOP(x)
#define IF_NOT_EQ_3(indirect_op, x) KOSHMAR_PP_REC_CALL(indirect_op, KOSHMAR_PP_UINT_INC(x))

TEST(TEST_REC(0) == 3);

#undef TEST_REC
#undef TEST_REC_INDIRECT_0
#undef TEST_REC_INDIRECT_1
#undef IF_EQ_3
#undef IF_NOT_EQ_3
