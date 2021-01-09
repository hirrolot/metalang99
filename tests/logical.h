#include <epilepsy/assert.h>
#include <epilepsy/logical.h>

E_assertEq(E_not(v(0)), v(1));
E_assertEq(E_not(v(1)), v(0));

E_assertEq(E_and(v(0), v(0)), v(0));
E_assertEq(E_and(v(0), v(1)), v(0));
E_assertEq(E_and(v(1), v(0)), v(0));
E_assertEq(E_and(v(1), v(1)), v(1));

E_assertEq(E_or(v(0), v(0)), v(0));
E_assertEq(E_or(v(0), v(1)), v(1));
E_assertEq(E_or(v(1), v(0)), v(1));
E_assertEq(E_or(v(1), v(1)), v(1));

E_assertEq(E_xor(v(0), v(0)), v(0));
E_assertEq(E_xor(v(0), v(1)), v(1));
E_assertEq(E_xor(v(1), v(0)), v(1));
E_assertEq(E_xor(v(1), v(1)), v(0));
