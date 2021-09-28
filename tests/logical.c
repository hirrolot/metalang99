#include <metalang99/assert.h>
#include <metalang99/logical.h>

int main(void) {

    // ML99_true, ML99_false
    {
        ML99_ASSERT_EQ(ML99_true(), v(1));
        ML99_ASSERT_EQ(ML99_true(~, ~, ~), v(1));

        ML99_ASSERT_EQ(ML99_false(), v(0));
        ML99_ASSERT_EQ(ML99_false(~, ~, ~), v(0));
    }

    // ML99_not
    {
        ML99_ASSERT_EQ(ML99_not(v(0)), v(1));
        ML99_ASSERT_EQ(ML99_not(v(1)), v(0));
    }

    // ML99_and
    {
        ML99_ASSERT_EQ(ML99_and(v(0), v(0)), v(0));
        ML99_ASSERT_EQ(ML99_and(v(0), v(1)), v(0));
        ML99_ASSERT_EQ(ML99_and(v(1), v(0)), v(0));
        ML99_ASSERT_EQ(ML99_and(v(1), v(1)), v(1));
    }

    // ML99_or
    {
        ML99_ASSERT_EQ(ML99_or(v(0), v(0)), v(0));
        ML99_ASSERT_EQ(ML99_or(v(0), v(1)), v(1));
        ML99_ASSERT_EQ(ML99_or(v(1), v(0)), v(1));
        ML99_ASSERT_EQ(ML99_or(v(1), v(1)), v(1));
    }

    // ML99_xor
    {
        ML99_ASSERT_EQ(ML99_xor(v(0), v(0)), v(0));
        ML99_ASSERT_EQ(ML99_xor(v(0), v(1)), v(1));
        ML99_ASSERT_EQ(ML99_xor(v(1), v(0)), v(1));
        ML99_ASSERT_EQ(ML99_xor(v(1), v(1)), v(0));
    }

    // ML99_boolEq
    {
        ML99_ASSERT_EQ(ML99_boolEq(v(0), v(0)), v(1));
        ML99_ASSERT_EQ(ML99_boolEq(v(0), v(1)), v(0));
        ML99_ASSERT_EQ(ML99_boolEq(v(1), v(0)), v(0));
        ML99_ASSERT_EQ(ML99_boolEq(v(1), v(1)), v(1));
    }

#define MATCH_1_IMPL(...) v(12) // `...` due to the TCC's bug.
#define MATCH_0_IMPL(...) v(9)

    // ML99_boolMatch
    {
        ML99_ASSERT_EQ(ML99_boolMatch(v(1), v(MATCH_)), v(12));
        ML99_ASSERT_EQ(ML99_boolMatch(v(0), v(MATCH_)), v(9));
    }

#undef MATCH_1_IMPL
#undef MATCH_0_IMPL

#define MATCH_1_IMPL(x, y, z) v(ML99_ASSERT_UNEVAL(x == 1 && y == 2 && z == 3))
#define MATCH_0_IMPL(x, y, z) v(ML99_ASSERT_UNEVAL(x == 1 && y == 2 && z == 3))

    // ML99_boolMatchWithArgs
    {
        ML99_EVAL(ML99_boolMatchWithArgs(v(1), v(MATCH_), v(1, 2, 3)));
        ML99_EVAL(ML99_boolMatchWithArgs(v(0), v(MATCH_), v(1, 2, 3)));
    }

#undef MATCH_1_IMPL
#undef MATCH_0_IMPL

    // Plain macros
    {
        ML99_ASSERT_UNEVAL(ML99_TRUE());
        ML99_ASSERT_UNEVAL(ML99_TRUE(~, ~, ~));

        ML99_ASSERT_UNEVAL(!ML99_FALSE());
        ML99_ASSERT_UNEVAL(!ML99_FALSE(~, ~, ~));

        ML99_ASSERT_UNEVAL(ML99_NOT(0) == 1);
        ML99_ASSERT_UNEVAL(ML99_NOT(1) == 0);

        ML99_ASSERT_UNEVAL(ML99_AND(0, 1) == 0);
        ML99_ASSERT_UNEVAL(ML99_OR(0, 1) == 1);
        ML99_ASSERT_UNEVAL(ML99_XOR(0, 1) == 1);
        ML99_ASSERT_UNEVAL(ML99_BOOL_EQ(0, 1) == 0);
    }
}
