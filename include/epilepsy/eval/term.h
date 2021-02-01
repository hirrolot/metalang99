#ifndef EPILEPSY_EVAL_TERM_H
#define EPILEPSY_EVAL_TERM_H

#include <epilepsy/priv/aux.h>
#include <epilepsy/priv/variadics/get.h>

#define EPILEPSY_PRIV_TERM_END() (0end, ~)

#define EPILEPSY_PRIV_TERM_MATCH(term, cfg, control)                                               \
    EPILEPSY_PRIV_TERM_MATCH_AUX(cfg, control, EPILEPSY_PRIV_UNPARENTHESISE(term))

#define EPILEPSY_PRIV_TERM_MATCH_AUX(...) EPILEPSY_PRIV_TERM_MATCH_AUX_AUX(__VA_ARGS__)
#define EPILEPSY_PRIV_TERM_MATCH_AUX_AUX(cfg, control, kind, ...)                                  \
    EPILEPSY_PRIV_EVAL_##kind(cfg, control, __VA_ARGS__)

#endif // EPILEPSY_EVAL_TERM_H
