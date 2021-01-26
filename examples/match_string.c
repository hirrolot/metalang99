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
    {                                                                                              \
        E_listEval(E_listMap(                                                                      \
            E_compose(E_appl(v(GEN_BRANCH), v(str)), v(E_unparenthesiseUnevaluated)),              \
            E_list(v(__VA_ARGS__))))                                                               \
                                                                                                   \
            out:;                                                                                  \
    }

#define GEN_BRANCH_IMPL(str, ...) E_call(GEN_BRANCH_AUX, v(str) v(__VA_ARGS__))
#define GEN_BRANCH_AUX_IMPL(str, branch_str, ...)                                                  \
    v(if (strcmp(str, branch_str) == 0) { __VA_ARGS__ goto out; })

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
