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
E_assertEq(E_listLen(E_list(v(123, 222))), v(2));
E_assertEq(E_listLen(E_list(v(123, 222, 18))), v(3));
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
    E_listEq(E_listAppendItem(E_list(v(1, 2, 3)), v(222)), E_list(v(1, 2, 3, 222)), v(E_uintEq)));
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
E_assertEmpty(E_listUnwrap(E_nil()));
E_assertEq(E_listUnwrap(E_list(v(18, +, 3, +, 6))), v(18 + 3 + 6));
// }

// E_listEval {
E_assertEmptyPlain(E_listEval(E_nil()));
E_assertPlain(E_listEval(E_list(v(19, +, 6))) == 19 + 6);
// }

// E_listEvalCommaSep {
E_assertEmptyPlain(E_listEvalCommaSep(E_nil()));

#define FOO(a, b, c) E_assertPlain(a == 1 && b == 2 && c == 3)

E_eval(v(FOO) E_parenthesiseUnevaluated(v(E_listEvalCommaSep(E_list(v(1, 2, 3))))));

#undef FOO
// }

// E_isNil {
E_assert(E_isNil(E_nil()));
E_assert(E_not(E_isNil(E_list(v(123)))));
E_assert(E_not(E_isNil(E_list(v(8, 214, 10, 0, 122)))));
// }

// E_get {f
E_assertEq(E_listGet(E_list(v(123, 222)), v(0)), v(123));
E_assertEq(E_listGet(E_list(v(123, 222)), v(1)), v(222));
// }

// E_listTake {
E_assert(E_listEq(E_listTake(E_nil(), v(1)), E_nil(), v(E_uintEq)));
E_assert(E_listEq(E_listTake(E_nil(), v(200)), E_nil(), v(E_uintEq)));

E_assert(E_listEq(E_listTake(E_list(v(1, 2, 3)), v(1)), E_list(v(1)), v(E_uintEq)));
E_assert(E_listEq(E_listTake(E_list(v(1, 2, 3)), v(2)), E_list(v(1, 2)), v(E_uintEq)));
E_assert(E_listEq(E_listTake(E_list(v(1, 2, 3)), v(3)), E_list(v(1, 2, 3)), v(E_uintEq)));
// }

// E_listTakeWhile {
E_assert(E_listEq(E_listTakeWhile(E_nil(), E_appl(v(E_uintLesser), v(5))), E_nil(), v(E_uintEq)));
E_assert(
    E_listEq(E_listTakeWhile(E_list(v(7)), E_appl(v(E_uintGreater), v(5))), E_nil(), v(E_uintEq)));
E_assert(E_listEq(
    E_listTakeWhile(E_list(v(1, 9, 7)), E_appl(v(E_uintGreater), v(5))), E_list(v(1)),
    v(E_uintEq)));
E_assert(E_listEq(
    E_listTakeWhile(E_list(v(4, 9, 2, 3)), E_appl(v(E_uintGreater), v(5))), E_list(v(4)),
    v(E_uintEq)));
E_assert(E_listEq(
    E_listTakeWhile(E_list(v(2, 4, 7, 9, 28)), E_appl(v(E_uintGreater), v(5))), E_list(v(2, 4)),
    v(E_uintEq)));
// }

// E_listDrop {
E_assert(E_listEq(E_listDrop(E_nil(), v(1)), E_nil(), v(E_uintEq)));
E_assert(E_listEq(E_listDrop(E_nil(), v(200)), E_nil(), v(E_uintEq)));

E_assert(E_listEq(E_listDrop(E_list(v(1, 2, 3)), v(1)), E_list(v(2, 3)), v(E_uintEq)));
E_assert(E_listEq(E_listDrop(E_list(v(1, 2, 3)), v(2)), E_list(v(3)), v(E_uintEq)));
E_assert(E_listEq(E_listDrop(E_list(v(1, 2, 3)), v(3)), E_nil(), v(E_uintEq)));
// }

// E_listDropWhile {
E_assert(E_listEq(E_listDropWhile(E_nil(), E_appl(v(E_uintLesser), v(5))), E_nil(), v(E_uintEq)));
E_assert(E_listEq(
    E_listDropWhile(E_list(v(7)), E_appl(v(E_uintGreater), v(5))), E_list(v(7)), v(E_uintEq)));
