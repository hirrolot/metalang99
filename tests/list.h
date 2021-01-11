#include <epilepsy/assert.h>
#include <epilepsy/aux.h>
#include <epilepsy/list.h>
#include <epilepsy/uint.h>

#include "assert_empty.h"

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

// E_listLen {
E_assertEq(E_listLen(E_nil()), v(0));
E_assertEq(E_listLen(E_list(v(123))), v(1));
E_assertEq(E_listLen(E_list(v(123, 456))), v(2));
E_assertEq(E_listLen(E_list(v(123, 456, 789))), v(3));
// }

// E_listAppend {
E_assert(E_listEq(E_listAppend(E_nil(), E_nil()), E_nil(), v(E_uintEq)));
E_assert(E_listEq(E_listAppend(E_nil(), E_list(v(1, 2, 3))), E_list(v(1, 2, 3)), v(E_uintEq)));
E_assert(E_listEq(E_listAppend(E_list(v(1, 2, 3)), E_nil()), E_list(v(1, 2, 3)), v(E_uintEq)));

E_assert(E_listEq(
    E_listAppend(E_list(v(1, 2, 3)), E_list(v(4, 5, 6))), E_list(v(1, 2, 3, 4, 5, 6)),
    v(E_uintEq)));
// }

// E_listAppendItem {
E_assert(E_listEq(E_listAppendItem(E_nil(), v(123)), E_list(v(123)), v(E_uintEq)));
E_assert(
    E_listEq(E_listAppendItem(E_list(v(1, 2, 3)), v(456)), E_list(v(1, 2, 3, 456)), v(E_uintEq)));
// }

// E_listReverse {
E_assert(E_listEq(E_listReverse(E_nil()), E_nil(), v(E_uintEq)));
E_assert(E_listEq(E_listReverse(E_list(v(1, 2, 3))), E_list(v(3, 2, 1)), v(E_uintEq)));
// }

// E_listContains {
E_assert(E_not(E_listContains(E_nil(), v(1), v(E_uintEq))));
E_assert(E_listContains(E_list(v(1, 2, 3)), v(1), v(E_uintEq)));
E_assert(E_listContains(E_list(v(1, 2, 3)), v(2), v(E_uintEq)));
E_assert(E_listContains(E_list(v(1, 2, 3)), v(3), v(E_uintEq)));
E_assert(E_not(E_listContains(E_list(v(1, 2, 3)), v(187), v(E_uintEq))));
// }

// E_listUnwrap {
ASSERT_EMPTY(E_eval(E_listUnwrap(E_nil())));
E_assertEq(E_listUnwrap(E_list(v(18, +, 3, +, 6))), v(18 + 3 + 6));
// }

// E_listIsEmpty {
E_assert(E_listIsEmpty(E_nil()));
E_assert(E_not(E_listIsEmpty(E_list(v(123)))));
E_assert(E_not(E_listIsEmpty(E_list(v(8, 289, 10, 0, 122)))));
// }

// E_get {
E_assertEq(E_listGet(E_list(v(123, 456)), v(0)), v(123));
E_assertEq(E_listGet(E_list(v(123, 456)), v(1)), v(456));
// }

// E_listTake {
E_assert(E_listEq(E_listTake(E_nil(), v(1)), E_nil(), v(E_uintEq)));
E_assert(E_listEq(E_listTake(E_nil(), v(800)), E_nil(), v(E_uintEq)));

E_assert(E_listEq(E_listTake(E_list(v(1, 2, 3)), v(1)), E_list(v(1)), v(E_uintEq)));
E_assert(E_listEq(E_listTake(E_list(v(1, 2, 3)), v(2)), E_list(v(1, 2)), v(E_uintEq)));
E_assert(E_listEq(E_listTake(E_list(v(1, 2, 3)), v(3)), E_list(v(1, 2, 3)), v(E_uintEq)));
// }

