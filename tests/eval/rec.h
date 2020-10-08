#include "../test.h"

#include "../../include/agony_pp/eval.h"

// Recursion might arise from a higher-order macro, if `op` invokes `FOO`.
#define FOO(op) c(op, v(123))
#define OP(x)   c(FOO, v(ID))
#define ID(x)   v(x)

TEST(AGONY_PP_EVAL(c(FOO, v(OP))) == 123);

#undef FOO
#undef OP
#undef ID

// This is the case of direct recursion: we use `FOO_HOOK` to avoid blueprinting `FOO`, because
// `FOO` "invokes itself" just in its body.
#define FOO(op, ...)
#define FOO_HOOK() FOO

// TODO: Finish this test.

#undef FOO
#undef FOO_HOOK
