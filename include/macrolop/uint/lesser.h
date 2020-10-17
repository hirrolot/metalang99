#ifndef MACROLOP_UINT_LESSER_H
#define MACROLOP_UINT_LESSER_H

#include "eq.h"

// An ordinary macro implementation is used because using our metalanguage eats too much recursion
// steps. I guess binary search might be appropriate here.
//
// And, since `x` and `y` are just numbers, blueprinting cannot occur.

#define MACROLOP_UINT_LESSER_REAL(x, y) v(MACROLOP_UINT_LESSER_REAL_##y(x))

#define MACROLOP_UINT_LESSER_REAL_0(_x) 0
#define MACROLOP_UINT_LESSER_REAL_1(x)                                                             \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 0),                                                           \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_0)                                                               \
    (x)
#define MACROLOP_UINT_LESSER_REAL_2(x)                                                             \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 1),                                                           \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_1)                                                               \
    (x)
#define MACROLOP_UINT_LESSER_REAL_3(x)                                                             \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 2),                                                           \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_2)                                                               \
    (x)
#define MACROLOP_UINT_LESSER_REAL_4(x)                                                             \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 3),                                                           \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_3)                                                               \
    (x)
#define MACROLOP_UINT_LESSER_REAL_5(x)                                                             \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 4),                                                           \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_4)                                                               \
    (x)
#define MACROLOP_UINT_LESSER_REAL_6(x)                                                             \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 5),                                                           \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_5)                                                               \
    (x) /*  */
#define MACROLOP_UINT_LESSER_REAL_7(x)                                                             \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 6),                                                           \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_6)                                                               \
    (x)
#define MACROLOP_UINT_LESSER_REAL_8(x)                                                             \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 7),                                                           \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_7)                                                               \
    (x)
#define MACROLOP_UINT_LESSER_REAL_9(x)                                                             \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 8),                                                           \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_8)                                                               \
    (x)
#define MACROLOP_UINT_LESSER_REAL_10(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 9),                                                           \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_9)                                                               \
    (x)
#define MACROLOP_UINT_LESSER_REAL_11(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 10),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_10)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_12(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 11),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_11)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_13(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 12),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_12)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_14(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 13),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_13)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_15(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 14),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_14)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_16(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 15),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_15)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_17(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 16),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_16)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_18(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 17),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_17)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_19(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 18),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_18)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_20(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 19),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_19)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_21(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 20),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_20)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_22(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 21),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_21)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_23(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 22),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_22)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_24(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 23),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_23)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_25(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 24),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_24)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_26(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 25),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_25)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_27(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 26),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_26)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_28(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 27),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_27)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_29(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 28),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_28)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_30(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 29),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_29)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_31(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 30),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_30)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_32(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 31),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_31)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_33(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 32),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_32)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_34(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 33),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_33)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_35(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 34),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_34)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_36(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 35),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_35)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_37(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 36),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_36)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_38(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 37),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_37)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_39(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 38),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_38)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_40(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 39),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_39)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_41(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 40),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_40)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_42(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 41),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_41)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_43(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 42),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_42)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_44(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 43),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_43)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_45(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 44),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_44)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_46(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 45),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_45)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_47(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 46),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_46)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_48(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 47),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_47)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_49(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 48),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_48)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_50(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 49),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_49)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_51(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 50),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_50)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_52(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 51),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_51)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_53(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 52),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_52)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_54(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 53),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_53)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_55(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 54),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_54)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_56(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 55),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_55)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_57(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 56),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_56)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_58(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 57),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_57)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_59(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 58),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_58)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_60(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 59),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_59)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_61(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 60),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_60)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_62(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 61),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_61)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_63(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 62),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_62)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_64(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 63),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_63)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_65(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 64),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_64)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_66(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 65),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_65)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_67(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 66),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_66)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_68(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 67),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_67)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_69(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 68),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_68)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_70(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 69),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_69)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_71(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 70),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_70)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_72(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 71),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_71)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_73(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 72),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_72)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_74(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 73),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_73)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_75(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 74),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_74)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_76(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 75),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_75)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_77(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 76),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_76)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_78(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 77),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_77)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_79(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 78),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_78)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_80(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 79),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_79)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_81(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 80),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_80)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_82(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 81),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_81)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_83(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 82),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_82)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_84(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 83),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_83)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_85(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 84),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_84)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_86(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 85),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_85)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_87(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 86),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_86)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_88(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 87),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_87)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_89(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 88),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_88)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_90(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 89),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_89)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_91(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 90),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_90)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_92(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 91),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_91)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_93(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 92),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_92)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_94(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 93),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_93)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_95(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 94),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_94)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_96(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 95),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_95)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_97(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 96),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_96)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_98(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 97),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_97)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_99(x)                                                            \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 98),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_98)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_100(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 99),                                                          \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_99)                                                              \
    (x)
