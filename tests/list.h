#include <epilepsy/assert.h>
#include <epilepsy/aux.h>
#include <epilepsy/list.h>
#include <epilepsy/uint.h>

// E_listHead {
E_assertEq(E_listHead(E_list(v(1))), v(1));
E_assertEq(E_listHead(E_list(v(1, 2))), v(1));
E_assertEq(E_listHead(E_list(v(1, 2, 3))), v(1));
// }

// E_listTail {
E_assert(E_listEq(v(E_uintEq), E_listTail(E_list(v(1))), E_nil()));
E_assert(E_listEq(v(E_uintEq), E_listTail(E_list(v(1, 2))), E_list(v(2))));
E_assert(E_listEq(v(E_uintEq), E_listTail(E_list(v(1, 2, 3))), E_list(v(2, 3))));
// }

// E_listLast {
E_assertEq(E_listLast(E_list(v(1))), v(1));
E_assertEq(E_listLast(E_list(v(1, 2))), v(2));
E_assertEq(E_listLast(E_list(v(1, 2, 3))), v(3));
// }

// E_listInit {
E_assert(E_listEq(v(E_uintEq), E_listInit(E_list(v(1))), E_nil()));
E_assert(E_listEq(v(E_uintEq), E_listInit(E_list(v(1, 2))), E_list(v(1))));
E_assert(E_listEq(v(E_uintEq), E_listInit(E_list(v(1, 2, 3))), E_list(v(1, 2))));
// }

// E_listLen {
E_assertEq(E_listLen(E_nil()), v(0));
E_assertEq(E_listLen(E_list(v(123))), v(1));
E_assertEq(E_listLen(E_list(v(123, 222))), v(2));
E_assertEq(E_listLen(E_list(v(123, 222, 18))), v(3));
// }

// E_listAppend {
E_assert(E_listEq(v(E_uintEq), E_listAppend(E_nil(), E_nil()), E_nil()));
E_assert(E_listEq(v(E_uintEq), E_listAppend(E_nil(), E_list(v(1, 2, 3))), E_list(v(1, 2, 3))));
E_assert(E_listEq(v(E_uintEq), E_listAppend(E_list(v(1, 2, 3)), E_nil()), E_list(v(1, 2, 3))));

E_assert(E_listEq(
    v(E_uintEq), E_listAppend(E_list(v(1, 2, 3)), E_list(v(4, 5, 6))),
    E_list(v(1, 2, 3, 4, 5, 6))));
// }

// E_listAppendItem {
E_assert(E_listEq(v(E_uintEq), E_listAppendItem(v(123), E_nil()), E_list(v(123))));
E_assert(
    E_listEq(v(E_uintEq), E_listAppendItem(v(222), E_list(v(1, 2, 3))), E_list(v(1, 2, 3, 222))));
// }

// E_listReverse {
E_assert(E_listEq(v(E_uintEq), E_listReverse(E_nil()), E_nil()));
E_assert(E_listEq(v(E_uintEq), E_listReverse(E_list(v(1, 2, 3))), E_list(v(3, 2, 1))));
// }

// E_listContains {
E_assert(E_not(E_listContains(v(E_uintEq), v(1), E_nil())));
E_assert(E_listContains(v(E_uintEq), v(1), E_list(v(1, 2, 3))));
E_assert(E_listContains(v(E_uintEq), v(2), E_list(v(1, 2, 3))));
E_assert(E_listContains(v(E_uintEq), v(3), E_list(v(1, 2, 3))));
E_assert(E_not(E_listContains(v(E_uintEq), v(187), E_list(v(1, 2, 3)))));
// }

// E_listUnwrap {
E_assertEmpty(E_listUnwrap(E_nil()));
E_assertEq(E_listUnwrap(E_list(v(18, +, 3, +, 6))), v(18 + 3 + 6));
// }

