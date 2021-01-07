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

// EPILEPSY_stringify

static const char stringified[] = EPILEPSY_eval(EPILEPSY_stringify(v(hello)));

// I'm not sure that the stringified version won't contain any whitespaces, so for now just check
// that it contains _at least_ six characters.
EPILEPSY_assertPlain(sizeof(stringified) >= 5 + 1);

// EPILEPSY_cat

inline static void test_cat(void) {
    (void)test_cat;
    int EPILEPSY_eval(EPILEPSY_cat(v(ab), v(c))) = 7;
    abc++;
}

#define EMPTY EPILEPSY_eval(EPILEPSY_cat(v(), v()))
CHECK_EMPTY(0, EMPTY)
#undef EMPTY

// EPILEPSY_consume

EPILEPSY_eval(EPILEPSY_consume(v(a) v(b) v(c)))
    EPILEPSY_eval(EPILEPSY_consume(v(NULL "hey") v(131.415) v(boom)))
        EPILEPSY_eval(EPILEPSY_consume())

    // EPILEPSY_parenthesise, EPILEPSY_unparenthesise
    /*
    #define ASSERT_PARENTHESISE(a, b, c) v(ASSERT(a == 1); ASSERT(b == 2); ASSERT(c == 3);)

    EPILEPSY_eval(ASSERT_PARENTHESISE EPILEPSY_eval(EPILEPSY_call(EPILEPSY_parenthesise, v(1) v(2)
    v(3))))

    enum {
        EPILEPSY_eval(
            EPILEPSY_call(EPILEPSY_unparenthesise,
              v((CheckUnparenthesiseA = 9, CheckUnparenthesiseB = 4, CheckUnparenthesiseC = 18))))
    };

    ASSERT(CheckUnparenthesiseA == 9);
    ASSERT(CheckUnparenthesiseB == 4);
    ASSERT(CheckUnparenthesiseC == 18);

    #define EMPTY EPILEPSY_eval(EPILEPSY_call(EPILEPSY_unparenthesise,
    EPILEPSY_call(EPILEPSY_parenthesise, ))) CHECK_EMPTY(1, EMPTY) #undef EMPTY

    #undef ASSERT_PARENTHESISE

    #undef CHECK_EMPTY
    */
