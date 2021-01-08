#ifndef EPILEPSY_EVAL_SYNTAX_CHECKER_H
#define EPILEPSY_EVAL_SYNTAX_CHECKER_H

#include <epilepsy/eval/diagnostics.h>
#include <epilepsy/priv/aux.h>

#define EPILEPSY_PRIV_CHECK_TERM(term, default, ...)                                               \
    EPILEPSY_PRIV_IF(                                                                              \
        EPILEPSY_PRIV_IS_UNPARENTHESISED(term),                                                    \
        EPILEPSY_PRIV_SYNTAX_CHECKER_EMIT_ERROR,                                                   \
        EPILEPSY_PRIV_SYNTAX_CHECKER_CONTINUE)                                                     \
    (term, default, __VA_ARGS__)
#define EPILEPSY_PRIV_SYNTAX_CHECKER_EMIT_ERROR(term, _default, ...)                               \
    EPILEPSY_PRIV_DIAGNOSTICS_SYNTAX_ERROR(term)
#define EPILEPSY_PRIV_SYNTAX_CHECKER_CONTINUE(term, default, ...) default(term, __VA_ARGS__)

#endif // EPILEPSY_EVAL_SYNTAX_CHECKER_H