#define MACROLOP_UINT_LESSER_REAL_101(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 100),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_100)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_102(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 101),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_101)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_103(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 102),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_102)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_104(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 103),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_103)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_105(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 104),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_104)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_106(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 105),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_105)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_107(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 106),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_106)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_108(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 107),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_107)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_109(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 108),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_108)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_110(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 109),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_109)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_111(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 110),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_110)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_112(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 111),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_111)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_113(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 112),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_112)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_114(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 113),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_113)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_115(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 114),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_114)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_116(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 115),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_115)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_117(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 116),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_116)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_118(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 117),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_117)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_119(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 118),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_118)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_120(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 119),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_119)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_121(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 120),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_120)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_122(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 121),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_121)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_123(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 122),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_122)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_124(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 123),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_123)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_125(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 124),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_124)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_126(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 125),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_125)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_127(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 126),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_126)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_128(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 127),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_127)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_129(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 128),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_128)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_130(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 129),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_129)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_131(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 130),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_130)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_132(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 131),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_131)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_133(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 132),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_132)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_134(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 133),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_133)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_135(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 134),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_134)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_136(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 135),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_135)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_137(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 136),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_136)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_138(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 137),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_137)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_139(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 138),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_138)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_140(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 139),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_139)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_141(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 140),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_140)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_142(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 141),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_141)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_143(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 142),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_142)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_144(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 143),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_143)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_145(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 144),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_144)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_146(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 145),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_145)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_147(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 146),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_146)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_148(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 147),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_147)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_149(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 148),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_148)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_150(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 149),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_149)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_151(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 150),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_150)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_152(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 151),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_151)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_153(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 152),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_152)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_154(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 153),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_153)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_155(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 154),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_154)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_156(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 155),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_155)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_157(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 156),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_156)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_158(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 157),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_157)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_159(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 158),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_158)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_160(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 159),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_159)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_161(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 160),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_160)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_162(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 161),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_161)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_163(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 162),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_162)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_164(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 163),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_163)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_165(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 164),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_164)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_166(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 165),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_165)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_167(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 166),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_166)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_168(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 167),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_167)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_169(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 168),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_168)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_170(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 169),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_169)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_171(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 170),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_170)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_172(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 171),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_171)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_173(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 172),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_172)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_174(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 173),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_173)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_175(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 174),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_174)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_176(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 175),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_175)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_177(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 176),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_176)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_178(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 177),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_177)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_179(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 178),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_178)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_180(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 179),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_179)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_181(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 180),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_180)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_182(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 181),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_181)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_183(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 182),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_182)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_184(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 183),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_183)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_185(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 184),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_184)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_186(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 185),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_185)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_187(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 186),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_186)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_188(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 187),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_187)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_189(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 188),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_188)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_190(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 189),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_189)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_191(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 190),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_190)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_192(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 191),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_191)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_193(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 192),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_192)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_194(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 193),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_193)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_195(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 194),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_194)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_196(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 195),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_195)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_197(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 196),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_196)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_198(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 197),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_197)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_199(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 198),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_198)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_200(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 199),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_199)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_201(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 200),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_200)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_202(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 201),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_201)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_203(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 202),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_202)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_204(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 203),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_203)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_205(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 204),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_204)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_206(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 205),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_205)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_207(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 206),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_206)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_208(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 207),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_207)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_209(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 208),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_208)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_210(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 209),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_209)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_211(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 210),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_210)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_212(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 211),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_211)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_213(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 212),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_212)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_214(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 213),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_213)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_215(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 214),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_214)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_216(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 215),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_215)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_217(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 216),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_216)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_218(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 217),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_217)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_219(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 218),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_218)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_220(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 219),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_219)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_221(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 220),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_220)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_222(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 221),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_221)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_223(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 222),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_222)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_224(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 223),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_223)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_225(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 224),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_224)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_226(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 225),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_225)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_227(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 226),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_226)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_228(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 227),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_227)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_229(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 228),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_228)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_230(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 229),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_229)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_231(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 230),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_230)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_232(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 231),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_231)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_233(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 232),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_232)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_234(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 233),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_233)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_235(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 234),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_234)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_236(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 235),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_235)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_237(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 236),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_236)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_238(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 237),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_237)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_239(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 238),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_238)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_240(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 239),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_239)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_241(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 240),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_240)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_242(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 241),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_241)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_243(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 242),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_242)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_244(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 243),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_243)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_245(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 244),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_244)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_246(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 245),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_245)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_247(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 246),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_246)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_248(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 247),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_247)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_249(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 248),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_248)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_250(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 249),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_249)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_251(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 250),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_250)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_252(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 251),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_251)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_253(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 252),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_252)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_254(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 253),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_253)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_255(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 254),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_254)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_256(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 255),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_255)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_257(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 256),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_256)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_258(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 257),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_257)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_259(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 258),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_258)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_260(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 259),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_259)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_261(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 260),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_260)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_262(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 261),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_261)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_263(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 262),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_262)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_264(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 263),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_263)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_265(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 264),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_264)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_266(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 265),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_265)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_267(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 266),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_266)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_268(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 267),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_267)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_269(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 268),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_268)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_270(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 269),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_269)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_271(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 270),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_270)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_272(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 271),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_271)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_273(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 272),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_272)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_274(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 273),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_273)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_275(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 274),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_274)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_276(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 275),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_275)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_277(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 276),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_276)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_278(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 277),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_277)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_279(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 278),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_278)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_280(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 279),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_279)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_281(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 280),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_280)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_282(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 281),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_281)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_283(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 282),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_282)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_284(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 283),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_283)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_285(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 284),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_284)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_286(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 285),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_285)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_287(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 286),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_286)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_288(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 287),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_287)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_289(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 288),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_288)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_290(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 289),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_289)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_291(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 290),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_290)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_292(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 291),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_291)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_293(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 292),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_292)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_294(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 293),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_293)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_295(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 294),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_294)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_296(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 295),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_295)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_297(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 296),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_296)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_298(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 297),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_297)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_299(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 298),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_298)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_300(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 299),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_299)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_301(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 300),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_300)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_302(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 301),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_301)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_303(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 302),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_302)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_304(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 303),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_303)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_305(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 304),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_304)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_306(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 305),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_305)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_307(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 306),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_306)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_308(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 307),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_307)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_309(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 308),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_308)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_310(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 309),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_309)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_311(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 310),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_310)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_312(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 311),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_311)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_313(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 312),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_312)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_314(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 313),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_313)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_315(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 314),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_314)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_316(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 315),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_315)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_317(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 316),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_316)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_318(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 317),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_317)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_319(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 318),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_318)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_320(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 319),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_319)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_321(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 320),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_320)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_322(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 321),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_321)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_323(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 322),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_322)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_324(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 323),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_323)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_325(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 324),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_324)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_326(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 325),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_325)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_327(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 326),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_326)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_328(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 327),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_327)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_329(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 328),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_328)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_330(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 329),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_329)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_331(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 330),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_330)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_332(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 331),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_331)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_333(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 332),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_332)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_334(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 333),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_333)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_335(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 334),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_334)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_336(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 335),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_335)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_337(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 336),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_336)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_338(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 337),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_337)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_339(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 338),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_338)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_340(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 339),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_339)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_341(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 340),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_340)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_342(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 341),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_341)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_343(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 342),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_342)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_344(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 343),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_343)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_345(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 344),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_344)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_346(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 345),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_345)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_347(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 346),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_346)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_348(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 347),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_347)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_349(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 348),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_348)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_350(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 349),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_349)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_351(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 350),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_350)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_352(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 351),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_351)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_353(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 352),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_352)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_354(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 353),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_353)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_355(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 354),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_354)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_356(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 355),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_355)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_357(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 356),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_356)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_358(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 357),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_357)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_359(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 358),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_358)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_360(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 359),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_359)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_361(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 360),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_360)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_362(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 361),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_361)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_363(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 362),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_362)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_364(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 363),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_363)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_365(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 364),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_364)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_366(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 365),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_365)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_367(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 366),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_366)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_368(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 367),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_367)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_369(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 368),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_368)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_370(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 369),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_369)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_371(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 370),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_370)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_372(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 371),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_371)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_373(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 372),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_372)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_374(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 373),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_373)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_375(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 374),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_374)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_376(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 375),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_375)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_377(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 376),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_376)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_378(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 377),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_377)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_379(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 378),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_378)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_380(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 379),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_379)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_381(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 380),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_380)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_382(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 381),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_381)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_383(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 382),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_382)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_384(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 383),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_383)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_385(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 384),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_384)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_386(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 385),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_385)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_387(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 386),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_386)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_388(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 387),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_387)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_389(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 388),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_388)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_390(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 389),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_389)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_391(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 390),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_390)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_392(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 391),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_391)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_393(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 392),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_392)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_394(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 393),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_393)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_395(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 394),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_394)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_396(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 395),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_395)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_397(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 396),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_396)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_398(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 397),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_397)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_399(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 398),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_398)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_400(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 399),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_399)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_401(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 400),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_400)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_402(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 401),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_401)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_403(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 402),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_402)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_404(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 403),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_403)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_405(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 404),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_404)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_406(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 405),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_405)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_407(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 406),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_406)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_408(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 407),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_407)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_409(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 408),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_408)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_410(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 409),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_409)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_411(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 410),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_410)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_412(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 411),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_411)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_413(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 412),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_412)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_414(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 413),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_413)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_415(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 414),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_414)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_416(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 415),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_415)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_417(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 416),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_416)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_418(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 417),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_417)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_419(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 418),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_418)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_420(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 419),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_419)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_421(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 420),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_420)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_422(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 421),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_421)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_423(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 422),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_422)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_424(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 423),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_423)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_425(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 424),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_424)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_426(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 425),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_425)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_427(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 426),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_426)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_428(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 427),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_427)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_429(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 428),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_428)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_430(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 429),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_429)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_431(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 430),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_430)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_432(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 431),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_431)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_433(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 432),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_432)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_434(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 433),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_433)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_435(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 434),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_434)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_436(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 435),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_435)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_437(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 436),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_436)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_438(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 437),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_437)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_439(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 438),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_438)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_440(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 439),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_439)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_441(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 440),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_440)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_442(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 441),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_441)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_443(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 442),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_442)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_444(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 443),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_443)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_445(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 444),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_444)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_446(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 445),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_445)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_447(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 446),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_446)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_448(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 447),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_447)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_449(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 448),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_448)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_450(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 449),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_449)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_451(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 450),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_450)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_452(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 451),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_451)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_453(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 452),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_452)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_454(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 453),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_453)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_455(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 454),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_454)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_456(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 455),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_455)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_457(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 456),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_456)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_458(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 457),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_457)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_459(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 458),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_458)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_460(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 459),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_459)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_461(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 460),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_460)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_462(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 461),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_461)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_463(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 462),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_462)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_464(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 463),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_463)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_465(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 464),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_464)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_466(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 465),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_465)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_467(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 466),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_466)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_468(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 467),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_467)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_469(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 468),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_468)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_470(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 469),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_469)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_471(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 470),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_470)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_472(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 471),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_471)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_473(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 472),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_472)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_474(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 473),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_473)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_475(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 474),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_474)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_476(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 475),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_475)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_477(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 476),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_476)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_478(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 477),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_477)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_479(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 478),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_478)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_480(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 479),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_479)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_481(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 480),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_480)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_482(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 481),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_481)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_483(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 482),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_482)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_484(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 483),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_483)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_485(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 484),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_484)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_486(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 485),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_485)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_487(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 486),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_486)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_488(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 487),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_487)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_489(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 488),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_488)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_490(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 489),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_489)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_491(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 490),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_490)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_492(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 491),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_491)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_493(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 492),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_492)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_494(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 493),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_493)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_495(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 494),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_494)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_496(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 495),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_495)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_497(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 496),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_496)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_498(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 497),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_497)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_499(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 498),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_498)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_500(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 499),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_499)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_501(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 500),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_500)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_502(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 501),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_501)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_503(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 502),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_502)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_504(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 503),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_503)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_505(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 504),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_504)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_506(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 505),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_505)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_507(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 506),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_506)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_508(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 507),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_507)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_509(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 508),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_508)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_510(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 509),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_509)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_511(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 510),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_510)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_512(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 511),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_511)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_513(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 512),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_512)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_514(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 513),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_513)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_515(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 514),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_514)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_516(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 515),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_515)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_517(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 516),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_516)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_518(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 517),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_517)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_519(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 518),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_518)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_520(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 519),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_519)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_521(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 520),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_520)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_522(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 521),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_521)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_523(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 522),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_522)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_524(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 523),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_523)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_525(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 524),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_524)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_526(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 525),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_525)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_527(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 526),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_526)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_528(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 527),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_527)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_529(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 528),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_528)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_530(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 529),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_529)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_531(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 530),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_530)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_532(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 531),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_531)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_533(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 532),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_532)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_534(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 533),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_533)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_535(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 534),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_534)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_536(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 535),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_535)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_537(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 536),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_536)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_538(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 537),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_537)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_539(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 538),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_538)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_540(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 539),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_539)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_541(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 540),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_540)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_542(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 541),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_541)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_543(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 542),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_542)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_544(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 543),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_543)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_545(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 544),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_544)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_546(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 545),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_545)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_547(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 546),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_546)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_548(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 547),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_547)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_549(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 548),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_548)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_550(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 549),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_549)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_551(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 550),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_550)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_552(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 551),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_551)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_553(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 552),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_552)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_554(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 553),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_553)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_555(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 554),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_554)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_556(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 555),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_555)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_557(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 556),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_556)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_558(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 557),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_557)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_559(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 558),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_558)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_560(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 559),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_559)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_561(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 560),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_560)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_562(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 561),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_561)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_563(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 562),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_562)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_564(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 563),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_563)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_565(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 564),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_564)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_566(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 565),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_565)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_567(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 566),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_566)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_568(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 567),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_567)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_569(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 568),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_568)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_570(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 569),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_569)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_571(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 570),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_570)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_572(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 571),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_571)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_573(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 572),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_572)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_574(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 573),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_573)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_575(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 574),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_574)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_576(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 575),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_575)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_577(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 576),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_576)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_578(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 577),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_577)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_579(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 578),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_578)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_580(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 579),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_579)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_581(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 580),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_580)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_582(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 581),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_581)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_583(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 582),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_582)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_584(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 583),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_583)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_585(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 584),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_584)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_586(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 585),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_585)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_587(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 586),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_586)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_588(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 587),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_587)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_589(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 588),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_588)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_590(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 589),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_589)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_591(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 590),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_590)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_592(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 591),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_591)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_593(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 592),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_592)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_594(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 593),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_593)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_595(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 594),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_594)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_596(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 595),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_595)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_597(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 596),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_596)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_598(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 597),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_597)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_599(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 598),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_598)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_600(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 599),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_599)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_601(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 600),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_600)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_602(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 601),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_601)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_603(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 602),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_602)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_604(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 603),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_603)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_605(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 604),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_604)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_606(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 605),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_605)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_607(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 606),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_606)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_608(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 607),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_607)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_609(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 608),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_608)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_610(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 609),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_609)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_611(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 610),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_610)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_612(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 611),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_611)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_613(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 612),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_612)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_614(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 613),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_613)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_615(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 614),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_614)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_616(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 615),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_615)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_617(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 616),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_616)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_618(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 617),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_617)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_619(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 618),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_618)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_620(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 619),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_619)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_621(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 620),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_620)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_622(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 621),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_621)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_623(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 622),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_622)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_624(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 623),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_623)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_625(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 624),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_624)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_626(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 625),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_625)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_627(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 626),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_626)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_628(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 627),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_627)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_629(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 628),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_628)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_630(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 629),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_629)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_631(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 630),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_630)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_632(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 631),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_631)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_633(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 632),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_632)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_634(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 633),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_633)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_635(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 634),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_634)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_636(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 635),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_635)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_637(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 636),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_636)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_638(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 637),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_637)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_639(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 638),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_638)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_640(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 639),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_639)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_641(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 640),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_640)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_642(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 641),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_641)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_643(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 642),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_642)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_644(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 643),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_643)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_645(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 644),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_644)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_646(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 645),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_645)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_647(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 646),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_646)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_648(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 647),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_647)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_649(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 648),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_648)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_650(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 649),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_649)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_651(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 650),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_650)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_652(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 651),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_651)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_653(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 652),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_652)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_654(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 653),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_653)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_655(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 654),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_654)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_656(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 655),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_655)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_657(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 656),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_656)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_658(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 657),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_657)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_659(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 658),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_658)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_660(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 659),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_659)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_661(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 660),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_660)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_662(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 661),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_661)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_663(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 662),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_662)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_664(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 663),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_663)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_665(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 664),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_664)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_666(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 665),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_665)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_667(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 666),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_666)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_668(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 667),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_667)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_669(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 668),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_668)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_670(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 669),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_669)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_671(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 670),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_670)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_672(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 671),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_671)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_673(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 672),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_672)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_674(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 673),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_673)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_675(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 674),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_674)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_676(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 675),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_675)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_677(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 676),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_676)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_678(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 677),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_677)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_679(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 678),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_678)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_680(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 679),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_679)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_681(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 680),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_680)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_682(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 681),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_681)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_683(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 682),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_682)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_684(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 683),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_683)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_685(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 684),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_684)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_686(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 685),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_685)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_687(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 686),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_686)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_688(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 687),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_687)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_689(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 688),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_688)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_690(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 689),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_689)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_691(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 690),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_690)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_692(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 691),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_691)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_693(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 692),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_692)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_694(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 693),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_693)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_695(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 694),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_694)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_696(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 695),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_695)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_697(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 696),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_696)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_698(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 697),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_697)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_699(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 698),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_698)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_700(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 699),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_699)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_701(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 700),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_700)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_702(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 701),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_701)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_703(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 702),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_702)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_704(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 703),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_703)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_705(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 704),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_704)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_706(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 705),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_705)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_707(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 706),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_706)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_708(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 707),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_707)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_709(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 708),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_708)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_710(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 709),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_709)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_711(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 710),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_710)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_712(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 711),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_711)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_713(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 712),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_712)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_714(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 713),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_713)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_715(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 714),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_714)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_716(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 715),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_715)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_717(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 716),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_716)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_718(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 717),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_717)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_719(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 718),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_718)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_720(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 719),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_719)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_721(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 720),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_720)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_722(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 721),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_721)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_723(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 722),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_722)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_724(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 723),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_723)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_725(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 724),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_724)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_726(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 725),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_725)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_727(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 726),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_726)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_728(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 727),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_727)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_729(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 728),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_728)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_730(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 729),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_729)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_731(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 730),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_730)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_732(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 731),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_731)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_733(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 732),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_732)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_734(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 733),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_733)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_735(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 734),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_734)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_736(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 735),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_735)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_737(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 736),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_736)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_738(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 737),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_737)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_739(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 738),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_738)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_740(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 739),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_739)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_741(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 740),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_740)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_742(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 741),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_741)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_743(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 742),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_742)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_744(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 743),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_743)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_745(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 744),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_744)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_746(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 745),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_745)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_747(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 746),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_746)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_748(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 747),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_747)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_749(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 748),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_748)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_750(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 749),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_749)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_751(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 750),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_750)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_752(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 751),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_751)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_753(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 752),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_752)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_754(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 753),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_753)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_755(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 754),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_754)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_756(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 755),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_755)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_757(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 756),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_756)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_758(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 757),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_757)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_759(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 758),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_758)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_760(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 759),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_759)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_761(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 760),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_760)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_762(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 761),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_761)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_763(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 762),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_762)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_764(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 763),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_763)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_765(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 764),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_764)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_766(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 765),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_765)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_767(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 766),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_766)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_768(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 767),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_767)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_769(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 768),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_768)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_770(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 769),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_769)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_771(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 770),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_770)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_772(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 771),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_771)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_773(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 772),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_772)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_774(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 773),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_773)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_775(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 774),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_774)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_776(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 775),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_775)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_777(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 776),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_776)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_778(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 777),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_777)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_779(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 778),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_778)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_780(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 779),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_779)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_781(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 780),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_780)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_782(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 781),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_781)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_783(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 782),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_782)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_784(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 783),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_783)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_785(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 784),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_784)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_786(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 785),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_785)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_787(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 786),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_786)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_788(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 787),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_787)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_789(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 788),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_788)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_790(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 789),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_789)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_791(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 790),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_790)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_792(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 791),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_791)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_793(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 792),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_792)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_794(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 793),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_793)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_795(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 794),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_794)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_796(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 795),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_795)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_797(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 796),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_796)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_798(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 797),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_797)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_799(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 798),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_798)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_800(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 799),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_799)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_801(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 800),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_800)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_802(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 801),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_801)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_803(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 802),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_802)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_804(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 803),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_803)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_805(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 804),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_804)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_806(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 805),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_805)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_807(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 806),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_806)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_808(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 807),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_807)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_809(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 808),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_808)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_810(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 809),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_809)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_811(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 810),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_810)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_812(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 811),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_811)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_813(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 812),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_812)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_814(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 813),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_813)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_815(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 814),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_814)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_816(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 815),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_815)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_817(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 816),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_816)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_818(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 817),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_817)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_819(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 818),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_818)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_820(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 819),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_819)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_821(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 820),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_820)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_822(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 821),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_821)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_823(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 822),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_822)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_824(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 823),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_823)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_825(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 824),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_824)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_826(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 825),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_825)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_827(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 826),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_826)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_828(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 827),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_827)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_829(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 828),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_828)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_830(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 829),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_829)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_831(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 830),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_830)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_832(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 831),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_831)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_833(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 832),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_832)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_834(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 833),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_833)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_835(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 834),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_834)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_836(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 835),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_835)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_837(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 836),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_836)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_838(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 837),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_837)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_839(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 838),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_838)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_840(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 839),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_839)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_841(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 840),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_840)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_842(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 841),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_841)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_843(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 842),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_842)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_844(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 843),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_843)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_845(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 844),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_844)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_846(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 845),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_845)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_847(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 846),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_846)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_848(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 847),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_847)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_849(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 848),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_848)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_850(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 849),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_849)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_851(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 850),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_850)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_852(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 851),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_851)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_853(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 852),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_852)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_854(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 853),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_853)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_855(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 854),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_854)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_856(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 855),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_855)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_857(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 856),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_856)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_858(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 857),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_857)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_859(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 858),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_858)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_860(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 859),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_859)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_861(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 860),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_860)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_862(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 861),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_861)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_863(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 862),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_862)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_864(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 863),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_863)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_865(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 864),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_864)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_866(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 865),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_865)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_867(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 866),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_866)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_868(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 867),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_867)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_869(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 868),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_868)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_870(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 869),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_869)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_871(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 870),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_870)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_872(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 871),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_871)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_873(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 872),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_872)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_874(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 873),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_873)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_875(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 874),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_874)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_876(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 875),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_875)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_877(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 876),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_876)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_878(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 877),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_877)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_879(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 878),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_878)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_880(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 879),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_879)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_881(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 880),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_880)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_882(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 881),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_881)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_883(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 882),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_882)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_884(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 883),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_883)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_885(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 884),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_884)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_886(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 885),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_885)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_887(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 886),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_886)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_888(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 887),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_887)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_889(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 888),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_888)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_890(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 889),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_889)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_891(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 890),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_890)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_892(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 891),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_891)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_893(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 892),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_892)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_894(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 893),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_893)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_895(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 894),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_894)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_896(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 895),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_895)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_897(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 896),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_896)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_898(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 897),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_897)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_899(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 898),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_898)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_900(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 899),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_899)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_901(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 900),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_900)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_902(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 901),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_901)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_903(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 902),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_902)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_904(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 903),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_903)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_905(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 904),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_904)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_906(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 905),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_905)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_907(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 906),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_906)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_908(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 907),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_907)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_909(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 908),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_908)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_910(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 909),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_909)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_911(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 910),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_910)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_912(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 911),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_911)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_913(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 912),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_912)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_914(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 913),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_913)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_915(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 914),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_914)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_916(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 915),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_915)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_917(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 916),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_916)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_918(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 917),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_917)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_919(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 918),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_918)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_920(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 919),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_919)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_921(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 920),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_920)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_922(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 921),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_921)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_923(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 922),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_922)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_924(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 923),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_923)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_925(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 924),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_924)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_926(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 925),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_925)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_927(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 926),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_926)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_928(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 927),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_927)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_929(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 928),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_928)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_930(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 929),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_929)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_931(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 930),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_930)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_932(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 931),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_931)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_933(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 932),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_932)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_934(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 933),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_933)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_935(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 934),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_934)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_936(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 935),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_935)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_937(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 936),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_936)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_938(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 937),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_937)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_939(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 938),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_938)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_940(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 939),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_939)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_941(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 940),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_940)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_942(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 941),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_941)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_943(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 942),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_942)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_944(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 943),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_943)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_945(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 944),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_944)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_946(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 945),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_945)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_947(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 946),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_946)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_948(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 947),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_947)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_949(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 948),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_948)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_950(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 949),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_949)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_951(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 950),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_950)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_952(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 951),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_951)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_953(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 952),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_952)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_954(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 953),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_953)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_955(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 954),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_954)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_956(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 955),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_955)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_957(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 956),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_956)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_958(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 957),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_957)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_959(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 958),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_958)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_960(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 959),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_959)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_961(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 960),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_960)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_962(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 961),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_961)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_963(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 962),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_962)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_964(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 963),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_963)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_965(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 964),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_964)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_966(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 965),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_965)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_967(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 966),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_966)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_968(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 967),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_967)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_969(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 968),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_968)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_970(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 969),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_969)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_971(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 970),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_970)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_972(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 971),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_971)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_973(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 972),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_972)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_974(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 973),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_973)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_975(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 974),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_974)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_976(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 975),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_975)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_977(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 976),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_976)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_978(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 977),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_977)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_979(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 978),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_978)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_980(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 979),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_979)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_981(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 980),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_980)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_982(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 981),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_981)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_983(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 982),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_982)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_984(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 983),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_983)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_985(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 984),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_984)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_986(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 985),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_985)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_987(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 986),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_986)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_988(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 987),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_987)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_989(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 988),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_988)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_990(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 989),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_989)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_991(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 990),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_990)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_992(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 991),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_991)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_993(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 992),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_992)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_994(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 993),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_993)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_995(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 994),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_994)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_996(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 995),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_995)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_997(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 996),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_996)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_998(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 997),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_997)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_999(x)                                                           \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 998),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_998)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_1000(x)                                                          \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 999),                                                         \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_999)                                                             \
    (x)
