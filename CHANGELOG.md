# Changelog

All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.0.0/), 
and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [unreleased]

### Added

 - `when`, `whenPlain`, `whenLazy`, `whenLazyPlain`
 - `leftUnderscored`, `rightUnderscored`
 - `introduceVarToStmt`
 - `terms`
 - `parenthesisedVariadicsHead`, `parenthesisedVariadicsHeadPlain`, `parenthesisedVariadicsTail`, `parenthesisedVariadicsTailPlain`
 - `indexedParams`, `indexedFields`, `indexedInitialiserList`
 - Stateful computations:
   - `withState`
   - `stateless`, `stateless2`, `stateless3`
   - `listMapStateful`, `listFilterStateful`

### Changed

 - Make `variadicsHead` accept a single argument too.
 - Now at most 63 variadic arguments are acceptable by `list`, `variadicsCount`, `variadicsCountPlain`, `variadicsMap`, `variadicsMapI`, `variadicsMapCommaSep`, `variadicsMapICommaSep`.
 - Terms now need to be separated by commas, e.g. instead of `v(1) M_call(F, v(2)) v(3)`, write `v(1), M_call(F, v(2)), v(3)`.
 - The empty sequence is prohibited by `eval` and `abort`.

### Fixed

 - `aux.*` -> `util.*` for compatibility with Windows.

### Removed

 - `variadicsMap`, `variadicsMapCommaSep`, `variadicsMapI`, `variadicsMapICommaSep` (better use lists)
 - `const2`, `const3`

## [0.2.0] - 2020-02-05

### Changed

 - The project name `Epilepsy` -> `Metalang99` (more neutral).

### Fixed

 - Reporting about syntactic mismatches.

## [0.1.0] - 2020-02-04

### Added

 - This excellent project.
