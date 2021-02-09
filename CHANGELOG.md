# Changelog

All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.0.0/), 
and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [unreleased]

### Added

 - `METALANG99_when`, `METALANG99_whenPlain`

### Changed

 - Make `METALANG99_variadicsHead` accept a single argument too.
 - Now at most 63 variadic arguments are acceptable by `METALANG99_list`, `METALANG99_variadicsCount`, `METALANG99_variadicsCountPlain`, `METALANG99_variadicsMap`, `METALANG99_variadicsMapI`, `METALANG99_variadicsMapCommaSep`, `METALANG99_variadicsMapICommaSep`.

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
