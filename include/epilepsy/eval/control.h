#ifndef EPILEPSY_EVAL_CONTROL_H
#define EPILEPSY_EVAL_CONTROL_H

#include <epilepsy/eval/term.h>
#include <epilepsy/priv/aux.h>

#define EPILEPSY_PRIV_EVAL_CONTROL_IS_EMPTY(control)                                               \
    EPILEPSY_PRIV_EVAL_TERM_IS_END(                                                                \
        EPILEPSY_PRIV_VARIADICS_HEAD(EPILEPSY_PRIV_UNPARENTHESISE(control)))

#define EPILEPSY_PRIV_EVAL_CONTROL_UNWRAP EPILEPSY_PRIV_UNPARENTHESISE

#endif // EPILEPSY_EVAL_CONTROL_H
