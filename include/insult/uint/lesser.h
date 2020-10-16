#ifndef INSULT_UINT_LESSER_H
#define INSULT_UINT_LESSER_H

#include "eq.h"

// An ordinary macro implementation is used because using our metalanguage eats too much recursion
// steps. I guess binary search might be appropriate here.
//
// And, since `x` and `y` are just numbers, blueprinting cannot occur.

#define INSULT_UINT_LESSER_REAL(x, y) v(INSULT_UINT_LESSER_REAL_##y(x))

#define INSULT_UINT_LESSER_REAL_0(_x) 0
#define INSULT_UINT_LESSER_REAL_1(x)                                                               \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 0),                                                             \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_0)                                                                 \
    (x)
#define INSULT_UINT_LESSER_REAL_2(x)                                                               \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 1),                                                             \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_1)                                                                 \
    (x)
#define INSULT_UINT_LESSER_REAL_3(x)                                                               \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 2),                                                             \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_2)                                                                 \
    (x)
#define INSULT_UINT_LESSER_REAL_4(x)                                                               \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 3),                                                             \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_3)                                                                 \
    (x)
#define INSULT_UINT_LESSER_REAL_5(x)                                                               \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 4),                                                             \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_4)                                                                 \
    (x)
#define INSULT_UINT_LESSER_REAL_6(x)                                                               \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 5),                                                             \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_5)                                                                 \
    (x) /*  */
#define INSULT_UINT_LESSER_REAL_7(x)                                                               \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 6),                                                             \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_6)                                                                 \
    (x)
#define INSULT_UINT_LESSER_REAL_8(x)                                                               \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 7),                                                             \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_7)                                                                 \
    (x)
#define INSULT_UINT_LESSER_REAL_9(x)                                                               \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 8),                                                             \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_8)                                                                 \
    (x)
#define INSULT_UINT_LESSER_REAL_10(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 9),                                                             \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_9)                                                                 \
    (x)
#define INSULT_UINT_LESSER_REAL_11(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 10),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_10)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_12(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 11),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_11)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_13(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 12),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_12)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_14(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 13),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_13)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_15(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 14),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_14)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_16(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 15),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_15)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_17(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 16),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_16)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_18(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 17),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_17)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_19(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 18),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_18)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_20(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 19),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_19)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_21(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 20),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_20)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_22(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 21),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_21)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_23(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 22),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_22)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_24(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 23),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_23)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_25(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 24),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_24)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_26(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 25),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_25)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_27(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 26),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_26)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_28(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 27),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_27)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_29(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 28),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_28)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_30(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 29),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_29)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_31(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 30),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_30)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_32(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 31),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_31)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_33(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 32),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_32)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_34(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 33),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_33)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_35(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 34),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_34)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_36(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 35),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_35)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_37(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 36),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_36)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_38(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 37),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_37)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_39(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 38),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_38)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_40(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 39),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_39)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_41(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 40),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_40)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_42(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 41),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_41)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_43(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 42),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_42)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_44(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 43),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_43)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_45(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 44),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_44)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_46(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 45),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_45)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_47(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 46),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_46)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_48(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 47),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_47)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_49(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 48),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_48)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_50(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 49),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_49)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_51(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 50),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_50)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_52(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 51),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_51)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_53(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 52),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_52)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_54(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 53),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_53)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_55(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 54),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_54)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_56(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 55),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_55)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_57(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 56),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_56)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_58(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 57),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_57)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_59(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 58),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_58)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_60(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 59),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_59)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_61(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 60),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_60)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_62(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 61),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_61)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_63(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 62),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_62)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_64(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 63),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_63)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_65(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 64),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_64)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_66(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 65),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_65)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_67(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 66),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_66)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_68(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 67),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_67)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_69(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 68),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_68)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_70(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 69),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_69)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_71(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 70),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_70)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_72(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 71),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_71)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_73(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 72),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_72)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_74(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 73),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_73)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_75(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 74),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_74)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_76(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 75),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_75)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_77(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 76),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_76)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_78(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 77),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_77)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_79(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 78),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_78)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_80(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 79),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_79)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_81(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 80),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_80)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_82(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 81),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_81)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_83(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 82),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_82)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_84(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 83),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_83)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_85(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 84),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_84)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_86(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 85),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_85)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_87(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 86),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_86)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_88(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 87),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_87)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_89(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 88),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_88)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_90(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 89),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_89)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_91(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 90),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_90)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_92(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 91),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_91)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_93(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 92),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_92)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_94(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 93),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_93)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_95(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 94),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_94)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_96(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 95),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_95)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_97(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 96),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_96)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_98(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 97),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_97)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_99(x)                                                              \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 98),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_98)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_100(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 99),                                                            \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_99)                                                                \
    (x)
