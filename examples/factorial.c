#include <metalang99.h>

#define factorial(n) M_call(factorial, n)

#define factorial_IMPL(n)   M_natMatch(v(n), v(factorial_))
#define factorial_Z_IMPL()  v(1)
#define factorial_S_IMPL(n) M_mul(M_inc(v(n)), factorial(v(n)))

M_assertEq(factorial(v(0)), v(1));
M_assertEq(factorial(v(1)), v(1));
M_assertEq(factorial(v(2)), v(2));
M_assertEq(factorial(v(3)), v(6));
M_assertEq(factorial(v(4)), v(24));

int main(void) {}
