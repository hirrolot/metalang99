# Changelog

All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.0.0/), 
and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [unreleased]

### Added

 - `M_suppressUnusedBeforeStmt`
 - `M_tupleGet(Plain)`, `M_variadicsGet(Plain)`
 - `M_indexedArgs`

### Removed

 - `M_choiceEmpty(Plain)` (this allows a more optimal choice representation)
 - `M_semicolon` (this macro turned out to be [dangerous](https://github.com/Hirrolot/metalang99/commit/f17f06adf1a747a8897bbc90c598b2be21c945c8))
 - `M_tupleHead`, `M_variadicsHead`
 - `M_overload`

### Changed

 - `M_get` -> `M_listGet`
 - `M_overloadPlain` -> `M_overload`
 - `METALANG99_NO_SMALL_PREFIX` -> `METALANG99_FULL_PREFIX_ONLY`
 - Decrease the reduction steps limit to 2^14.
 - Rename "unsigned integers" to "natural numbers":
   - `uint.h` -> `nat.h`
   - `M_uintMatch(WithArgs)` -> `M_natMatch(WithArgs)`
   - `M_uintEq` -> `M_natEq`
   - `M_uintNeq` -> `M_natNeq`

## [0.4.2] - 2021-02-28

### Added

 - `METALANG99_MAJOR`, `METALANG99_MINOR`, `METALANG99_PATCH`
 - `M_union`, `M_anonUnion`, `M_enum`, `M_anonEnum`
 - `METALANG99_gccPragma`, `METALANG99_clangPragma`

### Fixed

 - Suppress Clang's `-Wshadow` for a variable produced by `M_introduceVarToStmt`.

## [0.4.1] - 2021-02-28

### Added

 - `M_detectIdent`
 - `M_choicePlain`, `M_choiceEmptyPlain`, `M_consPlain`, `M_nilPlain`
 - `M_listMapInPlace`, `M_listMapInPlaceI`

### Changed

 - Increase the maximum arity from 16 to 255.
 - Specify the exact number of commas produced by `M_indexedInitializerList`.

### Fixed

 - Initialise variables produced by `M_semicolon` and `M_assertPlain` to suppress warnings.

## [0.4.0] - 2021-02-26

### Added

 - `tuple.h`: `M_tuple(Plain)`, `M_tupleEval`, `M_untuple(Plain)`, `M_untupleEval`, `M_isTuple(Plain)`, `M_isUntuple(Plain)`, `M_tupleHead(Plain)`, `M_tupleTail(Plain)`.

### Changed

 - Move the corresponding functions from `util.h` and `variadics.h` to `tuple.h`.

## [0.3.0] - 2021-02-26

### Added

 - `M_when`, `M_whenPlain`, `M_whenLazy`, `M_whenLazyPlain`
 - `M_leftUnderscored`, `M_rightUnderscored`
 - `M_introduceVarToStmt`
 - `M_terms`
 - `M_tupleHead`, `M_tupleHeadPlain`, `M_tupleTail`, `M_tupleTailPlain`
 - `M_indexedParams`, `M_indexedFields`, `M_indexedInitializerList`
 - `M_typedef`, `M_struct`, `M_anonStruct`
 - `M_choiceTag`, `M_choiceTagPlain`, `M_isNilPlain`, `M_isCons`, `M_isConsPlain`

### Changed

 - Make `M_variadicsHead` accept a single argument too.
 - Now at most 63 variadic arguments are acceptable by `M_list`, `M_variadicsCount`, and `M_variadicsCountPlain`.
 - Terms now need to be separated by commas, e.g. instead of `v(1) M_call(F, v(2)) v(3)`, write `v(1), M_call(F, v(2)), v(3)` or `M_terms(v(1), M_call(F, v(2)), v(3)`.
 - The empty sequence is prohibited by `M_eval`, `M_call` and `M_abort`.
 - Use American style endings (because it is prevalent):
   - `M_(un)parenthesise(Eval)` -> `M_(un)tuple(Eval)`
   - `M_isParenthesised` -> `M_isTuple`
   - `M_isUnparenthesised` -> `M_isUntuple`
   - `M_parenthesisedVariadics(Head|Tail)` -> `M_tuple(Head|Tail)`
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

## [0.2.0] - 2021-02-05

### Changed

 - The project name `Epilepsy` -> `Metalang99` (more neutral).

### Fixed

 - Reporting about syntactic mismatches.

## [0.1.0] - 2021-02-04

### Added

 - This excellent project.
