/*
 * Pattern matching for strings (like a switch statement).
 *
 * We could accomplish the same behaviour with X-macro, but it would require additional hassle with
 * #define and #undef directives.
 */

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#include <epilepsy.h>

#define MATCH(str, ...) MATCH_AUX(str, E_eval(E_list(v(__VA_ARGS__))))

#define MATCH_AUX(str, branches)                                                                   \
    { GEN_BRANCHES(str, branches) GEN_DEFAULT_BRANCH(branches) out:; }

#define GEN_BRANCHES(str, branches)                                                                \
    E_listEval(E_listMap(E_appl(v(GEN_BRANCH), v(str)), E_listInit(v(branches))))

#define GEN_BRANCH_IMPL(str, branch) E_call(GEN_BRANCH_AUX, v(str) E_unparenthesise(v(branch)))
#define GEN_BRANCH_AUX_IMPL(str, pattern, ...)                                                     \
    v(if (strcmp(str, pattern) == 0) { __VA_ARGS__ goto out; })

#define GEN_DEFAULT_BRANCH(branches) E_eval(E_unparenthesise(E_listLast(v(branches))))

// Arity specifiers {
#define GEN_BRANCH_ARITY 2
// }

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
