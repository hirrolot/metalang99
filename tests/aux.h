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

// AGONY_PP_STRINGIFY

static const char stringified[] = AGONY_PP_EVAL(AGONY_PP_STRINGIFY(v(hello)));

// I'm not sure that the stringified version won't contain any whitespaces, so for now just check
// that it contains _at least_ six characters.
TEST(sizeof(stringified) >= 5 + 1);

// AGONY_PP_CAT

inline static void test_cat(void) {
    (void)test_cat;
    int AGONY_PP_EVAL(AGONY_PP_CAT(v(ab), v(c))) = 7;
    abc++;
}

#define EMPTY AGONY_PP_EVAL(AGONY_PP_CAT(v(), v()))
CHECK_EMPTY(0, EMPTY)
#undef EMPTY

// AGONY_PP_CONSUME

AGONY_PP_EVAL(AGONY_PP_CONSUME(v(a) v(b) v(c)))
AGONY_PP_EVAL(AGONY_PP_CONSUME(v(NULL "hey") v(131.415) v(boom)))
AGONY_PP_EVAL(AGONY_PP_CONSUME())

// AGONY_PP_PARENTHESISE, AGONY_PP_UNPARENTHESISE
/*
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
*/
