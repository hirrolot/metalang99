#ifndef EPILEPSY_FN_H
#define EPILEPSY_FN_H

#include <epilepsy/control.h>
#include <epilepsy/lang.h>
#include <epilepsy/list.h>
#include <epilepsy/priv/aux.h>
#include <epilepsy/priv/pair.h>
#include <epilepsy/uint.h>

// Desugaring {
#define EPILEPSY_CLOSURE(f, ...)           desugar(EPILEPSY_CLOSURE, f __VA_ARGS__)
#define EPILEPSY_LAMBDA(f)                 desugar(EPILEPSY_LAMBDA, f)
#define EPILEPSY_APPLY(closure, ...)       desugar(EPILEPSY_APPLY, closure __VA_ARGS__)
#define EPILEPSY_APPLY_LIST(closure, list) desugar(EPILEPSY_APPLY_LIST, closure list)
#define EPILEPSY_APPLY_VARIADICS(closure, ...)                                                     \
    desugar(EPILEPSY_APPLY_VARIADICS, closure __VA_ARGS__)
#define EPILEPSY_COMPOSE(f, g)   desugar(EPILEPSY_COMPOSE, f g)
#define EPILEPSY_CURRY(f, arity) desugar(EPILEPSY_CURRY, f arity)
// }

// Implementation {
#define EPILEPSY_CLOSURE_IMPL(f, ...) v(EPILEPSY_PRIV_PAIR(f, (__VA_ARGS__)))

#define EPILEPSY_APPLY_IMPL(closure, ...)                                                          \
    call(EPILEPSY_PRIV_CLOSURE_F(closure), v(EPILEPSY_PRIV_CLOSURE_CX(closure), __VA_ARGS__))

#define EPILEPSY_APPLY_LIST_IMPL(closure, list)                                                    \
    EPILEPSY_ListFoldl(v(list), v(EPILEPSY_APPLY_IMPL), v(closure))

#define EPILEPSY_APPLY_VARIADICS_IMPL(closure, ...)                                                \
    EPILEPSY_APPLY_LIST(v(closure), EPILEPSY_List(v(__VA_ARGS__)))

#define EPILEPSY_COMPOSE_IMPL(f, g) EPILEPSY_CLOSURE(v(EPILEPSY_PRIV_COMPOSE_CLOSURE), v(f, g))
#define EPILEPSY_PRIV_COMPOSE_CLOSURE(f, g, ...)                                                   \
    call(                                                                                          \
        EPILEPSY_PRIV_CLOSURE_F(f),                                                                \
        v(EPILEPSY_PRIV_CLOSURE_CX(f))                                                             \
            call(EPILEPSY_PRIV_CLOSURE_F(g), v(EPILEPSY_PRIV_CLOSURE_CX(g), __VA_ARGS__)))

#define EPILEPSY_LAMBDA_IMPL(f)              EPILEPSY_CLOSURE(v(EPILEPSY_PRIV_LAMBDA_CLOSURE), v(f))
#define EPILEPSY_PRIV_LAMBDA_CLOSURE(f, ...) call(f, v(__VA_ARGS__))

#define EPILEPSY_CURRY_IMPL(f, arity) EPILEPSY_PRIV_MATCH(EPILEPSY_PRIV_CURRY_, arity)(f)

