#include <epilepsy/assert.h>
#include <epilepsy/aux.h>
#include <epilepsy/misc.h>

#define CHECK(_, x, y, z) E_assertPlain(x == 0 && y == 1 && z == 2)
#define F_IMPL(x)         v(, x)
#define F_ARITY           1

E_eval(v(CHECK) E_parenthesise(E_repeat(v(F), v(3))));

#undef CHECK
#undef F_IMPL
#undef F_ARITY
