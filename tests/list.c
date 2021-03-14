#include <metalang99/assert.h>
#include <metalang99/list.h>
#include <metalang99/nat.h>
#include <metalang99/tuple.h>
#include <metalang99/util.h>

// M_listHead {
M_assertEq(M_listHead(M_list(v(1))), v(1));
M_assertEq(M_listHead(M_list(v(1, 2))), v(1));
M_assertEq(M_listHead(M_list(v(1, 2, 3))), v(1));
// }

// M_listTail {
M_assert(M_listEq(v(M_natEq), M_listTail(M_list(v(1))), M_nil()));
M_assert(M_listEq(v(M_natEq), M_listTail(M_list(v(1, 2))), M_list(v(2))));
M_assert(M_listEq(v(M_natEq), M_listTail(M_list(v(1, 2, 3))), M_list(v(2, 3))));
// }

// M_listLast {
M_assertEq(M_listLast(M_list(v(1))), v(1));
M_assertEq(M_listLast(M_list(v(1, 2))), v(2));
M_assertEq(M_listLast(M_list(v(1, 2, 3))), v(3));
// }

// M_listInit {
M_assert(M_listEq(v(M_natEq), M_listInit(M_list(v(1))), M_nil()));
M_assert(M_listEq(v(M_natEq), M_listInit(M_list(v(1, 2))), M_list(v(1))));
M_assert(M_listEq(v(M_natEq), M_listInit(M_list(v(1, 2, 3))), M_list(v(1, 2))));
// }

// M_listLen {
M_assertEq(M_listLen(M_nil()), v(0));
M_assertEq(M_listLen(M_list(v(123))), v(1));
M_assertEq(M_listLen(M_list(v(123, 222))), v(2));
M_assertEq(M_listLen(M_list(v(123, 222, 18))), v(3));
// }

// M_listAppend {
M_assert(M_listEq(v(M_natEq), M_listAppend(M_nil(), M_nil()), M_nil()));
M_assert(M_listEq(v(M_natEq), M_listAppend(M_nil(), M_list(v(1, 2, 3))), M_list(v(1, 2, 3))));
M_assert(M_listEq(v(M_natEq), M_listAppend(M_list(v(1, 2, 3)), M_nil()), M_list(v(1, 2, 3))));

M_assert(M_listEq(
    v(M_natEq), M_listAppend(M_list(v(1, 2, 3)), M_list(v(4, 5, 6))), M_list(v(1, 2, 3, 4, 5, 6))));
// }

// M_listAppendItem {
M_assert(M_listEq(v(M_natEq), M_listAppendItem(v(123), M_nil()), M_list(v(123))));
M_assert(
    M_listEq(v(M_natEq), M_listAppendItem(v(222), M_list(v(1, 2, 3))), M_list(v(1, 2, 3, 222))));
// }

// M_listReverse {
M_assert(M_listEq(v(M_natEq), M_listReverse(M_nil()), M_nil()));
M_assert(M_listEq(v(M_natEq), M_listReverse(M_list(v(1, 2, 3))), M_list(v(3, 2, 1))));
// }

// M_listContains {
M_assert(M_not(M_listContains(v(M_natEq), v(1), M_nil())));
M_assert(M_listContains(v(M_natEq), v(1), M_list(v(1, 2, 3))));
M_assert(M_listContains(v(M_natEq), v(2), M_list(v(1, 2, 3))));
M_assert(M_listContains(v(M_natEq), v(3), M_list(v(1, 2, 3))));
M_assert(M_not(M_listContains(v(M_natEq), v(187), M_list(v(1, 2, 3)))));
// }

// M_listUnwrap {
M_assertEmpty(M_listUnwrap(M_nil()));
M_assertEq(M_listUnwrap(M_list(v(18, +, 3, +, 6))), v(18 + 3 + 6));
// }

// M_listEval {
M_assertEmptyPlain(M_listEval(M_nil()));
M_assertPlain(M_listEval(M_list(v(19, +, 6))) == 19 + 6);
// }

// M_listEvalCommaSep, M_listUnwrapCommaSep {
#define CHECK(a, b, c) M_assertPlain(a == 1 && b == 2 && c == 3)

M_assertEmptyPlain(M_listEvalCommaSep(M_nil()));
M_assertEmpty(M_listUnwrapCommaSep(M_nil()));

M_eval(v(CHECK), M_tuple(v(M_listEvalCommaSep(M_list(v(1, 2, 3))))));
M_eval(v(CHECK), M_tuple(M_listUnwrapCommaSep(M_list(v(1, 2, 3)))));

#undef CHECK
// }

