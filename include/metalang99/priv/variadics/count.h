#ifndef METALANG99_PRIV_VARIADICS_COUNT_H
#define METALANG99_PRIV_VARIADICS_COUNT_H

/*
 * Proposition: The count of arguments of `METALANG99_variadicsCount_IMPL` is `x`, which is
 * returned from `METALANG99_variadicsCount_IMPL_AUX`.
 *
 * Proof:
 *  1) Let N be the length of __VA_ARGS__.
 *  2) Let (args...) ---> (params...) mean that (params...) are initialised by (args...).
 *
 * Then
 * ({~ N times}, {63, ..., 1}, ~) ---> ({_1, ..., _63}, x, ...)
 *
 * And since N belongs to [1; 63]:
 * ({63, ..., 1}, ~)              ---> ({_(N + 1), ..., _63}, x, ...)
 *
 * (N, ..., 1, ~)                 ---> (x, ...)
 * (N)                            ---> (x)
 */

#define METALANG99_PRIV_VARIADICS_COUNT(...)                                                       \
    METALANG99_PRIV_VARIADICS_COUNT_AUX(                                                           \
        __VA_ARGS__,                                                                               \
        63,                                                                                        \
        62,                                                                                        \
        61,                                                                                        \
        60,                                                                                        \
        59,                                                                                        \
        58,                                                                                        \
        57,                                                                                        \
        56,                                                                                        \
        55,                                                                                        \
        54,                                                                                        \
        53,                                                                                        \
        52,                                                                                        \
        51,                                                                                        \
        50,                                                                                        \
        49,                                                                                        \
        48,                                                                                        \
        47,                                                                                        \
        46,                                                                                        \
        45,                                                                                        \
        44,                                                                                        \
        43,                                                                                        \
        42,                                                                                        \
        41,                                                                                        \
        40,                                                                                        \
        39,                                                                                        \
        38,                                                                                        \
        37,                                                                                        \
        36,                                                                                        \
        35,                                                                                        \
        34,                                                                                        \
        33,                                                                                        \
        32,                                                                                        \
        31,                                                                                        \
        30,                                                                                        \
        29,                                                                                        \
        28,                                                                                        \
        27,                                                                                        \
        26,                                                                                        \
        25,                                                                                        \
        24,                                                                                        \
        23,                                                                                        \
        22,                                                                                        \
        21,                                                                                        \
        20,                                                                                        \
        19,                                                                                        \
        18,                                                                                        \
        17,                                                                                        \
        16,                                                                                        \
        15,                                                                                        \
        14,                                                                                        \
        13,                                                                                        \
        12,                                                                                        \
        11,                                                                                        \
        10,                                                                                        \
        9,                                                                                         \
        8,                                                                                         \
        7,                                                                                         \
        6,                                                                                         \
        5,                                                                                         \
        4,                                                                                         \
        3,                                                                                         \
        2,                                                                                         \
        1,                                                                                         \
        ~)

#define METALANG99_PRIV_VARIADICS_COUNT_AUX(                                                       \
    _1,                                                                                            \
    _2,                                                                                            \
    _3,                                                                                            \
    _4,                                                                                            \
    _5,                                                                                            \
    _6,                                                                                            \
    _7,                                                                                            \
    _8,                                                                                            \
    _9,                                                                                            \
    _10,                                                                                           \
    _11,                                                                                           \
    _12,                                                                                           \
    _13,                                                                                           \
    _14,                                                                                           \
    _15,                                                                                           \
    _16,                                                                                           \
    _17,                                                                                           \
    _18,                                                                                           \
    _19,                                                                                           \
    _20,                                                                                           \
    _21,                                                                                           \
    _22,                                                                                           \
    _23,                                                                                           \
    _24,                                                                                           \
    _25,                                                                                           \
    _26,                                                                                           \
    _27,                                                                                           \
    _28,                                                                                           \
    _29,                                                                                           \
    _30,                                                                                           \
    _31,                                                                                           \
    _32,                                                                                           \
    _33,                                                                                           \
    _34,                                                                                           \
    _35,                                                                                           \
    _36,                                                                                           \
    _37,                                                                                           \
    _38,                                                                                           \
    _39,                                                                                           \
    _40,                                                                                           \
    _41,                                                                                           \
    _42,                                                                                           \
    _43,                                                                                           \
    _44,                                                                                           \
    _45,                                                                                           \
    _46,                                                                                           \
    _47,                                                                                           \
    _48,                                                                                           \
    _49,                                                                                           \
    _50,                                                                                           \
    _51,                                                                                           \
    _52,                                                                                           \
    _53,                                                                                           \
    _54,                                                                                           \
    _55,                                                                                           \
    _56,                                                                                           \
    _57,                                                                                           \
    _58,                                                                                           \
    _59,                                                                                           \
    _60,                                                                                           \
    _61,                                                                                           \
    _62,                                                                                           \
    _63,                                                                                           \
    x,                                                                                             \
    ...)                                                                                           \
    x

#endif // METALANG99_PRIV_VARIADICS_COUNT_H
