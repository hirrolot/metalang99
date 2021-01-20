#include <epilepsy.h>

#define factorial(n) E_call(factorial, n)

#define factorial_IMPL(n)   E_uintMatch(v(n), v(factorial_))
#define factorial_Z_IMPL()  v(1)
#define factorial_S_IMPL(n) E_uintMul(E_uintInc(v(n)), factorial(v(n)))

E_assertEq(factorial(v(0)), v(1));
E_assertEq(factorial(v(1)), v(1));
E_assertEq(factorial(v(2)), v(2));
E_assertEq(factorial(v(3)), v(6));
E_assertEq(factorial(v(4)), v(24));

int main(void) {}
