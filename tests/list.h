#include <epilepsy/assert.h>
#include <epilepsy/list.h>
#include <epilepsy/uint.h>

#define DIV_IMPL(x, acc)   v(acc / x)
#define DIV_L_IMPL(x, acc) v(x / acc)
#define SUB_IMPL(acc, x)   v(acc - x)

#define DIV_ARITY   2
#define DIV_L_ARITY 2
#define SUB_ARITY   2

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

#undef DIV_IMPL
#undef DIV_L_IMPL
#undef SUB_IMPL

#undef DIV_ARITY
#undef DIV_L_ARITY
#undef SUB_ARITY

// EPILEPSY_ListEq {
EPILEPSY_ASSERT(
    EPILEPSY_ListEq(EPILEPSY_List(v(1, 2, 3)), EPILEPSY_List(v(1, 2, 3)), v(EPILEPSY_UIntEq)));
EPILEPSY_ASSERT_EQ(
    EPILEPSY_ListEq(EPILEPSY_List(v(1, 2, 3)), EPILEPSY_List(v(1)), v(EPILEPSY_UIntEq)), v(0));
EPILEPSY_ASSERT_EQ(
    EPILEPSY_ListEq(EPILEPSY_List(v(1)), EPILEPSY_List(v(1, 2, 3)), v(EPILEPSY_UIntEq)), v(0));
EPILEPSY_ASSERT_EQ(
    EPILEPSY_ListEq(EPILEPSY_List(v(0, 5, 6, 6)), EPILEPSY_List(v(6, 7)), v(EPILEPSY_UIntEq)),
    v(0));
// }

// EPILEPSY_ListMap {
#define ADD_3 EPILEPSY_APPLY(v(EPILEPSY_UIntAdd), v(3))

EPILEPSY_ASSERT(EPILEPSY_ListEq(
    EPILEPSY_ListMap(EPILEPSY_List(v(1, 2, 3)), ADD_3), EPILEPSY_List(v(4, 5, 6)),
    v(EPILEPSY_UIntEq)));

#undef ADD_3
// }
