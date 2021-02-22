#include <metalang99/assert.h>
#include <metalang99/misc.h>
#include <metalang99/util.h>

// M_repeat {
#define CHECK(_, x, y, z) M_assertPlain(x == 0 && y == 1 && z == 2)
#define F_IMPL(x)         v(, x)
#define F_ARITY           1

M_eval(v(CHECK), M_parenthesize(M_repeat(v(F), v(3))));

#undef CHECK
#undef F_IMPL
#undef F_ARITY
// }

// M_indexedParams {
#define CHECK_void M_semicolon()

M_eval(M_cat(v(CHECK_), M_unparenthesize(M_indexedParams(M_nil()))));

#undef CHECK_void

static void test_indexed_params M_eval(M_indexedParams(M_list(v(int, long long, const char *)))) {
    int i = _0;
    long long ll = _1;
    const char *str = _2;

    (void)i;
    (void)ll;
    (void)str;
}
// }

// M_indexedFields {
M_assertEmpty(M_indexedFields(M_nil()));

static void test_indexed_fields(void) {
    struct {
        M_eval(M_indexedFields(M_list(v(int, long long, const char *))))
    } data = {0};

    int i = data._0;
    long long ll = data._1;
    const char *str = data._2;

    (void)i;
    (void)ll;
    (void)str;
}
// }

// M_indexedInitializerList {
struct {
    int _0;
    long long _1;
    const char *_2;
} test_indexed_initialiser_list_z = M_eval(M_indexedInitializerList(v(0)));

static void test_indexed_initialiser_list_s(void) {
    int _0 = 123;
    long long _1 = 149494456;
    const char *_2 = "abc";

    struct {
        int i;
        long long ll;
        const char *str;
    } data = M_eval(M_indexedInitializerList(v(3)));

    (void)data;
}
// }

int main(void) {
    (void)test_indexed_params;
    (void)test_indexed_fields;
    (void)test_indexed_initialiser_list_z;
    (void)test_indexed_initialiser_list_s;
}