#define MACROLOP_UINT_LESSER_REAL_1001(x)                                                          \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 1000),                                                        \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_1000)                                                            \
    (x)
#define MACROLOP_UINT_LESSER_REAL_1002(x)                                                          \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 1001),                                                        \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_1001)                                                            \
    (x)
#define MACROLOP_UINT_LESSER_REAL_1003(x)                                                          \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 1002),                                                        \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_1002)                                                            \
    (x)
#define MACROLOP_UINT_LESSER_REAL_1004(x)                                                          \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 1003),                                                        \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_1003)                                                            \
    (x)
#define MACROLOP_UINT_LESSER_REAL_1005(x)                                                          \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 1004),                                                        \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_1004)                                                            \
    (x)
#define MACROLOP_UINT_LESSER_REAL_1006(x)                                                          \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 1005),                                                        \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_1005)                                                            \
    (x)
#define MACROLOP_UINT_LESSER_REAL_1007(x)                                                          \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 1006),                                                        \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_1006)                                                            \
    (x)
#define MACROLOP_UINT_LESSER_REAL_1008(x)                                                          \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 1007),                                                        \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_1007)                                                            \
    (x)
#define MACROLOP_UINT_LESSER_REAL_1009(x)                                                          \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 1008),                                                        \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_1008)                                                            \
    (x)
