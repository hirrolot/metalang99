#include <epilepsy/assert.h>
#include <epilepsy/logical.h>

EPILEPSY_assertEq(EPILEPSY_not(v(0)), v(1));
EPILEPSY_assertEq(EPILEPSY_not(v(1)), v(0));

EPILEPSY_assertEq(EPILEPSY_and(v(0), v(0)), v(0));
EPILEPSY_assertEq(EPILEPSY_and(v(0), v(1)), v(0));
EPILEPSY_assertEq(EPILEPSY_and(v(1), v(0)), v(0));
EPILEPSY_assertEq(EPILEPSY_and(v(1), v(1)), v(1));

EPILEPSY_assertEq(EPILEPSY_or(v(0), v(0)), v(0));
EPILEPSY_assertEq(EPILEPSY_or(v(0), v(1)), v(1));
EPILEPSY_assertEq(EPILEPSY_or(v(1), v(0)), v(1));
EPILEPSY_assertEq(EPILEPSY_or(v(1), v(1)), v(1));

EPILEPSY_assertEq(EPILEPSY_xor(v(0), v(0)), v(0));
EPILEPSY_assertEq(EPILEPSY_xor(v(0), v(1)), v(1));
EPILEPSY_assertEq(EPILEPSY_xor(v(1), v(0)), v(1));
EPILEPSY_assertEq(EPILEPSY_xor(v(1), v(1)), v(0));
