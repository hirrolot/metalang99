#include "../include/koshmar_pp/if_then_else.h"

{
#define FIRST_COND  1
#define SECOND_COND 0

    int number = KOSHMAR_PP_IF(FIRST_COND, 24, "ABC");
    (void)number;

    const char *string = KOSHMAR_PP_IF(SECOND_COND, 24, "ABC");
    (void)string;

#undef FIRST_COND
#undef SECOND_COND
}
