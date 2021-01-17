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

// E_if {
E_assertEq(E_if(v(E_true), v(24), v(848)), v(24));
E_assertEq(E_if(v(E_true), v(1549), v(1678)), v(1549));

E_assertEq(E_if(v(E_false), v(516), v(115)), v(115));
E_assertEq(E_if(v(E_false), v(10), v(6)), v(6));
// }
