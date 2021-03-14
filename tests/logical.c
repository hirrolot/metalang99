#include <metalang99/assert.h>
#include <metalang99/logical.h>

// ML99_not {
ML99_assertEq(ML99_not(v(0)), v(1));
ML99_assertEq(ML99_not(v(1)), v(0));
// }

// ML99_and {
ML99_assertEq(ML99_and(v(0), v(0)), v(0));
ML99_assertEq(ML99_and(v(0), v(1)), v(0));
ML99_assertEq(ML99_and(v(1), v(0)), v(0));
ML99_assertEq(ML99_and(v(1), v(1)), v(1));
// }

// ML99_or {
ML99_assertEq(ML99_or(v(0), v(0)), v(0));
ML99_assertEq(ML99_or(v(0), v(1)), v(1));
ML99_assertEq(ML99_or(v(1), v(0)), v(1));
ML99_assertEq(ML99_or(v(1), v(1)), v(1));
// }

// ML99_xor {
ML99_assertEq(ML99_xor(v(0), v(0)), v(0));
ML99_assertEq(ML99_xor(v(0), v(1)), v(1));
ML99_assertEq(ML99_xor(v(1), v(0)), v(1));
ML99_assertEq(ML99_xor(v(1), v(1)), v(0));
// }

// ML99_boolEq {
ML99_assertEq(ML99_boolEq(v(0), v(0)), v(1));
ML99_assertEq(ML99_boolEq(v(0), v(1)), v(0));
ML99_assertEq(ML99_boolEq(v(1), v(0)), v(0));
ML99_assertEq(ML99_boolEq(v(1), v(1)), v(1));
// }

int main(void) {}
