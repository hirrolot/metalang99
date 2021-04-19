#include <metalang99/assert.h>

// This is used to check that `1 == 1` is put into parentheses automatically.
#define _1_IS_1 1 == 1

ML99_EVAL(ML99_assert(v(_1_IS_1)));
ML99_EVAL(ML99_assertEq(v(_1_IS_1), v(_1_IS_1)));

ML99_ASSERT(v(_1_IS_1));
ML99_ASSERT_EQ(v(_1_IS_1), v(_1_IS_1));

ML99_ASSERT_UNEVAL(_1_IS_1);

#undef _1_IS_1

ML99_ASSERT_EMPTY(v());

int main(void) {}