// E_listEval {
E_assertEmptyPlain(E_listEval(E_nil()));
E_assertPlain(E_listEval(E_list(v(19, +, 6))) == 19 + 6);
// }

// E_listEvalCommaSep, E_listUnwrapCommaSep {
#define FOO(a, b, c) E_assertPlain(a == 1 && b == 2 && c == 3)

E_assertEmptyPlain(E_listEvalCommaSep(E_nil()));
E_assertEmpty(E_listUnwrapCommaSep(E_nil()));

E_eval(v(FOO) E_parenthesise(v(E_listEvalCommaSep(E_list(v(1, 2, 3))))));
E_eval(v(FOO) E_parenthesise(E_listUnwrapCommaSep(E_list(v(1, 2, 3)))));

#undef FOO
// }

// E_isNil {
E_assert(E_isNil(E_nil()));
E_assert(E_not(E_isNil(E_list(v(123)))));
E_assert(E_not(E_isNil(E_list(v(8, 214, 10, 0, 122)))));
// }

// E_get {
E_assertEq(E_get(v(0), E_list(v(123, 222))), v(123));
E_assertEq(E_get(v(1), E_list(v(123, 222))), v(222));
// }

// E_listTake {
E_assert(E_listEq(v(E_uintEq), E_listTake(v(1), E_nil()), E_nil()));
E_assert(E_listEq(v(E_uintEq), E_listTake(v(200), E_nil()), E_nil()));

E_assert(E_listEq(v(E_uintEq), E_listTake(v(1), E_list(v(1, 2, 3))), E_list(v(1))));
E_assert(E_listEq(v(E_uintEq), E_listTake(v(2), E_list(v(1, 2, 3))), E_list(v(1, 2))));
E_assert(E_listEq(v(E_uintEq), E_listTake(v(3), E_list(v(1, 2, 3))), E_list(v(1, 2, 3))));
// }

// E_listTakeWhile {
E_assert(E_listEq(v(E_uintEq), E_listTakeWhile(E_appl(v(E_uintLesser), v(5)), E_nil()), E_nil()));
E_assert(
    E_listEq(v(E_uintEq), E_listTakeWhile(E_appl(v(E_uintGreater), v(5)), E_list(v(7))), E_nil()));
E_assert(E_listEq(
    v(E_uintEq), E_listTakeWhile(E_appl(v(E_uintGreater), v(5)), E_list(v(1, 9, 7))),
    E_list(v(1))));
E_assert(E_listEq(
    v(E_uintEq), E_listTakeWhile(E_appl(v(E_uintGreater), v(5)), E_list(v(4, 9, 2, 3))),
    E_list(v(4))));
E_assert(E_listEq(
    v(E_uintEq), E_listTakeWhile(E_appl(v(E_uintGreater), v(5)), E_list(v(2, 4, 7, 9, 28))),
    E_list(v(2, 4))));
// }

// E_listDrop {
E_assert(E_listEq(v(E_uintEq), E_listDrop(v(1), E_nil()), E_nil()));
E_assert(E_listEq(v(E_uintEq), E_listDrop(v(200), E_nil()), E_nil()));

E_assert(E_listEq(v(E_uintEq), E_listDrop(v(1), E_list(v(1, 2, 3))), E_list(v(2, 3))));
E_assert(E_listEq(v(E_uintEq), E_listDrop(v(2), E_list(v(1, 2, 3))), E_list(v(3))));
E_assert(E_listEq(v(E_uintEq), E_listDrop(v(3), E_list(v(1, 2, 3))), E_nil()));
// }

// E_listDropWhile {
E_assert(E_listEq(v(E_uintEq), E_listDropWhile(E_appl(v(E_uintLesser), v(5)), E_nil()), E_nil()));
E_assert(E_listEq(
    v(E_uintEq), E_listDropWhile(E_appl(v(E_uintGreater), v(5)), E_list(v(7))), E_list(v(7))));
