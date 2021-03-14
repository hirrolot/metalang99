#include <metalang99/assert.h>
#include <metalang99/list.h>
#include <metalang99/nat.h>
#include <metalang99/tuple.h>
#include <metalang99/util.h>

// ML99_listHead {
ML99_assertEq(ML99_listHead(ML99_list(v(1))), v(1));
ML99_assertEq(ML99_listHead(ML99_list(v(1, 2))), v(1));
ML99_assertEq(ML99_listHead(ML99_list(v(1, 2, 3))), v(1));
// }

// ML99_listTail {
ML99_assert(ML99_listEq(v(ML99_natEq), ML99_listTail(ML99_list(v(1))), ML99_nil()));
ML99_assert(ML99_listEq(v(ML99_natEq), ML99_listTail(ML99_list(v(1, 2))), ML99_list(v(2))));
ML99_assert(ML99_listEq(v(ML99_natEq), ML99_listTail(ML99_list(v(1, 2, 3))), ML99_list(v(2, 3))));
// }

// ML99_listLast {
ML99_assertEq(ML99_listLast(ML99_list(v(1))), v(1));
ML99_assertEq(ML99_listLast(ML99_list(v(1, 2))), v(2));
ML99_assertEq(ML99_listLast(ML99_list(v(1, 2, 3))), v(3));
// }

// ML99_listInit {
ML99_assert(ML99_listEq(v(ML99_natEq), ML99_listInit(ML99_list(v(1))), ML99_nil()));
ML99_assert(ML99_listEq(v(ML99_natEq), ML99_listInit(ML99_list(v(1, 2))), ML99_list(v(1))));
ML99_assert(ML99_listEq(v(ML99_natEq), ML99_listInit(ML99_list(v(1, 2, 3))), ML99_list(v(1, 2))));
// }

// ML99_listLen {
ML99_assertEq(ML99_listLen(ML99_nil()), v(0));
ML99_assertEq(ML99_listLen(ML99_list(v(123))), v(1));
ML99_assertEq(ML99_listLen(ML99_list(v(123, 222))), v(2));
ML99_assertEq(ML99_listLen(ML99_list(v(123, 222, 18))), v(3));
// }

// ML99_listAppend {
ML99_assert(ML99_listEq(v(ML99_natEq), ML99_listAppend(ML99_nil(), ML99_nil()), ML99_nil()));
ML99_assert(ML99_listEq(
    v(ML99_natEq), ML99_listAppend(ML99_nil(), ML99_list(v(1, 2, 3))), ML99_list(v(1, 2, 3))));
ML99_assert(ML99_listEq(
    v(ML99_natEq), ML99_listAppend(ML99_list(v(1, 2, 3)), ML99_nil()), ML99_list(v(1, 2, 3))));

ML99_assert(ML99_listEq(
    v(ML99_natEq), ML99_listAppend(ML99_list(v(1, 2, 3)), ML99_list(v(4, 5, 6))),
    ML99_list(v(1, 2, 3, 4, 5, 6))));
// }

// ML99_listAppendItem {
ML99_assert(ML99_listEq(v(ML99_natEq), ML99_listAppendItem(v(123), ML99_nil()), ML99_list(v(123))));
ML99_assert(ML99_listEq(
    v(ML99_natEq), ML99_listAppendItem(v(222), ML99_list(v(1, 2, 3))), ML99_list(v(1, 2, 3, 222))));
// }

// ML99_listReverse {
ML99_assert(ML99_listEq(v(ML99_natEq), ML99_listReverse(ML99_nil()), ML99_nil()));
ML99_assert(
    ML99_listEq(v(ML99_natEq), ML99_listReverse(ML99_list(v(1, 2, 3))), ML99_list(v(3, 2, 1))));
// }

// ML99_listContains {
ML99_assert(ML99_not(ML99_listContains(v(ML99_natEq), v(1), ML99_nil())));
ML99_assert(ML99_listContains(v(ML99_natEq), v(1), ML99_list(v(1, 2, 3))));
ML99_assert(ML99_listContains(v(ML99_natEq), v(2), ML99_list(v(1, 2, 3))));
ML99_assert(ML99_listContains(v(ML99_natEq), v(3), ML99_list(v(1, 2, 3))));
ML99_assert(ML99_not(ML99_listContains(v(ML99_natEq), v(187), ML99_list(v(1, 2, 3)))));
// }

// ML99_listUnwrap {
ML99_assertEmpty(ML99_listUnwrap(ML99_nil()));
ML99_assertEq(ML99_listUnwrap(ML99_list(v(18, +, 3, +, 6))), v(18 + 3 + 6));
// }

