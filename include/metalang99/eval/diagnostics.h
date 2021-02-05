#ifndef METALANG99_EVAL_DIAGNOSTICS_H
#define METALANG99_EVAL_DIAGNOSTICS_H

#include <metalang99/eval/rec/control.h>

// clang-format off
#define METALANG99_PRIV_DIAGNOSTICS_SYNTAX_ERROR(invalid_term)                                       \
    METALANG99_PRIV_REC_CONTINUE(METALANG99_PRIV_REC_STOP)((~), !Metalang99 syntax error: `invalid_term` is not a valid term)
// clang-format on

#endif // METALANG99_EVAL_DIAGNOSTICS_H