E_assert(E_listEq(
    v(E_uintEq), E_listDropWhile(E_appl(v(E_uintGreater), v(5)), E_list(v(1, 9, 7))),
    E_list(v(9, 7))));
E_assert(E_listEq(
    v(E_uintEq), E_listDropWhile(E_appl(v(E_uintGreater), v(5)), E_list(v(4, 9, 2, 3))),
    E_list(v(9, 2, 3))));
E_assert(E_listEq(
    v(E_uintEq), E_listDropWhile(E_appl(v(E_uintGreater), v(5)), E_list(v(2, 4, 7, 9, 28))),
    E_list(v(7, 9, 28))));
// }

// E_listZip {
#define EQ_IMPL(x, y) E_listEq(v(E_uintEq), v(x), v(y))
#define EQ_ARITY      2

E_assert(E_listEq(v(EQ), E_listZip(E_nil(), E_nil()), E_nil()));
E_assert(E_listEq(v(EQ), E_listZip(E_list(v(1, 2, 3)), E_nil()), E_nil()));
E_assert(E_listEq(v(EQ), E_listZip(E_nil(), E_list(v(1, 2, 3))), E_nil()));

E_assert(E_listEq(
    v(EQ), E_listZip(E_list(v(1, 2, 3)), E_list(v(4, 5, 6))),
    E_list(E_list(v(1, 4)) E_list(v(2, 5)) E_list(v(3, 6)))));

E_assert(E_listEq(
    v(EQ), E_listZip(E_list(v(1, 2, 3)), E_list(v(4, 5))),
    E_list(E_list(v(1, 4)) E_list(v(2, 5)))));

E_assert(E_listEq(
    v(EQ), E_listZip(E_list(v(1, 2)), E_list(v(4, 5, 6))),
    E_list(E_list(v(1, 4)) E_list(v(2, 5)))));

#undef EQ_IMPL
#undef EQ_ARITY
// }

// E_listUnzip & E_listZip {
#define LIST E_listUnzip(E_nil())

E_assert(E_listEq(v(E_uintEq), E_get(v(0), LIST), E_nil()));
E_assert(E_listEq(v(E_uintEq), E_get(v(1), LIST), E_nil()));

#undef LIST

#define LIST E_listUnzip(E_listZip(E_list(v(1, 2)), E_list(v(4, 5))))

E_assert(E_listEq(v(E_uintEq), E_get(v(0), LIST), E_list(v(1, 2))));
E_assert(E_listEq(v(E_uintEq), E_get(v(1), LIST), E_list(v(4, 5))));

#undef LIST
// }

// E_listEq {
E_assert(E_listEq(v(E_uintEq), E_nil(), E_nil()));
E_assert(E_not(E_listEq(v(E_uintEq), E_nil(), E_list(v(25, 88, 1)))));
E_assert(E_not(E_listEq(v(E_uintEq), E_list(v(25, 88, 1)), E_nil())));

E_assert(E_listEq(v(E_uintEq), E_list(v(1, 2, 3)), E_list(v(1, 2, 3))));
E_assert(E_not(E_listEq(v(E_uintEq), E_list(v(1, 2, 3)), E_list(v(1)))));
E_assert(E_not(E_listEq(v(E_uintEq), E_list(v(1)), E_list(v(1, 2, 3)))));
E_assert(E_not(E_listEq(v(E_uintEq), E_list(v(0, 5, 6, 6)), E_list(v(6, 7)))));
// }

// E_listAppl {
E_assertEq(E_call(E_listAppl(v(E_uintAdd), E_nil()), v(6, 9)), v(6 + 9));
E_assertEq(E_appl(E_listAppl(v(E_uintAdd), E_list(v(6))), v(9)), v(6 + 9));
E_assertEq(E_listAppl(v(E_uintAdd), E_list(v(6, 9))), v(6 + 9));
// }

