/*#include "aux.h"
#include "control.h"
#include "engine.h"
#include "logical.h"
#include "overload.h"
#include "rec.h"
#include "uint.h"
#include "variadics.h"
*/

#include "test.h"

int main(void) {}

#include "../include/koshmar_pp/eval.h"

#define FOO(x) v((KOSHMAR_PP_ARG(x) + 1))
#define BAR(x) v((KOSHMAR_PP_ARG(x) * 3))

#define FOO_REAL(x) (x + 1)
#define BAR_REAL(x) (x * 3)

TEST(KOSHMAR_PP_EVAL(c(FOO, c(BAR, v(123)))) == FOO_REAL(BAR_REAL(123)));
