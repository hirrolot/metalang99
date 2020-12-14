> WARNING: still under v0.1.0 active development.

# Epilepsy
[![CI](https://github.com/Hirrolot/epilepsy/workflows/C/C++%20CI/badge.svg)](https://github.com/Hirrolot/epilepsy/actions)
[![docs](https://img.shields.io/badge/docs-github.io-blue)](https://hirrolot.github.io/epilepsy/)
[![ызус](https://img.shields.io/badge/spec-PDF-green)](https://github.com/Hirrolot/epilepsy/blob/master/spec/spec.pdf)

> The dark side of the force is a pathway to many abilities, some considered to be unnatural.<br>&emsp;&emsp;<b>-- Darth Sidious</b>

TODO: the main example (https://github.com/Hirrolot/epilepsy/issues/1).

Epilepsy allows you to create and use embedded [domain-specific languages] in C/C++.

Everything you see happens at compile-time. Everything you need is `#include <epilepsy.h>` and a C99/C++11-compliant preprocessor.

[domain-specific languages]: https://en.wikipedia.org/wiki/Domain-specific_language

## FAQ

Q: **Why formal specification?**

A:

 - **Formal proofs.** With a mathematical model it becomes possible to proof things about Epilepsy formally.

 - **It guides the implementation.** The implementation reflects the formal syntax and semantics, thereby making itself easier to reason about.

 - **It guides the tests.** We immediately see many, if not all corner cases, which are ought to be tested.

 - **Distinctness.** With a formal specification, it is much easier to answer questions like "Is it a bug of the implementation or it is a valid behaviour according to the specification?".

That is, the development flow is "specification-driven", if you prefer.
