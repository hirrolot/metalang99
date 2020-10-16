> WARNING: still under v0.1.0 active development.

# insult
[![CI](https://github.com/Hirrolot/insult/workflows/C/C++%20CI/badge.svg)](https://github.com/Hirrolot/insult/actions)

> The dark side of the force is a pathway to many abilities, some considered to be unnatural.<br>&emsp;&emsp;<b>-- Darth Sidious</b>

TODO: the main example (https://github.com/Hirrolot/insult/issues/1).

Insult is an embedded [metalanguage] that facilitates [language-oriented programming] in plain C -- instead of solving problems using overly liberal mechanisms of C, solve them via your own [domain-specific languages]. Insult accomplishes its goal by extending the standard preprocessor with high-level programming constructs to let us deal with [metaprogramming] on a large scale.

[domain-specific languages]: https://en.wikipedia.org/wiki/Domain-specific_language
[recursion is blocked]: https://github.com/pfultz2/Cloak/wiki/C-Preprocessor-tricks,-tips,-and-idioms#recursion
[metalanguage]: https://en.wikipedia.org/wiki/Metalanguage

## Highlights
 - C99-compliant.
 - Embedded: just `#include <insult.h>` and use it directly in your sources, without third-party tools.
 - No dependencies. Even the standard library.
 - Precise [documentation](https://hirrolot.github.io/insult/).

[metalanguage]: https://en.wikipedia.org/wiki/Metalanguage
[language-oriented programming]: https://en.wikipedia.org/wiki/Language-oriented_programming
[domain-specific languages]: https://en.wikipedia.org/wiki/Domain-specific_language
[metaprogramming]: https://en.wikipedia.org/wiki/Metaprogramming
