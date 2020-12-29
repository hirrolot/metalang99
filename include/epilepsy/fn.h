#ifndef EPILEPSY_FN_H
#define EPILEPSY_FN_H

#include <epilepsy/lang.h>
#include <epilepsy/priv/aux.h>
#include <epilepsy/priv/pair.h>

// Desugaring {
#define EPILEPSY_CLOSURE(f, ...)   call(EPILEPSY_CLOSURE_IMPL, f __VA_ARGS__)
#define EPILEPSY_APPLY(closure, x) call(EPILEPSY_APPLY_IMPL, closure x)
#define EPILEPSY_COMPOSE(f, g)     call(EPILEPSY_COMPOSE_IMPL, f g)
#define EPILEPSY_LAMBDA(f)         call(EPILEPSY_LAMBDA_IMPL, f)
// }

// Implementation {
#define EPILEPSY_CLOSURE_IMPL(f, ...) v(EPILEPSY_PRIV_PAIR(f, (__VA_ARGS__)))

#define EPILEPSY_APPLY_IMPL(closure, ...)                                                          \
    call(EPILEPSY_PRIV_CLOSURE_F(closure), v(EPILEPSY_PRIV_CLOSURE_CX(closure), __VA_ARGS__))

#define EPILEPSY_COMPOSE_IMPL(f, g) EPILEPSY_CLOSURE(v(EPILEPSY_PRIV_COMPOSE_CLOSURE), v(f, g))
#define EPILEPSY_PRIV_COMPOSE_CLOSURE(f, g, ...)                                                   \
    call(                                                                                          \
        EPILEPSY_PRIV_CLOSURE_F(f),                                                                \
        v(EPILEPSY_PRIV_CLOSURE_CX(f))                                                             \
            call(EPILEPSY_PRIV_CLOSURE_F(g), v(EPILEPSY_PRIV_CLOSURE_CX(g), __VA_ARGS__)))

#define EPILEPSY_LAMBDA_IMPL(f)              EPILEPSY_CLOSURE(v(EPILEPSY_PRIV_LAMBDA_CLOSURE), v(f))
#define EPILEPSY_PRIV_LAMBDA_CLOSURE(f, ...) call(f, v(__VA_ARGS__))

#define EPILEPSY_PRIV_CLOSURE_F EPILEPSY_PRIV_PAIR_FST
#define EPILEPSY_PRIV_CLOSURE_CX(closure)                                                          \
    EPILEPSY_PRIV_UNPARENTHESISE(EPILEPSY_PRIV_PAIR_SND(closure))
// }

#endif // EPILEPSY_FN_H
