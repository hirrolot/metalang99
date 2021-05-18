/*
 * A call-by-name untyped lambda calculus [1] interpreter.
 *
 *  - Only lowercase characters are allowed for bindings (abcdefghijklmnopqrstuvwxyz).
 *  - The Barendregt's convention is employed.
 *
 * [1]: https://en.wikipedia.org/wiki/Lambda_calculus
 */

#include <metalang99.h>

// Grammar: Var(iable), Appl(ication), and Lam(bda abstraction) {
#define Var(x)     ML99_choice(v(Var), x)
#define Appl(M, N) ML99_choice(v(Appl), M, N)
#define Lam(x, M)  ML99_choice(v(Lam), x, M)

#define TERM_KIND_EQ(lhs, rhs) ML99_IDENT_EQ(TERM_, lhs, rhs)
#define TERM_Var_Var           ()
#define TERM_Appl_Appl         ()
#define TERM_Lam_Lam           ()
// }

// Substitution: `M[lhs=rhs]` {
#define subst(M, lhs, rhs) ML99_matchWithArgs(M, v(subst_), lhs, rhs)
#define subst_Var_IMPL(x, lhs, rhs)                                                                \
    ML99_if(ML99_identEq(v(ML99_LOWERCASE_DETECTOR), v(x), v(lhs)), v(rhs), Var(v(x)))
#define subst_Appl_IMPL(M, N, lhs, rhs)                                                            \
    Appl(subst(v(M), v(lhs), v(rhs)), subst(v(N), v(lhs), v(rhs)))
#define subst_Lam_IMPL(x, M, lhs, rhs)                                                             \
    ML99_IF(ML99_CHAR_EQ(x, lhs), Lam(v(x), v(M)), Lam(v(x), subst(v(M), v(lhs), v(rhs))))
// }

// Evaluation {
#define eval(T)              ML99_match(T, v(eval_))
#define eval_Var_IMPL(x)     Var(v(x))
#define eval_Appl_IMPL(M, N) ML99_matchWithArgs(v(M), v(eval_Appl_), v(N))
#define eval_Lam_IMPL(x, M)  Lam(v(x), v(M))

#define eval_Appl_Var_IMPL(x, N)      Appl(Var(v(x)), v(N))
#define eval_Appl_Appl_IMPL(M, N, N1) eval(Appl(eval(Appl(v(M), v(N))), v(N1)))
#define eval_Appl_Lam_IMPL(x, M, N)   eval(subst(v(M), v(x), v(N)))
// }

// Syntactical equality of two terms {
#define termEq(lhs, rhs)            ML99_matchWithArgs(lhs, v(termEq_), rhs)
#define termEq_Var_IMPL(x, rhs)     termEqPropagate(Var, rhs, x)
#define termEq_Appl_IMPL(M, N, rhs) termEqPropagate(Appl, rhs, M, N)
#define termEq_Lam_IMPL(x, M, rhs)  termEqPropagate(Lam, rhs, x, M)

#define termEqPropagate(term_kind, rhs, ...)                                                       \
    ML99_IF(                                                                                       \
        TERM_KIND_EQ(ML99_CHOICE_TAG(rhs), term_kind),                                             \
        ML99_matchWithArgs(v(rhs), v(termEq_##term_kind##_), v(__VA_ARGS__)),                      \
        ML99_false())

#define termEq_Var_Var_IMPL(y, x)           ML99_charEq(v(x), v(y))
#define termEq_Appl_Appl_IMPL(M, N, M1, N1) ML99_and(termEq(v(M), v(M1)), termEq(v(N), v(N1)))
#define termEq_Lam_Lam_IMPL(x, M, x1, M1)   ML99_and(ML99_charEq(v(x), v(x1)), termEq(v(M), v(M1)))
// }

// The identity combinator {
#define I Lam(v(a), Var(v(a)))

ML99_ASSERT(termEq(eval(Appl(I, Var(v(q)))), Var(v(q))));
// }

// Church booleans {
#define T Lam(v(a), Lam(v(b), Var(v(a))))
#define F Lam(v(c), Lam(v(d), Var(v(d))))

#define NOT Lam(v(e), Appl(Appl(Var(v(e)), F), T))
#define AND Lam(v(f), Lam(v(g), Appl(Appl(Var(v(f)), Var(v(g))), Var(v(f)))))
#define OR  Lam(v(h), Lam(v(i), Appl(Appl(Var(v(h)), Var(v(h))), Var(v(i)))))
#define XOR Lam(v(j), Lam(v(k), Appl(Appl(Var(v(j)), Appl(NOT, Var(v(k)))), Var(v(k)))))

#define IF Lam(v(l), Lam(v(m), Lam(v(n), Appl(Appl(Var(v(l)), Var(v(m))), Var(v(n))))))

// NOT {
ML99_ASSERT(termEq(eval(Appl(NOT, T)), F));
ML99_ASSERT(termEq(eval(Appl(NOT, F)), T));
ML99_ASSERT(termEq(eval(Appl(NOT, Appl(NOT, T))), T));
ML99_ASSERT(termEq(eval(Appl(NOT, Appl(NOT, F))), F));
// }

// AND {
ML99_ASSERT(termEq(eval(Appl(Appl(AND, T), T)), T));
ML99_ASSERT(termEq(eval(Appl(Appl(AND, T), F)), F));
ML99_ASSERT(termEq(eval(Appl(Appl(AND, F), T)), F));
ML99_ASSERT(termEq(eval(Appl(Appl(AND, F), F)), F));
// }

// OR {
ML99_ASSERT(termEq(eval(Appl(Appl(OR, T), T)), T));
ML99_ASSERT(termEq(eval(Appl(Appl(OR, T), F)), T));
ML99_ASSERT(termEq(eval(Appl(Appl(OR, F), T)), T));
ML99_ASSERT(termEq(eval(Appl(Appl(OR, F), F)), F));
// }

// XOR {
ML99_ASSERT(termEq(eval(Appl(Appl(XOR, T), T)), F));
ML99_ASSERT(termEq(eval(Appl(Appl(XOR, T), F)), T));
ML99_ASSERT(termEq(eval(Appl(Appl(XOR, F), T)), T));
ML99_ASSERT(termEq(eval(Appl(Appl(XOR, F), F)), F));
// }

// IF {
ML99_ASSERT(termEq(eval(Appl(Appl(Appl(IF, T), Var(v(q))), Var(v(z)))), Var(v(q))));
ML99_ASSERT(termEq(eval(Appl(Appl(Appl(IF, F), Var(v(q))), Var(v(z)))), Var(v(z))));
// }

// } (Church booleans)

// TODO: Church numerals, Y-combinator, the factorial function.

int main(void) {}
