#include <metalang99/assert.h>
#include <metalang99/gen.h>
#include <metalang99/list.h>
#include <metalang99/tuple.h>
#include <metalang99/util.h>

// ML99_INTRODUCE_VAR_TO_STMT {
static void test_INTRODUCE_VAR_TO_STMT(void) {
    // clang-format off
    for (int i = 0; i < 10; i++)
        ML99_INTRODUCE_VAR_TO_STMT(double x = 5.0, y = 7.0) {
            x = y = 123.456;
            double z = y;
            (void)x;
            (void)z;
        }
    // clang-format on
}
// }

// ML99_INTRODUCE_NON_NULL_PTR_TO_STMT {
static void test_INTRODUCE_NON_NULL_PTR_TO_STMT(void) {
    double x = 5.0, y = 7.0;

    // clang-format off
    for (int i = 0; i < 10; i++)
        ML99_INTRODUCE_NON_NULL_PTR_TO_STMT(double, x_ptr, &x)
        ML99_INTRODUCE_NON_NULL_PTR_TO_STMT(double, y_ptr, &y) {
            *x_ptr = *y_ptr = 123.456;
            double z = *y_ptr;
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
struct TestBraced ML99_EVAL(ML99_braced(v(int a, b, c;)));
// }

// ML99_typedef {
static void test_typedef(void) {
    ML99_EVAL(ML99_typedef(v(Point), v(struct { int x, y; })));

    Point point = {5, 7};
    point.x = 1;
    point.y = 2;

    (void)point;
}
// }

// ML99_struct {
static void test_struct(void) {
    ML99_EVAL(ML99_struct(v(Point), v(int x, y;)));

    struct Point point = {5, 7};
    point.x = 1;
    point.y = 2;

    (void)point;
}
// }

// ML99_anonStruct {
static void test_anon_struct(void) {
    typedef ML99_EVAL(ML99_anonStruct(v(int x, y;)))
    Point;

    Point point = {5, 7};
    point.x = 1;
    point.y = 2;

    (void)point;
}
// }

// ML99_union {
static void test_union(void) {
    ML99_EVAL(ML99_union(v(Point), v(int x, y;)));

    union Point point;
    point.x = 1;
    point.y = 2;

    (void)point;
}
// }

// ML99_anonUnion {
static void test_anon_union(void) {
    typedef ML99_EVAL(ML99_anonUnion(v(int x, y;)))
    Point;

    Point point;
    point.x = 1;
    point.y = 2;

    (void)point;
}
// }

// ML99_enum {
static void test_enum(void) {
    ML99_EVAL(ML99_enum(v(MyEnum), v(Foo, Bar)));

    enum MyEnum foo = Foo, bar = Bar;
    (void)foo;
    (void)bar;
}
// }

// ML99_anonEnum {
static void test_anon_enum(void) {
    typedef ML99_EVAL(ML99_anonEnum(v(Foo, Bar)))
    MyEnum;

    MyEnum foo = Foo, bar = Bar;
    (void)foo;
    (void)bar;
}
// }

// ML99_indexedParams {
#define CHECK_void

ML99_EVAL(ML99_cat(v(CHECK_), ML99_untuple(ML99_indexedParams(ML99_nil()))))

#undef CHECK_void

static void
    test_indexed_params ML99_EVAL(ML99_indexedParams(ML99_list(v(int, long long, const char *))))
{
    int i = _0;
    long long ll = _1;
    const char *str = _2;

    (void)i;
    (void)ll;
    (void)str;
}
// }

// ML99_indexedFields {
ML99_ASSERT_EMPTY(ML99_indexedFields(ML99_nil()));

static void test_indexed_fields(void) {
    struct {
        ML99_EVAL(ML99_indexedFields(ML99_list(v(int, long long, const char *))))
    } data = {0};

    int i = data._0;
    long long ll = data._1;
    const char *str = data._2;

    (void)i;
    (void)ll;
    (void)str;
}
// }

// ML99_indexedInitializerList {
struct {
    int _0;
    long long _1;
    const char *_2;
} test_indexed_initialiser_list_z = ML99_EVAL(ML99_indexedInitializerList(v(0)));

static void test_indexed_initialiser_list_s(void) {
    int _0 = 123;
    long long _1 = 149494456;
    const char *_2 = "abc";

    struct {
        int i;
        long long ll;
        const char *str;
    } data = ML99_EVAL(ML99_indexedInitializerList(v(3)));

    (void)data;
}
// }

// ML99_indexedArgs {
ML99_ASSERT_EMPTY(ML99_indexedArgs(v(0)));

static void test_indexed_args(int i, long long ll, const char *str) {
    (void)i;
    (void)ll;
    (void)str;

    int _0 = 123;
    long long _1 = 149494456;
    const char *_2 = "abc";

    test_indexed_args(ML99_EVAL(ML99_indexedArgs(v(3))));
}
// }

int main(void) {
    (void)test_indexed_params;
    (void)test_indexed_fields;
    (void)test_indexed_initialiser_list_z;
    (void)test_indexed_initialiser_list_s;
    (void)test_indexed_args;

    (void)test_INTRODUCE_VAR_TO_STMT;
    (void)test_INTRODUCE_NON_NULL_PTR_TO_STMT;
    (void)test_SUPPRESS_UNUSED_BEFORE_STMT;
    (void)test_typedef;
    (void)test_struct;
    (void)test_anon_struct;
    (void)test_union;
    (void)test_anon_union;
    (void)test_enum;
    (void)test_anon_enum;
}
