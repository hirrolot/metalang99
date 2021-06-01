/*
 * An untyped lambda calculus [1] interpreter using De Bruijn indices [2] and normal order
 * evaluation strategy [3].
 *
 * [1]: https://en.wikipedia.org/wiki/Lambda_calculus
 * [2]: https://en.wikipedia.org/wiki/De_Bruijn_index
 * [3]: https://en.wikipedia.org/wiki/Evaluation_strategy#Normal_order
 */

#include <metalang99.h>

// Grammar: Var(iable), Appl(ication), and Lam(bda abstraction) {
#define Var(i)     v(ML99_CHOICE(Var, i))
#define Appl(M, N) ML99_choice(v(Appl), M, N)
#define Lam(M)     ML99_choice(v(Lam), M)
// }

// Substitution: `M[lhs=rhs]` {
#define subst(M, x)           substAux(M, x, v(1))
#define substAux(M, x, depth) ML99_matchWithArgs(M, v(substAux_), x, depth)
#define substAux_Var_IMPL(i, x, depth)                                                             \
    ML99_IF(                                                                                       \
        ML99_NAT_EQ(i, depth),                                                                     \
        v(x),                                                                                      \
        ML99_if(ML99_greater(v(i), v(depth)), Var(ML99_DEC(i)), Var(i)))
#define substAux_Appl_IMPL(M, N, x, depth)                                                         \
    Appl(substAux(v(M), v(x), v(depth)), substAux(v(N), v(x), v(depth)))
#define substAux_Lam_IMPL(M, x, depth) Lam(substAux(v(M), incFreeVars(v(x)), v(ML99_INC(depth))))

#define incFreeVars(M)           incFreeVarsAux(M, v(1))
#define incFreeVarsAux(M, depth) ML99_matchWithArgs(M, v(incFreeVarsAux_), depth)
#define incFreeVarsAux_Var_IMPL(i, depth)                                                          \
    ML99_if(ML99_greaterEq(v(i), v(depth)), Var(ML99_INC(i)), Var(i))
#define incFreeVarsAux_Appl_IMPL(M, N, depth)                                                      \
    Appl(incFreeVarsAux(v(M), v(depth)), incFreeVarsAux(v(N), v(depth)))
#define incFreeVarsAux_Lam_IMPL(M, depth) Lam(incFreeVarsAux(v(M), v(ML99_INC(depth))))
// }

// Evaluation {
#define eval(M)              ML99_match(M, v(eval_))
#define eval_Var_IMPL(i)     Var(i)
#define eval_Appl_IMPL(M, N) ML99_matchWithArgs(v(M), v(eval_Appl_), v(N))
#define eval_Lam_IMPL(M)     Lam(eval(v(M)))

#define eval_Appl_Var_IMPL(i, N) Appl(Var(i), eval(v(N)))
#define eval_Appl_Appl_IMPL(M, N, N1)                                                              \
    ML99_matchWithArgs(eval(Appl(v(M), v(N))), v(eval_Appl_Appl_), v(N1))
#define eval_Appl_Lam_IMPL(M, N) eval(subst(v(M), v(N)))

#define eval_Appl_Appl_Var_IMPL            eval_Appl_Var_IMPL
#define eval_Appl_Appl_Appl_IMPL(M, N, N1) Appl(Appl(v(M), v(N)), eval(v(N1)))
#define eval_Appl_Appl_Lam_IMPL            eval_Appl_Lam_IMPL
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
    ML99_ASSERT_UNEVAL(ML99_EVAL(termEq(v(ML99_EVAL(eval(lhs))), v(ML99_EVAL(eval(rhs))))))

// The identity combinator {
#define I Lam(Var(1))

ASSERT_REDUCES_TO(Appl(I, Var(5)), Var(5));
// }

// Church booleans {
#define T Lam(Lam(Var(2)))
#define F Lam(Lam(Var(1)))

#define NOT Lam(Appl(Appl(Var(1), F), T))
#define AND Lam(Lam(Appl(Appl(Var(2), Var(1)), Var(2))))
#define OR  Lam(Lam(Appl(Appl(Var(2), Var(2)), Var(1))))
#define XOR Lam(Lam(Appl(Appl(Var(2), Appl(NOT, Var(1))), Var(1))))

#define IF Lam(Lam(Lam(Appl(Appl(Var(3), Var(2)), Var(1)))))

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
ASSERT_REDUCES_TO(Appl(Appl(Appl(IF, T), Var(5)), Var(6)), Var(5));
ASSERT_REDUCES_TO(Appl(Appl(Appl(IF, F), Var(5)), Var(6)), Var(6));
// }

// } (Church booleans)

// Church numerals {

#define ZERO Lam(Lam(Var(1)))
#define SUCC Lam(Lam(Lam(Appl(Var(2), Appl(Appl(Var(3), Var(2)), Var(1))))))

#define ONE   Appl(SUCC, ZERO)
#define TWO   Appl(SUCC, ONE)
#define THREE Appl(SUCC, TWO)
#define FOUR  Appl(SUCC, THREE)

#define ADD Lam(Lam(Lam(Lam(Appl(Appl(Var(4), Var(2)), Appl(Appl(Var(3), Var(2)), Var(1)))))))
#define MUL Lam(Lam(Lam(Lam(Appl(Appl(Var(4), Appl(Var(3), Var(2))), Var(1))))))

ASSERT_REDUCES_TO(Appl(Appl(ADD, ZERO), ZERO), ZERO);
ASSERT_REDUCES_TO(Appl(Appl(ADD, ZERO), ONE), ONE);
ASSERT_REDUCES_TO(Appl(Appl(ADD, ONE), ZERO), ONE);
ASSERT_REDUCES_TO(Appl(Appl(ADD, ONE), TWO), THREE);

ASSERT_REDUCES_TO(Appl(Appl(MUL, ZERO), ZERO), ZERO);
ASSERT_REDUCES_TO(Appl(Appl(MUL, ZERO), ONE), ZERO);
ASSERT_REDUCES_TO(Appl(Appl(MUL, ONE), ZERO), ZERO);
ASSERT_REDUCES_TO(Appl(Appl(MUL, TWO), TWO), FOUR);

// } (Church numerals)

// TODO: Y-combinator, the factorial function.

int main(void) {}