// E_listTakeWhile {
E_assert(E_listEq(E_listTakeWhile(E_nil(), E_appl(E_uintLesser, v(5))), E_nil(), v(E_uintEq)));
E_assert(
    E_listEq(E_listTakeWhile(E_list(v(7)), E_appl(E_uintGreater, v(5))), E_nil(), v(E_uintEq)));
E_assert(E_listEq(
    E_listTakeWhile(E_list(v(1, 9, 7)), E_appl(E_uintGreater, v(5))), E_list(v(1)), v(E_uintEq)));
E_assert(E_listEq(
    E_listTakeWhile(E_list(v(4, 9, 2, 3)), E_appl(E_uintGreater, v(5))), E_list(v(4)),
    v(E_uintEq)));
E_assert(E_listEq(
    E_listTakeWhile(E_list(v(2, 4, 7, 9, 28)), E_appl(E_uintGreater, v(5))), E_list(v(2, 4)),
    v(E_uintEq)));
// }

// E_listDrop {
E_assert(E_listEq(E_listDrop(E_nil(), v(1)), E_nil(), v(E_uintEq)));
E_assert(E_listEq(E_listDrop(E_nil(), v(800)), E_nil(), v(E_uintEq)));

E_assert(E_listEq(E_listDrop(E_list(v(1, 2, 3)), v(1)), E_list(v(2, 3)), v(E_uintEq)));
E_assert(E_listEq(E_listDrop(E_list(v(1, 2, 3)), v(2)), E_list(v(3)), v(E_uintEq)));
E_assert(E_listEq(E_listDrop(E_list(v(1, 2, 3)), v(3)), E_nil(), v(E_uintEq)));
// }

// E_listDropWhile {
E_assert(E_listEq(E_listDropWhile(E_nil(), E_appl(E_uintLesser, v(5))), E_nil(), v(E_uintEq)));
E_assert(E_listEq(
    E_listDropWhile(E_list(v(7)), E_appl(E_uintGreater, v(5))), E_list(v(7)), v(E_uintEq)));
E_assert(E_listEq(
    E_listDropWhile(E_list(v(1, 9, 7)), E_appl(E_uintGreater, v(5))), E_list(v(9, 7)),
    v(E_uintEq)));
E_assert(E_listEq(
    E_listDropWhile(E_list(v(4, 9, 2, 3)), E_appl(E_uintGreater, v(5))), E_list(v(9, 2, 3)),
    v(E_uintEq)));
E_assert(E_listEq(
    E_listDropWhile(E_list(v(2, 4, 7, 9, 28)), E_appl(E_uintGreater, v(5))), E_list(v(7, 9, 28)),
    v(E_uintEq)));
// }

// E_listZip {
#define EQ_IMPL(x, y) E_listEq(v(x), v(y), v(E_uintEq))
#define EQ_ARITY      2

E_assert(E_listEq(E_listZip(E_nil(), E_nil()), E_nil(), v(EQ)));
E_assert(E_listEq(E_listZip(E_list(v(1, 2, 3)), E_nil()), E_nil(), v(EQ)));
E_assert(E_listEq(E_listZip(E_nil(), E_list(v(1, 2, 3))), E_nil(), v(EQ)));

E_assert(E_listEq(
    E_listZip(E_list(v(1, 2, 3)), E_list(v(4, 5, 6))),
    E_list(E_tuple(v(1, 4)) E_tuple(v(2, 5)) E_tuple(v(3, 6))), v(EQ)));

E_assert(E_listEq(
    E_listZip(E_list(v(1, 2, 3)), E_list(v(4, 5))), E_list(E_tuple(v(1, 4)) E_tuple(v(2, 5))),
    v(EQ)));

E_assert(E_listEq(
    E_listZip(E_list(v(1, 2)), E_list(v(4, 5, 6))), E_list(E_tuple(v(1, 4)) E_tuple(v(2, 5))),
    v(EQ)));

#undef EQ_IMPL
#undef EQ_ARITY
// }

// E_listUnzip & E_listZip {
#define LIST E_listUnzip(E_nil())