// ML99_listEval {
ML99_assertEmptyPlain(ML99_listEval(ML99_nil()));
ML99_assertPlain(ML99_listEval(ML99_list(v(19, +, 6))) == 19 + 6);
// }

// ML99_listEvalCommaSep, ML99_listUnwrapCommaSep {
#define CHECK(a, b, c) ML99_assertPlain(a == 1 && b == 2 && c == 3)

ML99_assertEmptyPlain(ML99_listEvalCommaSep(ML99_nil()));
ML99_assertEmpty(ML99_listUnwrapCommaSep(ML99_nil()));

ML99_eval(v(CHECK), ML99_tuple(v(ML99_listEvalCommaSep(ML99_list(v(1, 2, 3))))));
ML99_eval(v(CHECK), ML99_tuple(ML99_listUnwrapCommaSep(ML99_list(v(1, 2, 3)))));

#undef CHECK
// }

// ML99_isNil, ML99_IS_NIL {
ML99_assert(ML99_isNil(ML99_nil()));
ML99_assert(ML99_not(ML99_isNil(ML99_list(v(123)))));
ML99_assert(ML99_not(ML99_isNil(ML99_list(v(8, 214, 10, 0, 122)))));

ML99_assertPlain(ML99_IS_NIL(ML99_NIL()));
ML99_assertPlain(ML99_NOT(ML99_IS_NIL(ML99_CONS(123, ML99_NIL()))));
ML99_assertPlain(ML99_NOT(ML99_IS_NIL(ML99_eval(ML99_list(v(8, 214, 10, 0, 122))))));
// }

// ML99_isCons, ML99_IS_CONS {
ML99_assert(ML99_not(ML99_isCons(ML99_nil())));
ML99_assert(ML99_isCons(ML99_list(v(123))));
ML99_assert(ML99_isCons(ML99_list(v(8, 214, 10, 0, 122))));

ML99_assertPlain(ML99_NOT(ML99_IS_CONS(ML99_NIL())));
ML99_assertPlain(ML99_IS_CONS(ML99_CONS(123, ML99_NIL())));
ML99_assertPlain(ML99_IS_CONS(ML99_eval(ML99_list(v(8, 214, 10, 0, 122)))));
// }

// ML99_listGet {
ML99_assertEq(ML99_listGet(v(0), ML99_list(v(123, 222))), v(123));
ML99_assertEq(ML99_listGet(v(1), ML99_list(v(123, 222))), v(222));
// }

// ML99_listTake {
ML99_assert(ML99_listEq(v(ML99_natEq), ML99_listTake(v(1), ML99_nil()), ML99_nil()));
ML99_assert(ML99_listEq(v(ML99_natEq), ML99_listTake(v(200), ML99_nil()), ML99_nil()));

ML99_assert(
    ML99_listEq(v(ML99_natEq), ML99_listTake(v(1), ML99_list(v(1, 2, 3))), ML99_list(v(1))));
ML99_assert(
    ML99_listEq(v(ML99_natEq), ML99_listTake(v(2), ML99_list(v(1, 2, 3))), ML99_list(v(1, 2))));
ML99_assert(
    ML99_listEq(v(ML99_natEq), ML99_listTake(v(3), ML99_list(v(1, 2, 3))), ML99_list(v(1, 2, 3))));
// }

// ML99_listTakeWhile {
ML99_assert(ML99_listEq(
    v(ML99_natEq), ML99_listTakeWhile(ML99_appl(v(ML99_lesser), v(5)), ML99_nil()), ML99_nil()));
ML99_assert(ML99_listEq(
    v(ML99_natEq), ML99_listTakeWhile(ML99_appl(v(ML99_greater), v(5)), ML99_list(v(7))),
    ML99_nil()));
ML99_assert(ML99_listEq(
    v(ML99_natEq), ML99_listTakeWhile(ML99_appl(v(ML99_greater), v(5)), ML99_list(v(1, 9, 7))),
    ML99_list(v(1))));
ML99_assert(ML99_listEq(
    v(ML99_natEq), ML99_listTakeWhile(ML99_appl(v(ML99_greater), v(5)), ML99_list(v(4, 9, 2, 3))),
    ML99_list(v(4))));
ML99_assert(ML99_listEq(
    v(ML99_natEq),
    ML99_listTakeWhile(ML99_appl(v(ML99_greater), v(5)), ML99_list(v(2, 4, 7, 9, 28))),
    ML99_list(v(2, 4))));
// }

