#include <epilepsy.h>

#define F_IMPL(x, y, z) v(x + y + z)

#define _5                                                                                         \
    E_call(F, v(1) v(2) v(3)) E_call(F, v(1) v(2) v(3)) E_call(F, v(1) v(2) v(3))                  \
        E_call(F, v(1) v(2) v(3)) E_call(F, v(1) v(2) v(3))
#define _10  _5 _5
#define _100 _10 _10 _10 _10 _10 _10 _10 _10 _10 _10

E_eval(E_consume(_100))
