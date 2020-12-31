
#ifndef EPILEPSY_FN_H
#define EPILEPSY_FN_H

#include <epilepsy/control.h>
#include <epilepsy/lang.h>
#include <epilepsy/priv/aux.h>
#include <epilepsy/priv/pair.h>

// Desugaring {
#define EPILEPSY_APPLY(f, x) EPILEPSY_DESUGAR(EPILEPSY_APPLY, f x)
// }

// Implementation {
#define EPILEPSY_APPLY_IMPL(f, x)                                                                  \
    EPILEPSY_IF_LAZY(                                                                              \
        v(EPILEPSY_PRIV_LANG_IS_UNPARENTHESISED(f)), v(EPILEPSY_PRIV_APPLY_F),                     \
        v(EPILEPSY_PRIV_APPLY_CLOSURE), v(f, x))
#define EPILEPSY_PRIV_APPLY_F(f, x)                                                                \
    EPILEPSY_CALL(EPILEPSY_PRIV_APPLY_WITHOUT_ARGS, EPILEPSY_PRIV_CLOSURE(v(f), v(x)))
#define EPILEPSY_PRIV_APPLY_CLOSURE(closure, x)                                                    \
    EPILEPSY_CALL(EPILEPSY_PRIV_CLOSURE_F(closure), v(EPILEPSY_PRIV_CLOSURE_ENV(closure), x))

#define EPILEPSY_PRIV_APPLY_WITHOUT_ARGS(closure)                                                  \
    EPILEPSY_CALL(EPILEPSY_PRIV_CLOSURE_F(closure), v(EPILEPSY_PRIV_CLOSURE_ENV(closure)))

#define EPILEPSY_PRIV_CLOSURE(f, ...) EPILEPSY_DESUGAR(EPILEPSY_PRIV_CLOSURE, f __VA_ARGS__)
#define EPILEPSY_PRIV_CLOSURE_IMPL(f, ...)                                                         \
    EPILEPSY_PRIV_MATCH(EPILEPSY_PRIV_CURRY_, f##_ARITY)(f, __VA_ARGS__)

#define EPILEPSY_PRIV_CURRY_1(f, ...)                                                              \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_1_CLOSURE), v(f))
#define EPILEPSY_PRIV_CURRY_1_CLOSURE(f, ...) EPILEPSY_CALL(f, v(__VA_ARGS__))

#define EPILEPSY_PRIV_CURRY_2(f, ...)                                                              \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_2_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_2_CLOSURE(f, ...)                                                      \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_1_CLOSURE), v(f, __VA_ARGS__))

#define EPILEPSY_PRIV_CURRY_3(f, ...)                                                              \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_3_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_3_CLOSURE(f, ...)                                                      \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_2_CLOSURE), v(f, __VA_ARGS__))

#define EPILEPSY_PRIV_CURRY_4(f, ...)                                                              \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_4_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_4_CLOSURE(f, ...)                                                      \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_3_CLOSURE), v(f, __VA_ARGS__))

#define EPILEPSY_PRIV_CURRY_5(f, ...)                                                              \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_5_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_5_CLOSURE(f, ...)                                                      \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_4_CLOSURE), v(f, __VA_ARGS__))

#define EPILEPSY_PRIV_CURRY_6(f, ...)                                                              \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_6_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_6_CLOSURE(f, ...)                                                      \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_5_CLOSURE), v(f, __VA_ARGS__))

#define EPILEPSY_PRIV_CURRY_7(f, ...)                                                              \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_7_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_7_CLOSURE(f, ...)                                                      \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_6_CLOSURE), v(f, __VA_ARGS__))

#define EPILEPSY_PRIV_CURRY_8(f, ...)                                                              \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_8_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_8_CLOSURE(f, ...)                                                      \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_7_CLOSURE), v(f, __VA_ARGS__))

#define EPILEPSY_PRIV_CURRY_9(f, ...)                                                              \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_9_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_9_CLOSURE(f, ...)                                                      \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_8_CLOSURE), v(f, __VA_ARGS__))

#define EPILEPSY_PRIV_CURRY_10(f, ...)                                                             \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_10_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_10_CLOSURE(f, ...)                                                     \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_9_CLOSURE), v(f, __VA_ARGS__))

#define EPILEPSY_PRIV_CURRY_11(f, ...)                                                             \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_11_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_11_CLOSURE(f, ...)                                                     \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_10_CLOSURE), v(f, __VA_ARGS__))

#define EPILEPSY_PRIV_CURRY_12(f, ...)                                                             \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_12_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_12_CLOSURE(f, ...)                                                     \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_11_CLOSURE), v(f, __VA_ARGS__))

#define EPILEPSY_PRIV_CURRY_13(f, ...)                                                             \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_13_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_13_CLOSURE(f, ...)                                                     \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_12_CLOSURE), v(f, __VA_ARGS__))

#define EPILEPSY_PRIV_CURRY_14(f, ...)                                                             \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_14_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_14_CLOSURE(f, ...)                                                     \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_13_CLOSURE), v(f, __VA_ARGS__))

#define EPILEPSY_PRIV_CURRY_15(f, ...)                                                             \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_15_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_15_CLOSURE(f, ...)                                                     \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_14_CLOSURE), v(f, __VA_ARGS__))

#define EPILEPSY_PRIV_CURRY_16(f, ...)                                                             \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_16_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_16_CLOSURE(f, ...)                                                     \
    EPILEPSY_PRIV_CLOSURE_UNCURRIED(v(EPILEPSY_PRIV_CURRY_15_CLOSURE), v(f, __VA_ARGS__))

#define EPILEPSY_PRIV_CLOSURE_UNCURRIED(f, ...)                                                    \
    EPILEPSY_DESUGAR(EPILEPSY_PRIV_CLOSURE_UNCURRIED, f __VA_ARGS__)
#define EPILEPSY_PRIV_CLOSURE_UNCURRIED_IMPL(f, ...) v(EPILEPSY_PRIV_PAIR(f, (__VA_ARGS__)))

#define EPILEPSY_PRIV_CLOSURE_F EPILEPSY_PRIV_PAIR_FST
#define EPILEPSY_PRIV_CLOSURE_ENV(closure)                                                         \
    EPILEPSY_PRIV_UNPARENTHESISE(EPILEPSY_PRIV_PAIR_SND(closure))
// }

#endif // EPILEPSY_FN_H