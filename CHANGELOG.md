# Changelog

All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.0.0/), 
and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [unreleased]

### Added

 - `gen.h`:
   - Statement chaining macros: `ML99_CHAIN_EXPR_STMT`, `ML99_CHAIN_EXPR_STMT_AFTER`, `ML99_INTRODUCE_NON_NULL_PTR_TO_STMT`.
   - Other: `ML99_GEN_SYM`, `ML99_TRAILING_SEMICOLON`, `ML99_semicoloned`, `ML99_assign`.
 - `util.h`:
   - A mutable counter: `ML99_UPDATE_COUNTER`, `ML99_COUNTER`, `ML99_COUNTER_MAX`.
   - Other: `ML99_uncomma`, `ML99_reify`, `ML99_DETECTOR`.

### Changed

 - `ML99_INTRODUCE_VAR_TO_STMT` can deal with several variables.

### Deprecated

 - `ML99_SUPPRESS_UNUSED_BEFORE_STMT`

## [1.0.0] - 2021-03-27

### Added

 - `ML99_QUOTE`

### Removed

 - `ML99_consume`, `ML99_CONSUME`

### Changed

 - Move `ML99_TERMS` from `util.h` to `lang.h`.
 - Return a list of tuples from `ML99_listZip`, accept a list of tuples in `ML99_listUnzip`, return a tuple of lists from `ML99_listPartition`.
 - `ML99_listEval` -> `ML99_LIST_EVAL`, `ML99_listEvalCommaSep` -> `ML99_LIST_EVAL_COMMA_SEP`
 - Accept ignored variadics in `ML99_nil`, `ML99_empty`, `ML99_true`, `ML99_false`, `ML99_nothing` (and their plain versions).

### Fixed

 - Emit the correct metafunction name in case of an error in `ML99_listGet`.
 - Remove a precondition that metafunctions passed to `ML99_listFoldl`, `ML99_listFolr`, `ML99_listFoldl1`, `ML99_listMap`, `ML99_listMapI`, `ML99_listFor`, `ML99_listMapInitLast`, and `ML99_listForInitLast` must evaluate to a single term.

## [0.5.0] - 2021-03-22

### Added

 - `ML99_SUPPRESS_UNUSED_BEFORE_STMT`
 - `ML99_tupleGet`, `ML99_variadicsGet`, `ML99_TUPLE_GET`, `ML99_VARIADICS_GET`
 - `ML99_tupleAppend`, `ML99_tuplePrepend`
 - `ML99_indexedArgs`
 - `ML99_appl4`
 - `ML99_times`
 - `ML99_TRUE`, `ML99_FALSE`
 - `ML99_LEFT`, `ML99_RIGHT`, `ML99_IS_LEFT`, `ML99_IS_RIGHT`
 - `ML99_JUST`, `ML99_NOTHING`, `ML99_IS_JUST`, `ML99_IS_NOTHING`
 - `ML99_NAT_MAX`, `ML99_DIV_CHECKED`
 - `gen.h`

### Removed

 - `M_choiceEmpty(Plain)` (this allows a more optimal choice representation)
 - `M_semicolon` (this macro turned out to be [dangerous](https://github.com/Hirrolot/metalang99/commit/f17f06adf1a747a8897bbc90c598b2be21c945c8))
 - `M_tupleHead`, `M_variadicsHead`
 - `M_overload`
 - `M_when(Plain)`, `M_whenLazy(Plain)`
 - `M_putBefore`, `M_putAfter`, `M_putBetween`
 - `M_leftUnderscored`, `M_rightUnderscored`
 - `misc.h`, `eval.h`

### Changed

 - Do not guarantee the exact number of available reduction steps, instead keep it "reasonable" for the practical needs.
 - Amalgamate `lang.h` with `eval.h`.
 - Employ the `SCREAMING_CASE` naming convention for plain macros.
 - All macros are prefixed with `ML99_`, unconditionally.
 - Accept a number as a first argument and a function as the second in `ML99_repeat`.
 - `M_get` -> `ML99_listGet`
 - `M_overloadPlain` -> `ML99_OVERLOAD`
 - `M_eval` -> `ML99_EVAL`
 - `M_callTrivial` -> `ML99_callUneval`
 - Move `ML99_repeat` from `misc.h` to `control.h`.
 - Move `ML99_indexed(Params, Fields, InitializerList, Args)` from `misc.h` to `gen.h`.
 - Move `ML99_braced`, `ML99_typedef`, `ML99_struct`, `ML99_anonStruct`, `ML99_union`, `ML99_anonUnion`, `ML99_enum`, `ML99_anonEnum` from `util.h` to `gen.h`.
 - `M_assertPlain` -> `ML99_ASSERT_UNEVAL`, `M_assertEmptyPlain` -> `ML99_ASSERT_EMPTY_UNEVAL`
 - Rename "unsigned integers" to "natural numbers":
   - `uint.h` -> `nat.h`
   - `M_uintMatch(WithArgs)` -> `ML99_natMatch(WithArgs)`
   - `M_uintEq` -> `ML99_natEq`
   - `M_uintNeq` -> `ML99_natNeq`

### Fixed

 - Emit a compile-time error if [`/Zc:preprocessor`] (MSVC) was not specified.
 - Allow branches in `ML99_IF` expand to commas.

[`/Zc:preprocessor`]: https://docs.microsoft.com/en-us/cpp/build/reference/zc-preprocessor?view=msvc-160

## [0.4.2] - 2021-02-28

### Added

 - `METALANG99_MAJOR`, `METALANG99_MINOR`, `METALANG99_PATCH`
 - `M_union`, `M_anonUnion`, `M_enum`, `M_anonEnum`
 - `METALANG99_GCC_PRAGMA`, `METALANG99_CLANG_PRAGMA`

### Fixed

 - Suppress Clang's `-Wshadow` for a variable produced by `M_INTRODUCE_VAR_TO_STMT`.

## [0.4.1] - 2021-02-28

### Added

 - `M_DETECT_IDENT`
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
 - `M_INTRODUCE_VAR_TO_STMT`
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
