#ifndef ML99_EVAL_SYNTAX_CHECKER_H
#define ML99_EVAL_SYNTAX_CHECKER_H

#include <metalang99/priv/util.h>

#include <metalang99/eval/rec.h>

#define ML99_PRIV_CHECK_TERM(term, default)                                                        \
    ML99_PRIV_IF(ML99_PRIV_IS_UNTUPLE(term), ML99_PRIV_SYNTAX_CHECKER_EMIT_ERROR, default)
#define ML99_PRIV_SYNTAX_CHECKER_EMIT_ERROR(term, ...)                                             \
    ML99_PRIV_SYNTAX_ERROR(term)                                                                   \
    /* Consume arguments passed to ML99_PRIV_TERM_MATCH, see eval.h. */                            \
    ML99_PRIV_EMPTY

// clang-format off
#define ML99_PRIV_SYNTAX_ERROR(invalid_term) \
    ML99_PRIV_REC_CONTINUE(ML99_PRIV_REC_STOP)((~), !"Metalang99 syntax error": `invalid_term`)
// clang-format on

#endif // ML99_EVAL_SYNTAX_CHECKER_H
