# Changelog

All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.0.0/), 
and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [unreleased]

### Added

 - `M_when`, `M_whenPlain`, `M_whenLazy`, `M_whenLazyPlain`
 - `M_leftUnderscored`, `M_rightUnderscored`
 - `M_introduceVarToStmt`
 - `M_terms`
 - `M_parenthesizedVariadicsHead`, `M_parenthesizedVariadicsHeadPlain`, `M_parenthesizedVariadicsTail`, `M_parenthesizedVariadicsTailPlain`
 - `M_indexedParams`, `M_indexedFields`, `M_indexedInitializerList`
 - `M_typedef`, `M_struct`, `M_anonStruct`
 - `M_choiceTag`, `M_choiceTagPlain`, `M_isNilPlain`, `M_isCons`, `M_isConsPlain`

### Changed

 - Make `M_variadicsHead` accept a single argument too.
 - Now at most 63 variadic arguments are acceptable by `M_list`, `M_variadicsCount`, and `M_variadicsCountPlain`.
 - Terms now need to be separated by commas, e.g. instead of `v(1) M_call(F, v(2)) v(3)`, write `v(1), M_call(F, v(2)), v(3)` or `M_terms(v(1), M_call(F, v(2)), v(3)`.
 - The empty sequence is prohibited by `M_eval`, `M_call` and `abort`.
 - Use American style endings (because it is prevalent):
   - `(un)parenthesise(Eval)` -> `(un)parenthesize(Eval)`
   - `isParenthesised` -> `isParenthesized`
   - `isUnparenthesised` -> `isUnparenthesized`
   - `parenthesisedVariadics(Head|Tail)` -> `parenthesizedVariadics(Head|Tail)`

### Fixed

 - `aux.*` -> `util.*` for compatibility with Windows.

### Removed

 - `M_variadicsMap`, `M_variadicsMapCommaSep`, `M_variadicsMapI`, `M_variadicsMapICommaSep` (better use lists)
 - `M_const2`, `M_const3`

## [0.2.0] - 2020-02-05

### Changed

 - The project name `Epilepsy` -> `Metalang99` (more neutral).

### Fixed

 - Reporting about syntactic mismatches.

## [0.1.0] - 2020-02-04

### Added

 - This excellent project.
