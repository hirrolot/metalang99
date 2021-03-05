# Metalang99

[![CI](https://github.com/Hirrolot/metalang99/workflows/C/C++%20CI/badge.svg)](https://github.com/Hirrolot/metalang99/actions)
[![docs](https://img.shields.io/badge/docs-readthedocs.io-blue)](https://metalang99.readthedocs.io/en/latest/)
[![book](https://img.shields.io/badge/book-gitbook.io-pink)](https://hirrolot.gitbook.io/metalang99/)
[![spec](https://img.shields.io/badge/spec-PDF-green)](https://github.com/Hirrolot/metalang99/blob/master/spec/spec.pdf)

> The dark side of the force is a pathway to many abilities, some considered to be unnatural.<br>&emsp; &emsp; <b>-- Darth Sidious</b>

[ [`examples/demo.c`](examples/demo.c) ]
```c
#include <metalang99.h>

// Compile-time list manipulation {
// 3, 3, 3, 3, 3
static int five_threes[] = {
    M_listEvalCommaSep(M_listReplicate(v(5), v(3))),
};

// 5, 4, 3, 2, 1
static int from_5_to_1[] = {
    M_listEvalCommaSep(M_listReverse(M_list(v(1, 2, 3, 4, 5)))),
};

// 9, 2, 5
static int lesser_than_10[] = {
    M_listEvalCommaSep(M_listFilter(M_appl(v(M_greater), v(10)), M_list(v(9, 2, 11, 13, 5)))),
};
// }

// Macro recursion {
#define factorial(n) M_call(factorial, n)

#define factorial_IMPL(n)   M_natMatch(v(n), v(factorial_))
#define factorial_Z_IMPL()  v(1)
#define factorial_S_IMPL(n) M_mul(M_inc(v(n)), factorial(v(n)))

M_assertEq(factorial(v(4)), v(24));
// }

// Overloading on a number of arguments {
typedef struct {
    double width, height;
} Rect;

#define Rect_new(...) M_overload(Rect_new_, __VA_ARGS__)
#define Rect_new_1(x)                                                                              \
    { x, x }
#define Rect_new_2(x, y)                                                                           \
    { x, y }

static Rect _7x8 = Rect_new(7, 8), _10x10 = Rect_new(10);
// }

// ... and more!

int main(void) {
    // Yeah. All is done at compile time.
}
```

(Hint: `v(something)` evaluates to `something`.)

Metalang99 is a functional language aimed at full-blown C99 preprocessor metaprogramming.

It features a wide range of concepts, including algebraic data types, control flow operators, collections, recursion, and auto-currying -- to develop both small and complex metaprograms painlessly.

## Table of contents

 - [Motivation](#motivation)
 - [Getting started](#getting-started)
 - [Philosophy and origins](#philosophy-and-origins)
 - [Contributing](#contributing)
 - [Architecture](#architecture)
 - [Optimisation guide](#optimisation-guide)
 - [FAQ](#faq)
 - [Troubleshooting](#troubleshooting)

## Motivation

The C macro system can be viewed as a tool to extend the language with custom syntactic sugar, to make code closer to a problem domain. However, the arsenal it provides is infinitely poor: all we can do is basic copy-pasting of tokens. We cannot even operate with control flow, integers, and unbounded sequences, thereby throwing a lot of hypothetically useful metaprograms out of scope.

To solve the problem, I have implemented Metalang99 -- a functional programming language executing on any standard-confirming preprocessor. Unlike other metaprogramming libraries, Metalang99 features:

 - **Macro recursion.** Recursive calls behave as expected. In particular, to implement recursion, [Boost/Preprocessor] just copy-pastes all recursive functions up to a certain limit and forces to either keep track of recursion depth or rely on built-in deduction; Metalang99 is free from such drawbacks.

 - **Almost the same syntax.** Metalang99 does not look too alien in comparison with [Order PP] because the syntax differs insignificantly from usual preprocessor code.

 - **Partial application.** Besides better reuse of metafunctions, partial application helps to capture an environment for a macro, thus avoiding the need in packing & unpacking auxiliary parameters.

 - **Debugging and error reporting.** You can conveniently debug your macros with `M_abort` and report fatal errors with `M_fatal`. The interpreter will immediately finish its work and do the trick.

[Boost/Preprocessor]: http://boost.org/libs/preprocessor
[Order PP]: https://github.com/rofl0r/order-pp

As a practical example of what is possible with Metalang99, consider [Datatype99]. It implements safe, intuitive [sum types] in pure C99, by heavy use of metaprogramming:

```c
#include <datatype99.h>

datatype(
    BinaryTree,
    (Leaf, int),
    (Node, BinaryTree *, int, BinaryTree *)
);

int sum(const BinaryTree *tree) {
    match(*tree) {
        of(Leaf, x) return *x;
        of(Node, lhs, x, rhs) return sum(*lhs) + *x + sum(*rhs);
    }
}
```

So, in summary, Metalang99 allows to do advanced metaprogramming in C. It allows to drastically improve quality of your code -- make it safer, cleaner, and more maintainable.

[Datatype99]: https://github.com/Hirrolot/datatype99
[sum types]: https://en.wikipedia.org/wiki/Tagged_union

## Getting started

 1. Download this repository.
 2. Add `metalang99/include` to your include paths.
 3. `#include <metalang99.h>` beforehand (or use separate headers described in the docs).

**PLEASE**, use Metalang99 only with [`-ftrack-macro-expansion=0`] (GCC) or something similar, otherwise it will throw your compiler to the moon. [Precompiled headers] are also very helpful.

Resources:

 - [Tutorial](https://hirrolot.gitbook.io/metalang99/)
 - [Examples](examples/)
 - [User documentation](https://metalang99.readthedocs.io/en/latest/)

Happy hacking!

[precompiled headers]: https://en.wikipedia.org/wiki/Precompiled_header
[`-ftrack-macro-expansion=0`]: https://gcc.gnu.org/onlinedocs/gcc/Preprocessor-Options.html

## Philosophy and origins

My work on [Poica], a research programming language implemented upon [Boost/Preprocessor], has left me unsatisfied with the result. The fundamental downsides of Boost/Preprocessor made themselves felt: macro blueprinting was a really hard-to-debug disaster, especially in the case of higher-order metafunctions, and the absence of partial application forced me to reify the same patterns into macros each time. The code base got simply unmaintainable.

After I realised that the metaprogramming framework lacks abstractions, I started to implement Metalang99. Honestly, it turned out to be a much tougher and fascinating challenge than I expected -- it took half of a year of hard work to release v0.1.0. As a real-world application of Metalang99, I created [Datatype99] exactly of the same form I wanted it to be: the implementation is highly declarative, the syntax is nifty, and the semantics is well-defined.

Finally, I want to say that Metalang99 is only about transformations of syntactic forms and not about sophisticated compile-time calculations, like compiling a finite automaton from regular expressions or computing a 15th Fibonacci number; the preprocessor is just too slow and limited for such kind of abuse.

[Poica]: https://github.com/Hirrolot/poica

## Contributing

See [`CONTRIBUTING.md`](CONTRIBUTING.md).

At this moment, contributions that optimise the interpreter and the standard library are highly appreciated.

## Architecture

See [`ARCHITECTURE.md`](ARCHITECTURE.md).

## Optimisation guide

Generally speaking, the fewer reduction steps you perform, the faster you become. A reduction step is a concept formally defined in the [specification]. Here's its informal (and imprecise) description:

 - Every `v(...)` is a reduction step.
 - Every `M_call(op, ...)` induces as many reduction steps as required to evaluate `op` and `...` plus 1.

To perform fewer reduction steps, you can:

 - Use `M_callTrivial`,
 - Use the plain versions (e.g., `M_consumePlain` instead of `M_consume`),
 - Call a macro as `<X>_IMPL(...)`, provided that all the arguments are evaluated and macro blueprinting will not happen. I strongly recommend to use this trick only if `X` is placed locally to a caller in order to ensure the correctness of expansion.

## FAQ

### Q: What about compile-time errors?

A: Metalang99 detects and reports about syntactic errors, where possible. For example (`-E` flag):

```c
// !"Metalang99 syntax error": `123`
M_eval(123)
```

However, compile-time errors can be still quite obscured. I strongly recommend using `-ftrack-macro-expansion=0` (GCC) as it tells a compiler to not print a useless bedsheet of macro expansions.

### Q: What about debugging?

A: See the chapter [_Testing, debugging, and error reporting_](https://hirrolot.gitbook.io/metalang99/testing-debugging-and-error-reporting).

### Q: Why don't you use third-party code generators?

A:

 - Preprocessor macros are far more seamlessly integrated with a code base: you can invoke them in the same source files where ordinary code in C is written.
 - IDE support.
 - Avoid additional burden with distribution and setup of third-party code generators.

### Q: Compilation times?

A: To run the benchmarks, execute `./scripts/bench.sh` from the root directory.

### Q: Why formal specification?

A:

 - **Formal proofs.** With a mathematical model it becomes possible to prove things about Metalang99 formally; for example, the progress theorem, which can be stated as "the interpreter always knows what to do next".

 - **It guides the implementation.** The implementation gets adjusted with the specification (i.e. reflects the formal syntax and semantics), thereby making itself easier to reason about.

 - **It guides the tests.** We immediately see many, if not all corner cases, which are ought to be tested.

 - **Distinctness.** It is much easier to answer questions like "Is it a bug of the implementation or it is a valid behaviour according to the specification?".

That is, the development flow is "specification-driven", if you prefer.

### Q: Is Metalang99 Turing-complete?

A: Nope. The C/C++ preprocessor is capable to iterate only up to a certain limit (see this [SO question](https://stackoverflow.com/questions/3136686/is-the-c99-preprocessor-turing-complete)). For Metalang99, this limit is defined in terms of reductions steps (see the [specification]).

[specification]: https://github.com/Hirrolot/metalang99/blob/master/spec/spec.pdf

### Q: Why do we need powerful preprocessor macros in the presence of templates?

A: Metalang99 is primarily targeted at pure C, and C lacks templates. But anyway, you can find the argumentation for C++ at the website of [Boost/Preprocessor].

### Q: What standards are supported?

A: C99/C++11 and onwards.

### Q: Why not generate an amalgamated header?

A: I don't like amalgamated headers because they induce burden with updating. In contrast to this, you can just add Metalang99 as a [Git submodule] and update it with `git submodule update --remote`.

[Git submodule]: https://git-scm.com/book/en/v2/Git-Tools-Submodules

## Troubleshooting

### Problem: I can't make it work on MSVC

Solution: specify either `/std:c11` or `/std:c17`. [More information >>](https://docs.microsoft.com/en-us/cpp/build/reference/std-specify-language-standard-version?view=msvc-160#c-standards-support-1)
