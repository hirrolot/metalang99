#ifndef EPILEPSY_EVAL_TERM_H
#define EPILEPSY_EVAL_TERM_H

#include <epilepsy/priv/aux.h>

#define EPILEPSY_PRIV_TERM_MATCH(term, k, k_cx, folder, acc, control)                              \
    EPILEPSY_PRIV_TERM_MATCH_AUX(k, k_cx, folder, acc, control, EPILEPSY_PRIV_UNPARENTHESISE(term))

#define EPILEPSY_PRIV_TERM_MATCH_AUX(...) EPILEPSY_PRIV_TERM_MATCH_AUX_AUX(__VA_ARGS__)
#define EPILEPSY_PRIV_TERM_MATCH_AUX_AUX(k, k_cx, folder, acc, control, kind, ...)                 \
    EPILEPSY_PRIV_EVAL_##kind(k, k_cx, folder, acc, control, __VA_ARGS__)

#endif // EPILEPSY_EVAL_TERM_H
