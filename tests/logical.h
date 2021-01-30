#include <epilepsy/assert.h>
#include <epilepsy/logical.h>

// E_not {
E_assertEq(E_not(v(0)), v(1));
E_assertEq(E_not(v(1)), v(0));
// }

// E_and {
E_assertEq(E_and(v(0), v(0)), v(0));
E_assertEq(E_and(v(0), v(1)), v(0));
E_assertEq(E_and(v(1), v(0)), v(0));
E_assertEq(E_and(v(1), v(1)), v(1));
// }

// E_or {
E_assertEq(E_or(v(0), v(0)), v(0));
E_assertEq(E_or(v(0), v(1)), v(1));
E_assertEq(E_or(v(1), v(0)), v(1));
E_assertEq(E_or(v(1), v(1)), v(1));
// }

// E_xor {
E_assertEq(E_xor(v(0), v(0)), v(0));
E_assertEq(E_xor(v(0), v(1)), v(1));
E_assertEq(E_xor(v(1), v(0)), v(1));
E_assertEq(E_xor(v(1), v(1)), v(0));
// }

// E_boolEq {
E_assertEq(E_boolEq(v(0), v(0)), v(1));
E_assertEq(E_boolEq(v(0), v(1)), v(0));
E_assertEq(E_boolEq(v(1), v(0)), v(0));
E_assertEq(E_boolEq(v(1), v(1)), v(1));
// }
