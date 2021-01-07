#include <epilepsy/assert.h>
#include <epilepsy/logical.h>

epAssertEq(epNot(v(0)), v(1));
epAssertEq(epNot(v(1)), v(0));

epAssertEq(epAnd(v(0), v(0)), v(0));
epAssertEq(epAnd(v(0), v(1)), v(0));
epAssertEq(epAnd(v(1), v(0)), v(0));
epAssertEq(epAnd(v(1), v(1)), v(1));

epAssertEq(epOr(v(0), v(0)), v(0));
epAssertEq(epOr(v(0), v(1)), v(1));
epAssertEq(epOr(v(1), v(0)), v(1));
epAssertEq(epOr(v(1), v(1)), v(1));

epAssertEq(epXor(v(0), v(0)), v(0));
epAssertEq(epXor(v(0), v(1)), v(1));
epAssertEq(epXor(v(1), v(0)), v(1));
epAssertEq(epXor(v(1), v(1)), v(0));