// M_isNil, M_IS_NIL {
M_assert(M_isNil(M_nil()));
M_assert(M_not(M_isNil(M_list(v(123)))));
M_assert(M_not(M_isNil(M_list(v(8, 214, 10, 0, 122)))));

M_assertPlain(M_IS_NIL(M_NIL()));
M_assertPlain(M_NOT(M_IS_NIL(M_CONS(123, M_NIL()))));
M_assertPlain(M_NOT(M_IS_NIL(M_eval(M_list(v(8, 214, 10, 0, 122))))));
// }

// M_isCons, M_IS_CONS {
M_assert(M_not(M_isCons(M_nil())));
M_assert(M_isCons(M_list(v(123))));
M_assert(M_isCons(M_list(v(8, 214, 10, 0, 122))));

M_assertPlain(M_NOT(M_IS_CONS(M_NIL())));
M_assertPlain(M_IS_CONS(M_CONS(123, M_NIL())));
M_assertPlain(M_IS_CONS(M_eval(M_list(v(8, 214, 10, 0, 122)))));
// }

// M_listGet {
M_assertEq(M_listGet(v(0), M_list(v(123, 222))), v(123));
M_assertEq(M_listGet(v(1), M_list(v(123, 222))), v(222));
// }

// M_listTake {
M_assert(M_listEq(v(M_natEq), M_listTake(v(1), M_nil()), M_nil()));
M_assert(M_listEq(v(M_natEq), M_listTake(v(200), M_nil()), M_nil()));

M_assert(M_listEq(v(M_natEq), M_listTake(v(1), M_list(v(1, 2, 3))), M_list(v(1))));
M_assert(M_listEq(v(M_natEq), M_listTake(v(2), M_list(v(1, 2, 3))), M_list(v(1, 2))));
M_assert(M_listEq(v(M_natEq), M_listTake(v(3), M_list(v(1, 2, 3))), M_list(v(1, 2, 3))));
// }

// M_listTakeWhile {
M_assert(M_listEq(v(M_natEq), M_listTakeWhile(M_appl(v(M_lesser), v(5)), M_nil()), M_nil()));
M_assert(M_listEq(v(M_natEq), M_listTakeWhile(M_appl(v(M_greater), v(5)), M_list(v(7))), M_nil()));
M_assert(M_listEq(
    v(M_natEq), M_listTakeWhile(M_appl(v(M_greater), v(5)), M_list(v(1, 9, 7))), M_list(v(1))));
M_assert(M_listEq(
    v(M_natEq), M_listTakeWhile(M_appl(v(M_greater), v(5)), M_list(v(4, 9, 2, 3))), M_list(v(4))));
M_assert(M_listEq(
    v(M_natEq), M_listTakeWhile(M_appl(v(M_greater), v(5)), M_list(v(2, 4, 7, 9, 28))),
    M_list(v(2, 4))));
// }

// M_listDrop {
M_assert(M_listEq(v(M_natEq), M_listDrop(v(1), M_nil()), M_nil()));
M_assert(M_listEq(v(M_natEq), M_listDrop(v(200), M_nil()), M_nil()));

M_assert(M_listEq(v(M_natEq), M_listDrop(v(1), M_list(v(1, 2, 3))), M_list(v(2, 3))));
M_assert(M_listEq(v(M_natEq), M_listDrop(v(2), M_list(v(1, 2, 3))), M_list(v(3))));
M_assert(M_listEq(v(M_natEq), M_listDrop(v(3), M_list(v(1, 2, 3))), M_nil()));
// }

// M_listDropWhile {
M_assert(M_listEq(v(M_natEq), M_listDropWhile(M_appl(v(M_lesser), v(5)), M_nil()), M_nil()));
M_assert(
    M_listEq(v(M_natEq), M_listDropWhile(M_appl(v(M_greater), v(5)), M_list(v(7))), M_list(v(7))));
M_assert(M_listEq(
    v(M_natEq), M_listDropWhile(M_appl(v(M_greater), v(5)), M_list(v(1, 9, 7))), M_list(v(9, 7))));
M_assert(M_listEq(
    v(M_natEq), M_listDropWhile(M_appl(v(M_greater), v(5)), M_list(v(4, 9, 2, 3))),
    M_list(v(9, 2, 3))));
M_assert(M_listEq(
    v(M_natEq), M_listDropWhile(M_appl(v(M_greater), v(5)), M_list(v(2, 4, 7, 9, 28))),
    M_list(v(7, 9, 28))));
// }

// M_listZip {
#define EQ M_appl(v(M_listEq), v(M_natEq))

M_assert(M_listEq(EQ, M_listZip(M_nil(), M_nil()), M_nil()));
M_assert(M_listEq(EQ, M_listZip(M_list(v(1, 2, 3)), M_nil()), M_nil()));
M_assert(M_listEq(EQ, M_listZip(M_nil(), M_list(v(1, 2, 3))), M_nil()));

