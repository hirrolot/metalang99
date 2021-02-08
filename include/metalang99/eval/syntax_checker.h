#ifndef METALANG99_EVAL_SYNTAX_CHECKER_H
#define METALANG99_EVAL_SYNTAX_CHECKER_H

#include <metalang99/eval/diagnostics.h>
#include <metalang99/priv/util.h>

#define METALANG99_PRIV_CHECK_TERM(term, default)                                                  \
    METALANG99_PRIV_IF(                                                                            \
        METALANG99_PRIV_IS_UNPARENTHESISED(term),                                                  \
        METALANG99_PRIV_SYNTAX_CHECKER_EMIT_ERROR,                                                 \
        default)
#define METALANG99_PRIV_SYNTAX_CHECKER_EMIT_ERROR(term, ...)                                       \
    METALANG99_PRIV_DIAGNOSTICS_SYNTAX_ERROR(term)                                                 \
    /* Consume arguments passed to METALANG99_PRIV_TERM_MATCH, see eval.h. */                      \
    METALANG99_PRIV_CONSUME

#endif // METALANG99_EVAL_SYNTAX_CHECKER_H
