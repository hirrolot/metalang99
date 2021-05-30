/*
 * A call-by-name untyped lambda calculus [1] interpreter using De Bruijn indices [2].
 *
 * [1]: https://en.wikipedia.org/wiki/Lambda_calculus
 * [2]: https://en.wikipedia.org/wiki/De_Bruijn_index
 */

#include <metalang99.h>

// Grammar: Var(iable), Appl(ication), and Lam(bda abstraction) {
#define Var(i)     ML99_choice(v(Var), i)
#define Appl(M, N) ML99_choice(v(Appl), M, N)
#define Lam(M)     ML99_choice(v(Lam), M)
// }

// Substitution: `M[lhs=rhs]` {
#define subst(M, x)                    substAux(M, x, v(1))
#define substAux(M, x, depth)          ML99_matchWithArgs(M, v(substAux_), x, depth)
#define substAux_Var_IMPL(i, x, depth) ML99_IF(ML99_NAT_EQ(i, depth), v(x), Var(v(i)))
#define substAux_Appl_IMPL(M, N, x, depth)                                                         \
    Appl(substAux(v(M), v(x), v(depth)), substAux(v(N), v(x), v(depth)))
#define substAux_Lam_IMPL(M, x, depth) Lam(substAux(v(M), incVars(v(x), v(1)), v(ML99_INC(depth))))

#define incVars(M, depth) forEachVar(M, v(ML99_INC), depth)
#define decVars(M, depth) forEachVar(M, v(ML99_DEC), depth)

// `f` will be applied to all variables >= `depth`.
#define forEachVar(M, depth, f) ML99_matchWithArgs(M, v(forEachVar_), depth, f)
#define forEachVar_Var_IMPL(i, depth, f)                                                           \
    ML99_if(ML99_greaterEq(v(i), v(depth)), Var(v(f(i))), Var(v(i)))
#define forEachVar_Appl_IMPL(M, N, depth, f)                                                       \
    Appl(forEachVar(v(M), v(depth), v(f)), forEachVar(v(N), v(depth), v(f)))
#define forEachVar_Lam_IMPL(M, depth, f) Lam(forEachVar(v(M), v(ML99_INC(depth)), v(f)))
// }

// Evaluation {
#define eval(M)              ML99_match(M, v(eval_))
#define eval_Var_IMPL(i)     Var(v(i))
#define eval_Appl_IMPL(M, N) ML99_matchWithArgs(v(M), v(eval_Appl_), v(N))
#define eval_Lam_IMPL(M)     Lam(v(M))

#define eval_Appl_Var_IMPL(i, N)      Appl(Var(v(i)), v(N))
#define eval_Appl_Appl_IMPL(M, N, N1) eval(Appl(eval(Appl(v(M), v(N))), v(N1)))
#define eval_Appl_Lam_IMPL(M, N)      eval(subst(decVars(v(M), v(2)), v(N)))
// }

// Syntactical equality of two terms {
#define termEq(lhs, rhs)            ML99_matchWithArgs(lhs, v(termEq_), rhs)
#define termEq_Var_IMPL(i, rhs)     termEqPropagate(Var, rhs, i)
#define termEq_Appl_IMPL(M, N, rhs) termEqPropagate(Appl, rhs, M, N)
#define termEq_Lam_IMPL(M, rhs)     termEqPropagate(Lam, rhs, M)

#define termEqPropagate(term_kind, rhs, ...)                                                       \
    ML99_IF(                                                                                       \
        ML99_IDENT_EQ(TERM_, ML99_CHOICE_TAG(rhs), term_kind),                                     \
        ML99_matchWithArgs(v(rhs), v(termEq_##term_kind##_), v(__VA_ARGS__)),                      \
        ML99_false())

#define termEq_Var_Var_IMPL(j, i)           v(ML99_NAT_EQ(i, j))
#define termEq_Appl_Appl_IMPL(M, N, M1, N1) ML99_and(termEq(v(M), v(M1)), termEq(v(N), v(N1)))
#define termEq_Lam_Lam_IMPL(M, M1)          termEq(v(M), v(M1))

#define TERM_Var_Var   ()
#define TERM_Appl_Appl ()
#define TERM_Lam_Lam   ()
// }

#define ASSERT_REDUCES_TO(lhs, rhs)                                                                \
    /* Use two interpreter passes: one for `eval(lhs)`, one for `termEq`. Thereby we achieve more  \
     * Metalang99 reduction steps available. */                                                    \
    ML99_ASSERT_UNEVAL(ML99_EVAL(termEq(v(ML99_EVAL(eval(lhs))), rhs)))

// The identity combinator {
#define I Lam(Var(v(1)))

ML99_ASSERT(termEq(eval(Appl(I, Var(v(5)))), Var(v(5))));
// }

// Church booleans {
#define T Lam(Lam(Var(v(2))))
#define F Lam(Lam(Var(v(1))))

#define NOT Lam(Appl(Appl(Var(v(1)), F), T))
#define AND Lam(Lam(Appl(Appl(Var(v(2)), Var(v(1))), Var(v(2)))))
#define OR  Lam(Lam(Appl(Appl(Var(v(2)), Var(v(2))), Var(v(1)))))
#define XOR Lam(Lam(Appl(Appl(Var(v(2)), Appl(NOT, Var(v(1)))), Var(v(1)))))

#define IF Lam(Lam(Lam(Appl(Appl(Var(v(3)), Var(v(2))), Var(v(1))))))

// NOT {
ASSERT_REDUCES_TO(Appl(NOT, T), F);
ASSERT_REDUCES_TO(Appl(NOT, F), T);
ASSERT_REDUCES_TO(Appl(NOT, Appl(NOT, T)), T);
ASSERT_REDUCES_TO(Appl(NOT, Appl(NOT, F)), F);
// }

// AND {
ASSERT_REDUCES_TO(Appl(Appl(AND, T), T), T);
ASSERT_REDUCES_TO(Appl(Appl(AND, T), F), F);
ASSERT_REDUCES_TO(Appl(Appl(AND, F), T), F);
ASSERT_REDUCES_TO(Appl(Appl(AND, F), F), F);
// }

// OR {
ASSERT_REDUCES_TO(Appl(Appl(OR, T), T), T);
ASSERT_REDUCES_TO(Appl(Appl(OR, T), F), T);
ASSERT_REDUCES_TO(Appl(Appl(OR, F), T), T);
ASSERT_REDUCES_TO(Appl(Appl(OR, F), F), F);
// }

// XOR {
ASSERT_REDUCES_TO(Appl(Appl(XOR, T), T), F);
ASSERT_REDUCES_TO(Appl(Appl(XOR, T), F), T);
ASSERT_REDUCES_TO(Appl(Appl(XOR, F), T), T);
ASSERT_REDUCES_TO(Appl(Appl(XOR, F), F), F);
// }

// IF {
ASSERT_REDUCES_TO(Appl(Appl(Appl(IF, T), Var(v(5))), Var(v(6))), Var(v(5)));
ASSERT_REDUCES_TO(Appl(Appl(Appl(IF, F), Var(v(5))), Var(v(6))), Var(v(6)));
// }

// } (Church booleans)

// TODO: Church numerals, Y-combinator, the factorial function.

int main(void) {}
