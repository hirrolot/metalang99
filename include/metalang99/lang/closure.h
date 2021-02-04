#ifndef METALANG99_LANG_CLOSURE_H
#define METALANG99_LANG_CLOSURE_H

#include <metalang99/lang/curry.h>
#include <metalang99/priv/pair.h>

#define METALANG99_appl_IMPL(f, ...)                                                               \
    METALANG99_PRIV_IF(                                                                            \
        METALANG99_PRIV_IS_UNPARENTHESISED(f),                                                     \
        METALANG99_PRIV_APPL_WITH_ARITY_F,                                                         \
        METALANG99_PRIV_APPL_WITH_ARITY_CLOSURE)                                                   \
    (f, __VA_ARGS__)
#define METALANG99_PRIV_APPL_WITH_ARITY_F(f, ...)                                                  \
    METALANG99_PRIV_APPL(                                                                          \
        METALANG99_PRIV_CURRY(f, __VA_ARGS__),                                                     \
        METALANG99_PRIV_CLOSURE_ENV(METALANG99_PRIV_CURRY(f, __VA_ARGS__)))
#define METALANG99_PRIV_APPL_WITH_ARITY_CLOSURE(closure, ...)                                      \
    METALANG99_PRIV_APPL(closure, METALANG99_PRIV_CLOSURE_ENV(closure), __VA_ARGS__)

#define METALANG99_PRIV_APPL(closure, ...)                                                         \
    METALANG99_callTrivial(METALANG99_PRIV_CLOSURE_F(closure), __VA_ARGS__)

#define METALANG99_appl2_IMPL(f, a, b)                                                             \
    METALANG99_appl(METALANG99_callTrivial(METALANG99_appl, f, a), v(b))
#define METALANG99_appl3_IMPL(f, a, b, c)                                                          \
    METALANG99_appl(METALANG99_callTrivial(METALANG99_appl2, f, a, b), v(c))

#define METALANG99_PRIV_CLOSURE_F METALANG99_PRIV_PAIR_FST
#define METALANG99_PRIV_CLOSURE_ENV(closure)                                                       \
    METALANG99_PRIV_UNPARENTHESISE(METALANG99_PRIV_PAIR_SND(closure))

#endif // METALANG99_LANG_CLOSURE_H
