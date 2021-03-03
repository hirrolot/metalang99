#include <metalang99/assert.h>
#include <metalang99/util.h>

// M_id {
#define CHECK(x, y) M_assertPlain(x == 518 && y == 1910)

M_eval(v(CHECK), M_id(v((518, 1910))));
M_assertEq(M_appl(M_compose(v(M_id), v(M_id)), v(181)), v(181));

#undef CHECK
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

// M_consume {
M_assertEmpty(M_consume(v(1, 2, 3)));
// }

// M_introduceVarToStmt {
static void test_introduceVarToStmt(void) {
    // clang-format off
    for (int i = 0; i < 10; i++)
        M_introduceVarToStmt(double x = 5.0)
        M_introduceVarToStmt(double y = 7.0) {
            x = y = 123.456;
            double z = y;
            (void)x;
            (void)z;
        }
    // clang-format on
}
// }

// M_suppressUnusedBeforeStmt {
static void test_suppressUnusedBeforeStmt(void) {
    int x, y;

    // clang-format off
    for (int i = 0; i < 10; i++)
        M_suppressUnusedBeforeStmt(x)
        M_suppressUnusedBeforeStmt(y)
            (void)(1 + 1);
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

    (void)point;
}
// }

// M_struct {
static void test_struct(void) {
    M_eval(M_struct(v(Point), v(int x, y;)));

    struct Point point = {5, 7};
    point.x = 1;
    point.y = 2;

    (void)point;
}
// }

// M_anonStruct {
static void test_anon_struct(void) {
    typedef M_eval(M_anonStruct(v(int x, y;))) Point;

    Point point = {5, 7};
    point.x = 1;
    point.y = 2;

    (void)point;
}
// }

// M_union {
static void test_union(void) {
    M_eval(M_union(v(Point), v(int x, y;)));

    union Point point;
    point.x = 1;
    point.y = 2;

    (void)point;
}
// }

// M_anonUnion {
static void test_anon_union(void) {
    typedef M_eval(M_anonUnion(v(int x, y;))) Point;

    Point point;
    point.x = 1;
    point.y = 2;

    (void)point;
}
// }

// M_enum {
static void test_enum(void) {
    M_eval(M_enum(v(MyEnum), v(Foo, Bar)));

    enum MyEnum foo = Foo, bar = Bar;
    (void)foo;
    (void)bar;
}
// }

// M_anonEnum {
static void test_anon_enum(void) {
    typedef M_eval(M_anonEnum(v(Foo, Bar))) MyEnum;

    MyEnum foo = Foo, bar = Bar;
    (void)foo;
    (void)bar;
}
// }

// M_detectIdent {
#define FOO_x ()
#define FOO_y ()

M_assertPlain(M_detectIdent(FOO_, x));
M_assertPlain(M_detectIdent(FOO_, y));
M_assertPlain(!M_detectIdent(FOO_, z));

M_assertPlain(!M_detectIdent(BAR_, x));
M_assertPlain(!M_detectIdent(BAR_, abc));
M_assertPlain(!M_detectIdent(BAR_, defghi));

#undef FOO_x
#undef FOO_y
// }

int main(void) {
    (void)test_introduceVarToStmt;
    (void)test_suppressUnusedBeforeStmt;
    (void)test_typedef;
    (void)test_struct;
    (void)test_anon_struct;
    (void)test_union;
    (void)test_anon_union;
    (void)test_enum;
    (void)test_anon_enum;
}
