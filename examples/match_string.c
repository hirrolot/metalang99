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

#define MATCH(str, ...)                                                                            \
    { E_listEval(E_listMap(E_appl(v(GEN_BRANCH), v(str)), E_list(v(__VA_ARGS__)))) out:; }
#define GEN_BRANCH_IMPL(str, branch)                                                               \
    GEN_BRANCH_AUX(                                                                                \
        v(str),                                                                                    \
        E_variadicsHead(E_unparenthesiseUnevaluated(v(branch))),                                   \
        E_variadicsTail(E_unparenthesiseUnevaluated(v(branch))))

#define GEN_BRANCH_AUX(str, branch_str, body) E_call(GEN_BRANCH_AUX, str branch_str body)
#define GEN_BRANCH_AUX_IMPL(str, branch_str, body)                                                 \
    v(if (strcmp(str, branch_str) == 0) { body goto out; })

#define GEN_BRANCH_ARITY 2

int main(void) {
    const char *reason = "OK";
    int status_code;

    // status_code = 200;
    MATCH(
        reason,
        ("OK", { status_code = 200; }),
        ("Moved Permanently", { status_code = 301; }),
        ("Not Found", { status_code = 404; }));
}
