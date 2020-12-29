#include <epilepsy/assert.h>
#include <epilepsy/eval.h>
#include <epilepsy/lang.h>
#include <epilepsy/list.h>

#define DIV(x, acc)   v(acc / x)
#define DIV_L(x, acc) v(x / acc)
#define SUB(acc, x)   v(acc - x)

EPILEPSY_ASSERT_EQ(
    EPILEPSY_ListFoldr(EPILEPSY_List(v(2) v(5) v(3)), v(DIV), v(60)), v(60 / 3 / 5 / 2));
EPILEPSY_ASSERT_EQ(
    EPILEPSY_ListFoldl(EPILEPSY_List(v(3) v(4) v(1)), v(SUB), v(10)), v(10 - 3 - 4 - 1));
EPILEPSY_ASSERT_EQ(
    EPILEPSY_ListFoldl1(EPILEPSY_List(v(2280) v(8) v(5) v(3)), v(DIV_L)), v(2280 / 8 / 5 / 3));
EPILEPSY_ASSERT_EQ(EPILEPSY_ListGet(EPILEPSY_List(v(9) v(81) v(711)), v(1)), v(81));

EPILEPSY_ASSERT_EQ(
    v(0) EPILEPSY_ListUnwrap(EPILEPSY_ListPrependToAll(EPILEPSY_List(v(1) v(2) v(3)), v(+))),
    v(1 + 2 + 3));

EPILEPSY_ASSERT_EQ(
    EPILEPSY_ListUnwrap(EPILEPSY_ListIntersperse(EPILEPSY_List(v(1) v(2) v(3)), v(+))),
    v(1 + 2 + 3));

#undef DIV
#undef DIV_L
#undef SUB
