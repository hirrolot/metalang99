#ifndef AGONY_PP_UINT_LESSER_H
#define AGONY_PP_UINT_LESSER_H

#include "eq.h"

// An ordinary macro implementation is used because using our metalanguage eats too much recursion
// steps. I guess binary search might be appropriate here.
//
// And, since `x` and `y` are just numbers, blueprinting cannot occur.

#define AGONY_PP_UINT_LESSER_REAL(x, y) v(AGONY_PP_UINT_LESSER_REAL_##y(x))

#define AGONY_PP_UINT_LESSER_REAL_0(_x) 0
#define AGONY_PP_UINT_LESSER_REAL_1(x)                                                             \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 0),                                                           \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_0)                                                               \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_2(x)                                                             \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 1),                                                           \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_1)                                                               \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_3(x)                                                             \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 2),                                                           \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_2)                                                               \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_4(x)                                                             \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 3),                                                           \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_3)                                                               \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_5(x)                                                             \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 4),                                                           \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_4)                                                               \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_6(x)                                                             \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 5),                                                           \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_5)                                                               \
    (x) /*  */
#define AGONY_PP_UINT_LESSER_REAL_7(x)                                                             \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 6),                                                           \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_6)                                                               \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_8(x)                                                             \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 7),                                                           \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_7)                                                               \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_9(x)                                                             \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 8),                                                           \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_8)                                                               \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_10(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 9),                                                           \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_9)                                                               \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_11(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 10),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_10)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_12(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 11),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_11)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_13(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 12),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_12)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_14(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 13),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_13)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_15(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 14),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_14)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_16(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 15),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_15)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_17(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 16),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_16)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_18(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 17),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_17)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_19(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 18),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_18)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_20(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 19),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_19)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_21(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 20),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_20)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_22(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 21),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_21)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_23(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 22),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_22)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_24(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 23),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_23)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_25(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 24),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_24)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_26(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 25),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_25)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_27(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 26),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_26)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_28(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 27),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_27)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_29(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 28),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_28)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_30(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 29),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_29)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_31(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 30),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_30)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_32(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 31),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_31)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_33(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 32),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_32)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_34(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 33),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_33)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_35(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 34),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_34)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_36(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 35),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_35)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_37(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 36),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_36)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_38(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 37),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_37)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_39(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 38),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_38)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_40(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 39),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_39)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_41(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 40),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_40)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_42(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 41),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_41)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_43(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 42),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_42)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_44(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 43),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_43)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_45(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 44),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_44)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_46(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 45),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_45)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_47(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 46),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_46)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_48(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 47),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_47)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_49(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 48),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_48)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_50(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 49),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_49)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_51(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 50),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_50)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_52(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 51),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_51)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_53(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 52),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_52)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_54(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 53),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_53)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_55(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 54),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_54)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_56(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 55),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_55)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_57(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 56),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_56)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_58(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 57),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_57)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_59(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 58),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_58)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_60(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 59),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_59)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_61(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 60),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_60)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_62(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 61),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_61)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_63(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 62),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_62)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_64(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 63),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_63)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_65(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 64),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_64)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_66(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 65),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_65)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_67(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 66),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_66)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_68(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 67),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_67)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_69(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 68),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_68)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_70(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 69),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_69)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_71(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 70),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_70)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_72(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 71),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_71)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_73(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 72),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_72)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_74(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 73),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_73)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_75(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 74),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_74)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_76(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 75),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_75)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_77(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 76),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_76)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_78(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 77),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_77)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_79(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 78),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_78)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_80(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 79),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_79)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_81(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 80),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_80)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_82(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 81),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_81)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_83(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 82),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_82)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_84(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 83),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_83)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_85(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 84),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_84)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_86(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 85),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_85)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_87(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 86),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_86)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_88(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 87),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_87)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_89(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 88),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_88)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_90(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 89),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_89)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_91(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 90),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_90)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_92(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 91),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_91)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_93(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 92),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_92)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_94(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 93),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_93)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_95(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 94),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_94)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_96(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 95),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_95)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_97(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 96),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_96)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_98(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 97),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_97)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_99(x)                                                            \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 98),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_98)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_100(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 99),                                                          \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_99)                                                              \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_101(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 100),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_100)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_102(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 101),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_101)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_103(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 102),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_102)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_104(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 103),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_103)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_105(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 104),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_104)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_106(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 105),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_105)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_107(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 106),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_106)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_108(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 107),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_107)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_109(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 108),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_108)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_110(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 109),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_109)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_111(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 110),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_110)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_112(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 111),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_111)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_113(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 112),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_112)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_114(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 113),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_113)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_115(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 114),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_114)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_116(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 115),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_115)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_117(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 116),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_116)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_118(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 117),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_117)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_119(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 118),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_118)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_120(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 119),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_119)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_121(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 120),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_120)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_122(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 121),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_121)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_123(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 122),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_122)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_124(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 123),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_123)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_125(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 124),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_124)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_126(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 125),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_125)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_127(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 126),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_126)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_128(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 127),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_127)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_129(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 128),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_128)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_130(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 129),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_129)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_131(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 130),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_130)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_132(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 131),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_131)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_133(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 132),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_132)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_134(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 133),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_133)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_135(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 134),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_134)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_136(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 135),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_135)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_137(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 136),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_136)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_138(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 137),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_137)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_139(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 138),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_138)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_140(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 139),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_139)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_141(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 140),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_140)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_142(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 141),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_141)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_143(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 142),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_142)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_144(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 143),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_143)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_145(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 144),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_144)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_146(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 145),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_145)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_147(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 146),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_146)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_148(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 147),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_147)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_149(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 148),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_148)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_150(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 149),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_149)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_151(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 150),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_150)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_152(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 151),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_151)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_153(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 152),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_152)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_154(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 153),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_153)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_155(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 154),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_154)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_156(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 155),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_155)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_157(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 156),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_156)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_158(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 157),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_157)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_159(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 158),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_158)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_160(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 159),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_159)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_161(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 160),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_160)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_162(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 161),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_161)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_163(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 162),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_162)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_164(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 163),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_163)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_165(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 164),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_164)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_166(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 165),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_165)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_167(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 166),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_166)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_168(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 167),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_167)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_169(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 168),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_168)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_170(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 169),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_169)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_171(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 170),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_170)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_172(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 171),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_171)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_173(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 172),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_172)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_174(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 173),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_173)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_175(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 174),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_174)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_176(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 175),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_175)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_177(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 176),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_176)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_178(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 177),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_177)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_179(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 178),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_178)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_180(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 179),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_179)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_181(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 180),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_180)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_182(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 181),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_181)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_183(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 182),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_182)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_184(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 183),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_183)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_185(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 184),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_184)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_186(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 185),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_185)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_187(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 186),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_186)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_188(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 187),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_187)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_189(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 188),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_188)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_190(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 189),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_189)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_191(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 190),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_190)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_192(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 191),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_191)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_193(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 192),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_192)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_194(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 193),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_193)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_195(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 194),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_194)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_196(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 195),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_195)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_197(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 196),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_196)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_198(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 197),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_197)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_199(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 198),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_198)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_200(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 199),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_199)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_201(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 200),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_200)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_202(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 201),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_201)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_203(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 202),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_202)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_204(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 203),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_203)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_205(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 204),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_204)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_206(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 205),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_205)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_207(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 206),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_206)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_208(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 207),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_207)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_209(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 208),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_208)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_210(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 209),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_209)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_211(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 210),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_210)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_212(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 211),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_211)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_213(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 212),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_212)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_214(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 213),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_213)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_215(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 214),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_214)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_216(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 215),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_215)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_217(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 216),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_216)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_218(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 217),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_217)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_219(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 218),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_218)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_220(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 219),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_219)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_221(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 220),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_220)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_222(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 221),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_221)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_223(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 222),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_222)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_224(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 223),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_223)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_225(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 224),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_224)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_226(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 225),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_225)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_227(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 226),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_226)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_228(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 227),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_227)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_229(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 228),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_228)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_230(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 229),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_229)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_231(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 230),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_230)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_232(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 231),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_231)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_233(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 232),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_232)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_234(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 233),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_233)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_235(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 234),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_234)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_236(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 235),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_235)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_237(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 236),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_236)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_238(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 237),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_237)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_239(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 238),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_238)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_240(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 239),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_239)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_241(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 240),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_240)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_242(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 241),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_241)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_243(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 242),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_242)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_244(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 243),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_243)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_245(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 244),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_244)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_246(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 245),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_245)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_247(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 246),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_246)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_248(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 247),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_247)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_249(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 248),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_248)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_250(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 249),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_249)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_251(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 250),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_250)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_252(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 251),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_251)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_253(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 252),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_252)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_254(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 253),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_253)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_255(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 254),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_254)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_256(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 255),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_255)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_257(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 256),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_256)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_258(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 257),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_257)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_259(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 258),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_258)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_260(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 259),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_259)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_261(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 260),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_260)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_262(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 261),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_261)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_263(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 262),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_262)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_264(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 263),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_263)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_265(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 264),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_264)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_266(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 265),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_265)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_267(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 266),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_266)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_268(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 267),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_267)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_269(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 268),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_268)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_270(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 269),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_269)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_271(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 270),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_270)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_272(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 271),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_271)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_273(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 272),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_272)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_274(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 273),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_273)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_275(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 274),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_274)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_276(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 275),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_275)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_277(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 276),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_276)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_278(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 277),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_277)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_279(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 278),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_278)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_280(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 279),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_279)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_281(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 280),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_280)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_282(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 281),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_281)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_283(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 282),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_282)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_284(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 283),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_283)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_285(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 284),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_284)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_286(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 285),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_285)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_287(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 286),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_286)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_288(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 287),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_287)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_289(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 288),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_288)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_290(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 289),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_289)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_291(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 290),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_290)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_292(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 291),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_291)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_293(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 292),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_292)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_294(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 293),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_293)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_295(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 294),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_294)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_296(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 295),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_295)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_297(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 296),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_296)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_298(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 297),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_297)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_299(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 298),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_298)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_300(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 299),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_299)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_301(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 300),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_300)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_302(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 301),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_301)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_303(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 302),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_302)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_304(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 303),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_303)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_305(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 304),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_304)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_306(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 305),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_305)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_307(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 306),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_306)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_308(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 307),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_307)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_309(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 308),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_308)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_310(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 309),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_309)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_311(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 310),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_310)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_312(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 311),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_311)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_313(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 312),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_312)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_314(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 313),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_313)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_315(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 314),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_314)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_316(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 315),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_315)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_317(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 316),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_316)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_318(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 317),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_317)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_319(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 318),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_318)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_320(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 319),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_319)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_321(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 320),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_320)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_322(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 321),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_321)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_323(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 322),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_322)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_324(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 323),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_323)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_325(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 324),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_324)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_326(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 325),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_325)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_327(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 326),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_326)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_328(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 327),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_327)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_329(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 328),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_328)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_330(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 329),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_329)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_331(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 330),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_330)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_332(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 331),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_331)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_333(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 332),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_332)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_334(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 333),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_333)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_335(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 334),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_334)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_336(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 335),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_335)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_337(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 336),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_336)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_338(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 337),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_337)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_339(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 338),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_338)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_340(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 339),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_339)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_341(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 340),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_340)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_342(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 341),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_341)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_343(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 342),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_342)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_344(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 343),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_343)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_345(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 344),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_344)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_346(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 345),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_345)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_347(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 346),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_346)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_348(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 347),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_347)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_349(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 348),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_348)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_350(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 349),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_349)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_351(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 350),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_350)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_352(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 351),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_351)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_353(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 352),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_352)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_354(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 353),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_353)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_355(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 354),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_354)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_356(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 355),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_355)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_357(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 356),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_356)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_358(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 357),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_357)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_359(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 358),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_358)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_360(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 359),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_359)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_361(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 360),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_360)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_362(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 361),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_361)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_363(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 362),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_362)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_364(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 363),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_363)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_365(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 364),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_364)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_366(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 365),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_365)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_367(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 366),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_366)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_368(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 367),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_367)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_369(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 368),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_368)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_370(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 369),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_369)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_371(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 370),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_370)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_372(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 371),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_371)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_373(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 372),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_372)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_374(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 373),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_373)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_375(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 374),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_374)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_376(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 375),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_375)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_377(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 376),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_376)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_378(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 377),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_377)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_379(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 378),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_378)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_380(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 379),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_379)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_381(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 380),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_380)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_382(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 381),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_381)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_383(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 382),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_382)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_384(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 383),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_383)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_385(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 384),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_384)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_386(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 385),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_385)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_387(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 386),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_386)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_388(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 387),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_387)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_389(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 388),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_388)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_390(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 389),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_389)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_391(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 390),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_390)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_392(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 391),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_391)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_393(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 392),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_392)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_394(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 393),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_393)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_395(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 394),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_394)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_396(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 395),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_395)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_397(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 396),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_396)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_398(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 397),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_397)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_399(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 398),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_398)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_400(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 399),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_399)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_401(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 400),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_400)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_402(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 401),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_401)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_403(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 402),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_402)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_404(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 403),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_403)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_405(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 404),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_404)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_406(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 405),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_405)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_407(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 406),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_406)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_408(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 407),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_407)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_409(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 408),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_408)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_410(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 409),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_409)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_411(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 410),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_410)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_412(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 411),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_411)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_413(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 412),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_412)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_414(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 413),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_413)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_415(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 414),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_414)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_416(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 415),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_415)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_417(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 416),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_416)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_418(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 417),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_417)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_419(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 418),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_418)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_420(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 419),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_419)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_421(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 420),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_420)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_422(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 421),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_421)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_423(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 422),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_422)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_424(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 423),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_423)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_425(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 424),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_424)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_426(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 425),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_425)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_427(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 426),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_426)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_428(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 427),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_427)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_429(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 428),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_428)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_430(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 429),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_429)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_431(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 430),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_430)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_432(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 431),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_431)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_433(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 432),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_432)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_434(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 433),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_433)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_435(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 434),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_434)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_436(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 435),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_435)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_437(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 436),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_436)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_438(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 437),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_437)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_439(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 438),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_438)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_440(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 439),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_439)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_441(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 440),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_440)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_442(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 441),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_441)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_443(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 442),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_442)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_444(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 443),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_443)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_445(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 444),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_444)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_446(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 445),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_445)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_447(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 446),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_446)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_448(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 447),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_447)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_449(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 448),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_448)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_450(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 449),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_449)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_451(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 450),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_450)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_452(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 451),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_451)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_453(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 452),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_452)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_454(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 453),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_453)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_455(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 454),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_454)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_456(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 455),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_455)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_457(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 456),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_456)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_458(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 457),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_457)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_459(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 458),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_458)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_460(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 459),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_459)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_461(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 460),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_460)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_462(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 461),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_461)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_463(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 462),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_462)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_464(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 463),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_463)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_465(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 464),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_464)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_466(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 465),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_465)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_467(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 466),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_466)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_468(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 467),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_467)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_469(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 468),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_468)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_470(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 469),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_469)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_471(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 470),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_470)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_472(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 471),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_471)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_473(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 472),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_472)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_474(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 473),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_473)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_475(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 474),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_474)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_476(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 475),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_475)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_477(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 476),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_476)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_478(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 477),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_477)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_479(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 478),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_478)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_480(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 479),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_479)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_481(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 480),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_480)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_482(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 481),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_481)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_483(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 482),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_482)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_484(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 483),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_483)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_485(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 484),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_484)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_486(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 485),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_485)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_487(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 486),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_486)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_488(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 487),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_487)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_489(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 488),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_488)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_490(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 489),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_489)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_491(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 490),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_490)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_492(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 491),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_491)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_493(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 492),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_492)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_494(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 493),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_493)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_495(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 494),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_494)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_496(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 495),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_495)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_497(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 496),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_496)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_498(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 497),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_497)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_499(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 498),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_498)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_500(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 499),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_499)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_501(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 500),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_500)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_502(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 501),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_501)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_503(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 502),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_502)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_504(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 503),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_503)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_505(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 504),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_504)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_506(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 505),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_505)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_507(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 506),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_506)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_508(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 507),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_507)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_509(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 508),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_508)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_510(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 509),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_509)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_511(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 510),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_510)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_512(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 511),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_511)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_513(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 512),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_512)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_514(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 513),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_513)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_515(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 514),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_514)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_516(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 515),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_515)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_517(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 516),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_516)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_518(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 517),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_517)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_519(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 518),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_518)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_520(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 519),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_519)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_521(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 520),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_520)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_522(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 521),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_521)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_523(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 522),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_522)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_524(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 523),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_523)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_525(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 524),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_524)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_526(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 525),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_525)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_527(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 526),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_526)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_528(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 527),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_527)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_529(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 528),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_528)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_530(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 529),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_529)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_531(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 530),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_530)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_532(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 531),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_531)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_533(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 532),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_532)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_534(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 533),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_533)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_535(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 534),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_534)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_536(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 535),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_535)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_537(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 536),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_536)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_538(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 537),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_537)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_539(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 538),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_538)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_540(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 539),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_539)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_541(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 540),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_540)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_542(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 541),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_541)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_543(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 542),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_542)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_544(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 543),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_543)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_545(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 544),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_544)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_546(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 545),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_545)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_547(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 546),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_546)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_548(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 547),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_547)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_549(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 548),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_548)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_550(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 549),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_549)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_551(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 550),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_550)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_552(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 551),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_551)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_553(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 552),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_552)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_554(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 553),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_553)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_555(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 554),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_554)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_556(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 555),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_555)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_557(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 556),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_556)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_558(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 557),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_557)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_559(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 558),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_558)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_560(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 559),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_559)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_561(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 560),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_560)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_562(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 561),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_561)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_563(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 562),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_562)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_564(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 563),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_563)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_565(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 564),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_564)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_566(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 565),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_565)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_567(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 566),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_566)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_568(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 567),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_567)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_569(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 568),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_568)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_570(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 569),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_569)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_571(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 570),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_570)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_572(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 571),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_571)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_573(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 572),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_572)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_574(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 573),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_573)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_575(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 574),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_574)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_576(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 575),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_575)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_577(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 576),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_576)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_578(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 577),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_577)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_579(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 578),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_578)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_580(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 579),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_579)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_581(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 580),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_580)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_582(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 581),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_581)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_583(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 582),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_582)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_584(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 583),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_583)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_585(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 584),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_584)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_586(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 585),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_585)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_587(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 586),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_586)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_588(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 587),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_587)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_589(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 588),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_588)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_590(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 589),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_589)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_591(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 590),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_590)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_592(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 591),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_591)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_593(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 592),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_592)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_594(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 593),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_593)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_595(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 594),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_594)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_596(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 595),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_595)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_597(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 596),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_596)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_598(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 597),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_597)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_599(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 598),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_598)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_600(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 599),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_599)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_601(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 600),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_600)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_602(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 601),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_601)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_603(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 602),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_602)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_604(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 603),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_603)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_605(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 604),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_604)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_606(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 605),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_605)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_607(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 606),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_606)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_608(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 607),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_607)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_609(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 608),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_608)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_610(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 609),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_609)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_611(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 610),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_610)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_612(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 611),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_611)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_613(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 612),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_612)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_614(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 613),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_613)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_615(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 614),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_614)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_616(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 615),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_615)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_617(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 616),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_616)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_618(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 617),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_617)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_619(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 618),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_618)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_620(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 619),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_619)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_621(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 620),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_620)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_622(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 621),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_621)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_623(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 622),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_622)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_624(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 623),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_623)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_625(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 624),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_624)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_626(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 625),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_625)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_627(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 626),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_626)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_628(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 627),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_627)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_629(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 628),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_628)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_630(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 629),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_629)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_631(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 630),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_630)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_632(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 631),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_631)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_633(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 632),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_632)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_634(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 633),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_633)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_635(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 634),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_634)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_636(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 635),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_635)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_637(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 636),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_636)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_638(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 637),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_637)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_639(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 638),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_638)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_640(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 639),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_639)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_641(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 640),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_640)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_642(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 641),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_641)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_643(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 642),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_642)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_644(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 643),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_643)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_645(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 644),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_644)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_646(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 645),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_645)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_647(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 646),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_646)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_648(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 647),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_647)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_649(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 648),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_648)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_650(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 649),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_649)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_651(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 650),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_650)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_652(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 651),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_651)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_653(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 652),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_652)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_654(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 653),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_653)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_655(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 654),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_654)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_656(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 655),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_655)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_657(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 656),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_656)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_658(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 657),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_657)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_659(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 658),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_658)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_660(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 659),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_659)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_661(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 660),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_660)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_662(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 661),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_661)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_663(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 662),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_662)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_664(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 663),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_663)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_665(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 664),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_664)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_666(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 665),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_665)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_667(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 666),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_666)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_668(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 667),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_667)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_669(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 668),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_668)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_670(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 669),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_669)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_671(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 670),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_670)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_672(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 671),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_671)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_673(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 672),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_672)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_674(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 673),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_673)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_675(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 674),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_674)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_676(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 675),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_675)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_677(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 676),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_676)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_678(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 677),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_677)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_679(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 678),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_678)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_680(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 679),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_679)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_681(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 680),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_680)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_682(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 681),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_681)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_683(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 682),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_682)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_684(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 683),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_683)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_685(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 684),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_684)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_686(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 685),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_685)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_687(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 686),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_686)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_688(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 687),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_687)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_689(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 688),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_688)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_690(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 689),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_689)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_691(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 690),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_690)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_692(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 691),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_691)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_693(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 692),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_692)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_694(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 693),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_693)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_695(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 694),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_694)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_696(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 695),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_695)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_697(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 696),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_696)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_698(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 697),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_697)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_699(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 698),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_698)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_700(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 699),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_699)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_701(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 700),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_700)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_702(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 701),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_701)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_703(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 702),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_702)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_704(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 703),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_703)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_705(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 704),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_704)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_706(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 705),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_705)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_707(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 706),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_706)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_708(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 707),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_707)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_709(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 708),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_708)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_710(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 709),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_709)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_711(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 710),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_710)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_712(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 711),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_711)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_713(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 712),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_712)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_714(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 713),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_713)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_715(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 714),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_714)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_716(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 715),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_715)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_717(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 716),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_716)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_718(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 717),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_717)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_719(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 718),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_718)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_720(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 719),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_719)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_721(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 720),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_720)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_722(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 721),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_721)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_723(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 722),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_722)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_724(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 723),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_723)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_725(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 724),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_724)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_726(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 725),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_725)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_727(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 726),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_726)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_728(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 727),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_727)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_729(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 728),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_728)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_730(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 729),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_729)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_731(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 730),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_730)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_732(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 731),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_731)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_733(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 732),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_732)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_734(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 733),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_733)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_735(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 734),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_734)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_736(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 735),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_735)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_737(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 736),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_736)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_738(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 737),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_737)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_739(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 738),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_738)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_740(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 739),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_739)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_741(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 740),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_740)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_742(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 741),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_741)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_743(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 742),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_742)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_744(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 743),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_743)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_745(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 744),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_744)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_746(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 745),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_745)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_747(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 746),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_746)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_748(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 747),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_747)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_749(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 748),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_748)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_750(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 749),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_749)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_751(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 750),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_750)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_752(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 751),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_751)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_753(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 752),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_752)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_754(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 753),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_753)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_755(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 754),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_754)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_756(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 755),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_755)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_757(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 756),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_756)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_758(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 757),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_757)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_759(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 758),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_758)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_760(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 759),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_759)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_761(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 760),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_760)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_762(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 761),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_761)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_763(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 762),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_762)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_764(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 763),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_763)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_765(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 764),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_764)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_766(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 765),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_765)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_767(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 766),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_766)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_768(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 767),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_767)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_769(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 768),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_768)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_770(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 769),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_769)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_771(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 770),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_770)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_772(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 771),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_771)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_773(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 772),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_772)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_774(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 773),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_773)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_775(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 774),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_774)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_776(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 775),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_775)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_777(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 776),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_776)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_778(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 777),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_777)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_779(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 778),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_778)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_780(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 779),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_779)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_781(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 780),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_780)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_782(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 781),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_781)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_783(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 782),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_782)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_784(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 783),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_783)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_785(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 784),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_784)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_786(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 785),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_785)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_787(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 786),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_786)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_788(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 787),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_787)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_789(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 788),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_788)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_790(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 789),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_789)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_791(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 790),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_790)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_792(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 791),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_791)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_793(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 792),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_792)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_794(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 793),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_793)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_795(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 794),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_794)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_796(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 795),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_795)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_797(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 796),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_796)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_798(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 797),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_797)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_799(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 798),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_798)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_800(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 799),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_799)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_801(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 800),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_800)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_802(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 801),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_801)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_803(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 802),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_802)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_804(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 803),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_803)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_805(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 804),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_804)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_806(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 805),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_805)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_807(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 806),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_806)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_808(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 807),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_807)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_809(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 808),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_808)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_810(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 809),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_809)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_811(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 810),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_810)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_812(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 811),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_811)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_813(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 812),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_812)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_814(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 813),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_813)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_815(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 814),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_814)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_816(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 815),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_815)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_817(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 816),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_816)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_818(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 817),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_817)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_819(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 818),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_818)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_820(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 819),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_819)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_821(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 820),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_820)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_822(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 821),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_821)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_823(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 822),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_822)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_824(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 823),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_823)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_825(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 824),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_824)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_826(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 825),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_825)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_827(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 826),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_826)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_828(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 827),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_827)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_829(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 828),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_828)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_830(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 829),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_829)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_831(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 830),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_830)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_832(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 831),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_831)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_833(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 832),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_832)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_834(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 833),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_833)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_835(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 834),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_834)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_836(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 835),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_835)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_837(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 836),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_836)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_838(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 837),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_837)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_839(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 838),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_838)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_840(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 839),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_839)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_841(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 840),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_840)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_842(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 841),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_841)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_843(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 842),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_842)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_844(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 843),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_843)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_845(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 844),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_844)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_846(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 845),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_845)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_847(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 846),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_846)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_848(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 847),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_847)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_849(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 848),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_848)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_850(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 849),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_849)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_851(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 850),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_850)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_852(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 851),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_851)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_853(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 852),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_852)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_854(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 853),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_853)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_855(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 854),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_854)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_856(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 855),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_855)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_857(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 856),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_856)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_858(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 857),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_857)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_859(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 858),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_858)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_860(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 859),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_859)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_861(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 860),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_860)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_862(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 861),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_861)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_863(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 862),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_862)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_864(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 863),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_863)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_865(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 864),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_864)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_866(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 865),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_865)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_867(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 866),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_866)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_868(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 867),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_867)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_869(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 868),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_868)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_870(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 869),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_869)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_871(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 870),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_870)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_872(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 871),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_871)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_873(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 872),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_872)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_874(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 873),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_873)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_875(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 874),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_874)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_876(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 875),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_875)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_877(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 876),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_876)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_878(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 877),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_877)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_879(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 878),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_878)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_880(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 879),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_879)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_881(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 880),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_880)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_882(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 881),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_881)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_883(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 882),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_882)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_884(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 883),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_883)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_885(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 884),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_884)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_886(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 885),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_885)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_887(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 886),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_886)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_888(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 887),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_887)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_889(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 888),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_888)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_890(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 889),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_889)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_891(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 890),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_890)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_892(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 891),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_891)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_893(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 892),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_892)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_894(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 893),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_893)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_895(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 894),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_894)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_896(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 895),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_895)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_897(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 896),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_896)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_898(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 897),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_897)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_899(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 898),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_898)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_900(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 899),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_899)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_901(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 900),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_900)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_902(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 901),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_901)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_903(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 902),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_902)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_904(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 903),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_903)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_905(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 904),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_904)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_906(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 905),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_905)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_907(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 906),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_906)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_908(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 907),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_907)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_909(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 908),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_908)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_910(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 909),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_909)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_911(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 910),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_910)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_912(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 911),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_911)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_913(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 912),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_912)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_914(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 913),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_913)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_915(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 914),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_914)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_916(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 915),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_915)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_917(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 916),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_916)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_918(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 917),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_917)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_919(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 918),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_918)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_920(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 919),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_919)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_921(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 920),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_920)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_922(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 921),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_921)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_923(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 922),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_922)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_924(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 923),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_923)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_925(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 924),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_924)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_926(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 925),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_925)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_927(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 926),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_926)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_928(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 927),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_927)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_929(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 928),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_928)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_930(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 929),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_929)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_931(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 930),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_930)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_932(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 931),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_931)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_933(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 932),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_932)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_934(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 933),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_933)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_935(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 934),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_934)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_936(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 935),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_935)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_937(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 936),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_936)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_938(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 937),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_937)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_939(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 938),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_938)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_940(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 939),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_939)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_941(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 940),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_940)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_942(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 941),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_941)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_943(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 942),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_942)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_944(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 943),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_943)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_945(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 944),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_944)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_946(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 945),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_945)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_947(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 946),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_946)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_948(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 947),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_947)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_949(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 948),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_948)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_950(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 949),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_949)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_951(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 950),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_950)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_952(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 951),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_951)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_953(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 952),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_952)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_954(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 953),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_953)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_955(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 954),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_954)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_956(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 955),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_955)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_957(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 956),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_956)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_958(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 957),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_957)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_959(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 958),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_958)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_960(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 959),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_959)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_961(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 960),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_960)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_962(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 961),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_961)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_963(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 962),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_962)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_964(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 963),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_963)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_965(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 964),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_964)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_966(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 965),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_965)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_967(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 966),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_966)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_968(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 967),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_967)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_969(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 968),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_968)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_970(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 969),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_969)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_971(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 970),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_970)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_972(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 971),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_971)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_973(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 972),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_972)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_974(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 973),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_973)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_975(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 974),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_974)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_976(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 975),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_975)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_977(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 976),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_976)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_978(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 977),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_977)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_979(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 978),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_978)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_980(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 979),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_979)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_981(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 980),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_980)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_982(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 981),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_981)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_983(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 982),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_982)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_984(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 983),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_983)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_985(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 984),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_984)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_986(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 985),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_985)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_987(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 986),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_986)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_988(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 987),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_987)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_989(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 988),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_988)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_990(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 989),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_989)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_991(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 990),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_990)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_992(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 991),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_991)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_993(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 992),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_992)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_994(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 993),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_993)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_995(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 994),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_994)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_996(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 995),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_995)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_997(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 996),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_996)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_998(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 997),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_997)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_999(x)                                                           \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 998),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_998)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_1000(x)                                                          \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 999),                                                         \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_999)                                                             \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_1001(x)                                                          \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 1000),                                                        \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_1000)                                                            \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_1002(x)                                                          \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 1001),                                                        \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_1001)                                                            \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_1003(x)                                                          \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 1002),                                                        \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_1002)                                                            \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_1004(x)                                                          \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 1003),                                                        \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_1003)                                                            \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_1005(x)                                                          \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 1004),                                                        \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_1004)                                                            \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_1006(x)                                                          \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 1005),                                                        \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_1005)                                                            \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_1007(x)                                                          \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 1006),                                                        \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_1006)                                                            \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_1008(x)                                                          \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 1007),                                                        \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_1007)                                                            \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_1009(x)                                                          \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 1008),                                                        \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_1008)                                                            \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_1010(x)                                                          \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 1009),                                                        \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_1009)                                                            \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_1011(x)                                                          \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 1010),                                                        \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_1010)                                                            \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_1012(x)                                                          \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 1011),                                                        \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_1011)                                                            \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_1013(x)                                                          \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 1012),                                                        \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_1012)                                                            \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_1014(x)                                                          \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 1013),                                                        \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_1013)                                                            \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_1015(x)                                                          \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 1014),                                                        \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_1014)                                                            \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_1016(x)                                                          \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 1015),                                                        \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_1015)                                                            \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_1017(x)                                                          \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 1016),                                                        \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_1016)                                                            \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_1018(x)                                                          \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 1017),                                                        \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_1017)                                                            \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_1019(x)                                                          \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 1018),                                                        \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_1018)                                                            \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_1020(x)                                                          \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 1019),                                                        \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_1019)                                                            \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_1021(x)                                                          \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 1020),                                                        \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_1020)                                                            \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_1022(x)                                                          \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 1021),                                                        \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_1021)                                                            \
    (x)
#define AGONY_PP_UINT_LESSER_REAL_1023(x)                                                          \
    AGONY_PP_UINT_LESSER_REAL_IF(                                                                  \
        AGONY_PP_UINT_EQ_REAL_AUX(x, 1022),                                                        \
        AGONY_PP_UINT_LESSER_REAL_TRUE,                                                            \
        AGONY_PP_UINT_LESSER_REAL_1022)                                                            \
    (x)

#define AGONY_PP_UINT_LESSER_REAL_IF(cond, x, y)    AGONY_PP_UINT_LESSER_REAL_IF_OVERLOAD(cond)(x, y)
#define AGONY_PP_UINT_LESSER_REAL_IF_OVERLOAD(cond) AGONY_PP_UINT_LESSER_REAL_IF_##cond

#define AGONY_PP_UINT_LESSER_REAL_IF_0(_x, y) y
#define AGONY_PP_UINT_LESSER_REAL_IF_1(x, _y) x

#define AGONY_PP_UINT_LESSER_REAL_TRUE(_x) 1

#endif // AGONY_PP_UINT_LESSER_H
