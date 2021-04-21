#include <metalang99/assert.h>
#include <metalang99/gen.h>
#include <metalang99/list.h>
#include <metalang99/tuple.h>
#include <metalang99/util.h>

#include <assert.h>

// ML99_GEN_SYM {
static void test_GEN_SYM(void) {

#define TEST(...) TEST_NAMED(ML99_GEN_SYM(TEST_, x), __VA_ARGS__)
#define TEST_NAMED(x_sym, ...)                                                                     \
    do {                                                                                           \
        int x_sym = 5;                                                                             \
        (void)x_sym;                                                                               \
        __VA_ARGS__                                                                                \
    } while (0)

    // `x` here will not conflict the the `x` inside `TEST`.
    TEST(int x = 123; (void)x;);

#undef TEST
#undef TEST_NAMED

// Two identical calls to `ML99_GEN_SYM` must yield different identifiers.
#define TEST(x1_sym, x2_sym)                                                                       \
    do {                                                                                           \
        int x1_sym, x2_sym;                                                                        \
        (void)x1_sym;                                                                              \
        (void)x2_sym;                                                                              \
    } while (0)

    TEST(ML99_GEN_SYM(TEST_, x), ML99_GEN_SYM(TEST_, x));

#undef TEST
}
// }

// ML99_TRAILING_SEMICOLON {
ML99_TRAILING_SEMICOLON();
ML99_TRAILING_SEMICOLON(~, ~, ~);
// }

// ML99_INTRODUCE_VAR_TO_STMT {
static void test_INTRODUCE_VAR_TO_STMT(void) {
    if (1)
        ML99_INTRODUCE_VAR_TO_STMT(int x = 5, y = 7) {
            assert(5 == x);
            assert(7 == y);
        }
}
// }

// ML99_INTRODUCE_NON_NULL_PTR_TO_STMT {
static void test_INTRODUCE_NON_NULL_PTR_TO_STMT(void) {
    int x = 5, y = 7;

    // clang-format off
    if (1)
        ML99_INTRODUCE_NON_NULL_PTR_TO_STMT(int, x_ptr, &x)
        ML99_INTRODUCE_NON_NULL_PTR_TO_STMT(int, y_ptr, &y) {
            assert(x == *x_ptr);
            assert(y == *y_ptr);
        }
    // clang-format on
}
// }

// ML99_CHAIN_EXPR_STMT {
static void test_ML99_CHAIN_EXPR_STMT(void) {
    int x, y;

    // clang-format off
    if (1)
        ML99_CHAIN_EXPR_STMT(x = 1)
            ML99_CHAIN_EXPR_STMT(y = 2) {
                assert(1 == x);
                assert(2 == y);
            }

    // Test -Wunused suppression via ML99_CHAIN_EXPR_STMT.
    int z;

    if (1)
        ML99_CHAIN_EXPR_STMT((void)z)
            ;
    // clang-format on
}
// }

// ML99_CHAIN_EXPR_STMT_AFTER {
static void test_ML99_CHAIN_EXPR_STMT_AFTER(void) {
    int x = 5, y = 7;

    if (1) {
        assert(5 == x);
        assert(7 == y);

        ML99_CHAIN_EXPR_STMT_AFTER(x = 1) {
            assert(5 == x);
            assert(7 == y);

            ML99_CHAIN_EXPR_STMT_AFTER(y = 2) {
                assert(5 == x);
                assert(7 == y);
            }

            assert(5 == x);
            assert(2 == y);
        }

        assert(1 == x);
        assert(2 == y);
    }
}
// }

// ML99_SUPPRESS_UNUSED_BEFORE_STMT {
static void test_SUPPRESS_UNUSED_BEFORE_STMT(void) {
    int x, y;

    // clang-format off
    if (1)
        ML99_SUPPRESS_UNUSED_BEFORE_STMT(x)
        ML99_SUPPRESS_UNUSED_BEFORE_STMT(y)
            ;
    // clang-format on
}
// }

static void test_statement_chaining(void) {
    // clang-format off
    ML99_INTRODUCE_VAR_TO_STMT(int x = 5)
        ML99_INTRODUCE_NON_NULL_PTR_TO_STMT(int, x_ptr, &x) {
            assert(x == *x_ptr);

            ML99_CHAIN_EXPR_STMT(x = 7)
                ML99_INTRODUCE_VAR_TO_STMT(int y = 5)
                    ML99_SUPPRESS_UNUSED_BEFORE_STMT(y) {
                        ML99_CHAIN_EXPR_STMT_AFTER(x = 123) {
                            assert(7 == x);
                        }

                        assert(123 == x);
                    }
        }
    // clang-format on
}

// ML99_braced {
struct TestBraced ML99_EVAL(ML99_braced(v(int a, b, c;)));
// }

// ML99_semicoloned {
ML99_EVAL(ML99_semicoloned(v(struct TestSemicoloned { int a, b, c; })))
// }

// ML99_assign {
static void test_assign(void) {
    ML99_EVAL(ML99_assign(v(int x), v(5)));
    assert(5 == x);
}
// }

// ML99_invoke {
#define F(a, b, c) ML99_ASSERT_UNEVAL(a == 1 && b == 2 && c == 3)

ML99_EVAL(ML99_invoke(v(F), v(1, 2, 3)));

#undef F
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
ML99_ASSERT_UNEVAL(ML99_IDENT_EQ(
    ML99_C_KEYWORD_DETECTOR, void, ML99_EVAL(ML99_untuple(ML99_indexedParams(ML99_nil())))));

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
static void test_indexed_initialiser_list_z(void) {
    const struct {
        int _0;
        long long _1;
        const char *_2;
    } test = ML99_EVAL(ML99_indexedInitializerList(v(0)));

    assert(0 == test._0);
    assert(0 == test._1);
    assert(0 == test._2);
}

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

static void test_indexed_args(void) {
    int _0 = 123;
    long long _1 = 149494456;
    const char *_2 = "abc";

    const struct {
        int i;
        long long ll;
        const char *str;
    } test = { ML99_EVAL(ML99_indexedArgs(v(3))) };

    assert(test.i == _0);
    assert(test.ll == _1);
    assert(test.str == _2);
}
// }

int main(void) {
    (void)test_GEN_SYM;

    (void)test_indexed_params;
    (void)test_indexed_fields;
    test_indexed_initialiser_list_z();
    test_indexed_initialiser_list_s();
    test_indexed_args();

    test_INTRODUCE_VAR_TO_STMT();
    test_INTRODUCE_NON_NULL_PTR_TO_STMT();
    test_ML99_CHAIN_EXPR_STMT();
    test_ML99_CHAIN_EXPR_STMT_AFTER();
    test_SUPPRESS_UNUSED_BEFORE_STMT();
    test_statement_chaining();

    test_assign();

    (void)test_typedef;
    (void)test_struct;
    (void)test_anon_struct;
    (void)test_union;
    (void)test_anon_union;
    (void)test_enum;
    (void)test_anon_enum;
}
