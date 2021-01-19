#include <epilepsy.h>

#define factorial(n) E_call(factorial, n)

#define factorial_IMPL(n)                                                                          \
    E_appl(E_if(E_uintEq(v(n), v(0)), E_appl(v(E_const), v(1)), v(factorialNPositive)), v(n))

#define factorialNPositive_IMPL(n) E_uintMul(v(n), factorial(E_uintDec(v(n))))

#define factorialNPositive_ARITY 1

E_assertEq(factorial(v(0)), v(1));
E_assertEq(factorial(v(1)), v(1));
E_assertEq(factorial(v(2)), v(2));
E_assertEq(factorial(v(3)), v(6));
E_assertEq(factorial(v(4)), v(24));

int main(void) {}
