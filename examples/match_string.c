/*
 * Pattern matching for strings using syntax-directed translation.
 *
 * We could accomplish the same behaviour with X-macro, but it would require additional hassle with
 * #define and #undef directives.
 */

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#include <epilepsy.h>

#define MATCH(val, ...)                                                                            \
    { E_eval(matchStmtGen(matchStmtParse(v(val), v(__VA_ARGS__)))) out:; }

// matchStmt {
#define matchStmt(val, branches, default_case) E_call(matchStmt, val branches default_case)
#define matchStmtVal                           v(0)
#define matchStmtBranches                      v(1)
#define matchStmtDefaultCase                   v(2)

#define matchStmtParse(val, ...) E_call(matchStmtParse, val __VA_ARGS__)
#define matchStmtGen(match_stmt) E_call(matchStmtGen, match_stmt)

#define matchStmt_IMPL(val, branches, default_case) E_list(v(val) v(branches) v(default_case))

#define matchStmtParse_IMPL(val, ...)                                                              \
    matchStmt(                                                                                     \
        v(val),                                                                                    \
        E_listMap(v(branchParse), E_listInit(E_list(v(__VA_ARGS__)))),                             \
        defaultCaseParse(v(__VA_ARGS__)))

#define matchStmtGen_IMPL(match_stmt)                                                              \
    E_listUnwrap(E_listMap(                                                                        \
        E_appl(v(branchGen), E_get(matchStmtVal, v(match_stmt))),                                  \
        E_get(matchStmtBranches, v(match_stmt))))                                                  \
                                                                                                   \
        defaultCaseGen(E_get(matchStmtDefaultCase, v(match_stmt)))
// }

// branch {
#define branch(pattern, ...) E_call(branch, pattern __VA_ARGS__)
#define branchPattern        v(0)
#define branchBody           v(1)

#define branchParse(x)         E_call(branchParse, x)
#define branchGen(val, branch) E_call(branchGen, val branch)

#define branch_IMPL(pattern, ...) E_list(v(pattern) E_parenthesiseUnevaluated(v(__VA_ARGS__)))

#define branchParse_IMPL(x) E_call(branch, E_unparenthesiseUnevaluated(v(x)))

#define branchGen_IMPL(val, branch)                                                                \
    E_call(                                                                                        \
        branchGenAux,                                                                              \
        v(val) E_get(branchPattern, v(branch))                                                     \
            E_unparenthesiseUnevaluated(E_get(branchBody, v(branch))))
#define branchGenAux_IMPL(val, pattern, ...)                                                       \
    v(if (strcmp(val, pattern) == 0) { __VA_ARGS__ goto out; })
// }

// defaultCase {
#define defaultCase(...) E_call(defaultCase, __VA_ARGS__)
#define defaultCaseBody  v(0)

#define defaultCaseParse(...)        E_call(defaultCaseParse, __VA_ARGS__)
#define defaultCaseGen(default_case) E_call(defaultCaseGen, default_case)

#define defaultCase_IMPL(...) E_list(E_parenthesiseUnevaluated(v(__VA_ARGS__)))

#define defaultCaseParse_IMPL(...)                                                                 \
    defaultCase(E_unparenthesiseUnevaluated(E_listLast(E_list(v(__VA_ARGS__)))))

#define defaultCaseGen_IMPL(default_case)                                                          \
    E_unparenthesiseUnevaluated(E_get(defaultCaseBody, v(default_case)))
// }

#define branchGen_ARITY   2
#define branchParse_ARITY 1

int main(void) {
    const char *reason = "OK";
    int status_code;

    // status_code = 200;
    MATCH(
        reason,
        ("OK", { status_code = 200; }),
        ("Moved Permanently", { status_code = 301; }),
        ("Not Found", { status_code = 404; }),
        ({ status_code = -1; }));
}
