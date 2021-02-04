#include <metalang99/assert.h>
#include <metalang99/aux.h>
#include <metalang99/misc.h>

#define CHECK(_, x, y, z) M_assertPlain(x == 0 && y == 1 && z == 2)
#define F_IMPL(x)         v(, x)
#define F_ARITY           1

M_eval(v(CHECK) M_parenthesise(M_repeat(v(F), v(3))));

#undef CHECK
#undef F_IMPL
#undef F_ARITY
