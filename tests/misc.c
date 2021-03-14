#include <metalang99/assert.h>
#include <metalang99/misc.h>
#include <metalang99/tuple.h>
#include <metalang99/util.h>

// ML99_repeat {
#define CHECK(_, x, y, z) ML99_assertPlain(x == 0 && y == 1 && z == 2)
#define F_IMPL(x)         v(, x)
#define F_ARITY           1

ML99_eval(v(CHECK), ML99_tuple(ML99_repeat(v(F), v(3))));

#undef CHECK
#undef F_IMPL
#undef F_ARITY
// }

// ML99_indexedParams {
#define CHECK_void

ML99_eval(ML99_cat(v(CHECK_), ML99_untuple(ML99_indexedParams(ML99_nil()))))

#undef CHECK_void

static void
    test_indexed_params ML99_eval(ML99_indexedParams(ML99_list(v(int, long long, const char *))))
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
ML99_assertEmpty(ML99_indexedFields(ML99_nil()));

static void test_indexed_fields(void) {
    struct {
        ML99_eval(ML99_indexedFields(ML99_list(v(int, long long, const char *))))
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
} test_indexed_initialiser_list_z = ML99_eval(ML99_indexedInitializerList(v(0)));

static void test_indexed_initialiser_list_s(void) {
    int _0 = 123;
    long long _1 = 149494456;
    const char *_2 = "abc";

    struct {
        int i;
        long long ll;
        const char *str;
    } data = ML99_eval(ML99_indexedInitializerList(v(3)));

    (void)data;
}
// }

// ML99_indexedArgs {
ML99_assertEmpty(ML99_indexedArgs(v(0)));

static void test_indexed_args(int i, long long ll, const char *str) {
    (void)i;
    (void)ll;
    (void)str;

    int _0 = 123;
    long long _1 = 149494456;
    const char *_2 = "abc";

    test_indexed_args(ML99_eval(ML99_indexedArgs(v(3))));
}
// }

int main(void) {
    (void)test_indexed_params;
    (void)test_indexed_fields;
    (void)test_indexed_initialiser_list_z;
    (void)test_indexed_initialiser_list_s;
    (void)test_indexed_args;
}
