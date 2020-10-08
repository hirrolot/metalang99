<div align="center">
  <img src="logo.png" width="450px">
  <h1>agony-pp</h1>
  <a href="https://github.com/Hirrolot/agony-pp/actions">
    <img src="https://github.com/Hirrolot/agony-pp/workflows/C/C++%20CI/badge.svg">
  </a>
  <a href="https://hirrolot.github.io/agony-pp/">
    <img src="https://img.shields.io/badge/docs-Doxygen-blue">
  </a>

  Macros provide the means to abstract frequently occurring syntactical constructs to let us concentrate on what really matters, eliminating all distracting details. Even more, every macro can be considered as an [embedded domain-specific language] able to disallow invalid behavior, hence reducing risks of introducing new bugs in comparison with overly liberal mechanisms of a host programming language.

  However, metaprogramming in C is quite castrated: preprocessor control expressions don't exist at all, [recursion is blocked], no support for arithmetic, collections, et cetera. agony-pp is a [metalanguage] addressing all of the aforementioned problems, and furthermore, is implemented as a set of standard-compliant macros, thus avoiding the need for third-party code generators.
</div>

[embedded domain-specific language]: https://en.wikipedia.org/wiki/Domain-specific_language
[recursion is blocked]: https://github.com/pfultz2/Cloak/wiki/C-Preprocessor-tricks,-tips,-and-idioms#recursion
[metalanguage]: https://en.wikipedia.org/wiki/Metalanguage
