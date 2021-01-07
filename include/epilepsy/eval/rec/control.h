#ifndef EPILEPSY_eval_REC_CONTROL_H
#define EPILEPSY_eval_REC_CONTROL_H

#define EPILEPSY_PRIV_REC_STOP_HOOK()      EPILEPSY_PRIV_REC_STOP
#define EPILEPSY_PRIV_REC_STOP(_k_cx, ...) 0stop, __VA_ARGS__

#define EPILEPSY_PRIV_REC_CONTINUE(k, k_cx, ...)                                                   \
    0continue,                                                                                     \
        EPILEPSY_PRIV_REC_DEFER(k##_HOOK)()(EPILEPSY_PRIV_REC_UNPARENTHESISE(k_cx), __VA_ARGS__)

#define EPILEPSY_PRIV_REC_DEFER(op) op EPILEPSY_PRIV_REC_EMPTY()

#define EPILEPSY_PRIV_REC_EMPTY()
#define EPILEPSY_PRIV_REC_EXPAND(...) __VA_ARGS__

#define EPILEPSY_PRIV_REC_UNPARENTHESISE(x) EPILEPSY_PRIV_REC_EXPAND(EPILEPSY_PRIV_REC_EXPAND x)

#endif // EPILEPSY_eval_REC_CONTROL_H
