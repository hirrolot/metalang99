// Pattern matching for strings (like a switch statement).

#include <string.h>

#include <epilepsy.h>

#define MATCH(str, ...)                                                                            \
    {                                                                                              \
        E_listEval(E_listMapInitLast(                                                              \
            E_compose(E_appl(v(GEN_BRANCH), v(str)), v(E_unparenthesise)),                         \
            v(GEN_DEFAULT_BRANCH),                                                                 \
            E_list(v(__VA_ARGS__)))) out:;                                                         \
    }

#define GEN_BRANCH_IMPL(str, pattern, ...)                                                         \
    v(if (strcmp(str, pattern) == 0) { __VA_ARGS__ goto out; })

#define GEN_DEFAULT_BRANCH E_unparenthesise

#define GEN_BRANCH_ARITY 2

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
