> WARNING: still under v0.1.0 active development.

# Epilepsy

[![CI](https://github.com/Hirrolot/epilepsy/workflows/C/C++%20CI/badge.svg)](https://github.com/Hirrolot/epilepsy/actions)
[![docs](https://img.shields.io/badge/docs-readthedocs.io-blue)](https://epilepsy.readthedocs.io/en/latest/)
[![spec](https://img.shields.io/badge/spec-PDF-green)](https://github.com/Hirrolot/epilepsy/blob/master/spec/spec.pdf)
[![book](https://img.shields.io/badge/book-gitbook.io-pink)](https://hirrolot.gitbook.io/epilepsy/)

> The dark side of the force is a pathway to many abilities, some considered to be unnatural.<br>&emsp; &emsp; <b>-- Darth Sidious</b>

[[`examples/demo.c`](examples/demo.c)]
```c
#include <epilepsy.h>

// Compile-time list manipulation {
// 3, 3, 3, 3, 3
static int five_threes[] = {
    E_listEvalCommaSep(E_listReplicate(v(5), v(3))),
};

// 5, 4, 3, 2, 1
static int from_5_to_1[] = {
    E_listEvalCommaSep(E_listReverse(E_list(v(1, 2, 3, 4, 5)))),
};

// 9, 2, 5
static int lesser_than_10[] = {
    E_listEvalCommaSep(E_listFilter(E_appl(v(E_uintGreater), v(10)), E_list(v(9, 2, 11, 13, 5)))),
};
// }

// General macro recursion {
#define factorial(n) E_call(factorial, n)

#define factorial_IMPL(n)   E_uintMatch(v(n), v(factorial_))
#define factorial_Z_IMPL()  v(1)
#define factorial_S_IMPL(n) E_uintMul(E_uintInc(v(n)), factorial(v(n)))

E_assertEq(factorial(v(4)), v(24));
// }

// Overloading on a number of arguments {
typedef struct {
    double width, height;
} Rect;

#define Rect_new(...)         E_eval(E_overload(v(Rect_new_), v(__VA_ARGS__)))
#define Rect_new_1_IMPL(x)    v(((Rect){.width = x, .height = x}))
#define Rect_new_2_IMPL(x, y) v(((Rect){.width = x, .height = y}))

static Rect _7x8 = Rect_new(7, 8), _10x10 = Rect_new(10);
// }

// ... and more!

int main(void) {
    // Yeah. All is done at compile time.
}
```

Epilepsy is a functional language aimed at full-blown C/C++ preprocessor metaprogramming.

It features a wide range of concepts, including algebraic data types, control flow operators, collections, general recursion, and auto-currying -- to make metaprograms of all sizes maintainable.

## Motivation

The C macro system is a tool to extend the host language with custom syntactic sugar, to make code closer to a problem domain. However, the arsenal it provides is infinitely poor: all we can do is basic copy-pasting of tokens. We cannot even operate with an unbounded sequence of tokens, thereby throwing a lot of hypothetically useful metaprograms out of scope.

This is what Epilepsy tries to fix -- it enriches the standard-confirming (C99/C++11 and onwards) preprocessor with the great variosity of metaprogramming abilities, to be able to painlessly develop even complex metaprograms, such as [datatype99].

Now, to make the discussion concrete, I shall demonstrate Epilepsy on the example of one small metaprogram: a switch statement for strings. The problem can be stated as follows: given a null-terminated string `str`, match it against a set of patterns. If `str` matches a pattern `pat`, then execute the corresponding body and jump to the next instruction; if all the patterns have failed, execute the default case. We can solve it via if-then-else statements:

```c
if (strcmp(str, pat1) == 0) { /* ... */ }
else if (strcmp(str, pat2) == 0) { /* ... */ }
...
else { /* ... */ }
```

Clearly, this approach induces a lot of boilerplate which we shall avoid. A better way is to reify this kind of syntactic abstraction into a metaprogram, now using Epilepsy:

[[`examples/match_string.c`](examples/match_string.c)]
```c
#include <epilepsy.h>

#define MATCH(str, ...)                                                                            \
    {                                                                                              \
        E_listEval(E_listMapInitLast(                                                              \
            E_compose(                                                                             \
                E_appl(v(E_variadicsMatch), E_appl(v(GEN_BRANCH), v(str))),                        \
                v(E_unparenthesise)),                                                              \
            v(GEN_DEFAULT_BRANCH),                                                                 \
            E_list(v(__VA_ARGS__)))) out:;                                                         \
    }

#define GEN_BRANCH_IMPL(str, pattern, ...)                                                         \
    v(if (strcmp(str, pattern) == 0) { __VA_ARGS__ goto out; })

#define GEN_DEFAULT_BRANCH E_unparenthesise

#define GEN_BRANCH_ARITY 3
```

Having the above macros defined, pattern matching for strings is easy:

```c
#include <stdio.h>
#include <string.h>

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
```

<details>
    <summary>Compare with if-then-else</summary>

```c
if (strcmp(reason, "OK") == 0) { status_code = 200; }
else if (strcmp(reason, "Moved Permanently") == 0) { status_code = 301; }
else if (strcmp(reason, "Not Found") == 0) { status_code = 404; }
else { status_code = -1; }
```

</details>

It works as follows:

 1. `E_list(v(__VA_ARGS__))` constructs an internal representation of a list of branches to operate on.
 2. `E_listMapInitLast` accepts the two functions and the list of branches. The first function (see below) maps all the elements except the last, and the second function maps the last element (the default case).
 3. The first function is a [composition] of `E_appl(v(E_variadicsMatch), E_appl(v(GEN_BRANCH), v(str)))` and `E_unparenthesise`:
    1. `E_unparenthesise` unparenthesises a branch; for example, `("OK", { status_code = 200; })` becomes `"OK", { status_code = 200; }`.
    2. `E_appl(v(E_variadicsMatch), E_appl(v(GEN_BRANCH), v(str)))` constructs a function that accepts an unparenthesised branch representation consisting of a pattern and a body, and redirects both to `GEN_BRANCH` [partially applied] to the matched string `"OK"`.
 4. The second function is `GEN_DEFAULT_BRANCH`, which just unparenthesises the default case body.
 5. `E_listEval` evaluates the list and unwraps all its elements right into the source file.

As you can see, code written in Epilepsy consists of combined functions -- this is why Epilepsy is called functional.

[datatype99]: https://github.com/Hirrolot/datatype99
[composition]: https://en.wikipedia.org/wiki/Function_composition
[partially applied]: https://en.wikipedia.org/wiki/Partial_application

## FAQ

### Q: Why formal specification?

A:

 - **Formal proofs.** With a mathematical model it becomes possible to prove things about Epilepsy formally; for example, the progress theorem, which can be stated as "the interpreter always knows what to do next".

 - **It guides the implementation.** The implementation gets adjusted with the specification (i.e. reflects the formal syntax and semantics), thereby making itself easier to reason about.

 - **It guides the tests.** We immediately see many, if not all corner cases, which are ought to be tested.

 - **Distinctness.** With a formal specification, it is much easier to answer questions like "Is it a bug of the implementation or it is a valid behaviour according to the specification?".

That is, the development flow is "specification-driven", if you prefer.
