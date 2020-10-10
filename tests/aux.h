#include "test.h"

#include "../include/agony_pp/eval.h"
#include "../include/agony_pp/lang.h"

#include "../include/agony_pp/aux.h"

#define CHECK_EMPTY(unique_fn_id, empty)                                                           \
    inline empty static empty void empty test_empty_##unique_fn_id empty(empty void empty) empty { \
        empty const empty char empty c empty = empty 'A' empty;                                    \
        empty(empty void empty) empty c empty;                                                     \
        empty(empty void empty) empty test_empty_##unique_fn_id empty;                             \
        empty                                                                                      \
    }                                                                                              \
    empty

// AGONY_PP_CONSUME

AGONY_PP_EVAL(c(AGONY_PP_CONSUME, v(a) v(b) v(c)))
AGONY_PP_EVAL(c(AGONY_PP_CONSUME, v(NULL "hey") v(131.415) v(boom)))
AGONY_PP_EVAL(c(AGONY_PP_CONSUME, ))

// AGONY_PP_PARENTHESISE, AGONY_PP_UNPARENTHESISE

#define TEST_PARENTHESISE(a, b, c) v(TEST(a == 1); TEST(b == 2); TEST(c == 3);)

AGONY_PP_EVAL(TEST_PARENTHESISE AGONY_PP_EVAL(c(AGONY_PP_PARENTHESISE, v(1) v(2) v(3))))

enum {
    AGONY_PP_EVAL(
        c(AGONY_PP_UNPARENTHESISE,
          v((CheckUnparenthesiseA = 9, CheckUnparenthesiseB = 4, CheckUnparenthesiseC = 18))))
};

TEST(CheckUnparenthesiseA == 9);
TEST(CheckUnparenthesiseB == 4);
TEST(CheckUnparenthesiseC == 18);

#define EMPTY AGONY_PP_EVAL(c(AGONY_PP_UNPARENTHESISE, c(AGONY_PP_PARENTHESISE, )))
CHECK_EMPTY(1, EMPTY)
#undef EMPTY

#undef TEST_PARENTHESISE

#undef CHECK_EMPTY
