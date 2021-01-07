#include <epilepsy/assert.h>
#include <epilepsy/list.h>
#include <epilepsy/variadics.h>

#define F_IMPL(x, y, z) v(x / y / z)
#define F_ARITY         3

epAssertEq(epVariadicsApply(v(F), v(10, 5, 2)), v(10 / 5 / 2));
epAssertEq(epVariadicsApply(epVariadicsApply(v(F), v(10)), v(5, 2)), v(10 / 5 / 2));
epAssertEq(
    epVariadicsApply(epVariadicsApply(epVariadicsApply(v(F), v(10)), v(5)), v(2)), v(10 / 5 / 2));

#undef F_IMPL
#undef F_ARITY