// ML99_listDrop {
ML99_assert(ML99_listEq(v(ML99_natEq), ML99_listDrop(v(1), ML99_nil()), ML99_nil()));
ML99_assert(ML99_listEq(v(ML99_natEq), ML99_listDrop(v(200), ML99_nil()), ML99_nil()));

ML99_assert(
    ML99_listEq(v(ML99_natEq), ML99_listDrop(v(1), ML99_list(v(1, 2, 3))), ML99_list(v(2, 3))));
ML99_assert(
    ML99_listEq(v(ML99_natEq), ML99_listDrop(v(2), ML99_list(v(1, 2, 3))), ML99_list(v(3))));
ML99_assert(ML99_listEq(v(ML99_natEq), ML99_listDrop(v(3), ML99_list(v(1, 2, 3))), ML99_nil()));
// }

// ML99_listDropWhile {
ML99_assert(ML99_listEq(
    v(ML99_natEq), ML99_listDropWhile(ML99_appl(v(ML99_lesser), v(5)), ML99_nil()), ML99_nil()));
ML99_assert(ML99_listEq(
    v(ML99_natEq), ML99_listDropWhile(ML99_appl(v(ML99_greater), v(5)), ML99_list(v(7))),
    ML99_list(v(7))));
ML99_assert(ML99_listEq(
    v(ML99_natEq), ML99_listDropWhile(ML99_appl(v(ML99_greater), v(5)), ML99_list(v(1, 9, 7))),
    ML99_list(v(9, 7))));
ML99_assert(ML99_listEq(
    v(ML99_natEq), ML99_listDropWhile(ML99_appl(v(ML99_greater), v(5)), ML99_list(v(4, 9, 2, 3))),
    ML99_list(v(9, 2, 3))));
ML99_assert(ML99_listEq(
    v(ML99_natEq),
    ML99_listDropWhile(ML99_appl(v(ML99_greater), v(5)), ML99_list(v(2, 4, 7, 9, 28))),
    ML99_list(v(7, 9, 28))));
// }

// ML99_listZip {
#define EQ ML99_appl(v(ML99_listEq), v(ML99_natEq))

ML99_assert(ML99_listEq(EQ, ML99_listZip(ML99_nil(), ML99_nil()), ML99_nil()));
ML99_assert(ML99_listEq(EQ, ML99_listZip(ML99_list(v(1, 2, 3)), ML99_nil()), ML99_nil()));
ML99_assert(ML99_listEq(EQ, ML99_listZip(ML99_nil(), ML99_list(v(1, 2, 3))), ML99_nil()));

ML99_assert(ML99_listEq(
    EQ, ML99_listZip(ML99_list(v(1, 2, 3)), ML99_list(v(4, 5, 6))),
    ML99_list(ML99_list(v(1, 4)), ML99_list(v(2, 5)), ML99_list(v(3, 6)))));

ML99_assert(ML99_listEq(
    EQ, ML99_listZip(ML99_list(v(1, 2, 3)), ML99_list(v(4, 5))),
    ML99_list(ML99_list(v(1, 4)), ML99_list(v(2, 5)))));

ML99_assert(ML99_listEq(
    EQ, ML99_listZip(ML99_list(v(1, 2)), ML99_list(v(4, 5, 6))),
    ML99_list(ML99_list(v(1, 4)), ML99_list(v(2, 5)))));

#undef EQ
// }

// ML99_listUnzip & ML99_listZip {
#define LIST ML99_listUnzip(ML99_nil())

ML99_assert(ML99_listEq(v(ML99_natEq), ML99_listGet(v(0), LIST), ML99_nil()));
ML99_assert(ML99_listEq(v(ML99_natEq), ML99_listGet(v(1), LIST), ML99_nil()));

#undef LIST

#define LIST ML99_listUnzip(ML99_listZip(ML99_list(v(1, 2)), ML99_list(v(4, 5))))

ML99_assert(ML99_listEq(v(ML99_natEq), ML99_listGet(v(0), LIST), ML99_list(v(1, 2))));
ML99_assert(ML99_listEq(v(ML99_natEq), ML99_listGet(v(1), LIST), ML99_list(v(4, 5))));

#undef LIST
// }

// ML99_listEq {
ML99_assert(ML99_listEq(v(ML99_natEq), ML99_nil(), ML99_nil()));
ML99_assert(ML99_not(ML99_listEq(v(ML99_natEq), ML99_nil(), ML99_list(v(25, 88, 1)))));
ML99_assert(ML99_not(ML99_listEq(v(ML99_natEq), ML99_list(v(25, 88, 1)), ML99_nil())));

