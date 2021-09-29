#ifndef ML99_EVAL_SYNTAX_CHECKER_H
#define ML99_EVAL_SYNTAX_CHECKER_H

#include <metalang99/priv/compiler_specific.h>
#include <metalang99/priv/util.h>

#include <metalang99/eval/rec.h>

#define ML99_PRIV_CHECK_TERM(term, default)                                                        \
    ML99_PRIV_IF(ML99_PRIV_IS_UNTUPLE(term), ML99_PRIV_SYNTAX_CHECKER_EMIT_ERROR, default)

// clang-format off
#define ML99_PRIV_SYNTAX_CHECKER_EMIT_ERROR(term) \
    ML99_PRIV_REC_CONTINUE(ML99_PRIV_REC_STOP)((~), ML99_PRIV_SYNTAX_ERROR(term)) \
    /* Consume arguments passed to ML99_PRIV_TERM_MATCH, see eval.h. */ \
    ML99_PRIV_EMPTY
// clang-format on

#define ML99_PRIV_SYNTAX_ERROR(invalid_term)                                                       \
    ML99_PRIV_IF(                                                                                  \
        ML99_PRIV_IS_DOUBLE_TUPLE_BEGINNING(invalid_term),                                         \
        ML99_PRIV_SYNTAX_ERROR_COMMA_AUX,                                                          \
        ML99_PRIV_SYNTAX_ERROR_AUX)                                                                \
    (invalid_term)

#ifdef ML99_PRIV_EMIT_ERROR

#define ML99_PRIV_SYNTAX_ERROR_AUX(invalid_term)                                                   \
    ML99_PRIV_EMIT_ERROR("invalid term `" #invalid_term "`");
#define ML99_PRIV_SYNTAX_ERROR_COMMA_AUX(invalid_term)                                             \
    ML99_PRIV_EMIT_ERROR("invalid term `" #invalid_term "`, did you miss a comma?");

#else

// clang-format off
#define ML99_PRIV_SYNTAX_ERROR_AUX(invalid_term) !"Metalang99 syntax error": {invalid_term}
#define ML99_PRIV_SYNTAX_ERROR_COMMA_AUX(invalid_term) \
    !"Metalang99 syntax error (did you miss a comma?)": {invalid_term}
// clang-format on

#endif

#endif // ML99_EVAL_SYNTAX_CHECKER_H
