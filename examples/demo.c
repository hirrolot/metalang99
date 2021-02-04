#include <metalang99.h>

// Compile-time list manipulation {
// 3, 3, 3, 3, 3
static int five_threes[] = {
    M_listEvalCommaSep(M_listReplicate(v(5), v(3))),
};

// 5, 4, 3, 2, 1
static int from_5_to_1[] = {
    M_listEvalCommaSep(M_listReverse(M_list(v(1, 2, 3, 4, 5)))),
};

// 9, 2, 5
static int lesser_than_10[] = {
    M_listEvalCommaSep(M_listFilter(M_appl(v(M_uintGreater), v(10)), M_list(v(9, 2, 11, 13, 5)))),
};
// }

// General macro recursion {
#define factorial(n) M_call(factorial, n)

#define factorial_IMPL(n)   M_uintMatch(v(n), v(factorial_))
#define factorial_Z_IMPL()  v(1)
#define factorial_S_IMPL(n) M_uintMul(M_uintInc(v(n)), factorial(v(n)))

M_assertEq(factorial(v(4)), v(24));
// }

// Overloading on a number of arguments {
typedef struct {
    double width, height;
} Rect;

#define Rect_new(...)    M_overloadPlain(Rect_new_, __VA_ARGS__)
#define Rect_new_1(x)    ((Rect){.width = x, .height = x})
#define Rect_new_2(x, y) ((Rect){.width = x, .height = y})

static Rect _7x8 = Rect_new(7, 8), _10x10 = Rect_new(10);
// }

// ... and more!

int main(void) {
    // Yeah. All is done at compile time.
}
