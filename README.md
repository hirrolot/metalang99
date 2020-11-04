> WARNING: still under v0.1.0 active development.

# Macrolop
[![CI](https://github.com/Hirrolot/macrolop/workflows/C/C++%20CI/badge.svg)](https://github.com/Hirrolot/macrolop/actions)

> The dark side of the force is a pathway to many abilities, some considered to be unnatural.<br>&emsp;&emsp;<b>-- Darth Sidious</b>

TODO: the main example (https://github.com/Hirrolot/macrolop/issues/1).

Macrolop is a [metalanguage] on top of the C99 preprocessor aimed at [language-oriented programming]. In Macrolop, programmers express their intention in terms of [domain-specific languages] provided as ordinary C libraries. No external tooling is required.

[metalanguage]: https://en.wikipedia.org/wiki/Metalanguage
[language-oriented programming]: https://en.wikipedia.org/wiki/Language-oriented_programming
[domain-specific languages]: https://en.wikipedia.org/wiki/Domain-specific_language
[metaprogramming]: https://en.wikipedia.org/wiki/Metaprogramming

## Highlights
 - C99-compliant.
 - Just `#include <macrolop.h>` and use it directly in your sources, without third-party tools.
 - No dependencies. Even the standard library.
 - Precise [documentation](https://hirrolot.github.io/macrolop/).
 - [Formally defined syntax and semantics](spec/spec.pdf).

## Supported libraries

### Paradigms-as-libraries

| Name | Paradigm | Status |
|----------|----------|----------|
| [macrolop-oop] | [Object-oriented programming] | Actively developed |
| [macrolop-generic] | [Generic programming] | Actively developed |
| [macrolop-async] | [Asynchronous programming] | Actively developed |
| [macrolop-sm] | [Automata-based programming] | Actively developed |
| [macrolop-logic] | [Logic programming] | Actively developed |

### Concepts-as-libraries

| Name | Concept | Status |
|----------|----------|----------|
| [macrolop-adt] | [Algebraic data types] | Actively developed |

[macrolop-oop]: https://github.com/Hirrolot/macrolop-oop
[macrolop-generic]: https://github.com/Hirrolot/macrolop-generic
[macrolop-async]: https://github.com/Hirrolot/macrolop-async
[macrolop-sm]: https://github.com/Hirrolot/macrolop-sm
[macrolop-logic]: https://github.com/Hirrolot/macrolop-logic
[macrolop-adt]: https://github.com/Hirrolot/macrolop-adt

[Object-oriented programming]: https://en.wikipedia.org/wiki/Object-oriented_programming
[Generic programming]: https://en.wikipedia.org/wiki/Generic_programming
[Asynchronous programming]: https://en.wikipedia.org/wiki/Asynchrony_(computer_programming)
[Automata-based programming]: https://en.wikipedia.org/wiki/Automata-based_programming
[Logic programming]: https://en.wikipedia.org/wiki/Logic_programming
[Algebraic data types]: https://en.wikipedia.org/wiki/Algebraic_data_type
