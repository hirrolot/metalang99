# Architecture

This document describes the high-level architecture of Metalang99.

## Interpreter

The interpreter interprets the core metalanguage described in the [specification].

[specification]: https://github.com/Hirrolot/metalang99/blob/master/spec/spec.pdf

### `eval.h`

`eval.h` exposes a single macro `ML99_eval` which evaluates a given metaprogram. It is implemented as a machine in [continuation-passing style] which is described in the specification too.

[continuation-passing style]: https://en.wikipedia.org/wiki/Continuation-passing_style

### `eval/rec/`

`eval/rec/` contains a macro recursion engine upon which everything executes.

## Standard library

The Metalang99 standard library is a set of functions implemented using the core metalanguage. They are located inside corresponding files listed at the [documentation]'s front page.

[documentation]: https://metalang99.readthedocs.io/en/latest/
