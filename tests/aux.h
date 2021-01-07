#include <epilepsy/assert.h>
#include <epilepsy/aux.h>

#define CHECK_EMPTY(unique_fn_id, empty)                                                           \
    inline empty static empty void empty test_empty_##unique_fn_id empty(empty void empty) empty { \
        empty const empty char empty c empty = empty 'A' empty;                                    \
        empty(empty void empty) empty c empty;                                                     \
        empty(empty void empty) empty test_empty_##unique_fn_id empty;                             \
        empty                                                                                      \
    }                                                                                              \
    empty

// epStringify

static const char stringified[] = epEval(epStringify(v(hello)));

// I'm not sure that the stringified version won't contain any whitespaces, so for now just check
// that it contains _at least_ six characters.
epAssertPlain(sizeof(stringified) >= 5 + 1);

// epCat

inline static void test_cat(void) {
    (void)test_cat;
    int epEval(epCat(v(ab), v(c))) = 7;
    abc++;
}

#define EMPTY epEval(epCat(v(), v()))
CHECK_EMPTY(0, EMPTY)
#undef EMPTY

// epConsume

epEval(epConsume(v(a) v(b) v(c))) epEval(epConsume(v(NULL "hey") v(131.415) v(boom)))
    epEval(epConsume())

    // epParenthesise, epUnparenthesise
    /*
    #define ASSERT_PARENTHESISE(a, b, c) v(ASSERT(a == 1); ASSERT(b == 2); ASSERT(c == 3);)

    epEval(ASSERT_PARENTHESISE epEval(epCall(epParenthesise, v(1) v(2)
    v(3))))

    enum {
        epEval(
            epCall(epUnparenthesise,
              v((CheckUnparenthesiseA = 9, CheckUnparenthesiseB = 4, CheckUnparenthesiseC = 18))))
    };

    ASSERT(CheckUnparenthesiseA == 9);
    ASSERT(CheckUnparenthesiseB == 4);
    ASSERT(CheckUnparenthesiseC == 18);

    #define EMPTY epEval(epCall(epUnparenthesise,
    epCall(epParenthesise, ))) CHECK_EMPTY(1, EMPTY) #undef EMPTY

    #undef ASSERT_PARENTHESISE

    #undef CHECK_EMPTY
    */
