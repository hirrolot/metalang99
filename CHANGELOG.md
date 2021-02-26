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
 - The empty sequence is prohibited by `M_eval`, `M_call` and `M_abort`.
 - Use American style endings (because it is prevalent):
   - `M_(un)parenthesise(Eval)` -> `M_(un)parenthesize(Eval)`
   - `M_isParenthesised` -> `M_isParenthesized`
   - `M_isUnparenthesised` -> `M_isUnparenthesized`
   - `M_parenthesisedVariadics(Head|Tail)` -> `M_parenthesizedVariadics(Head|Tail)`
 - Shorten functions on unsigned integers:
   - `M_uintInc(Plain)` -> `M_inc(Plain)`
   - `M_uintDec(Plain)` -> `M_dec(Plain)`
   - `M_uintAdd(3)` -> `M_add(3)`
   - `M_uintSub(3)` -> `M_sub(3)`
   - `M_uintMul(3)` -> `M_mul(3)`
   - `M_uintDiv(3)` -> `M_div(3)`
   - `M_uintDivChecked` -> `M_divChecked`
   - `M_uintLesser(Eq)` -> `M_lesser(Eq)`
   - `M_uintGreater(Eq)` -> `M_greater(Eq)`
   - `M_uintMod` -> `M_mod`
   - `M_uintMin` -> `M_min`
   - `M_uintMax` -> `M_max`
 - `M_variadicsMap` -> `M_variadicsForEach`, `M_variadicsMapI` -> `M_variadicsForEachI`

### Fixed

 - `aux.*` -> `util.*` for compatibility with Windows.

### Removed

 - `M_variadicsMapCommaSep`, `M_variadicsMapICommaSep` (better use lists)
 - `M_const2`, `M_const3`

## [0.2.0] - 2020-02-05

### Changed

 - The project name `Epilepsy` -> `Metalang99` (more neutral).

### Fixed

 - Reporting about syntactic mismatches.

## [0.1.0] - 2020-02-04

### Added

 - This excellent project.
