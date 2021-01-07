#include <epilepsy/assert.h>
#include <epilepsy/control.h>
#include <epilepsy/uint.h>

EPILEPSY_assertEq(EPILEPSY_if(v(1), v(24), v(848)), v(24));
EPILEPSY_assertEq(EPILEPSY_if(v(1), v(1549), v(1678)), v(1549));

EPILEPSY_assertEq(EPILEPSY_if(v(0), v(516), v(115)), v(115));
EPILEPSY_assertEq(EPILEPSY_if(v(0), v(10), v(6)), v(6));

#define F_IMPL(x) v(x + 1)
#define G_IMPL(x) v(x + 5)

#define F_ARITY 1
#define G_ARITY 1

EPILEPSY_assertEq(EPILEPSY_ifLazy(v(0), v(F), v(G), v(123)), v(123 + 5));
EPILEPSY_assertEq(EPILEPSY_ifLazy(v(1), v(F), v(G), v(123)), v(123 + 1));

#undef F_IMPL
#undef G_IMPL

#undef F_ARITY
#undef G_ARITY
