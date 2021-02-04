#include <metalang99.h>

#define F_IMPL(x) v(x)

#define CALL M_call(F, M_call(F, M_call(F, v(~~~~~))))
#define _5   CALL CALL CALL CALL CALL
#define _10  _5 _5
#define _100 _10 _10 _10 _10 _10 _10 _10 _10 _10 _10

M_eval(M_consume(_100))