#define MACROLOP_UINT_LESSER_REAL_1010(x)                                                          \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 1009),                                                        \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_1009)                                                            \
    (x)
#define MACROLOP_UINT_LESSER_REAL_1011(x)                                                          \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 1010),                                                        \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_1010)                                                            \
    (x)
#define MACROLOP_UINT_LESSER_REAL_1012(x)                                                          \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 1011),                                                        \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_1011)                                                            \
    (x)
#define MACROLOP_UINT_LESSER_REAL_1013(x)                                                          \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 1012),                                                        \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_1012)                                                            \
    (x)
#define MACROLOP_UINT_LESSER_REAL_1014(x)                                                          \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 1013),                                                        \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_1013)                                                            \
    (x)
#define MACROLOP_UINT_LESSER_REAL_1015(x)                                                          \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 1014),                                                        \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_1014)                                                            \
    (x)
#define MACROLOP_UINT_LESSER_REAL_1016(x)                                                          \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 1015),                                                        \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_1015)                                                            \
    (x)
#define MACROLOP_UINT_LESSER_REAL_1017(x)                                                          \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 1016),                                                        \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_1016)                                                            \
    (x)
#define MACROLOP_UINT_LESSER_REAL_1018(x)                                                          \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 1017),                                                        \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_1017)                                                            \
    (x)
