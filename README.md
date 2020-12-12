> WARNING: still under v0.1.0 active development.

# Macrolop
[![CI](https://github.com/Hirrolot/macrolop/workflows/C/C++%20CI/badge.svg)](https://github.com/Hirrolot/macrolop/actions)
[![docs](https://img.shields.io/badge/docs-github.io-blue)](https://hirrolot.github.io/macrolop/)
[![ызус](https://img.shields.io/badge/spec-PDF-green)](https://github.com/Hirrolot/macrolop/blob/master/spec/spec.pdf)

> The dark side of the force is a pathway to many abilities, some considered to be unnatural.<br>&emsp;&emsp;<b>-- Darth Sidious</b>

TODO: the main example (https://github.com/Hirrolot/macrolop/issues/1).

Macrolop allows you to create and use embedded [domain-specific languages] in pure C.

Everything you see happens at compile-time. Everything you need is `#include <macrolop.h>` and a C99 preprocessor.

[domain-specific languages]: https://en.wikipedia.org/wiki/Domain-specific_language

## FAQ

Q: **What "Macrolop" means?**

A: "Macrolop" = **M**acro + **l**anguage-**o**riented **p**rogramming ([Wikipedia](https://en.wikipedia.org/wiki/Language-oriented_programming)).

Q: **Why C and not C++/Rust/whatever else?**

A: For instance:

 - Your company dictates to use C.
 - Your target architecture does not support other high-level languages.
 - Your code base is already written in C.
 - ...

Q: **Why formal specification?**

A:

 - **Formal proofs.** With a mathematical model it becomes possible to proof things about Macrolop formally.

 - **It guides the implementation.** The implementation reflects the formal syntax and semantics, thereby making itself easier to reason about.

 - **It guides the tests.** We immediately see many, if not all corner cases, which are ought to be tested.

 - **Distinctness.** With a formal specification, it is much easier to answer questions like "Is it a bug of the implementation or it is a valid behaviour according to the specification?".

That is, the development flow is "specification-driven", if you prefer.
