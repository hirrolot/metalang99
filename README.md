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

(Hint: `v(something)` evaluates to `something`.)

Epilepsy is a functional language aimed at full-blown C/C++ preprocessor metaprogramming.

It features a wide range of concepts, including algebraic data types, control flow operators, collections, general recursion, and auto-currying -- to make metaprograms of all sizes maintainable.

## Table of contents

 - [Installation](#installation)
 - [Motivation](#motivation)
 - [Tutorial](#tutorial)
 - [Contributing](#contributing)
 - [Source code structure](#source-code-structure)
 - [FAQ](#faq)

## Installation

You have two options: download either this repository or the [amalgamated header](https://github.com/Hirrolot/epilepsy-amalgamation):

```sh
# Download this repository:
$ git clone https://github.com/Hirrolot/epilepsy.git

# Download the amalgamated header:
$ wget https://raw.githubusercontent.com/Hirrolot/epilepsy-amalgamation/master/epilepsy.h
```

In the first case, you must add one more include path `epilepsy/include`.

To use Epilepsy, just `#include <epilepsy.h>` beforehand. No additional setup is needed: Epilepsy is implemented using only preprocessor macros.

## Motivation

The C macro system can be viewed as a tool to extend the language with custom syntactic sugar, to make code closer to a problem domain. However, the arsenal it provides is infinitely poor: all we can do is basic copy-pasting of tokens. We cannot even operate with control flow, integers, and unbounded sequences, thereby throwing a lot of hypothetically useful metaprograms out of scope.

This is what Epilepsy tries to fix -- it enriches the standard-confirming (C99/C++11 and onwards) preprocessor with the great variosity of metaprogramming abilities, to make development of both small and complex metaprograms painless. For example, consider [datatype99] -- type-safe [algebraic data types] for pure C, which is implemented upon Epilepsy:

[datatype99]: https://github.com/Hirrolot/datatype99
[algebraic data types]: https://en.wikipedia.org/wiki/Algebraic_data_type

## Tutorial

See [our GitBook] as a user-friendly guide.

[our GitBook]: https://hirrolot.gitbook.io/epilepsy/

## Contributing

See [`CONTRIBUTING.md`](CONTRIBUTING.md).

## Source code structure

Epilepsy is split into two parts: the interpreter and the standard library.

The interpreter interprets the core metalanguage described in the [specification]. It is located in [`eval.h`] and [`eval/`]. The former file contains a machine written in [continuation-passing style] which is described in the specification too. [`eval/rec/`] contains a macro recursion engine upon which everything executes.

All the other files except [`priv/`] (private auxiliary stuff) comprise the standard library. 

[continuation-passing style]: https://en.wikipedia.org/wiki/Continuation-passing_style
[specification]: https://github.com/Hirrolot/epilepsy/blob/master/spec/spec.pdf
[`eval.h`]: include/epilepsy/eval.h
[`eval/`]: include/epilepsy/eval/
[`eval/rec/`]: include/epilepsy/eval/rec/
[`priv/`]: include/epilepsy/priv/

## FAQ

### Q: Why not just use third-party code generators?

A:

 - Preprocessor macros are far more seamlessly integrated with a code base: you can invoke them in the same source files where ordinary code in C is written.
 - IDE support.
 - Avoid additional burden with distribution and setup of third-party code generators.

### Q: In what aspects Epilepsy differs from other preprocessor libraries?

A: In short, it provides more functionality, it is well-tested, and actively maintained. In particular, [Boost/Preprocessor] is well-tested and actively maintained too, but lacks general metarecursion, partial application, choice types, graceful error reporting, and debugging facilities.

[Boost/Preprocessor]: http://boost.org/libs/preprocessor

### Q: Compilation times?

A: No benchmarks yet but you can take a look at the [CI] or measure compilation time of each test/example separately.

[CI]: https://github.com/Hirrolot/epilepsy/actions

### Q: Why formal specification?

A:

 - **Formal proofs.** With a mathematical model it becomes possible to prove things about Epilepsy formally; for example, the progress theorem, which can be stated as "the interpreter always knows what to do next".

 - **It guides the implementation.** The implementation gets adjusted with the specification (i.e. reflects the formal syntax and semantics), thereby making itself easier to reason about.

 - **It guides the tests.** We immediately see many, if not all corner cases, which are ought to be tested.

 - **Distinctness.** With a formal specification, it is much easier to answer questions like "Is it a bug of the implementation or it is a valid behaviour according to the specification?".

That is, the development flow is "specification-driven", if you prefer.

### Q: Is Epilepsy Turing-complete?

A: Nope. The C/C++ preprocessor is capable to iterate only up to a certain limit (see this [SO question](https://stackoverflow.com/questions/3136686/is-the-c99-preprocessor-turing-complete)). For Epilepsy, this limit is defined in terms of reductions steps (see the [specification]).