// E_listPrependToAll {
E_assert(E_listEq(v(E_uintEq), E_listPrependToAll(v(+), E_nil()), E_nil()));
E_assert(E_listEq(
    v(E_uintEq), E_listPrependToAll(v(111), E_list(v(5, 9, 22))),
    E_list(v(111, 5, 111, 9, 111, 22))));
// }

// E_listIntersperse {
E_assert(E_listEq(v(E_uintEq), E_listIntersperse(v(+), E_nil()), E_nil()));
E_assert(E_listEq(
    v(E_uintEq), E_listIntersperse(v(111), E_list(v(5, 9, 22))), E_list(v(5, 111, 9, 111, 22))));
// }

#define ABCDEFG E_true

// E_listFoldr {
E_assertEq(E_listFoldr(v(E_cat), v(7), E_nil()), v(7));
E_assert(E_listFoldr(E_appl(v(E_flip), v(E_cat)), v(A), E_list(v(G, DEF, BC))));
// }

// E_listFoldl {
E_assertEq(E_listFoldl(v(E_cat), v(7), E_nil()), v(7));
E_assert(E_listFoldl(v(E_cat), v(A), E_list(v(BC, DEF, G))));
// }

// E_listFoldl1 {
E_assert(E_listFoldl1(v(E_cat), E_list(v(AB, CDEF, G))));
// }

#undef ABCDEFG

// E_listMap {
E_assert(E_listEq(v(E_uintEq), E_listMap(E_appl(v(E_uintAdd), v(3)), E_nil()), E_nil()));
E_assert(E_listEq(
    v(E_uintEq), E_listMap(E_appl(v(E_uintAdd), v(3)), E_list(v(1, 2, 3))), E_list(v(4, 5, 6))));
// }

// E_listFor {
E_assert(E_listEq(v(E_uintEq), E_listFor(E_nil(), E_appl(v(E_uintAdd), v(3))), E_nil()));
E_assert(E_listEq(
    v(E_uintEq), E_listFor(E_list(v(1, 2, 3)), E_appl(v(E_uintAdd), v(3))), E_list(v(4, 5, 6))));
// }

// E_listMapInitLast {
E_assert(E_listEq(
    v(E_uintEq),
    E_listMapInitLast(E_appl(v(E_uintAdd), v(3)), E_appl(v(E_uintAdd), v(19)), E_list(v(4))),
    E_list(v(23))));
E_assert(E_listEq(
    v(E_uintEq),
    E_listMapInitLast(E_appl(v(E_uintAdd), v(3)), E_appl(v(E_uintAdd), v(7)), E_list(v(1, 2, 3))),
    E_list(v(4, 5, 10))));
// }

// E_listForInitLast {
E_assert(E_listEq(
    v(E_uintEq),
    E_listForInitLast(E_list(v(4)), E_appl(v(E_uintAdd), v(3)), E_appl(v(E_uintAdd), v(19))),
    E_list(v(23))));
E_assert(E_listEq(
    v(E_uintEq),
    E_listForInitLast(E_list(v(1, 2, 3)), E_appl(v(E_uintAdd), v(3)), E_appl(v(E_uintAdd), v(7))),
    E_list(v(4, 5, 10))));
// }

// E_listFilter {
E_assert(E_listEq(v(E_uintEq), E_listFilter(E_appl(v(E_uintAdd), v(3)), E_nil()), E_nil()));
E_assert(E_listEq(
    v(E_uintEq), E_listFilter(E_appl(v(E_uintLesser), v(3)), E_list(v(14, 0, 1, 7, 2, 65, 3))),
    E_list(v(14, 7, 65))));
// }

// E_listReplicate {
E_assert(E_listEq(v(E_uintEq), E_listReplicate(v(0), v(~)), E_nil()));
E_assert(E_listEq(v(E_uintEq), E_listReplicate(v(3), v(7)), E_list(v(7, 7, 7))));
// }