M_assert(M_listEq(
    EQ, M_listZip(M_list(v(1, 2, 3)), M_list(v(4, 5, 6))),
    M_list(M_list(v(1, 4)), M_list(v(2, 5)), M_list(v(3, 6)))));

M_assert(M_listEq(
    EQ, M_listZip(M_list(v(1, 2, 3)), M_list(v(4, 5))), M_list(M_list(v(1, 4)), M_list(v(2, 5)))));

M_assert(M_listEq(
    EQ, M_listZip(M_list(v(1, 2)), M_list(v(4, 5, 6))), M_list(M_list(v(1, 4)), M_list(v(2, 5)))));

#undef EQ
// }

// M_listUnzip & M_listZip {
#define LIST M_listUnzip(M_nil())

M_assert(M_listEq(v(M_natEq), M_listGet(v(0), LIST), M_nil()));
M_assert(M_listEq(v(M_natEq), M_listGet(v(1), LIST), M_nil()));

#undef LIST

#define LIST M_listUnzip(M_listZip(M_list(v(1, 2)), M_list(v(4, 5))))

M_assert(M_listEq(v(M_natEq), M_listGet(v(0), LIST), M_list(v(1, 2))));
M_assert(M_listEq(v(M_natEq), M_listGet(v(1), LIST), M_list(v(4, 5))));

#undef LIST
// }

// M_listEq {
M_assert(M_listEq(v(M_natEq), M_nil(), M_nil()));
M_assert(M_not(M_listEq(v(M_natEq), M_nil(), M_list(v(25, 88, 1)))));
M_assert(M_not(M_listEq(v(M_natEq), M_list(v(25, 88, 1)), M_nil())));

M_assert(M_listEq(v(M_natEq), M_list(v(1, 2, 3)), M_list(v(1, 2, 3))));
M_assert(M_not(M_listEq(v(M_natEq), M_list(v(1, 2, 3)), M_list(v(1)))));
M_assert(M_not(M_listEq(v(M_natEq), M_list(v(1)), M_list(v(1, 2, 3)))));
M_assert(M_not(M_listEq(v(M_natEq), M_list(v(0, 5, 6, 6)), M_list(v(6, 7)))));
// }

// M_listAppl {
M_assertEq(M_call(M_listAppl(v(M_add), M_nil()), v(6, 9)), v(6 + 9));
M_assertEq(M_appl(M_listAppl(v(M_add), M_list(v(6))), v(9)), v(6 + 9));
M_assertEq(M_listAppl(v(M_add), M_list(v(6, 9))), v(6 + 9));
// }

// M_listPrependToAll {
M_assert(M_listEq(v(M_natEq), M_listPrependToAll(v(+), M_nil()), M_nil()));
M_assert(M_listEq(
    v(M_natEq), M_listPrependToAll(v(111), M_list(v(5, 9, 22))),
    M_list(v(111, 5, 111, 9, 111, 22))));
// }

// M_listIntersperse {
M_assert(M_listEq(v(M_natEq), M_listIntersperse(v(+), M_nil()), M_nil()));
M_assert(M_listEq(
    v(M_natEq), M_listIntersperse(v(111), M_list(v(5, 9, 22))), M_list(v(5, 111, 9, 111, 22))));
// }

#define ABCDEFG M_true

// M_listFoldr {
M_assertEq(M_listFoldr(v(M_cat), v(7), M_nil()), v(7));
M_assert(M_listFoldr(M_appl(v(M_flip), v(M_cat)), v(A), M_list(v(G, DEF, BC))));
// }

// M_listFoldl {
M_assertEq(M_listFoldl(v(M_cat), v(7), M_nil()), v(7));
M_assert(M_listFoldl(v(M_cat), v(A), M_list(v(BC, DEF, G))));
// }

// M_listFoldl1 {
M_assert(M_listFoldl1(v(M_cat), M_list(v(AB, CDEF, G))));
// }

#undef ABCDEFG

// M_listMap {
M_assert(M_listEq(v(M_natEq), M_listMap(M_appl(v(M_add), v(3)), M_nil()), M_nil()));
M_assert(M_listEq(
    v(M_natEq), M_listMap(M_appl(v(M_add), v(3)), M_list(v(1, 2, 3))), M_list(v(4, 5, 6))));
// }

// M_listMapI {
#define A0 19
#define B1 6
#define C2 11

M_assert(M_listEq(v(M_natEq), M_listMapI(v(M_cat), M_nil()), M_nil()));
M_assert(M_listEq(v(M_natEq), M_listMapI(v(M_cat), M_list(v(A, B, C))), M_list(v(19, 6, 11))));

