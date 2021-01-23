#include <epilepsy.h>

// Compile-time list manipulation {
E_assert(E_listEq(E_listReverse(E_list(v(1, 2, 3))), E_list(v(3, 2, 1)), v(E_uintEq)));

E_assert(E_listEq(
    E_listFilter(E_list(v(9, 2, 11, 13, 5)), E_appl(v(E_uintGreater), v(10))), E_list(v(9, 2, 5)),
    v(E_uintEq)));

E_assert(E_listEq(
    E_listMap(E_appl(v(E_uintAdd), v(3)), E_list(v(1, 2, 3))), E_list(v(4, 5, 6)), v(E_uintEq)));
// }

// General macro recursion {
#define factorial(n) E_call(factorial, n)

#define factorial_IMPL(n)   E_uintMatch(v(n), v(factorial_))
#define factorial_Z_IMPL()  v(1)
#define factorial_S_IMPL(n) E_uintMul(E_uintInc(v(n)), factorial(v(n)))

E_assertEq(factorial(v(4)), v(24));
// }

// Overloading on a number of arguments {
typedef struct {
    double width, height;
} Rect;

#define Rect_new(...)         E_eval(E_overload(v(Rect_new_), v(__VA_ARGS__)))
#define Rect_new_1_IMPL(x)    v(((Rect){.width = x, .height = x}))
#define Rect_new_2_IMPL(x, y) v(((Rect){.width = x, .height = y}))

static Rect _7x8 = Rect_new(7, 8), _10x10 = Rect_new(10);
// }

// ... and more!

int main(void) {}
