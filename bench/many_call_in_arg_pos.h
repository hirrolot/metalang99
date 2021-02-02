#include <epilepsy.h>

#define F_IMPL(x) v(x)

#define CALL E_call(F, E_call(F, E_call(F, v(~~~~~))))
#define _5   CALL CALL CALL CALL CALL
#define _10  _5 _5
#define _100 _10 _10 _10 _10 _10 _10 _10 _10 _10 _10

E_eval(E_consume(_100))
