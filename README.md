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

// "Rachmaninoff" "Bach" "Chopin"
E_listEval(E_listReverse(E_list(v("Chopin", "Bach", "Rachmaninoff"))))

// 18 2 5
E_listEval(E_listFilter(E_list(v(18, 2, 24, 38, 5)), E_appl(v(E_uintGreater), v(20))))

// 4 5 6
E_listEval(E_listMap(E_appl(v(E_uintAdd), v(3)), E_list(v(1, 2, 3))))

#define STATICS(...)                                                                               \
    E_listEval(E_listFor(E_list(v(__VA_ARGS__)), E_appl2(v(E_putBetween), v(static), v(;))))       \
        E_semicolon()

/*
 * static int a;
 * static const char *b = "abc";
 * static double c = 123.456;
 */
STATICS(int a, const char *b = "abc", double c = 123.456);

int main(void) {}
```

Epilepsy is a functional language aimed at full-blown C/C++ preprocessor metaprogramming.

It features a wide range of concepts, including algebraic data types, control flow operators, collections, general recursion, and auto-currying -- to make metaprograms of all sizes maintainable.

## Motivation

## FAQ

### Q: Why formal specification?

A:

 - **Formal proofs.** With a mathematical model it becomes possible to prove things about Epilepsy formally; for example, the progress theorem, which can be stated as "the interpreter always knows what to do next".

 - **It guides the implementation.** The implementation gets adjusted with the specification (i.e. reflects the formal syntax and semantics), thereby making itself easier to reason about.

 - **It guides the tests.** We immediately see many, if not all corner cases, which are ought to be tested.

 - **Distinctness.** With a formal specification, it is much easier to answer questions like "Is it a bug of the implementation or it is a valid behaviour according to the specification?".

That is, the development flow is "specification-driven", if you prefer.
