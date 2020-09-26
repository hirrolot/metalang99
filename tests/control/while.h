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

#define PREDICATE(i) 0
#define OP(i)        it will never be executed
#define EMPTY_WHILE  KOSHMAR_PP_WHILE(PREDICATE, OP, blah)

EMPTY_WHILE static EMPTY_WHILE int EMPTY_WHILE test_empty_while EMPTY_WHILE =
    EMPTY_WHILE 1 EMPTY_WHILE;

#undef PREDICATE
#undef OP