#define INSULT_UINT_LESSER_REAL_101(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 100),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_100)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_102(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 101),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_101)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_103(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 102),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_102)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_104(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 103),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_103)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_105(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 104),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_104)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_106(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 105),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_105)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_107(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 106),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_106)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_108(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 107),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_107)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_109(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 108),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_108)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_110(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 109),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_109)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_111(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 110),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_110)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_112(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 111),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_111)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_113(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 112),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_112)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_114(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 113),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_113)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_115(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 114),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_114)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_116(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 115),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_115)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_117(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 116),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_116)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_118(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 117),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_117)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_119(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 118),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_118)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_120(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 119),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_119)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_121(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 120),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_120)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_122(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 121),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_121)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_123(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 122),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_122)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_124(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 123),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_123)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_125(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 124),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_124)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_126(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 125),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_125)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_127(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 126),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_126)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_128(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 127),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_127)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_129(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 128),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_128)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_130(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 129),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_129)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_131(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 130),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_130)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_132(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 131),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_131)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_133(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 132),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_132)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_134(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 133),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_133)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_135(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 134),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_134)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_136(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 135),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_135)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_137(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 136),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_136)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_138(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 137),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_137)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_139(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 138),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_138)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_140(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 139),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_139)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_141(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 140),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_140)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_142(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 141),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_141)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_143(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 142),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_142)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_144(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 143),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_143)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_145(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 144),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_144)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_146(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 145),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_145)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_147(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 146),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_146)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_148(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 147),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_147)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_149(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 148),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_148)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_150(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 149),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_149)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_151(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 150),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_150)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_152(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 151),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_151)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_153(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 152),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_152)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_154(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 153),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_153)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_155(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 154),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_154)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_156(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 155),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_155)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_157(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 156),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_156)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_158(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 157),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_157)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_159(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 158),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_158)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_160(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 159),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_159)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_161(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 160),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_160)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_162(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 161),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_161)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_163(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 162),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_162)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_164(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 163),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_163)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_165(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 164),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_164)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_166(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 165),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_165)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_167(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 166),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_166)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_168(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 167),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_167)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_169(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 168),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_168)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_170(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 169),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_169)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_171(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 170),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_170)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_172(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 171),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_171)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_173(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 172),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_172)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_174(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 173),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_173)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_175(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 174),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_174)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_176(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 175),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_175)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_177(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 176),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_176)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_178(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 177),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_177)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_179(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 178),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_178)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_180(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 179),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_179)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_181(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 180),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_180)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_182(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 181),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_181)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_183(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 182),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_182)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_184(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 183),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_183)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_185(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 184),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_184)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_186(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 185),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_185)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_187(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 186),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_186)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_188(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 187),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_187)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_189(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 188),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_188)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_190(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 189),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_189)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_191(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 190),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_190)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_192(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 191),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_191)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_193(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 192),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_192)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_194(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 193),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_193)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_195(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 194),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_194)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_196(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 195),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_195)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_197(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 196),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_196)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_198(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 197),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_197)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_199(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 198),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_198)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_200(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 199),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_199)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_201(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 200),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_200)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_202(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 201),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_201)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_203(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 202),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_202)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_204(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 203),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_203)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_205(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 204),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_204)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_206(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 205),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_205)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_207(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 206),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_206)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_208(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 207),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_207)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_209(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 208),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_208)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_210(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 209),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_209)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_211(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 210),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_210)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_212(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 211),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_211)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_213(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 212),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_212)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_214(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 213),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_213)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_215(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 214),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_214)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_216(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 215),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_215)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_217(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 216),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_216)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_218(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 217),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_217)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_219(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 218),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_218)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_220(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 219),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_219)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_221(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 220),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_220)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_222(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 221),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_221)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_223(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 222),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_222)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_224(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 223),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_223)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_225(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 224),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_224)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_226(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 225),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_225)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_227(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 226),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_226)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_228(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 227),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_227)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_229(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 228),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_228)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_230(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 229),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_229)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_231(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 230),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_230)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_232(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 231),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_231)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_233(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 232),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_232)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_234(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 233),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_233)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_235(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 234),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_234)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_236(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 235),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_235)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_237(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 236),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_236)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_238(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 237),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_237)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_239(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 238),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_238)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_240(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 239),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_239)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_241(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 240),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_240)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_242(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 241),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_241)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_243(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 242),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_242)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_244(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 243),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_243)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_245(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 244),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_244)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_246(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 245),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_245)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_247(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 246),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_246)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_248(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 247),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_247)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_249(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 248),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_248)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_250(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 249),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_249)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_251(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 250),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_250)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_252(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 251),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_251)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_253(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 252),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_252)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_254(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 253),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_253)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_255(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 254),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_254)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_256(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 255),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_255)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_257(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 256),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_256)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_258(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 257),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_257)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_259(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 258),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_258)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_260(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 259),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_259)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_261(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 260),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_260)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_262(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 261),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_261)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_263(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 262),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_262)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_264(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 263),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_263)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_265(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 264),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_264)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_266(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 265),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_265)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_267(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 266),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_266)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_268(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 267),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_267)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_269(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 268),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_268)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_270(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 269),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_269)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_271(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 270),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_270)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_272(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 271),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_271)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_273(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 272),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_272)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_274(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 273),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_273)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_275(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 274),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_274)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_276(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 275),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_275)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_277(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 276),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_276)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_278(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 277),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_277)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_279(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 278),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_278)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_280(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 279),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_279)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_281(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 280),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_280)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_282(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 281),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_281)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_283(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 282),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_282)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_284(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 283),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_283)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_285(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 284),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_284)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_286(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 285),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_285)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_287(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 286),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_286)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_288(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 287),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_287)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_289(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 288),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_288)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_290(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 289),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_289)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_291(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 290),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_290)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_292(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 291),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_291)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_293(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 292),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_292)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_294(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 293),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_293)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_295(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 294),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_294)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_296(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 295),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_295)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_297(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 296),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_296)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_298(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 297),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_297)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_299(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 298),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_298)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_300(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 299),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_299)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_301(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 300),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_300)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_302(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 301),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_301)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_303(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 302),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_302)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_304(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 303),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_303)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_305(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 304),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_304)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_306(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 305),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_305)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_307(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 306),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_306)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_308(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 307),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_307)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_309(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 308),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_308)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_310(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 309),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_309)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_311(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 310),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_310)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_312(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 311),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_311)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_313(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 312),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_312)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_314(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 313),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_313)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_315(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 314),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_314)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_316(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 315),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_315)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_317(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 316),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_316)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_318(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 317),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_317)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_319(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 318),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_318)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_320(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 319),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_319)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_321(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 320),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_320)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_322(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 321),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_321)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_323(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 322),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_322)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_324(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 323),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_323)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_325(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 324),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_324)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_326(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 325),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_325)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_327(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 326),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_326)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_328(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 327),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_327)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_329(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 328),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_328)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_330(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 329),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_329)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_331(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 330),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_330)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_332(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 331),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_331)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_333(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 332),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_332)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_334(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 333),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_333)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_335(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 334),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_334)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_336(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 335),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_335)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_337(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 336),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_336)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_338(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 337),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_337)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_339(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 338),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_338)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_340(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 339),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_339)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_341(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 340),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_340)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_342(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 341),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_341)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_343(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 342),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_342)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_344(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 343),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_343)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_345(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 344),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_344)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_346(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 345),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_345)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_347(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 346),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_346)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_348(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 347),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_347)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_349(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 348),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_348)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_350(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 349),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_349)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_351(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 350),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_350)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_352(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 351),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_351)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_353(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 352),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_352)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_354(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 353),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_353)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_355(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 354),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_354)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_356(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 355),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_355)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_357(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 356),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_356)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_358(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 357),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_357)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_359(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 358),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_358)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_360(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 359),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_359)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_361(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 360),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_360)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_362(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 361),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_361)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_363(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 362),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_362)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_364(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 363),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_363)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_365(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 364),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_364)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_366(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 365),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_365)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_367(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 366),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_366)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_368(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 367),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_367)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_369(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 368),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_368)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_370(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 369),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_369)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_371(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 370),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_370)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_372(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 371),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_371)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_373(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 372),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_372)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_374(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 373),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_373)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_375(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 374),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_374)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_376(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 375),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_375)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_377(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 376),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_376)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_378(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 377),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_377)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_379(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 378),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_378)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_380(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 379),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_379)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_381(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 380),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_380)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_382(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 381),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_381)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_383(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 382),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_382)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_384(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 383),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_383)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_385(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 384),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_384)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_386(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 385),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_385)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_387(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 386),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_386)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_388(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 387),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_387)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_389(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 388),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_388)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_390(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 389),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_389)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_391(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 390),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_390)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_392(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 391),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_391)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_393(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 392),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_392)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_394(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 393),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_393)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_395(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 394),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_394)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_396(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 395),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_395)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_397(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 396),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_396)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_398(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 397),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_397)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_399(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 398),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_398)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_400(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 399),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_399)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_401(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 400),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_400)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_402(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 401),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_401)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_403(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 402),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_402)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_404(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 403),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_403)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_405(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 404),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_404)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_406(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 405),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_405)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_407(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 406),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_406)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_408(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 407),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_407)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_409(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 408),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_408)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_410(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 409),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_409)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_411(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 410),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_410)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_412(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 411),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_411)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_413(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 412),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_412)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_414(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 413),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_413)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_415(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 414),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_414)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_416(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 415),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_415)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_417(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 416),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_416)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_418(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 417),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_417)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_419(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 418),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_418)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_420(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 419),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_419)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_421(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 420),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_420)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_422(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 421),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_421)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_423(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 422),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_422)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_424(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 423),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_423)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_425(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 424),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_424)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_426(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 425),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_425)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_427(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 426),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_426)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_428(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 427),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_427)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_429(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 428),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_428)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_430(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 429),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_429)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_431(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 430),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_430)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_432(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 431),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_431)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_433(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 432),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_432)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_434(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 433),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_433)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_435(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 434),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_434)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_436(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 435),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_435)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_437(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 436),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_436)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_438(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 437),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_437)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_439(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 438),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_438)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_440(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 439),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_439)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_441(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 440),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_440)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_442(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 441),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_441)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_443(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 442),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_442)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_444(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 443),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_443)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_445(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 444),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_444)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_446(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 445),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_445)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_447(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 446),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_446)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_448(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 447),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_447)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_449(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 448),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_448)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_450(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 449),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_449)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_451(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 450),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_450)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_452(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 451),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_451)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_453(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 452),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_452)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_454(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 453),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_453)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_455(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 454),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_454)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_456(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 455),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_455)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_457(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 456),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_456)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_458(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 457),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_457)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_459(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 458),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_458)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_460(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 459),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_459)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_461(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 460),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_460)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_462(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 461),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_461)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_463(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 462),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_462)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_464(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 463),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_463)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_465(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 464),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_464)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_466(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 465),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_465)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_467(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 466),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_466)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_468(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 467),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_467)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_469(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 468),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_468)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_470(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 469),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_469)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_471(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 470),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_470)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_472(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 471),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_471)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_473(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 472),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_472)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_474(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 473),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_473)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_475(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 474),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_474)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_476(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 475),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_475)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_477(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 476),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_476)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_478(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 477),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_477)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_479(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 478),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_478)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_480(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 479),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_479)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_481(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 480),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_480)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_482(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 481),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_481)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_483(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 482),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_482)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_484(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 483),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_483)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_485(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 484),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_484)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_486(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 485),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_485)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_487(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 486),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_486)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_488(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 487),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_487)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_489(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 488),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_488)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_490(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 489),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_489)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_491(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 490),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_490)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_492(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 491),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_491)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_493(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 492),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_492)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_494(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 493),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_493)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_495(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 494),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_494)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_496(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 495),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_495)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_497(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 496),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_496)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_498(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 497),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_497)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_499(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 498),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_498)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_500(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 499),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_499)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_501(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 500),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_500)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_502(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 501),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_501)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_503(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 502),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_502)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_504(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 503),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_503)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_505(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 504),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_504)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_506(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 505),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_505)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_507(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 506),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_506)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_508(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 507),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_507)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_509(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 508),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_508)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_510(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 509),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_509)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_511(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 510),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_510)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_512(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 511),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_511)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_513(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 512),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_512)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_514(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 513),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_513)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_515(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 514),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_514)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_516(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 515),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_515)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_517(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 516),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_516)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_518(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 517),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_517)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_519(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 518),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_518)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_520(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 519),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_519)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_521(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 520),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_520)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_522(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 521),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_521)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_523(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 522),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_522)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_524(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 523),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_523)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_525(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 524),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_524)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_526(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 525),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_525)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_527(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 526),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_526)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_528(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 527),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_527)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_529(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 528),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_528)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_530(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 529),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_529)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_531(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 530),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_530)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_532(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 531),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_531)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_533(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 532),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_532)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_534(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 533),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_533)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_535(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 534),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_534)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_536(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 535),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_535)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_537(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 536),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_536)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_538(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 537),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_537)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_539(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 538),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_538)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_540(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 539),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_539)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_541(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 540),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_540)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_542(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 541),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_541)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_543(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 542),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_542)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_544(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 543),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_543)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_545(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 544),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_544)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_546(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 545),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_545)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_547(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 546),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_546)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_548(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 547),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_547)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_549(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 548),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_548)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_550(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 549),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_549)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_551(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 550),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_550)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_552(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 551),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_551)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_553(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 552),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_552)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_554(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 553),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_553)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_555(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 554),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_554)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_556(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 555),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_555)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_557(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 556),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_556)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_558(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 557),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_557)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_559(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 558),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_558)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_560(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 559),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_559)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_561(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 560),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_560)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_562(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 561),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_561)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_563(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 562),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_562)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_564(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 563),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_563)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_565(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 564),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_564)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_566(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 565),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_565)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_567(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 566),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_566)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_568(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 567),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_567)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_569(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 568),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_568)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_570(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 569),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_569)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_571(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 570),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_570)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_572(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 571),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_571)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_573(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 572),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_572)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_574(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 573),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_573)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_575(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 574),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_574)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_576(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 575),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_575)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_577(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 576),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_576)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_578(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 577),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_577)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_579(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 578),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_578)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_580(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 579),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_579)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_581(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 580),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_580)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_582(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 581),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_581)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_583(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 582),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_582)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_584(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 583),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_583)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_585(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 584),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_584)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_586(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 585),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_585)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_587(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 586),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_586)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_588(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 587),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_587)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_589(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 588),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_588)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_590(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 589),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_589)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_591(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 590),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_590)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_592(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 591),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_591)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_593(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 592),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_592)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_594(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 593),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_593)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_595(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 594),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_594)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_596(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 595),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_595)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_597(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 596),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_596)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_598(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 597),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_597)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_599(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 598),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_598)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_600(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 599),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_599)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_601(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 600),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_600)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_602(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 601),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_601)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_603(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 602),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_602)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_604(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 603),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_603)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_605(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 604),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_604)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_606(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 605),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_605)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_607(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 606),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_606)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_608(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 607),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_607)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_609(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 608),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_608)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_610(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 609),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_609)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_611(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 610),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_610)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_612(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 611),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_611)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_613(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 612),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_612)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_614(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 613),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_613)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_615(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 614),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_614)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_616(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 615),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_615)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_617(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 616),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_616)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_618(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 617),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_617)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_619(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 618),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_618)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_620(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 619),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_619)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_621(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 620),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_620)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_622(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 621),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_621)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_623(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 622),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_622)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_624(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 623),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_623)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_625(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 624),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_624)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_626(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 625),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_625)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_627(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 626),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_626)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_628(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 627),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_627)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_629(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 628),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_628)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_630(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 629),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_629)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_631(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 630),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_630)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_632(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 631),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_631)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_633(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 632),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_632)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_634(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 633),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_633)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_635(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 634),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_634)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_636(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 635),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_635)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_637(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 636),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_636)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_638(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 637),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_637)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_639(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 638),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_638)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_640(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 639),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_639)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_641(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 640),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_640)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_642(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 641),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_641)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_643(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 642),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_642)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_644(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 643),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_643)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_645(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 644),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_644)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_646(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 645),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_645)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_647(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 646),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_646)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_648(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 647),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_647)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_649(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 648),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_648)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_650(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 649),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_649)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_651(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 650),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_650)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_652(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 651),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_651)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_653(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 652),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_652)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_654(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 653),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_653)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_655(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 654),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_654)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_656(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 655),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_655)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_657(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 656),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_656)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_658(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 657),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_657)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_659(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 658),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_658)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_660(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 659),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_659)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_661(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 660),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_660)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_662(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 661),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_661)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_663(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 662),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_662)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_664(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 663),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_663)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_665(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 664),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_664)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_666(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 665),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_665)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_667(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 666),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_666)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_668(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 667),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_667)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_669(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 668),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_668)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_670(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 669),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_669)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_671(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 670),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_670)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_672(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 671),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_671)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_673(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 672),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_672)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_674(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 673),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_673)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_675(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 674),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_674)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_676(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 675),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_675)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_677(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 676),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_676)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_678(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 677),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_677)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_679(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 678),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_678)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_680(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 679),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_679)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_681(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 680),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_680)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_682(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 681),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_681)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_683(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 682),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_682)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_684(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 683),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_683)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_685(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 684),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_684)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_686(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 685),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_685)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_687(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 686),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_686)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_688(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 687),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_687)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_689(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 688),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_688)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_690(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 689),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_689)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_691(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 690),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_690)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_692(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 691),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_691)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_693(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 692),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_692)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_694(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 693),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_693)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_695(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 694),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_694)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_696(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 695),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_695)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_697(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 696),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_696)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_698(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 697),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_697)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_699(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 698),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_698)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_700(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 699),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_699)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_701(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 700),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_700)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_702(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 701),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_701)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_703(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 702),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_702)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_704(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 703),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_703)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_705(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 704),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_704)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_706(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 705),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_705)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_707(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 706),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_706)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_708(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 707),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_707)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_709(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 708),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_708)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_710(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 709),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_709)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_711(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 710),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_710)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_712(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 711),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_711)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_713(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 712),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_712)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_714(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 713),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_713)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_715(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 714),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_714)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_716(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 715),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_715)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_717(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 716),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_716)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_718(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 717),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_717)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_719(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 718),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_718)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_720(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 719),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_719)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_721(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 720),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_720)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_722(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 721),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_721)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_723(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 722),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_722)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_724(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 723),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_723)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_725(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 724),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_724)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_726(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 725),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_725)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_727(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 726),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_726)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_728(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 727),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_727)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_729(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 728),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_728)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_730(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 729),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_729)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_731(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 730),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_730)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_732(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 731),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_731)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_733(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 732),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_732)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_734(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 733),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_733)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_735(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 734),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_734)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_736(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 735),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_735)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_737(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 736),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_736)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_738(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 737),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_737)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_739(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 738),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_738)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_740(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 739),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_739)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_741(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 740),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_740)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_742(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 741),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_741)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_743(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 742),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_742)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_744(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 743),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_743)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_745(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 744),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_744)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_746(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 745),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_745)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_747(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 746),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_746)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_748(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 747),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_747)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_749(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 748),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_748)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_750(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 749),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_749)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_751(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 750),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_750)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_752(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 751),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_751)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_753(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 752),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_752)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_754(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 753),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_753)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_755(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 754),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_754)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_756(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 755),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_755)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_757(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 756),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_756)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_758(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 757),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_757)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_759(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 758),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_758)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_760(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 759),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_759)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_761(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 760),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_760)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_762(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 761),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_761)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_763(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 762),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_762)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_764(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 763),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_763)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_765(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 764),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_764)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_766(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 765),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_765)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_767(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 766),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_766)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_768(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 767),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_767)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_769(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 768),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_768)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_770(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 769),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_769)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_771(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 770),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_770)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_772(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 771),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_771)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_773(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 772),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_772)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_774(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 773),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_773)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_775(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 774),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_774)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_776(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 775),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_775)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_777(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 776),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_776)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_778(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 777),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_777)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_779(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 778),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_778)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_780(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 779),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_779)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_781(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 780),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_780)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_782(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 781),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_781)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_783(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 782),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_782)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_784(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 783),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_783)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_785(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 784),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_784)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_786(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 785),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_785)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_787(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 786),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_786)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_788(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 787),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_787)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_789(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 788),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_788)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_790(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 789),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_789)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_791(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 790),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_790)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_792(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 791),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_791)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_793(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 792),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_792)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_794(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 793),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_793)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_795(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 794),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_794)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_796(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 795),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_795)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_797(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 796),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_796)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_798(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 797),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_797)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_799(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 798),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_798)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_800(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 799),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_799)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_801(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 800),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_800)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_802(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 801),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_801)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_803(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 802),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_802)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_804(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 803),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_803)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_805(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 804),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_804)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_806(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 805),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_805)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_807(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 806),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_806)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_808(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 807),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_807)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_809(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 808),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_808)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_810(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 809),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_809)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_811(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 810),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_810)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_812(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 811),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_811)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_813(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 812),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_812)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_814(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 813),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_813)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_815(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 814),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_814)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_816(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 815),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_815)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_817(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 816),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_816)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_818(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 817),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_817)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_819(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 818),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_818)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_820(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 819),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_819)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_821(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 820),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_820)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_822(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 821),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_821)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_823(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 822),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_822)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_824(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 823),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_823)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_825(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 824),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_824)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_826(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 825),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_825)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_827(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 826),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_826)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_828(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 827),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_827)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_829(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 828),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_828)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_830(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 829),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_829)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_831(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 830),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_830)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_832(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 831),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_831)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_833(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 832),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_832)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_834(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 833),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_833)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_835(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 834),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_834)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_836(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 835),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_835)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_837(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 836),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_836)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_838(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 837),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_837)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_839(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 838),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_838)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_840(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 839),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_839)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_841(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 840),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_840)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_842(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 841),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_841)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_843(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 842),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_842)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_844(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 843),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_843)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_845(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 844),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_844)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_846(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 845),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_845)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_847(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 846),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_846)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_848(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 847),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_847)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_849(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 848),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_848)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_850(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 849),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_849)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_851(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 850),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_850)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_852(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 851),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_851)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_853(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 852),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_852)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_854(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 853),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_853)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_855(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 854),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_854)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_856(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 855),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_855)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_857(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 856),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_856)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_858(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 857),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_857)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_859(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 858),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_858)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_860(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 859),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_859)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_861(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 860),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_860)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_862(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 861),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_861)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_863(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 862),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_862)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_864(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 863),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_863)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_865(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 864),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_864)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_866(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 865),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_865)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_867(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 866),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_866)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_868(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 867),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_867)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_869(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 868),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_868)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_870(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 869),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_869)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_871(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 870),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_870)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_872(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 871),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_871)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_873(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 872),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_872)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_874(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 873),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_873)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_875(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 874),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_874)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_876(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 875),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_875)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_877(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 876),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_876)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_878(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 877),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_877)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_879(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 878),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_878)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_880(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 879),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_879)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_881(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 880),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_880)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_882(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 881),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_881)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_883(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 882),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_882)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_884(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 883),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_883)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_885(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 884),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_884)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_886(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 885),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_885)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_887(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 886),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_886)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_888(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 887),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_887)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_889(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 888),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_888)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_890(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 889),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_889)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_891(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 890),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_890)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_892(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 891),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_891)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_893(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 892),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_892)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_894(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 893),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_893)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_895(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 894),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_894)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_896(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 895),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_895)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_897(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 896),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_896)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_898(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 897),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_897)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_899(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 898),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_898)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_900(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 899),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_899)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_901(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 900),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_900)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_902(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 901),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_901)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_903(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 902),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_902)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_904(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 903),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_903)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_905(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 904),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_904)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_906(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 905),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_905)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_907(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 906),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_906)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_908(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 907),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_907)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_909(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 908),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_908)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_910(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 909),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_909)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_911(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 910),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_910)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_912(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 911),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_911)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_913(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 912),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_912)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_914(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 913),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_913)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_915(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 914),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_914)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_916(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 915),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_915)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_917(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 916),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_916)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_918(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 917),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_917)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_919(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 918),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_918)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_920(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 919),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_919)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_921(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 920),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_920)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_922(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 921),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_921)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_923(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 922),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_922)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_924(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 923),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_923)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_925(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 924),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_924)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_926(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 925),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_925)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_927(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 926),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_926)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_928(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 927),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_927)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_929(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 928),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_928)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_930(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 929),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_929)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_931(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 930),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_930)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_932(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 931),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_931)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_933(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 932),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_932)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_934(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 933),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_933)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_935(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 934),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_934)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_936(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 935),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_935)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_937(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 936),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_936)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_938(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 937),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_937)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_939(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 938),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_938)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_940(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 939),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_939)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_941(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 940),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_940)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_942(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 941),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_941)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_943(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 942),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_942)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_944(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 943),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_943)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_945(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 944),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_944)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_946(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 945),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_945)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_947(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 946),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_946)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_948(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 947),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_947)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_949(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 948),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_948)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_950(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 949),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_949)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_951(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 950),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_950)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_952(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 951),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_951)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_953(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 952),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_952)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_954(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 953),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_953)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_955(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 954),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_954)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_956(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 955),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_955)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_957(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 956),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_956)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_958(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 957),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_957)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_959(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 958),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_958)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_960(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 959),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_959)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_961(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 960),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_960)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_962(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 961),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_961)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_963(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 962),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_962)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_964(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 963),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_963)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_965(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 964),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_964)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_966(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 965),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_965)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_967(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 966),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_966)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_968(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 967),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_967)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_969(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 968),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_968)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_970(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 969),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_969)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_971(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 970),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_970)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_972(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 971),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_971)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_973(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 972),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_972)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_974(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 973),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_973)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_975(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 974),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_974)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_976(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 975),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_975)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_977(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 976),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_976)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_978(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 977),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_977)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_979(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 978),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_978)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_980(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 979),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_979)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_981(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 980),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_980)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_982(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 981),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_981)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_983(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 982),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_982)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_984(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 983),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_983)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_985(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 984),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_984)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_986(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 985),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_985)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_987(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 986),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_986)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_988(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 987),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_987)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_989(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 988),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_988)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_990(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 989),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_989)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_991(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 990),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_990)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_992(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 991),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_991)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_993(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 992),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_992)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_994(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 993),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_993)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_995(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 994),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_994)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_996(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 995),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_995)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_997(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 996),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_996)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_998(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 997),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_997)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_999(x)                                                             \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 998),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_998)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_1000(x)                                                            \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 999),                                                           \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_999)                                                               \
    (x)
