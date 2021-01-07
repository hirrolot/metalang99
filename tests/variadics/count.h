#include <epilepsy/assert.h>
#include <epilepsy/variadics.h>

#define _5_ARGS   v(~) v(~) v(~) v(~) v(~)
#define _10_ARGS  _5_ARGS _5_ARGS
#define _50_ARGS  _10_ARGS _10_ARGS _10_ARGS _10_ARGS _10_ARGS
#define _100_ARGS _50_ARGS _50_ARGS

EPILEPSY_assertEq(EPILEPSY_variadicsCount(), v(1));
EPILEPSY_assertEq(EPILEPSY_variadicsCount(v(~)), v(1));
EPILEPSY_assertEq(EPILEPSY_variadicsCount(v(~) v(~)), v(2));
EPILEPSY_assertEq(EPILEPSY_variadicsCount(v(~) v(~) v(~)), v(3));
EPILEPSY_assertEq(EPILEPSY_variadicsCount(v(~) v(~) v(~) v(~)), v(4));
EPILEPSY_assertEq(EPILEPSY_variadicsCount(_5_ARGS), v(5));
EPILEPSY_assertEq(EPILEPSY_variadicsCount(_5_ARGS v(~)), v(6));
EPILEPSY_assertEq(EPILEPSY_variadicsCount(_5_ARGS v(~) v(~)), v(7));
EPILEPSY_assertEq(EPILEPSY_variadicsCount(_5_ARGS v(~) v(~) v(~)), v(8));
EPILEPSY_assertEq(EPILEPSY_variadicsCount(_5_ARGS v(~) v(~) v(~) v(~)), v(9));
EPILEPSY_assertEq(EPILEPSY_variadicsCount(_10_ARGS), v(10));
EPILEPSY_assertEq(EPILEPSY_variadicsCount(_10_ARGS v(~)), v(11));
EPILEPSY_assertEq(EPILEPSY_variadicsCount(_50_ARGS _10_ARGS _5_ARGS v(~)), v(66));
EPILEPSY_assertEq(EPILEPSY_variadicsCount(_100_ARGS _50_ARGS v(~) v(~)), v(152));
EPILEPSY_assertEq(EPILEPSY_variadicsCount(_100_ARGS _100_ARGS _50_ARGS _5_ARGS v(~)), v(256));

#undef _5_ARGS
#undef _10_ARGS
#undef _50_ARGS
#undef _100_ARGS
