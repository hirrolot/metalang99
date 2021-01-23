#ifndef EPILEPSY_LANG_CLOSURE_H
#define EPILEPSY_LANG_CLOSURE_H

#include <epilepsy/priv/aux.h>
#include <epilepsy/priv/pair.h>

#define EPILEPSY_PRIV_CLOSURE_APPLY_ENV(closure)                                                   \
    EPILEPSY_call(EPILEPSY_PRIV_CLOSURE_APPLY_ENV, closure)
#define EPILEPSY_PRIV_CLOSURE(f, ...) EPILEPSY_call(EPILEPSY_PRIV_CLOSURE, f __VA_ARGS__)
#define EPILEPSY_PRIV_CLOSURE_UNCURRIED(f, ...)                                                    \
    EPILEPSY_call(EPILEPSY_PRIV_CLOSURE_UNCURRIED, f __VA_ARGS__)

#define EPILEPSY_appl_IMPL(f, ...)                                                                 \
    EPILEPSY_PRIV_IF(                                                                              \
        EPILEPSY_PRIV_IS_UNPARENTHESISED(f),                                                       \
        EPILEPSY_PRIV_APPLY_WITH_ARITY_F,                                                          \
        EPILEPSY_PRIV_APPLY_WITH_ARITY_CLOSURE)                                                    \
    (f, __VA_ARGS__)
#define EPILEPSY_PRIV_APPLY_WITH_ARITY_F(f, ...)                                                   \
    EPILEPSY_PRIV_CLOSURE_APPLY_ENV(EPILEPSY_PRIV_CLOSURE(v(f), v(__VA_ARGS__)))
#define EPILEPSY_PRIV_APPLY_WITH_ARITY_CLOSURE(closure, ...)                                       \
    EPILEPSY_call(                                                                                 \
        EPILEPSY_PRIV_CLOSURE_F(closure),                                                          \
        v(EPILEPSY_PRIV_CLOSURE_ENV(closure), __VA_ARGS__))

#define EPILEPSY_appl2_IMPL(f, a, b)    EPILEPSY_appl(EPILEPSY_appl(v(f), v(a)), v(b))
#define EPILEPSY_appl3_IMPL(f, a, b, c) EPILEPSY_appl(EPILEPSY_appl2(v(f), v(a), v(b)), v(c))

#define EPILEPSY_PRIV_CLOSURE_APPLY_ENV_IMPL(closure)                                              \
    EPILEPSY_call(EPILEPSY_PRIV_CLOSURE_F(closure), v(EPILEPSY_PRIV_CLOSURE_ENV(closure)))

#define EPILEPSY_PRIV_CLOSURE_IMPL(f, ...)                                                         \
    EPILEPSY_PRIV_MATCH(EPILEPSY_PRIV_CURRY_, f##_ARITY)(f, __VA_ARGS__)

#define EPILEPSY_PRIV_CLOSURE_UNCURRIED_IMPL(f, ...) v(EPILEPSY_PRIV_PAIR(f, (__VA_ARGS__)))

#define EPILEPSY_PRIV_CLOSURE_F EPILEPSY_PRIV_PAIR_FST
#define EPILEPSY_PRIV_CLOSURE_ENV(closure)                                                         \
    EPILEPSY_PRIV_UNPARENTHESISE(EPILEPSY_PRIV_PAIR_SND(closure))

#define EPILEPSY_PRIV_CURRY_1(f, ...)                                                              \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_1_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_1_CLOSURE_IMPL(f, ...) EPILEPSY_call(f, v(__VA_ARGS__))

#define EPILEPSY_PRIV_CURRY_2(f, ...)                                                              \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_2_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_2_CLOSURE_IMPL(f, ...)                                                 \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_1_CLOSURE), v(f, __VA_ARGS__))

#define EPILEPSY_PRIV_CURRY_3(f, ...)                                                              \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_3_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_3_CLOSURE_IMPL(f, ...)                                                 \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_2_CLOSURE), v(f, __VA_ARGS__))

#define EPILEPSY_PRIV_CURRY_4(f, ...)                                                              \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_4_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_4_CLOSURE_IMPL(f, ...)                                                 \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_3_CLOSURE), v(f, __VA_ARGS__))

#define EPILEPSY_PRIV_CURRY_5(f, ...)                                                              \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_5_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_5_CLOSURE_IMPL(f, ...)                                                 \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_4_CLOSURE), v(f, __VA_ARGS__))

#define EPILEPSY_PRIV_CURRY_6(f, ...)                                                              \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_6_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_6_CLOSURE_IMPL(f, ...)                                                 \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_5_CLOSURE), v(f, __VA_ARGS__))

#define EPILEPSY_PRIV_CURRY_7(f, ...)                                                              \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_7_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_7_CLOSURE_IMPL(f, ...)                                                 \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_6_CLOSURE), v(f, __VA_ARGS__))

#define EPILEPSY_PRIV_CURRY_8(f, ...)                                                              \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_8_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_8_CLOSURE_IMPL(f, ...)                                                 \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_7_CLOSURE), v(f, __VA_ARGS__))

#define EPILEPSY_PRIV_CURRY_9(f, ...)                                                              \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_9_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_9_CLOSURE_IMPL(f, ...)                                                 \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_8_CLOSURE), v(f, __VA_ARGS__))

#define EPILEPSY_PRIV_CURRY_10(f, ...)                                                             \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_10_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_10_CLOSURE_IMPL(f, ...)                                                \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_9_CLOSURE), v(f, __VA_ARGS__))

#define EPILEPSY_PRIV_CURRY_11(f, ...)                                                             \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_11_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_11_CLOSURE_IMPL(f, ...)                                                \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_10_CLOSURE), v(f, __VA_ARGS__))

#define EPILEPSY_PRIV_CURRY_12(f, ...)                                                             \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_12_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_12_CLOSURE_IMPL(f, ...)                                                \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_11_CLOSURE), v(f, __VA_ARGS__))

#define EPILEPSY_PRIV_CURRY_13(f, ...)                                                             \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_13_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_13_CLOSURE_IMPL(f, ...)                                                \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_12_CLOSURE), v(f, __VA_ARGS__))

#define EPILEPSY_PRIV_CURRY_14(f, ...)                                                             \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_14_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_14_CLOSURE_IMPL(f, ...)                                                \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_13_CLOSURE), v(f, __VA_ARGS__))

#define EPILEPSY_PRIV_CURRY_15(f, ...)                                                             \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_15_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_15_CLOSURE_IMPL(f, ...)                                                \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_14_CLOSURE), v(f, __VA_ARGS__))

#define EPILEPSY_PRIV_CURRY_16(f, ...)                                                             \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_16_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_16_CLOSURE_IMPL(f, ...)                                                \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_15_CLOSURE), v(f, __VA_ARGS__))

#endif // EPILEPSY_LANG_CLOSURE_H
