#include "test.h"

#include "../include/koshmar_pp/for.h"
#include "../include/koshmar_pp/logical.h"
#include "../include/koshmar_pp/uint.h"

#define OP(context, i) (KOSHMAR_PP_UINT_INC(context))(TEST(KOSHMAR_PP_UINT_EQ(context, i));)
#define PREDICATE(i)   KOSHMAR_PP_NOT(KOSHMAR_PP_UINT_EQ(i, 298))
#define STEP           KOSHMAR_PP_UINT_INC

KOSHMAR_PP_FOR(0, PREDICATE, KOSHMAR_PP_UINT_INC, OP, 0)

#undef OP
#undef PREDICATE
#undef STEP
