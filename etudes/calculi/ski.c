// The SKI combinator calculus.

#include <metalang99.h>

// The base combinators {

#define K_IMPL(x, y)    v(x)
#define S_IMPL(x, y, z) M_appl2(v(x), v(z), M_appl(v(y), v(z)))

#define K_ARITY 2
#define S_ARITY 3

#define I M_appl2(v(S), v(K), v(K))

// SKSK -> (by the S-rule) KK(SK) -> (by the K-rule) K.
M_eval(M_appl3(v(S), v(K), v(S), v(K)))

// } (The base combinators)

// Self-application {

// SIIx applies x to itself: SIIx = Ix(Ix) = xx.
#define SELF_APPL M_appl2(v(S), I, I)

M_eval(M_appl(SELF_APPL, I)) // II -> I

/*
 * Obviously, SII(SII) turns out to be irreducible:
 *
 * M_eval(M_appl(SELF_APPL, SELF_APPL))
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
#define F M_appl(v(S), v(K))

// S(SI(KF))(KT)
#define NOT M_appl2(v(S), M_appl(M_appl(v(S), I), M_appl(v(K), F)), M_appl(v(K), T))

// SI(KT)
#define OR M_appl2(v(S), I, M_appl(v(K), T))

// SS(K(KF))
#define AND M_appl2(v(S), v(S), M_appl(v(K), M_appl(v(K), F)))

#define IF(b, x, y) M_appl2(b, x, y)

M_eval(M_appl(NOT, T)) // F
M_eval(M_appl(NOT, F)) // T

M_eval(M_appl2(OR, T, T)) // T
M_eval(M_appl2(OR, T, F)) // T
M_eval(M_appl2(OR, F, T)) // T
M_eval(M_appl2(OR, F, F)) // F

M_eval(M_appl2(AND, T, T)) // T
M_eval(M_appl2(AND, T, F)) // F
M_eval(M_appl2(AND, F, T)) // F
M_eval(M_appl2(AND, F, F)) // F

M_eval(IF(T, v(Billie), v(Jean))) // Billie
M_eval(IF(F, v(Billie), v(Jean))) // Jean

// } (Boolean logic)
