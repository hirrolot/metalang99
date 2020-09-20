#include "../include/koshmar_pp/rec.h"

#define TESTA(x) KOSHMAR_PP_REC(TEST_INDIRECT_0(x))

#define TEST_INDIRECT_0(x) TEST_AUX(TEST_INDIRECT_1, x)
#define TEST_INDIRECT_1(x) TEST_AUX(TEST_INDIRECT_0, x)

#define TEST_AUX(indirect, x) KOSHMAR_PP_REC_CONTINUE(KOSHMAR_PP_REC_CALL(indirect, x) +)

// TEST(123)

#undef TESTA
#undef TEST_INDIRECT_0
#undef TEST_INDIRECT_1
#undef TEST_AUX
