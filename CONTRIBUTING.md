# Contributing

To introduce changes:

 1. fork this repository,
 2. create your own branch from `master`,
 3. make required changes,
 4. open a PR to `master` from your branch,
 5. wait until it gets reviewed.

To be able to work with low-level stuff such as the interpreter, I highly recommend to first observe the [Cloak Wiki].

To be able to work with the metalanguage itself, some basic familiarity with programming language theory is expected. For learning materials, see https://github.com/steshaw/plt.

[Cloak Wiki]: https://github.com/pfultz2/Cloak/wiki/C-Preprocessor-tricks,-tips,-and-idioms

Some useful scripts are:

| Description | Command |
|----------|----------|
| Format all the code base | `./scripts/fmt.sh` |
| Check code formatting | `./scripts/check-fmt.sh` |
| Test only `tests/` | `./scripts/test.sh` |
| Test only `examples/` | `./scripts/test-examples.sh` |
| Test both `tests/` and `examples/` | `./scripts/test-all.sh`  |
| Generate the documentation | `./scripts/docs.sh` |
| Open the documentation | `./scripts/open-docs.sh` |

Happy hacking!