#define EPILEPSY_PRIV_CURRY_1(f)              EPILEPSY_CLOSURE(v(EPILEPSY_PRIV_CURRY_1_CLOSURE), v(f))
#define EPILEPSY_PRIV_CURRY_1_CLOSURE(f, ...) EPILEPSY_APPLY(v(f), v(__VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_2(f)              EPILEPSY_CLOSURE(v(EPILEPSY_PRIV_CURRY_2_CLOSURE), v(f))
#define EPILEPSY_PRIV_CURRY_2_CLOSURE(f, ...)                                                      \
    EPILEPSY_CLOSURE(v(EPILEPSY_PRIV_CURRY_1_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_3(f) EPILEPSY_CLOSURE(v(EPILEPSY_PRIV_CURRY_3_CLOSURE), v(f))
#define EPILEPSY_PRIV_CURRY_3_CLOSURE(f, ...)                                                      \
    EPILEPSY_CLOSURE(v(EPILEPSY_PRIV_CURRY_2_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_4(f) EPILEPSY_CLOSURE(v(EPILEPSY_PRIV_CURRY_4_CLOSURE), v(f))
#define EPILEPSY_PRIV_CURRY_4_CLOSURE(f, ...)                                                      \
    EPILEPSY_CLOSURE(v(EPILEPSY_PRIV_CURRY_3_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_5(f) EPILEPSY_CLOSURE(v(EPILEPSY_PRIV_CURRY_5_CLOSURE), v(f))
#define EPILEPSY_PRIV_CURRY_5_CLOSURE(f, ...)                                                      \
    EPILEPSY_CLOSURE(v(EPILEPSY_PRIV_CURRY_4_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_6(f) EPILEPSY_CLOSURE(v(EPILEPSY_PRIV_CURRY_6_CLOSURE), v(f))
#define EPILEPSY_PRIV_CURRY_6_CLOSURE(f, ...)                                                      \
    EPILEPSY_CLOSURE(v(EPILEPSY_PRIV_CURRY_5_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_7(f) EPILEPSY_CLOSURE(v(EPILEPSY_PRIV_CURRY_7_CLOSURE), v(f))
#define EPILEPSY_PRIV_CURRY_7_CLOSURE(f, ...)                                                      \
    EPILEPSY_CLOSURE(v(EPILEPSY_PRIV_CURRY_6_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_8(f) EPILEPSY_CLOSURE(v(EPILEPSY_PRIV_CURRY_8_CLOSURE), v(f))
#define EPILEPSY_PRIV_CURRY_8_CLOSURE(f, ...)                                                      \
    EPILEPSY_CLOSURE(v(EPILEPSY_PRIV_CURRY_7_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_9(f) EPILEPSY_CLOSURE(v(EPILEPSY_PRIV_CURRY_9_CLOSURE), v(f))
#define EPILEPSY_PRIV_CURRY_9_CLOSURE(f, ...)                                                      \
    EPILEPSY_CLOSURE(v(EPILEPSY_PRIV_CURRY_8_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_10(f) EPILEPSY_CLOSURE(v(EPILEPSY_PRIV_CURRY_10_CLOSURE), v(f))
#define EPILEPSY_PRIV_CURRY_10_CLOSURE(f, ...)                                                     \
    EPILEPSY_CLOSURE(v(EPILEPSY_PRIV_CURRY_9_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_11(f) EPILEPSY_CLOSURE(v(EPILEPSY_PRIV_CURRY_11_CLOSURE), v(f))
#define EPILEPSY_PRIV_CURRY_11_CLOSURE(f, ...)                                                     \
    EPILEPSY_CLOSURE(v(EPILEPSY_PRIV_CURRY_10_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_12(f) EPILEPSY_CLOSURE(v(EPILEPSY_PRIV_CURRY_12_CLOSURE), v(f))
#define EPILEPSY_PRIV_CURRY_12_CLOSURE(f, ...)                                                     \
    EPILEPSY_CLOSURE(v(EPILEPSY_PRIV_CURRY_11_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_13(f) EPILEPSY_CLOSURE(v(EPILEPSY_PRIV_CURRY_13_CLOSURE), v(f))
#define EPILEPSY_PRIV_CURRY_13_CLOSURE(f, ...)                                                     \
    EPILEPSY_CLOSURE(v(EPILEPSY_PRIV_CURRY_12_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_14(f) EPILEPSY_CLOSURE(v(EPILEPSY_PRIV_CURRY_14_CLOSURE), v(f))
#define EPILEPSY_PRIV_CURRY_14_CLOSURE(f, ...)                                                     \
    EPILEPSY_CLOSURE(v(EPILEPSY_PRIV_CURRY_13_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_15(f) EPILEPSY_CLOSURE(v(EPILEPSY_PRIV_CURRY_15_CLOSURE), v(f))
#define EPILEPSY_PRIV_CURRY_15_CLOSURE(f, ...)                                                     \
    EPILEPSY_CLOSURE(v(EPILEPSY_PRIV_CURRY_14_CLOSURE), v(f, __VA_ARGS__))
#define EPILEPSY_PRIV_CURRY_16(f) EPILEPSY_CLOSURE(v(EPILEPSY_PRIV_CURRY_16_CLOSURE), v(f))
#define EPILEPSY_PRIV_CURRY_16_CLOSURE(f, ...)                                                     \
    EPILEPSY_CLOSURE(v(EPILEPSY_PRIV_CURRY_15_CLOSURE), v(f, __VA_ARGS__))

#define EPILEPSY_PRIV_CLOSURE_F EPILEPSY_PRIV_PAIR_FST
#define EPILEPSY_PRIV_CLOSURE_CX(closure)                                                          \
    EPILEPSY_PRIV_UNPARENTHESISE(EPILEPSY_PRIV_PAIR_SND(closure))
// }

#endif // EPILEPSY_FN_H