E_assert(E_listEq(
    E_listDropWhile(E_list(v(1, 9, 7)), E_appl(v(E_uintGreater), v(5))), E_list(v(9, 7)),
    v(E_uintEq)));
E_assert(E_listEq(
    E_listDropWhile(E_list(v(4, 9, 2, 3)), E_appl(v(E_uintGreater), v(5))), E_list(v(9, 2, 3)),
    v(E_uintEq)));
E_assert(E_listEq(
    E_listDropWhile(E_list(v(2, 4, 7, 9, 28)), E_appl(v(E_uintGreater), v(5))), E_list(v(7, 9, 28)),
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
    E_listPrependToAll(E_list(v(5, 9, 22)), v(111)), E_list(v(111, 5, 111, 9, 111, 22)),
    v(E_uintEq)));
// }

// E_listIntersperse {
E_assert(E_listEq(E_listIntersperse(E_nil(), v(+)), E_nil(), v(E_uintEq)));
E_assert(E_listEq(
    E_listIntersperse(E_list(v(5, 9, 22)), v(111)), E_list(v(5, 111, 9, 111, 22)), v(E_uintEq)));
// }

#define ABCDEFG E_true

// E_listFoldr {
E_assertEq(E_listFoldr(v(E_catUnevaluated), v(7), E_nil()), v(7));
E_assert(E_listFoldr(E_appl(v(E_flip), v(E_catUnevaluated)), v(A), E_list(v(G, DEF, BC))));
// }

// E_listFoldl {
E_assertEq(E_listFoldl(v(E_catUnevaluated), v(7), E_nil()), v(7));
E_assert(E_listFoldl(v(E_catUnevaluated), v(A), E_list(v(BC, DEF, G))));
// }

// E_listFoldl1 {
E_assert(E_listFoldl1(v(E_catUnevaluated), E_list(v(AB, CDEF, G))));
// }

#undef ABCDEFG

// E_listMap {
E_assert(E_listEq(E_listMap(E_appl(v(E_uintAdd), v(3)), E_nil()), E_nil(), v(E_uintEq)));
E_assert(E_listEq(
    E_listMap(E_appl(v(E_uintAdd), v(3)), E_list(v(1, 2, 3))), E_list(v(4, 5, 6)), v(E_uintEq)));
// }

// E_listFor {
E_assert(E_listEq(E_listFor(E_nil(), E_appl(v(E_uintAdd), v(3))), E_nil(), v(E_uintEq)));
E_assert(E_listEq(
    E_listFor(E_list(v(1, 2, 3)), E_appl(v(E_uintAdd), v(3))), E_list(v(4, 5, 6)), v(E_uintEq)));
// }

// E_listMapInitLast {
E_assert(E_listEq(
    E_listMapInitLast(E_appl(v(E_uintAdd), v(3)), E_appl(v(E_uintAdd), v(19)), E_list(v(4))),
    E_list(v(23)), v(E_uintEq)));
E_assert(E_listEq(
    E_listMapInitLast(E_appl(v(E_uintAdd), v(3)), E_appl(v(E_uintAdd), v(7)), E_list(v(1, 2, 3))),
    E_list(v(4, 5, 10)), v(E_uintEq)));
// }

// E_listForInitLast {
E_assert(E_listEq(
    E_listForInitLast(E_list(v(4)), E_appl(v(E_uintAdd), v(3)), E_appl(v(E_uintAdd), v(19))),
    E_list(v(23)), v(E_uintEq)));
E_assert(E_listEq(
    E_listForInitLast(E_list(v(1, 2, 3)), E_appl(v(E_uintAdd), v(3)), E_appl(v(E_uintAdd), v(7))),
    E_list(v(4, 5, 10)), v(E_uintEq)));
// }

// E_listFilter {
E_assert(E_listEq(E_listFilter(E_nil(), E_appl(v(E_uintAdd), v(3))), E_nil(), v(E_uintEq)));
E_assert(E_listEq(
    E_listFilter(E_list(v(14, 0, 1, 7, 2, 65, 3)), E_appl(v(E_uintLesser), v(3))),
    E_list(v(14, 7, 65)), v(E_uintEq)));
// }

// E_listReplicate {
E_assert(E_listEq(E_listReplicate(v(0), v(7)), E_nil(), v(E_uintEq)));
E_assert(E_listEq(E_listReplicate(v(3), v(7)), E_list(v(7, 7, 7)), v(E_uintEq)));
// }
