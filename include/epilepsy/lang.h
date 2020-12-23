/**
 * @file
 * @brief Metalanguage syntax.
 */

#ifndef EPILEPSY_LANG_H
#define EPILEPSY_LANG_H

#include <epilepsy/priv/aux.h>

// Desugaring {
#define call(op, ...) EPILEPSY_PRIV_call(op, __VA_ARGS__)
#define v(...)        EPILEPSY_PRIV_v(__VA_ARGS__)
// }

// Implementation {
#define EPILEPSY_PRIV_call(op, ...)                                                                \
    EPILEPSY_PRIV_IF(                                                                              \
        EPILEPSY_PRIV_LANG_IS_TRIVIAL_OP(op), EPILEPSY_PRIV_call_TRIVIAL,                          \
        EPILEPSY_PRIV_call_NON_TRIVIAL)                                                            \
    (op, __VA_ARGS__),

#define EPILEPSY_PRIV_call_TRIVIAL(ident, ...)              (0args, ident, __VA_ARGS__)
#define EPILEPSY_PRIV_call_NON_TRIVIAL(op, _emptiness, ...) (0op, op, __VA_ARGS__)

#define EPILEPSY_PRIV_LANG_IS_TRIVIAL_OP(op)                                                       \
    EPILEPSY_PRIV_LANG_IS_TRIVIAL_OP_AUX(EPILEPSY_PRIV_LANG_IS_TRIVIAL_OP_NO op, 1, ~)
#define EPILEPSY_PRIV_LANG_IS_TRIVIAL_OP_AUX(...)                                                  \
    EPILEPSY_PRIV_LANG_IS_TRIVIAL_OP_AUX_AUX(__VA_ARGS__)
#define EPILEPSY_PRIV_LANG_IS_TRIVIAL_OP_AUX_AUX(x, y, ...) y
#define EPILEPSY_PRIV_LANG_IS_TRIVIAL_OP_NO(...)            ~, 0

#define EPILEPSY_PRIV_v(...) (0v, __VA_ARGS__),
// }

#endif // EPILEPSY_LANG_H
