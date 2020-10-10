#include "test.h"

#include "../include/agony_pp/eval.h"
#include "../include/agony_pp/lang.h"

#define FOO(x) v((x + 1))
#define BAR(x) v((x * 3))

TEST(AGONY_PP_EVAL(c(FOO, c(BAR, v(123)))) == (123 * 3) + 1);

#undef FOO
#undef BAR

#define FOO() v(123)

TEST(AGONY_PP_EVAL(c(FOO, )) == 123);

#undef FOO

#define FOO(x, y, z) v(x##y##z)
#define BAR(x, y)    v(x + y)

TEST(AGONY_PP_EVAL(c(v(BAR), v(5) v(7))) == 5 + 7);
TEST(AGONY_PP_EVAL(c(c(FOO, v(B) v(A) v(R)), v(6) v(11))) == 6 + 11);

#undef FOO
#undef BAR

// Recursion might arise from a higher-order macro, if `op` invokes `FOO`.
#define FOO(op) c(op, v(123))
#define OP(x)   c(FOO, v(ID))
#define ID(x)   v(x)

TEST(AGONY_PP_EVAL(c(FOO, v(OP))) == 123);

#undef FOO
#undef OP
#undef ID
