#include "../test.h"

#include "../../include/koshmar_pp/control.h"
#include "../../include/koshmar_pp/uint.h"

#define LIMIT        100
#define SUM          (LIMIT + 1) * (LIMIT / 2)
#define PREDICATE(i) KOSHMAR_PP_UINT_LESSER_EQUAL(i, LIMIT)
#define OP(i)        (KOSHMAR_PP_UINT_INC(i))(+i)

TEST(0 KOSHMAR_PP_WHILE(PREDICATE, OP, 1) == SUM);

#undef PREDICATE
#undef OP
#undef LIMIT
#undef SUM
