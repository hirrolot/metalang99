#include "../include/koshmar/rec.h"

#define TEST(x) KOSHMAR_REC(TEST_INDIRECT_0(x))

#define TEST_INDIRECT_0(x) TEST_AUX(TEST_INDIRECT_1, x)
#define TEST_INDIRECT_1(x) TEST_AUX(TEST_INDIRECT_0, x)

#define TEST_AUX(indirect, x) KOSHMAR_REC_CONTINUE(KOSHMAR_REC_CALL(indirect, x) +)

#undef TEST
