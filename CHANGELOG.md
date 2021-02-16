# Changelog

All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.0.0/), 
and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [unreleased]

### Added

 - `when`, `whenPlain`, `whenLazy`, `whenLazyPlain`
 - `let_leftUnderscored`, `let_rightUnderscored`
 - `let`
 - `parenthesisedVariadicsHead`, `parenthesisedVariadicsHeadPlain`, `parenthesisedVariadicsTail`, `parenthesisedVariadicsTailPlain`,
 - Stateful computations:
   - `stateless`, `stateless2`, `stateless3`
   - `listMapStateful`

### Changed

 - Make `variadicsHead` accept a single argument too.
 - Now at most 63 variadic arguments are acceptable by `list`, `variadicsCount`, `variadicsCountPlain`, `variadicsMap`, `variadicsMapI`, `variadicsMapCommaSep`, `variadicsMapICommaSep`.

### Fixed

 - `aux.*` -> `util.*` for compatibility with Windows.

## [0.2.0] - 2020-02-05

### Changed

 - The project name `Epilepsy` -> `Metalang99` (more neutral).

### Fixed

 - Reporting about syntactic mismatches.

## [0.1.0] - 2020-02-04

### Added

 - This excellent project.