ML99_assert(ML99_listEq(v(ML99_natEq), ML99_list(v(1, 2, 3)), ML99_list(v(1, 2, 3))));
ML99_assert(ML99_not(ML99_listEq(v(ML99_natEq), ML99_list(v(1, 2, 3)), ML99_list(v(1)))));
ML99_assert(ML99_not(ML99_listEq(v(ML99_natEq), ML99_list(v(1)), ML99_list(v(1, 2, 3)))));
ML99_assert(ML99_not(ML99_listEq(v(ML99_natEq), ML99_list(v(0, 5, 6, 6)), ML99_list(v(6, 7)))));
// }

// ML99_listAppl {
ML99_assertEq(ML99_call(ML99_listAppl(v(ML99_add), ML99_nil()), v(6, 9)), v(6 + 9));
ML99_assertEq(ML99_appl(ML99_listAppl(v(ML99_add), ML99_list(v(6))), v(9)), v(6 + 9));
ML99_assertEq(ML99_listAppl(v(ML99_add), ML99_list(v(6, 9))), v(6 + 9));
// }

// ML99_listPrependToAll {
ML99_assert(ML99_listEq(v(ML99_natEq), ML99_listPrependToAll(v(+), ML99_nil()), ML99_nil()));
ML99_assert(ML99_listEq(
    v(ML99_natEq), ML99_listPrependToAll(v(111), ML99_list(v(5, 9, 22))),
    ML99_list(v(111, 5, 111, 9, 111, 22))));
// }

// ML99_listIntersperse {
ML99_assert(ML99_listEq(v(ML99_natEq), ML99_listIntersperse(v(+), ML99_nil()), ML99_nil()));
ML99_assert(ML99_listEq(
    v(ML99_natEq), ML99_listIntersperse(v(111), ML99_list(v(5, 9, 22))),
    ML99_list(v(5, 111, 9, 111, 22))));
// }

#define ABCDEFG ML99_TRUE

// ML99_listFoldr {
ML99_assertEq(ML99_listFoldr(v(ML99_cat), v(7), ML99_nil()), v(7));
ML99_assert(ML99_listFoldr(ML99_appl(v(ML99_flip), v(ML99_cat)), v(A), ML99_list(v(G, DEF, BC))));
// }

// ML99_listFoldl {
ML99_assertEq(ML99_listFoldl(v(ML99_cat), v(7), ML99_nil()), v(7));
ML99_assert(ML99_listFoldl(v(ML99_cat), v(A), ML99_list(v(BC, DEF, G))));
// }

// ML99_listFoldl1 {
ML99_assert(ML99_listFoldl1(v(ML99_cat), ML99_list(v(AB, CDEF, G))));
// }

#undef ABCDEFG

// ML99_listMap {
ML99_assert(
    ML99_listEq(v(ML99_natEq), ML99_listMap(ML99_appl(v(ML99_add), v(3)), ML99_nil()), ML99_nil()));
ML99_assert(ML99_listEq(
    v(ML99_natEq), ML99_listMap(ML99_appl(v(ML99_add), v(3)), ML99_list(v(1, 2, 3))),
    ML99_list(v(4, 5, 6))));
// }

// ML99_listMapI {
#define A0 19
#define B1 6
#define C2 11

ML99_assert(ML99_listEq(v(ML99_natEq), ML99_listMapI(v(ML99_cat), ML99_nil()), ML99_nil()));
ML99_assert(ML99_listEq(
    v(ML99_natEq), ML99_listMapI(v(ML99_cat), ML99_list(v(A, B, C))), ML99_list(v(19, 6, 11))));

#undef A0
#undef B1
#undef C2
// }

// ML99_listMapInPlace {
#define FOO_x
#define FOO_y
#define FOO_z

ML99_assertEmpty(ML99_listMapInPlace(v(NonExistingF), ML99_nil()));
ML99_eval(ML99_listMapInPlace(ML99_appl(v(ML99_cat), v(FOO_)), ML99_list(v(x, y, z))))

#undef FOO_x
#undef FOO_y
#undef FOO_z
// }

// ML99_listMapInPlaceI {
#define FOO_x0
#define FOO_y1
#define FOO_z2

#define MY_CAT_IMPL(x, i) v(FOO_##x##i)
#define MY_CAT_ARITY      2

ML99_assertEmpty(ML99_listMapInPlaceI(v(NonExistingF), ML99_nil()));
ML99_eval(ML99_listMapInPlaceI(v(MY_CAT), ML99_list(v(x, y, z))))

