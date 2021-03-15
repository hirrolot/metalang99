#include <metalang99/assert.h>
#include <metalang99/util.h>

// ML99_id {
#define CHECK(x, y) ML99_assertPlain(x == 518 && y == 1910)

ML99_eval(v(CHECK), ML99_id(v((518, 1910))));
ML99_assertEq(ML99_appl(ML99_compose(v(ML99_id), v(ML99_id)), v(181)), v(181));

#undef CHECK
// }

// ML99_const {
ML99_assertEq(ML99_appl2(v(ML99_const), v(1810), v(~)), v(1810));
// }

// ML99_flip {
#define ABC ML99_true

ML99_assert(ML99_appl2(ML99_flip(v(ML99_catEval)), v(C), v(AB)));

#undef ABC
// }

// ML99_consume {
ML99_assertEmpty(ML99_consume(v(1, 2, 3)));
// }

// ML99_INTRODUCE_VAR_TO_STMT {
static void test_INTRODUCE_VAR_TO_STMT(void) {
    // clang-format off
    for (int i = 0; i < 10; i++)
        ML99_INTRODUCE_VAR_TO_STMT(double x = 5.0)
        ML99_INTRODUCE_VAR_TO_STMT(double y = 7.0) {
            x = y = 123.456;
            double z = y;
            (void)x;
            (void)z;
        }
    // clang-format on
}
// }

// ML99_SUPPRESS_UNUSED_BEFORE_STMT {
static void test_SUPPRESS_UNUSED_BEFORE_STMT(void) {
    int x, y;

    // clang-format off
    for (int i = 0; i < 10; i++)
        ML99_SUPPRESS_UNUSED_BEFORE_STMT(x)
        ML99_SUPPRESS_UNUSED_BEFORE_STMT(y)
            (void)(1 + 1);
    // clang-format on
}
// }

// ML99_braced {
struct TestBraced ML99_eval(ML99_braced(v(int a, b, c;)));
// }

// ML99_typedef {
static void test_typedef(void) {
    ML99_eval(ML99_typedef(v(Point), v(struct { int x, y; })));

    Point point = {5, 7};
    point.x = 1;
    point.y = 2;

    (void)point;
}
// }

// ML99_struct {
static void test_struct(void) {
    ML99_eval(ML99_struct(v(Point), v(int x, y;)));

    struct Point point = {5, 7};
    point.x = 1;
    point.y = 2;

    (void)point;
}
// }

// ML99_anonStruct {
static void test_anon_struct(void) {
    typedef ML99_eval(ML99_anonStruct(v(int x, y;)))
    Point;

    Point point = {5, 7};
    point.x = 1;
    point.y = 2;

    (void)point;
}
// }

// ML99_union {
static void test_union(void) {
    ML99_eval(ML99_union(v(Point), v(int x, y;)));

    union Point point;
    point.x = 1;
    point.y = 2;

    (void)point;
}
// }

// ML99_anonUnion {
static void test_anon_union(void) {
    typedef ML99_eval(ML99_anonUnion(v(int x, y;)))
    Point;

    Point point;
    point.x = 1;
    point.y = 2;

    (void)point;
}
// }

// ML99_enum {
static void test_enum(void) {
    ML99_eval(ML99_enum(v(MyEnum), v(Foo, Bar)));

    enum MyEnum foo = Foo, bar = Bar;
    (void)foo;
    (void)bar;
}
// }

// ML99_anonEnum {
static void test_anon_enum(void) {
    typedef ML99_eval(ML99_anonEnum(v(Foo, Bar)))
    MyEnum;

    MyEnum foo = Foo, bar = Bar;
    (void)foo;
    (void)bar;
}
// }

// ML99_DETECT_IDENT {
#define FOO_x ()
#define FOO_y ()

ML99_assertPlain(ML99_DETECT_IDENT(FOO_, x));
ML99_assertPlain(ML99_DETECT_IDENT(FOO_, y));
ML99_assertPlain(!ML99_DETECT_IDENT(FOO_, z));

ML99_assertPlain(!ML99_DETECT_IDENT(BAR_, x));
ML99_assertPlain(!ML99_DETECT_IDENT(BAR_, abc));
ML99_assertPlain(!ML99_DETECT_IDENT(BAR_, defghi));

#undef FOO_x
#undef FOO_y
// }

int main(void) {
    (void)test_INTRODUCE_VAR_TO_STMT;
    (void)test_SUPPRESS_UNUSED_BEFORE_STMT;
    (void)test_typedef;
    (void)test_struct;
    (void)test_anon_struct;
    (void)test_union;
    (void)test_anon_union;
    (void)test_enum;
    (void)test_anon_enum;
}
