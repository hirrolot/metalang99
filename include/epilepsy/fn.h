#ifndef EPILEPSY_FN_H
#define EPILEPSY_FN_H

#include <epilepsy/aux.h>
#include <epilepsy/lang.h>

#define EPILEPSY_COMPOSE(f1, f2, f1_cx, f2_cx) call(EPILEPSY_COMPOSE_IMPL, f1 f2 f1_cx f2_cx)
#define EPILEPSY_APPLY(closure, x)             call(EPILEPSY_APPLY_IMPL, closure x)

#define EPILEPSY_COMPOSE_IMPL(f1, f2, f1_cx, f2_cx) EPILEPSY_PARENTHESISE(v(f1, f2, f1_cx, f2_cx))

#define EPILEPSY_APPLY_IMPL(closure, x)                                                            \
    EPILEPSY_PRIV_APPLY_AUX(EPILEPSY_PLAIN_UNPARENTHESISE(closure), x)
#define EPILEPSY_PRIV_APPLY_AUX(...) EPILEPSY_PRIV_APPLY_AUX_AUX(__VA_ARGS__)
#define EPILEPSY_PRIV_APPLY_AUX_AUX(f1, f2, f1_cx, f2_cx, x)                                       \
    call(f1, v(f1_cx) call(f2, v(f2_cx, x)))

#endif // EPILEPSY_FN_H
