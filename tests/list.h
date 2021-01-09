#include <epilepsy/assert.h>
#include <epilepsy/list.h>
#include <epilepsy/uint.h>

// E_listHead {
E_assertEq(E_listHead(E_list(v(1))), v(1));
E_assertEq(E_listHead(E_list(v(1, 2))), v(1));
E_assertEq(E_listHead(E_list(v(1, 2, 3))), v(1));
// }

// E_listTail {
E_assert(E_listEq(E_listTail(E_list(v(1))), E_nil(), v(E_uintEq)));
E_assert(E_listEq(E_listTail(E_list(v(1, 2))), E_list(v(2)), v(E_uintEq)));
E_assert(E_listEq(E_listTail(E_list(v(1, 2, 3))), E_list(v(2, 3)), v(E_uintEq)));
// }

// E_listLast {
E_assertEq(E_listLast(E_list(v(1))), v(1));
E_assertEq(E_listLast(E_list(v(1, 2))), v(2));
E_assertEq(E_listLast(E_list(v(1, 2, 3))), v(3));
// }

// E_listInit {
E_assert(E_listEq(E_listInit(E_list(v(1))), E_nil(), v(E_uintEq)));
E_assert(E_listEq(E_listInit(E_list(v(1, 2))), E_list(v(1)), v(E_uintEq)));
E_assert(E_listEq(E_listInit(E_list(v(1, 2, 3))), E_list(v(1, 2)), v(E_uintEq)));
// }

#define DIV_IMPL(x, acc)   v(acc / x)
#define DIV_L_IMPL(x, acc) v(x / acc)
#define SUB_IMPL(acc, x)   v(acc - x)

#define DIV_ARITY   2
#define DIV_L_ARITY 2
#define SUB_ARITY   2

E_assertEq(E_listFoldr(E_list(v(2) v(5) v(3)), v(DIV), v(60)), v(60 / 3 / 5 / 2));
E_assertEq(E_listFoldl(E_list(v(3) v(4) v(1)), v(SUB), v(10)), v(10 - 3 - 4 - 1));
E_assertEq(E_listFoldl1(E_list(v(2280) v(8) v(5) v(3)), v(DIV_L)), v(2280 / 8 / 5 / 3));
E_assertEq(E_listGet(E_list(v(9) v(81) v(711)), v(1)), v(81));

E_assertEq(v(0) E_listUnwrap(E_listPrependToAll(E_list(v(1) v(2) v(3)), v(+))), v(1 + 2 + 3));

E_assertEq(E_listUnwrap(E_listIntersperse(E_list(v(1) v(2) v(3)), v(+))), v(1 + 2 + 3));

#undef DIV_IMPL
#undef DIV_L_IMPL
#undef SUB_IMPL

#undef DIV_ARITY
#undef DIV_L_ARITY
#undef SUB_ARITY

// E_listEq {
E_assert(E_listEq(E_list(v(1, 2, 3)), E_list(v(1, 2, 3)), v(E_uintEq)));
E_assertEq(E_listEq(E_list(v(1, 2, 3)), E_list(v(1)), v(E_uintEq)), v(0));
E_assertEq(E_listEq(E_list(v(1)), E_list(v(1, 2, 3)), v(E_uintEq)), v(0));
E_assertEq(E_listEq(E_list(v(0, 5, 6, 6)), E_list(v(6, 7)), v(E_uintEq)), v(0));
// }

// E_listMap {
E_assert(E_listEq(
    E_listMap(E_list(v(1, 2, 3)), E_appl(E_uintAdd, v(3))), E_list(v(4, 5, 6)), v(E_uintEq)));
// }
