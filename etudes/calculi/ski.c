// The SKI combinator calculus.

#include <metalang99.h>

// The base combinators {

#define K_IMPL(x, y)    v(x)
#define S_IMPL(x, y, z) ML99_appl2(v(x), v(z), ML99_appl(v(y), v(z)))

#define K_ARITY 2
#define S_ARITY 3

#define I ML99_appl2(v(S), v(K), v(K))

// SKSK -> (by the S-rule) KK(SK) -> (by the K-rule) K.
ML99_eval(ML99_appl3(v(S), v(K), v(S), v(K)))

// } (The base combinators)

// Self-application {

// SIIx applies x to itself: SIIx = Ix(Ix) = xx.
#define SELF_APPL ML99_appl2(v(S), I, I)

ML99_eval(ML99_appl(SELF_APPL, I)) // II -> I

/*
 * Obviously, SII(SII) turns out to be irreducible:
 *
 * ML99_eval(ML99_appl(SELF_APPL, SELF_APPL))
 *
 * (However, Metalang99 will just halt the execution as there is a finite number of available
 * reduction steps.)
 */

/*
 * Since Metalang99 follows applicative evaluation strategy, we cannot directly achieve general
 * recursion (it will halt sometime):
 *
 * SIIb -> bb -> a(bb) -> a(a(bb)) -> ...
 */

// } (Self-application)

// Boolean logic {

#define T v(K)
#define F ML99_appl(v(S), v(K))

// S(SI(KF))(KT)
#define NOT ML99_appl2(v(S), ML99_appl(ML99_appl(v(S), I), ML99_appl(v(K), F)), ML99_appl(v(K), T))

// SI(KT)
#define OR ML99_appl2(v(S), I, ML99_appl(v(K), T))

// SS(K(KF))
#define AND ML99_appl2(v(S), v(S), ML99_appl(v(K), ML99_appl(v(K), F)))

#define IF(b, x, y) ML99_appl2(b, x, y)

ML99_eval(ML99_appl(NOT, T)) // F
ML99_eval(ML99_appl(NOT, F)) // T

ML99_eval(ML99_appl2(OR, T, T)) // T
ML99_eval(ML99_appl2(OR, T, F)) // T
ML99_eval(ML99_appl2(OR, F, T)) // T
ML99_eval(ML99_appl2(OR, F, F)) // F

ML99_eval(ML99_appl2(AND, T, T)) // T
ML99_eval(ML99_appl2(AND, T, F)) // F
ML99_eval(ML99_appl2(AND, F, T)) // F
ML99_eval(ML99_appl2(AND, F, F)) // F

ML99_eval(IF(T, v(Billie), v(Jean))) // Billie
ML99_eval(IF(F, v(Billie), v(Jean))) // Jean

// } (Boolean logic)
