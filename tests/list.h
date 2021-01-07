#include <epilepsy/assert.h>
#include <epilepsy/list.h>
#include <epilepsy/uint.h>

#define DIV_IMPL(x, acc)   v(acc / x)
#define DIV_L_IMPL(x, acc) v(x / acc)
#define SUB_IMPL(acc, x)   v(acc - x)

#define DIV_ARITY   2
#define DIV_L_ARITY 2
#define SUB_ARITY   2

EPILEPSY_assertEq(
    EPILEPSY_listFoldr(EPILEPSY_list(v(2) v(5) v(3)), v(DIV), v(60)), v(60 / 3 / 5 / 2));
EPILEPSY_assertEq(
    EPILEPSY_listFoldl(EPILEPSY_list(v(3) v(4) v(1)), v(SUB), v(10)), v(10 - 3 - 4 - 1));
EPILEPSY_assertEq(
    EPILEPSY_listFoldl1(EPILEPSY_list(v(2280) v(8) v(5) v(3)), v(DIV_L)), v(2280 / 8 / 5 / 3));
EPILEPSY_assertEq(EPILEPSY_listGet(EPILEPSY_list(v(9) v(81) v(711)), v(1)), v(81));

EPILEPSY_assertEq(
    v(0) EPILEPSY_listUnwrap(EPILEPSY_listPrependToAll(EPILEPSY_list(v(1) v(2) v(3)), v(+))),
    v(1 + 2 + 3));

EPILEPSY_assertEq(
    EPILEPSY_listUnwrap(EPILEPSY_listIntersperse(EPILEPSY_list(v(1) v(2) v(3)), v(+))),
    v(1 + 2 + 3));

#undef DIV_IMPL
#undef DIV_L_IMPL
#undef SUB_IMPL

#undef DIV_ARITY
#undef DIV_L_ARITY
#undef SUB_ARITY

// EPILEPSY_listEq {
EPILEPSY_assert(
    EPILEPSY_listEq(EPILEPSY_list(v(1, 2, 3)), EPILEPSY_list(v(1, 2, 3)), v(EPILEPSY_uintEq)));
EPILEPSY_assertEq(
    EPILEPSY_listEq(EPILEPSY_list(v(1, 2, 3)), EPILEPSY_list(v(1)), v(EPILEPSY_uintEq)), v(0));
EPILEPSY_assertEq(
    EPILEPSY_listEq(EPILEPSY_list(v(1)), EPILEPSY_list(v(1, 2, 3)), v(EPILEPSY_uintEq)), v(0));
EPILEPSY_assertEq(
    EPILEPSY_listEq(EPILEPSY_list(v(0, 5, 6, 6)), EPILEPSY_list(v(6, 7)), v(EPILEPSY_uintEq)),
    v(0));
// }

// EPILEPSY_listMap {
#define ADD_3 EPILEPSY_appl(EPILEPSY_uintAdd, v(3))

EPILEPSY_assert(EPILEPSY_listEq(
    EPILEPSY_listMap(EPILEPSY_list(v(1, 2, 3)), ADD_3), EPILEPSY_list(v(4, 5, 6)),
    v(EPILEPSY_uintEq)));

#undef ADD_3
// }
