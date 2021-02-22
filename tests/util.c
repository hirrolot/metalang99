#include <metalang99/assert.h>
#include <metalang99/util.h>

#define CHECK(x, y) M_assertPlain(x == 518 && y == 1910)

// M_id {
M_eval(v(CHECK), M_id(v((518, 1910))));
M_assertEq(M_appl(M_compose(v(M_id), v(M_id)), v(181)), v(181));
// }

// M_parenthesize {
M_eval(v(CHECK), M_parenthesize(v(518, 1910)));
// }

#undef CHECK

// M_unparenthesizeEval {
M_assertEq(M_unparenthesizeEval(v((v(198)))), v(198));
// }

// M_unparenthesize {
M_assertEq(M_unparenthesize(v((198))), v(198));
// }

// M_parenthesizeEval + M_unparenthesizeEval {
M_assertEq(M_unparenthesizeEval(M_parenthesizeEval(v(187))), v(187));
// }

// M_parenthesize + M_unparenthesize {
M_assertEq(M_unparenthesize(M_parenthesize(v(187))), v(187));
// }

// M_const {
M_assertEq(M_appl2(v(M_const), v(1810), v(~)), v(1810));
// }

// M_flip {
#define ABC v(M_true)

M_assert(M_appl2(M_flip(v(M_catEval)), v(C), v(AB)));

#undef ABC
// }

// M_putBefore, M_putAfter, M_putBetween {
M_assertEq(M_putBefore(v(0), v(!)), v(!0));
M_assertEq(M_putAfter(v(!), v(0)), v(!0));
M_assertEq(M_putBetween(v(16), v(9), v(+)), v(16 + 9));
// }

// M_leftUnderscored, M_rightUnderscored {
#define _FOO 123
#define FOO_ 456

M_assertEq(M_leftUnderscored(v(FOO)), v(123));
M_assertEq(M_rightUnderscored(v(FOO)), v(456));

#undef _FOO
#undef FOO_
// }

// M_isParenthesized, M_isUnparenthesized {
M_assert(M_isParenthesized(v((1, 2, 3))));
M_assert(M_not(M_isParenthesized(v(123))));

M_assert(M_not(M_isUnparenthesized(v((1, 2, 3)))));
M_assert(M_isUnparenthesized(v(123)));
// }

// M_consume {
M_assertEmpty(M_consume(v(1, 2, 3)));
// }

// M_withState {
#define CHECK(state, x) M_assertPlain(state == 7 && x == 30)

M_eval(v(CHECK), M_parenthesize(M_withState(v(7), v(30))));

#undef CHECK
// }

// M_stateless, M_stateless2, M_stateless3 {
#define CHECK(_state, x) M_assertPlain(x == 30)

#define F_IMPL(x)        v(x + 3)
#define F_ARITY          1
#define F2_IMPL(x, y)    v(x + y + 3)
#define F2_ARITY         2
#define F3_IMPL(x, y, z) v(x + y + z + 3)
#define F3_ARITY         3

M_eval(v(CHECK), M_parenthesize(M_appl2(M_stateless(v(F)), v(~), v(27))));
M_eval(v(CHECK), M_parenthesize(M_appl3(M_stateless2(v(F2)), v(~), v(4), v(23))));
M_eval(v(CHECK), M_parenthesize(M_appl(M_appl3(M_stateless3(v(F3)), v(~), v(4), v(15)), v(8))));

#undef F_IMPL
#undef F_ARITY
#undef F_IMPL2
#undef F_ARITY2
#undef F_IMPL3
#undef F_ARITY3

#undef CHECK
// }

// M_semicolon {
M_semicolon();
M_semicolon();

static void test_semicolon(void) {
    M_semicolon();
    M_semicolon();

    {
        M_semicolon();
        M_semicolon();

        {
            M_semicolon();
            M_semicolon();
        }
    }
}
// }

// M_introduceVarToStmt {
static void test_let(void) {
    // clang-format off
    for (int i = 0; i < 10; i++)
        M_introduceVarToStmt(double x = 5.0)
        M_introduceVarToStmt(double y = 7.0) {
            x = y = 123.456;
            int z = y;
            (void)x;
            (void)z;
        }
    // clang-format on
}
// }

// M_braced {
struct TestBraced M_eval(M_braced(v(int a, b, c;)));
// }

// M_typedef {
static void test_typedef(void) {
    M_eval(M_typedef(v(Point), v(struct { int x, y; })));

    Point point = {5, 7};
    point.x = 1;
    point.y = 2;
}
// }

// M_struct {
static void test_struct(void) {
    M_eval(M_struct(v(Point), v(int x, y;)));

    struct Point point = {5, 7};
    point.x = 1;
    point.y = 2;
}
// }

// M_anonStruct {
static void test_anon_struct(void) {
    typedef M_eval(M_anonStruct(v(int x, y;))) Point;

    Point point = {5, 7};
    point.x = 1;
    point.y = 2;
}
// }

int main(void) {
    (void)test_semicolon;
    (void)test_let;
    (void)test_typedef;
    (void)test_struct;
    (void)test_anon_struct;
}