#define INSULT_UINT_LESSER_REAL_1001(x)                                                            \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 1000),                                                          \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_1000)                                                              \
    (x)
#define INSULT_UINT_LESSER_REAL_1002(x)                                                            \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 1001),                                                          \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_1001)                                                              \
    (x)
#define INSULT_UINT_LESSER_REAL_1003(x)                                                            \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 1002),                                                          \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_1002)                                                              \
    (x)
#define INSULT_UINT_LESSER_REAL_1004(x)                                                            \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 1003),                                                          \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_1003)                                                              \
    (x)
#define INSULT_UINT_LESSER_REAL_1005(x)                                                            \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 1004),                                                          \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_1004)                                                              \
    (x)
#define INSULT_UINT_LESSER_REAL_1006(x)                                                            \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 1005),                                                          \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_1005)                                                              \
    (x)
#define INSULT_UINT_LESSER_REAL_1007(x)                                                            \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 1006),                                                          \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_1006)                                                              \
    (x)
#define INSULT_UINT_LESSER_REAL_1008(x)                                                            \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 1007),                                                          \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_1007)                                                              \
    (x)
#define INSULT_UINT_LESSER_REAL_1009(x)                                                            \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 1008),                                                          \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_1008)                                                              \
    (x)
#define INSULT_UINT_LESSER_REAL_1010(x)                                                            \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 1009),                                                          \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_1009)                                                              \
    (x)
