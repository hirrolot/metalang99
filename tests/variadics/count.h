#include <epilepsy/assert.h>
#include <epilepsy/variadics.h>

#define _5_ARGS   v(~) v(~) v(~) v(~) v(~)
#define _10_ARGS  _5_ARGS _5_ARGS
#define _50_ARGS  _10_ARGS _10_ARGS _10_ARGS _10_ARGS _10_ARGS
#define _100_ARGS _50_ARGS _50_ARGS

epAssertEq(epVariadicsCount(), v(1));
epAssertEq(epVariadicsCount(v(~)), v(1));
epAssertEq(epVariadicsCount(v(~) v(~)), v(2));
epAssertEq(epVariadicsCount(v(~) v(~) v(~)), v(3));
epAssertEq(epVariadicsCount(v(~) v(~) v(~) v(~)), v(4));
epAssertEq(epVariadicsCount(_5_ARGS), v(5));
epAssertEq(epVariadicsCount(_5_ARGS v(~)), v(6));
epAssertEq(epVariadicsCount(_5_ARGS v(~) v(~)), v(7));
epAssertEq(epVariadicsCount(_5_ARGS v(~) v(~) v(~)), v(8));
epAssertEq(epVariadicsCount(_5_ARGS v(~) v(~) v(~) v(~)), v(9));
epAssertEq(epVariadicsCount(_10_ARGS), v(10));
epAssertEq(epVariadicsCount(_10_ARGS v(~)), v(11));
epAssertEq(epVariadicsCount(_50_ARGS _10_ARGS _5_ARGS v(~)), v(66));
epAssertEq(epVariadicsCount(_100_ARGS _50_ARGS v(~) v(~)), v(152));
epAssertEq(epVariadicsCount(_100_ARGS _100_ARGS _50_ARGS _5_ARGS v(~)), v(256));

#undef _5_ARGS
#undef _10_ARGS
#undef _50_ARGS
#undef _100_ARGS
