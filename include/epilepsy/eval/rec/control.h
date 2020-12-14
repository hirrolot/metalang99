#ifndef EPILEPSY_EVAL_REC_CONTROL_H
#define EPILEPSY_EVAL_REC_CONTROL_H

#include <epilepsy/eval/rec/aux.h>

#define EPILEPSY_PRIV_EVAL_REC_STOP()               EPILEPSY_PRIV_EVAL_REC_STOP_AUX
#define EPILEPSY_PRIV_EVAL_REC_STOP_AUX(_k_cx, ...) STOP, __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_CONTINUE(k, k_cx, ...)                                              \
    CONTINUE, EPILEPSY_PRIV_EVAL_REC_AUX_DEFER_2_TIMES(k)()(                                       \
                  EPILEPSY_PRIV_EVAL_REC_AUX_UNPARENTHESISE(k_cx), __VA_ARGS__)

#endif // EPILEPSY_EVAL_REC_CONTROL_H