E_assert(E_listEq(E_get(LIST, v(0)), E_nil(), v(E_uintEq)));
E_assert(E_listEq(E_get(LIST, v(1)), E_nil(), v(E_uintEq)));

#undef LIST

#define LIST E_listUnzip(E_listZip(E_list(v(1, 2)), E_list(v(4, 5))))

E_assert(E_listEq(E_get(LIST, v(0)), E_list(v(1, 2)), v(E_uintEq)));
E_assert(E_listEq(E_get(LIST, v(1)), E_list(v(4, 5)), v(E_uintEq)));

#undef LIST
// }

// E_listEq {
E_assert(E_listEq(E_nil(), E_nil(), v(E_uintEq)));
E_assert(E_not(E_listEq(E_nil(), E_list(v(25, 88, 1)), v(E_uintEq))));
E_assert(E_not(E_listEq(E_list(v(25, 88, 1)), E_nil(), v(E_uintEq))));

E_assert(E_listEq(E_list(v(1, 2, 3)), E_list(v(1, 2, 3)), v(E_uintEq)));
E_assert(E_not(E_listEq(E_list(v(1, 2, 3)), E_list(v(1)), v(E_uintEq))));
E_assert(E_not(E_listEq(E_list(v(1)), E_list(v(1, 2, 3)), v(E_uintEq))));
E_assert(E_not(E_listEq(E_list(v(0, 5, 6, 6)), E_list(v(6, 7)), v(E_uintEq))));
// }

// E_listAppl {
E_assertEq(E_call(E_listAppl(E_nil(), v(E_uintAdd)), v(6, 9)), v(6 + 9));
E_assertEq(E_appl(E_listAppl(E_list(v(6)), v(E_uintAdd)), v(9)), v(6 + 9));
E_assertEq(E_listAppl(E_list(v(6, 9)), v(E_uintAdd)), v(6 + 9));
// }

// E_listPrependToAll {
E_assert(E_listEq(E_listPrependToAll(E_nil(), v(+)), E_nil(), v(E_uintEq)));
E_assert(E_listEq(
    E_listPrependToAll(E_list(v(5, 9, 22)), v(888)), E_list(v(888, 5, 888, 9, 888, 22)),
    v(E_uintEq)));
// }

// E_listIntersperse {
E_assert(E_listEq(E_listIntersperse(E_nil(), v(+)), E_nil(), v(E_uintEq)));
E_assert(E_listEq(
    E_listIntersperse(E_list(v(5, 9, 22)), v(888)), E_list(v(5, 888, 9, 888, 22)), v(E_uintEq)));
// }

#define ABCDEFG 1

// E_listFoldr {
E_assertEq(E_listFoldr(E_nil(), v(E_cat), v(7)), v(7));
E_assert(E_listFoldr(E_list(v(G, DEF, BC)), E_appl(E_flip, v(E_cat)), v(A)));
// }

// E_listFoldl {
E_assertEq(E_listFoldl(E_nil(), v(E_cat), v(7)), v(7));
E_assert(E_listFoldl(E_list(v(BC, DEF, G)), v(E_cat), v(A)));
// }

#undef ABCDEFG

// E_listMap {
E_assert(E_listEq(E_listMap(E_nil(), E_appl(E_uintAdd, v(3))), E_nil(), v(E_uintEq)));
E_assert(E_listEq(
    E_listMap(E_list(v(1, 2, 3)), E_appl(E_uintAdd, v(3))), E_list(v(4, 5, 6)), v(E_uintEq)));
// }

// E_listFilter {
E_assert(E_listEq(E_listFilter(E_nil(), E_appl(E_uintAdd, v(3))), E_nil(), v(E_uintEq)));
E_assert(E_listEq(
    E_listFilter(E_list(v(14, 0, 1, 7, 2, 65, 3)), E_appl(E_uintLesser, v(3))),
    E_list(v(14, 7, 65)), v(E_uintEq)));
// }
