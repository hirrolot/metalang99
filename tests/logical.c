#include <metalang99/assert.h>
#include <metalang99/logical.h>

// M_not {
M_assertEq(M_not(v(0)), v(1));
M_assertEq(M_not(v(1)), v(0));
// }

// M_and {
M_assertEq(M_and(v(0), v(0)), v(0));
M_assertEq(M_and(v(0), v(1)), v(0));
M_assertEq(M_and(v(1), v(0)), v(0));
M_assertEq(M_and(v(1), v(1)), v(1));
// }

// M_or {
M_assertEq(M_or(v(0), v(0)), v(0));
M_assertEq(M_or(v(0), v(1)), v(1));
M_assertEq(M_or(v(1), v(0)), v(1));
M_assertEq(M_or(v(1), v(1)), v(1));
// }

// M_xor {
M_assertEq(M_xor(v(0), v(0)), v(0));
M_assertEq(M_xor(v(0), v(1)), v(1));
M_assertEq(M_xor(v(1), v(0)), v(1));
M_assertEq(M_xor(v(1), v(1)), v(0));
// }

// M_boolEq {
M_assertEq(M_boolEq(v(0), v(0)), v(1));
M_assertEq(M_boolEq(v(0), v(1)), v(0));
M_assertEq(M_boolEq(v(1), v(0)), v(0));
M_assertEq(M_boolEq(v(1), v(1)), v(1));
// }

int main(void) {}