#define INSULT_UINT_LESSER_REAL_1011(x)                                                            \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 1010),                                                          \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_1010)                                                              \
    (x)
#define INSULT_UINT_LESSER_REAL_1012(x)                                                            \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 1011),                                                          \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_1011)                                                              \
    (x)
#define INSULT_UINT_LESSER_REAL_1013(x)                                                            \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 1012),                                                          \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_1012)                                                              \
    (x)
#define INSULT_UINT_LESSER_REAL_1014(x)                                                            \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 1013),                                                          \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_1013)                                                              \
    (x)
#define INSULT_UINT_LESSER_REAL_1015(x)                                                            \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 1014),                                                          \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_1014)                                                              \
    (x)
#define INSULT_UINT_LESSER_REAL_1016(x)                                                            \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 1015),                                                          \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_1015)                                                              \
    (x)
#define INSULT_UINT_LESSER_REAL_1017(x)                                                            \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 1016),                                                          \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_1016)                                                              \
    (x)
#define INSULT_UINT_LESSER_REAL_1018(x)                                                            \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 1017),                                                          \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_1017)                                                              \
    (x)
#define INSULT_UINT_LESSER_REAL_1019(x)                                                            \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 1018),                                                          \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_1018)                                                              \
    (x)
#define INSULT_UINT_LESSER_REAL_1020(x)                                                            \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 1019),                                                          \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_1019)                                                              \
    (x)