#undef A0
#undef B1
#undef C2
// }

// M_listMapInPlace {
#define FOO_x
#define FOO_y
#define FOO_z

M_assertEmpty(M_listMapInPlace(v(NonExistingF), M_nil()));
M_eval(M_listMapInPlace(M_appl(v(M_cat), v(FOO_)), M_list(v(x, y, z))))

#undef FOO_x
#undef FOO_y
#undef FOO_z
// }

// M_listMapInPlaceI {
#define FOO_x0
#define FOO_y1
#define FOO_z2

#define MY_CAT_IMPL(x, i) v(FOO_##x##i)
#define MY_CAT_ARITY      2

M_assertEmpty(M_listMapInPlaceI(v(NonExistingF), M_nil()));
M_eval(M_listMapInPlaceI(v(MY_CAT), M_list(v(x, y, z))))

#undef MY_CAT_IMPL
#undef MY_CAT_ARITY

#undef FOO_x
#undef FOO_y
#undef FOO_z
// }

// M_listFor {
M_assert(M_listEq(v(M_natEq), M_listFor(M_nil(), M_appl(v(M_add), v(3))), M_nil()));
M_assert(M_listEq(
    v(M_natEq), M_listFor(M_list(v(1, 2, 3)), M_appl(v(M_add), v(3))), M_list(v(4, 5, 6))));
// }

// M_listMapInitLast {
M_assert(M_listEq(
    v(M_natEq), M_listMapInitLast(M_appl(v(M_add), v(3)), M_appl(v(M_add), v(19)), M_list(v(4))),
    M_list(v(23))));
M_assert(M_listEq(
    v(M_natEq),
    M_listMapInitLast(M_appl(v(M_add), v(3)), M_appl(v(M_add), v(7)), M_list(v(1, 2, 3))),
    M_list(v(4, 5, 10))));
// }

// M_listForInitLast {
M_assert(M_listEq(
    v(M_natEq), M_listForInitLast(M_list(v(4)), M_appl(v(M_add), v(3)), M_appl(v(M_add), v(19))),
    M_list(v(23))));
M_assert(M_listEq(
    v(M_natEq),
    M_listForInitLast(M_list(v(1, 2, 3)), M_appl(v(M_add), v(3)), M_appl(v(M_add), v(7))),
    M_list(v(4, 5, 10))));
// }

// M_listFilter {
M_assert(M_listEq(v(M_natEq), M_listFilter(M_appl(v(M_add), v(3)), M_nil()), M_nil()));
M_assert(M_listEq(
    v(M_natEq), M_listFilter(M_appl(v(M_lesser), v(3)), M_list(v(14, 0, 1, 7, 2, 65, 3))),
    M_list(v(14, 7, 65))));
// }

// M_listReplicate {
M_assert(M_listEq(v(M_natEq), M_listReplicate(v(0), v(~)), M_nil()));
M_assert(M_listEq(v(M_natEq), M_listReplicate(v(3), v(7)), M_list(v(7, 7, 7))));
// }

// M_listPartition {
// Partitioning M_nil() {
#define LIST M_listPartition(M_appl(v(M_greater), v(10)), M_nil())

M_assert(M_listEq(v(M_natEq), M_listGet(v(0), LIST), M_nil()));
M_assert(M_listEq(v(M_natEq), M_listGet(v(1), LIST), M_nil()));

#undef LIST
// }

// Only the second list contains items {
#define LIST M_listPartition(M_appl(v(M_greater), v(10)), M_list(v(11, 12, 13)))

M_assert(M_listEq(v(M_natEq), M_listGet(v(0), LIST), M_nil()));
M_assert(M_listEq(v(M_natEq), M_listGet(v(1), LIST), M_list(v(11, 12, 13))));

#undef LIST
// }

// Only the first list contains items {
#define LIST M_listPartition(M_appl(v(M_greater), v(10)), M_list(v(4, 7)))

M_assert(M_listEq(v(M_natEq), M_listGet(v(0), LIST), M_list(v(4, 7))));
M_assert(M_listEq(v(M_natEq), M_listGet(v(1), LIST), M_nil()));

#undef LIST
// }

// Both lists contain items {
#define LIST M_listPartition(M_appl(v(M_greater), v(10)), M_list(v(11, 4, 12, 13, 7)))

M_assert(M_listEq(v(M_natEq), M_listGet(v(0), LIST), M_list(v(4, 7))));
M_assert(M_listEq(v(M_natEq), M_listGet(v(1), LIST), M_list(v(11, 12, 13))));

#undef LIST
// }

// } (M_listPartition)

int main(void) {}
