#include "test.h"

#include "../include/koshmar_pp/eval.h"

#include "eval/rec.h"

#define FOO(x) v((x + 1))
#define BAR(x) v((x * 3))

TEST(KOSHMAR_PP_EVAL(c(FOO, c(BAR, v(123)))) == (123 * 3) + 1);

#undef FOO
#undef BAR

#define FOO() v(123)

TEST(KOSHMAR_PP_EVAL(c(FOO, )) == 123);

#undef FOO