#define INSULT_UINT_LESSER_REAL_1021(x)                                                            \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 1020),                                                          \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_1020)                                                              \
    (x)
#define INSULT_UINT_LESSER_REAL_1022(x)                                                            \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 1021),                                                          \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_1021)                                                              \
    (x)
#define INSULT_UINT_LESSER_REAL_1023(x)                                                            \
    INSULT_UINT_LESSER_REAL_IF(                                                                    \
        INSULT_UINT_EQ_REAL_AUX(x, 1022),                                                          \
        INSULT_UINT_LESSER_REAL_TRUE,                                                              \
        INSULT_UINT_LESSER_REAL_1022)                                                              \
    (x)

#define INSULT_UINT_LESSER_REAL_IF(cond, x, y)    INSULT_UINT_LESSER_REAL_IF_OVERLOAD(cond)(x, y)
#define INSULT_UINT_LESSER_REAL_IF_OVERLOAD(cond) INSULT_UINT_LESSER_REAL_IF_##cond

#define INSULT_UINT_LESSER_REAL_IF_0(_x, y) y
#define INSULT_UINT_LESSER_REAL_IF_1(x, _y) x

#define INSULT_UINT_LESSER_REAL_TRUE(_x) 1

#endif // INSULT_UINT_LESSER_H