#undef MY_CAT_IMPL
#undef MY_CAT_ARITY

#undef FOO_x
#undef FOO_y
#undef FOO_z
// }

// ML99_listFor {
ML99_assert(
    ML99_listEq(v(ML99_natEq), ML99_listFor(ML99_nil(), ML99_appl(v(ML99_add), v(3))), ML99_nil()));
ML99_assert(ML99_listEq(
    v(ML99_natEq), ML99_listFor(ML99_list(v(1, 2, 3)), ML99_appl(v(ML99_add), v(3))),
    ML99_list(v(4, 5, 6))));
// }

// ML99_listMapInitLast {
ML99_assert(ML99_listEq(
    v(ML99_natEq),
    ML99_listMapInitLast(
        ML99_appl(v(ML99_add), v(3)), ML99_appl(v(ML99_add), v(19)), ML99_list(v(4))),
    ML99_list(v(23))));
ML99_assert(ML99_listEq(
    v(ML99_natEq),
    ML99_listMapInitLast(
        ML99_appl(v(ML99_add), v(3)), ML99_appl(v(ML99_add), v(7)), ML99_list(v(1, 2, 3))),
    ML99_list(v(4, 5, 10))));
// }

// ML99_listForInitLast {
ML99_assert(ML99_listEq(
    v(ML99_natEq),
    ML99_listForInitLast(
        ML99_list(v(4)), ML99_appl(v(ML99_add), v(3)), ML99_appl(v(ML99_add), v(19))),
    ML99_list(v(23))));
ML99_assert(ML99_listEq(
    v(ML99_natEq),
    ML99_listForInitLast(
        ML99_list(v(1, 2, 3)), ML99_appl(v(ML99_add), v(3)), ML99_appl(v(ML99_add), v(7))),
    ML99_list(v(4, 5, 10))));
// }

// ML99_listFilter {
ML99_assert(ML99_listEq(
    v(ML99_natEq), ML99_listFilter(ML99_appl(v(ML99_add), v(3)), ML99_nil()), ML99_nil()));
ML99_assert(ML99_listEq(
    v(ML99_natEq),
    ML99_listFilter(ML99_appl(v(ML99_lesser), v(3)), ML99_list(v(14, 0, 1, 7, 2, 65, 3))),
    ML99_list(v(14, 7, 65))));
// }

// ML99_listReplicate {
ML99_assert(ML99_listEq(v(ML99_natEq), ML99_listReplicate(v(0), v(~)), ML99_nil()));
ML99_assert(ML99_listEq(v(ML99_natEq), ML99_listReplicate(v(3), v(7)), ML99_list(v(7, 7, 7))));
// }

// ML99_listPartition {
// Partitioning ML99_nil() {
#define LIST ML99_listPartition(ML99_appl(v(ML99_greater), v(10)), ML99_nil())

ML99_assert(ML99_listEq(v(ML99_natEq), ML99_listGet(v(0), LIST), ML99_nil()));
ML99_assert(ML99_listEq(v(ML99_natEq), ML99_listGet(v(1), LIST), ML99_nil()));

#undef LIST
// }

// Only the second list contains items {
#define LIST ML99_listPartition(ML99_appl(v(ML99_greater), v(10)), ML99_list(v(11, 12, 13)))

ML99_assert(ML99_listEq(v(ML99_natEq), ML99_listGet(v(0), LIST), ML99_nil()));
ML99_assert(ML99_listEq(v(ML99_natEq), ML99_listGet(v(1), LIST), ML99_list(v(11, 12, 13))));

#undef LIST
// }

// Only the first list contains items {
#define LIST ML99_listPartition(ML99_appl(v(ML99_greater), v(10)), ML99_list(v(4, 7)))

ML99_assert(ML99_listEq(v(ML99_natEq), ML99_listGet(v(0), LIST), ML99_list(v(4, 7))));
ML99_assert(ML99_listEq(v(ML99_natEq), ML99_listGet(v(1), LIST), ML99_nil()));

#undef LIST
// }

// Both lists contain items {
#define LIST ML99_listPartition(ML99_appl(v(ML99_greater), v(10)), ML99_list(v(11, 4, 12, 13, 7)))

ML99_assert(ML99_listEq(v(ML99_natEq), ML99_listGet(v(0), LIST), ML99_list(v(4, 7))));
ML99_assert(ML99_listEq(v(ML99_natEq), ML99_listGet(v(1), LIST), ML99_list(v(11, 12, 13))));

#undef LIST
// }

// } (ML99_listPartition)

int main(void) {}