#define MACROLOP_UINT_LESSER_REAL_1019(x)                                                          \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 1018),                                                        \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_1018)                                                            \
    (x)
#define MACROLOP_UINT_LESSER_REAL_1020(x)                                                          \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 1019),                                                        \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_1019)                                                            \
    (x)
#define MACROLOP_UINT_LESSER_REAL_1021(x)                                                          \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 1020),                                                        \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_1020)                                                            \
    (x)
#define MACROLOP_UINT_LESSER_REAL_1022(x)                                                          \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 1021),                                                        \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_1021)                                                            \
    (x)
#define MACROLOP_UINT_LESSER_REAL_1023(x)                                                          \
    MACROLOP_UINT_LESSER_REAL_IF(                                                                  \
        MACROLOP_UINT_EQ_REAL_AUX(x, 1022),                                                        \
        MACROLOP_UINT_LESSER_REAL_TRUE,                                                            \
        MACROLOP_UINT_LESSER_REAL_1022)                                                            \
    (x)

#define MACROLOP_UINT_LESSER_REAL_IF(cond, x, y)    MACROLOP_UINT_LESSER_REAL_IF_OVERLOAD(cond)(x, y)
#define MACROLOP_UINT_LESSER_REAL_IF_OVERLOAD(cond) MACROLOP_UINT_LESSER_REAL_IF_##cond

#define MACROLOP_UINT_LESSER_REAL_IF_0(_x, y) y
#define MACROLOP_UINT_LESSER_REAL_IF_1(x, _y) x

#define MACROLOP_UINT_LESSER_REAL_TRUE(_x) 1

#endif // MACROLOP_UINT_LESSER_H
