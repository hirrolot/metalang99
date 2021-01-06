#ifndef EPILEPSY_EVAL_DIAGNOSTICS_H
#define EPILEPSY_EVAL_DIAGNOSTICS_H

#include <epilepsy/eval/rec/control.h>

// clang-format off
#define EPILEPSY_PRIV_DIAGNOSTICS_SYNTAX_ERROR(invalid_term)                                       \
    EPILEPSY_PRIV_REC_CONTINUE(EPILEPSY_PRIV_REC_STOP, (~), !Epilepsy syntax error: {invalid_term} is not a valid term)
// clang-format on

#endif // EPILEPSY_EVAL_DIAGNOSTICS_H
