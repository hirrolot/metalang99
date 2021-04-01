#include <metalang99/assert.h>
#include <metalang99/logical.h>

// ML99_true, ML99_false {
ML99_ASSERT_EQ(ML99_true(), v(1));
ML99_ASSERT_EQ(ML99_true(~, ~, ~), v(1));

ML99_ASSERT_EQ(ML99_false(), v(0));
ML99_ASSERT_EQ(ML99_false(~, ~, ~), v(0));
// }

// ML99_TRUE, ML99_FALSE {
ML99_ASSERT_UNEVAL(ML99_TRUE());
ML99_ASSERT_UNEVAL(ML99_TRUE(~, ~, ~));

ML99_ASSERT_UNEVAL(!ML99_FALSE());
ML99_ASSERT_UNEVAL(!ML99_FALSE(~, ~, ~));
// }

// ML99_not {
ML99_ASSERT_EQ(ML99_not(v(0)), v(1));
ML99_ASSERT_EQ(ML99_not(v(1)), v(0));
// }

// ML99_and {
ML99_ASSERT_EQ(ML99_and(v(0), v(0)), v(0));
ML99_ASSERT_EQ(ML99_and(v(0), v(1)), v(0));
ML99_ASSERT_EQ(ML99_and(v(1), v(0)), v(0));
ML99_ASSERT_EQ(ML99_and(v(1), v(1)), v(1));
// }

// ML99_or {
ML99_ASSERT_EQ(ML99_or(v(0), v(0)), v(0));
ML99_ASSERT_EQ(ML99_or(v(0), v(1)), v(1));
ML99_ASSERT_EQ(ML99_or(v(1), v(0)), v(1));
ML99_ASSERT_EQ(ML99_or(v(1), v(1)), v(1));
// }

// ML99_xor {
ML99_ASSERT_EQ(ML99_xor(v(0), v(0)), v(0));
ML99_ASSERT_EQ(ML99_xor(v(0), v(1)), v(1));
ML99_ASSERT_EQ(ML99_xor(v(1), v(0)), v(1));
ML99_ASSERT_EQ(ML99_xor(v(1), v(1)), v(0));
// }

// ML99_boolEq {
ML99_ASSERT_EQ(ML99_boolEq(v(0), v(0)), v(1));
ML99_ASSERT_EQ(ML99_boolEq(v(0), v(1)), v(0));
ML99_ASSERT_EQ(ML99_boolEq(v(1), v(0)), v(0));
ML99_ASSERT_EQ(ML99_boolEq(v(1), v(1)), v(1));
// }

int main(void) {}
