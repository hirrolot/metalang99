#include <epilepsy/assert.h>
#include <epilepsy/list.h>
#include <epilepsy/uint.h>

#define DIV_IMPL(x, acc)   v(acc / x)
#define DIV_L_IMPL(x, acc) v(x / acc)
#define SUB_IMPL(acc, x)   v(acc - x)

#define DIV_ARITY   2
#define DIV_L_ARITY 2
#define SUB_ARITY   2

epAssertEq(epListFoldr(epList(v(2) v(5) v(3)), v(DIV), v(60)), v(60 / 3 / 5 / 2));
epAssertEq(epListFoldl(epList(v(3) v(4) v(1)), v(SUB), v(10)), v(10 - 3 - 4 - 1));
epAssertEq(epListFoldl1(epList(v(2280) v(8) v(5) v(3)), v(DIV_L)), v(2280 / 8 / 5 / 3));
epAssertEq(epListGet(epList(v(9) v(81) v(711)), v(1)), v(81));

epAssertEq(v(0) epListUnwrap(epListPrependToAll(epList(v(1) v(2) v(3)), v(+))), v(1 + 2 + 3));

epAssertEq(epListUnwrap(epListIntersperse(epList(v(1) v(2) v(3)), v(+))), v(1 + 2 + 3));

#undef DIV_IMPL
#undef DIV_L_IMPL
#undef SUB_IMPL

#undef DIV_ARITY
#undef DIV_L_ARITY
#undef SUB_ARITY

// epListEq {
epAssert(epListEq(epList(v(1, 2, 3)), epList(v(1, 2, 3)), v(epUIntEq)));
epAssertEq(epListEq(epList(v(1, 2, 3)), epList(v(1)), v(epUIntEq)), v(0));
epAssertEq(epListEq(epList(v(1)), epList(v(1, 2, 3)), v(epUIntEq)), v(0));
epAssertEq(epListEq(epList(v(0, 5, 6, 6)), epList(v(6, 7)), v(epUIntEq)), v(0));
// }

// epListMap {
#define ADD_3 epApply(epUIntAdd, v(3))

epAssert(epListEq(epListMap(epList(v(1, 2, 3)), ADD_3), epList(v(4, 5, 6)), v(epUIntEq)));

#undef ADD_3
// }
