#ifndef METALANG99_LANG_CLOSURE_H
#define METALANG99_LANG_CLOSURE_H

#include <metalang99/priv/util.h>

#include <metalang99/uint/dec.h>
#include <metalang99/uint/eq.h>

/*
 * A closure has the form `(arity, f, ...)`, where `arity` is how many times `METALANG99_appl` can
 * be called for this closure, and `...` denotes the closure's environment.
 *
 * `METALANG_appl` is described by the following algorithm:
 *  - If `f` is an identifier (like `FOO`):
 *    - If `f##_ARITY` is 1, then just call this function with provided arguments.
 *    - Otherwise, return `(f##_ARITY - 1, f, provided args...)`.
 *  - Otherwise (`f` is a closure):
 *    - If `arity` is 1, then just call `f` with its environment and provided arguments.
 *    - Otherwise, return `(arity - 1, f, env..., provided args...)`.
 *
 * Thus, each time except the last, `METALANG99_appl` extends a closure's environment with new
 * arguments; the last time, it calls `f` with its environment.
 */

#define METALANG99_appl_IMPL(f, ...)                                                               \
    METALANG99_PRIV_IF(                                                                            \
        METALANG99_PRIV_IS_UNPARENTHESIZED(f),                                                     \
        METALANG99_PRIV_APPL_F,                                                                    \
        METALANG99_PRIV_APPL_CLOSURE)                                                              \
    (f, __VA_ARGS__)

#define METALANG99_PRIV_APPL_F(f, ...)                                                             \
    METALANG99_PRIV_IF(                                                                            \
        METALANG99_PRIV_uintEq(f##_ARITY, 1),                                                      \
        METALANG99_callTrivial(f, __VA_ARGS__),                                                    \
        v((METALANG99_PRIV_uintDec(f##_ARITY), f, __VA_ARGS__)))

#define METALANG99_PRIV_APPL_CLOSURE(closure, ...)                                                 \
    METALANG99_PRIV_APPL_CLOSURE_AUX(METALANG99_PRIV_EXPAND closure, __VA_ARGS__)

#define METALANG99_PRIV_APPL_CLOSURE_AUX(...) METALANG99_PRIV_APPL_CLOSURE_AUX_AUX(__VA_ARGS__)

#define METALANG99_PRIV_APPL_CLOSURE_AUX_AUX(arity, f, ...)                                        \
    METALANG99_PRIV_IF(                                                                            \
        METALANG99_PRIV_uintEq(arity, 1),                                                          \
        METALANG99_callTrivial(f, __VA_ARGS__),                                                    \
        v((METALANG99_PRIV_uintDec(arity), f, __VA_ARGS__)))

#define METALANG99_appl2_IMPL(f, a, b)                                                             \
    METALANG99_appl(METALANG99_callTrivial(METALANG99_appl, f, a), v(b))
#define METALANG99_appl3_IMPL(f, a, b, c)                                                          \
    METALANG99_appl(METALANG99_callTrivial(METALANG99_appl2, f, a, b), v(c))

#endif // METALANG99_LANG_CLOSURE_H
