#include <metalang99/assert.h>

ML99_EVAL(ML99_assert(v(1 == 1)));
ML99_EVAL(ML99_assertEq(v(1), v(1)));

ML99_ASSERT(v(1 == 1));
ML99_ASSERT_EQ(v(1), v(1));

ML99_ASSERT_UNEVAL(1 == 1);

ML99_ASSERT_EMPTY(v());
