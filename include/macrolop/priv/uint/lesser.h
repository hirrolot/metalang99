#ifndef MACROLOP_PRIV_UINT_LESSER_H
#define MACROLOP_PRIV_UINT_LESSER_H

#include <macrolop/priv/aux.h>
#include <macrolop/priv/uint/eq.h>

#define MACROLOP_PRIV_UINT_LESSER(x, y) MACROLOP_PRIV_AUX_CAT(MACROLOP_PRIV_UINT_LESSER_, y)(x)

#define MACROLOP_PRIV_UINT_LESSER_0(_x) 0
#define MACROLOP_PRIV_UINT_LESSER_1(x)                                                             \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 0), MACROLOP_PRIV_UINT_LESSER_TRUE, MACROLOP_PRIV_UINT_LESSER_0)  \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_2(x)                                                             \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 1), MACROLOP_PRIV_UINT_LESSER_TRUE, MACROLOP_PRIV_UINT_LESSER_1)  \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_3(x)                                                             \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 2), MACROLOP_PRIV_UINT_LESSER_TRUE, MACROLOP_PRIV_UINT_LESSER_2)  \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_4(x)                                                             \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 3), MACROLOP_PRIV_UINT_LESSER_TRUE, MACROLOP_PRIV_UINT_LESSER_3)  \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_5(x)                                                             \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 4), MACROLOP_PRIV_UINT_LESSER_TRUE, MACROLOP_PRIV_UINT_LESSER_4)  \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_6(x)                                                             \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 5), MACROLOP_PRIV_UINT_LESSER_TRUE, MACROLOP_PRIV_UINT_LESSER_5)  \
    (x) /*  */
#define MACROLOP_PRIV_UINT_LESSER_7(x)                                                             \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 6), MACROLOP_PRIV_UINT_LESSER_TRUE, MACROLOP_PRIV_UINT_LESSER_6)  \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_8(x)                                                             \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 7), MACROLOP_PRIV_UINT_LESSER_TRUE, MACROLOP_PRIV_UINT_LESSER_7)  \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_9(x)                                                             \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 8), MACROLOP_PRIV_UINT_LESSER_TRUE, MACROLOP_PRIV_UINT_LESSER_8)  \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_10(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 9), MACROLOP_PRIV_UINT_LESSER_TRUE, MACROLOP_PRIV_UINT_LESSER_9)  \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_11(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 10), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_10)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_12(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 11), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_11)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_13(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 12), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_12)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_14(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 13), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_13)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_15(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 14), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_14)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_16(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 15), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_15)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_17(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 16), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_16)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_18(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 17), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_17)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_19(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 18), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_18)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_20(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 19), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_19)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_21(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 20), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_20)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_22(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 21), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_21)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_23(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 22), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_22)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_24(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 23), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_23)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_25(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 24), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_24)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_26(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 25), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_25)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_27(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 26), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_26)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_28(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 27), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_27)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_29(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 28), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_28)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_30(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 29), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_29)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_31(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 30), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_30)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_32(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 31), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_31)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_33(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 32), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_32)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_34(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 33), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_33)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_35(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 34), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_34)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_36(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 35), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_35)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_37(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 36), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_36)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_38(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 37), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_37)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_39(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 38), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_38)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_40(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 39), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_39)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_41(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 40), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_40)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_42(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 41), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_41)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_43(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 42), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_42)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_44(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 43), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_43)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_45(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 44), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_44)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_46(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 45), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_45)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_47(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 46), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_46)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_48(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 47), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_47)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_49(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 48), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_48)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_50(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 49), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_49)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_51(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 50), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_50)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_52(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 51), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_51)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_53(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 52), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_52)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_54(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 53), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_53)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_55(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 54), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_54)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_56(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 55), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_55)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_57(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 56), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_56)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_58(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 57), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_57)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_59(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 58), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_58)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_60(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 59), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_59)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_61(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 60), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_60)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_62(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 61), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_61)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_63(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 62), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_62)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_64(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 63), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_63)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_65(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 64), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_64)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_66(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 65), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_65)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_67(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 66), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_66)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_68(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 67), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_67)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_69(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 68), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_68)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_70(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 69), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_69)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_71(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 70), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_70)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_72(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 71), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_71)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_73(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 72), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_72)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_74(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 73), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_73)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_75(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 74), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_74)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_76(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 75), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_75)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_77(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 76), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_76)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_78(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 77), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_77)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_79(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 78), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_78)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_80(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 79), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_79)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_81(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 80), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_80)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_82(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 81), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_81)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_83(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 82), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_82)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_84(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 83), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_83)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_85(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 84), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_84)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_86(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 85), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_85)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_87(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 86), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_86)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_88(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 87), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_87)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_89(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 88), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_88)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_90(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 89), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_89)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_91(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 90), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_90)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_92(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 91), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_91)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_93(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 92), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_92)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_94(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 93), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_93)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_95(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 94), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_94)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_96(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 95), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_95)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_97(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 96), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_96)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_98(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 97), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_97)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_99(x)                                                            \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 98), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_98)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_100(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 99), MACROLOP_PRIV_UINT_LESSER_TRUE,                              \
        MACROLOP_PRIV_UINT_LESSER_99)                                                              \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_101(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 100), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_100)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_102(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 101), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_101)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_103(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 102), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_102)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_104(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 103), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_103)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_105(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 104), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_104)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_106(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 105), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_105)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_107(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 106), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_106)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_108(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 107), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_107)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_109(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 108), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_108)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_110(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 109), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_109)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_111(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 110), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_110)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_112(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 111), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_111)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_113(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 112), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_112)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_114(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 113), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_113)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_115(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 114), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_114)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_116(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 115), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_115)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_117(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 116), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_116)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_118(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 117), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_117)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_119(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 118), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_118)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_120(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 119), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_119)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_121(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 120), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_120)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_122(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 121), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_121)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_123(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 122), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_122)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_124(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 123), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_123)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_125(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 124), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_124)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_126(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 125), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_125)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_127(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 126), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_126)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_128(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 127), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_127)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_129(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 128), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_128)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_130(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 129), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_129)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_131(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 130), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_130)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_132(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 131), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_131)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_133(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 132), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_132)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_134(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 133), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_133)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_135(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 134), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_134)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_136(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 135), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_135)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_137(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 136), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_136)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_138(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 137), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_137)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_139(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 138), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_138)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_140(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 139), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_139)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_141(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 140), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_140)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_142(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 141), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_141)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_143(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 142), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_142)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_144(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 143), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_143)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_145(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 144), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_144)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_146(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 145), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_145)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_147(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 146), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_146)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_148(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 147), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_147)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_149(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 148), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_148)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_150(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 149), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_149)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_151(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 150), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_150)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_152(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 151), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_151)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_153(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 152), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_152)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_154(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 153), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_153)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_155(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 154), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_154)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_156(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 155), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_155)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_157(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 156), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_156)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_158(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 157), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_157)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_159(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 158), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_158)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_160(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 159), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_159)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_161(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 160), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_160)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_162(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 161), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_161)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_163(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 162), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_162)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_164(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 163), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_163)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_165(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 164), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_164)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_166(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 165), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_165)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_167(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 166), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_166)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_168(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 167), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_167)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_169(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 168), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_168)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_170(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 169), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_169)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_171(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 170), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_170)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_172(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 171), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_171)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_173(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 172), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_172)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_174(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 173), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_173)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_175(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 174), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_174)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_176(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 175), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_175)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_177(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 176), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_176)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_178(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 177), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_177)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_179(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 178), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_178)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_180(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 179), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_179)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_181(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 180), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_180)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_182(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 181), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_181)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_183(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 182), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_182)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_184(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 183), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_183)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_185(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 184), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_184)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_186(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 185), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_185)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_187(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 186), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_186)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_188(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 187), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_187)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_189(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 188), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_188)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_190(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 189), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_189)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_191(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 190), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_190)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_192(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 191), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_191)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_193(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 192), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_192)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_194(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 193), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_193)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_195(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 194), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_194)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_196(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 195), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_195)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_197(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 196), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_196)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_198(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 197), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_197)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_199(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 198), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_198)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_200(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 199), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_199)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_201(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 200), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_200)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_202(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 201), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_201)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_203(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 202), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_202)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_204(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 203), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_203)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_205(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 204), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_204)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_206(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 205), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_205)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_207(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 206), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_206)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_208(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 207), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_207)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_209(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 208), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_208)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_210(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 209), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_209)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_211(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 210), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_210)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_212(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 211), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_211)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_213(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 212), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_212)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_214(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 213), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_213)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_215(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 214), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_214)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_216(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 215), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_215)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_217(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 216), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_216)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_218(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 217), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_217)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_219(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 218), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_218)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_220(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 219), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_219)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_221(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 220), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_220)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_222(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 221), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_221)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_223(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 222), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_222)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_224(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 223), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_223)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_225(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 224), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_224)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_226(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 225), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_225)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_227(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 226), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_226)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_228(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 227), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_227)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_229(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 228), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_228)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_230(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 229), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_229)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_231(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 230), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_230)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_232(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 231), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_231)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_233(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 232), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_232)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_234(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 233), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_233)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_235(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 234), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_234)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_236(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 235), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_235)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_237(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 236), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_236)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_238(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 237), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_237)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_239(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 238), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_238)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_240(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 239), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_239)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_241(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 240), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_240)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_242(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 241), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_241)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_243(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 242), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_242)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_244(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 243), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_243)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_245(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 244), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_244)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_246(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 245), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_245)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_247(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 246), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_246)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_248(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 247), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_247)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_249(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 248), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_248)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_250(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 249), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_249)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_251(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 250), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_250)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_252(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 251), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_251)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_253(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 252), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_252)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_254(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 253), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_253)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_255(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 254), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_254)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_256(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 255), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_255)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_257(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 256), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_256)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_258(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 257), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_257)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_259(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 258), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_258)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_260(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 259), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_259)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_261(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 260), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_260)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_262(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 261), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_261)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_263(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 262), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_262)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_264(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 263), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_263)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_265(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 264), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_264)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_266(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 265), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_265)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_267(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 266), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_266)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_268(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 267), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_267)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_269(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 268), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_268)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_270(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 269), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_269)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_271(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 270), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_270)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_272(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 271), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_271)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_273(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 272), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_272)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_274(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 273), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_273)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_275(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 274), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_274)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_276(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 275), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_275)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_277(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 276), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_276)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_278(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 277), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_277)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_279(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 278), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_278)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_280(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 279), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_279)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_281(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 280), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_280)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_282(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 281), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_281)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_283(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 282), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_282)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_284(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 283), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_283)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_285(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 284), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_284)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_286(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 285), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_285)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_287(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 286), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_286)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_288(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 287), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_287)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_289(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 288), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_288)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_290(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 289), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_289)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_291(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 290), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_290)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_292(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 291), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_291)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_293(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 292), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_292)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_294(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 293), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_293)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_295(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 294), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_294)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_296(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 295), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_295)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_297(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 296), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_296)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_298(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 297), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_297)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_299(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 298), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_298)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_300(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 299), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_299)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_301(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 300), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_300)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_302(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 301), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_301)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_303(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 302), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_302)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_304(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 303), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_303)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_305(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 304), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_304)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_306(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 305), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_305)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_307(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 306), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_306)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_308(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 307), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_307)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_309(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 308), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_308)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_310(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 309), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_309)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_311(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 310), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_310)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_312(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 311), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_311)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_313(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 312), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_312)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_314(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 313), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_313)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_315(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 314), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_314)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_316(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 315), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_315)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_317(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 316), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_316)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_318(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 317), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_317)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_319(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 318), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_318)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_320(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 319), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_319)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_321(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 320), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_320)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_322(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 321), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_321)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_323(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 322), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_322)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_324(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 323), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_323)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_325(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 324), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_324)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_326(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 325), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_325)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_327(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 326), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_326)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_328(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 327), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_327)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_329(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 328), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_328)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_330(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 329), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_329)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_331(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 330), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_330)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_332(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 331), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_331)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_333(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 332), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_332)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_334(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 333), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_333)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_335(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 334), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_334)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_336(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 335), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_335)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_337(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 336), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_336)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_338(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 337), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_337)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_339(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 338), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_338)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_340(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 339), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_339)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_341(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 340), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_340)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_342(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 341), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_341)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_343(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 342), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_342)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_344(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 343), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_343)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_345(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 344), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_344)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_346(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 345), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_345)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_347(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 346), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_346)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_348(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 347), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_347)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_349(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 348), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_348)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_350(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 349), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_349)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_351(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 350), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_350)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_352(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 351), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_351)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_353(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 352), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_352)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_354(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 353), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_353)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_355(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 354), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_354)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_356(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 355), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_355)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_357(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 356), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_356)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_358(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 357), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_357)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_359(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 358), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_358)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_360(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 359), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_359)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_361(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 360), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_360)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_362(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 361), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_361)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_363(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 362), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_362)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_364(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 363), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_363)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_365(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 364), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_364)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_366(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 365), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_365)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_367(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 366), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_366)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_368(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 367), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_367)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_369(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 368), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_368)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_370(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 369), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_369)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_371(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 370), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_370)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_372(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 371), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_371)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_373(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 372), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_372)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_374(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 373), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_373)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_375(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 374), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_374)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_376(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 375), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_375)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_377(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 376), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_376)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_378(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 377), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_377)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_379(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 378), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_378)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_380(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 379), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_379)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_381(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 380), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_380)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_382(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 381), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_381)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_383(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 382), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_382)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_384(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 383), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_383)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_385(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 384), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_384)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_386(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 385), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_385)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_387(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 386), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_386)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_388(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 387), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_387)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_389(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 388), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_388)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_390(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 389), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_389)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_391(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 390), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_390)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_392(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 391), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_391)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_393(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 392), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_392)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_394(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 393), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_393)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_395(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 394), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_394)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_396(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 395), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_395)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_397(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 396), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_396)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_398(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 397), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_397)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_399(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 398), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_398)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_400(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 399), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_399)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_401(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 400), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_400)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_402(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 401), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_401)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_403(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 402), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_402)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_404(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 403), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_403)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_405(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 404), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_404)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_406(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 405), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_405)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_407(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 406), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_406)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_408(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 407), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_407)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_409(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 408), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_408)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_410(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 409), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_409)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_411(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 410), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_410)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_412(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 411), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_411)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_413(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 412), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_412)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_414(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 413), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_413)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_415(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 414), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_414)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_416(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 415), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_415)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_417(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 416), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_416)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_418(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 417), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_417)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_419(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 418), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_418)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_420(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 419), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_419)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_421(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 420), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_420)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_422(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 421), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_421)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_423(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 422), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_422)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_424(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 423), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_423)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_425(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 424), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_424)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_426(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 425), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_425)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_427(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 426), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_426)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_428(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 427), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_427)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_429(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 428), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_428)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_430(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 429), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_429)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_431(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 430), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_430)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_432(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 431), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_431)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_433(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 432), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_432)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_434(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 433), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_433)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_435(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 434), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_434)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_436(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 435), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_435)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_437(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 436), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_436)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_438(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 437), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_437)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_439(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 438), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_438)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_440(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 439), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_439)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_441(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 440), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_440)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_442(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 441), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_441)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_443(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 442), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_442)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_444(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 443), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_443)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_445(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 444), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_444)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_446(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 445), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_445)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_447(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 446), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_446)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_448(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 447), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_447)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_449(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 448), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_448)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_450(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 449), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_449)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_451(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 450), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_450)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_452(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 451), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_451)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_453(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 452), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_452)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_454(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 453), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_453)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_455(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 454), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_454)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_456(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 455), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_455)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_457(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 456), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_456)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_458(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 457), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_457)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_459(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 458), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_458)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_460(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 459), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_459)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_461(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 460), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_460)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_462(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 461), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_461)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_463(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 462), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_462)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_464(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 463), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_463)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_465(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 464), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_464)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_466(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 465), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_465)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_467(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 466), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_466)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_468(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 467), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_467)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_469(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 468), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_468)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_470(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 469), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_469)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_471(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 470), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_470)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_472(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 471), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_471)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_473(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 472), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_472)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_474(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 473), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_473)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_475(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 474), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_474)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_476(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 475), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_475)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_477(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 476), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_476)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_478(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 477), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_477)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_479(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 478), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_478)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_480(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 479), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_479)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_481(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 480), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_480)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_482(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 481), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_481)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_483(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 482), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_482)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_484(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 483), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_483)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_485(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 484), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_484)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_486(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 485), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_485)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_487(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 486), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_486)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_488(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 487), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_487)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_489(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 488), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_488)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_490(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 489), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_489)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_491(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 490), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_490)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_492(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 491), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_491)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_493(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 492), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_492)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_494(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 493), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_493)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_495(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 494), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_494)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_496(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 495), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_495)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_497(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 496), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_496)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_498(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 497), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_497)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_499(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 498), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_498)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_500(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 499), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_499)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_501(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 500), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_500)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_502(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 501), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_501)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_503(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 502), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_502)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_504(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 503), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_503)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_505(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 504), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_504)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_506(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 505), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_505)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_507(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 506), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_506)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_508(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 507), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_507)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_509(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 508), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_508)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_510(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 509), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_509)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_511(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 510), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_510)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_512(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 511), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_511)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_513(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 512), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_512)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_514(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 513), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_513)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_515(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 514), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_514)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_516(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 515), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_515)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_517(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 516), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_516)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_518(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 517), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_517)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_519(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 518), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_518)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_520(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 519), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_519)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_521(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 520), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_520)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_522(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 521), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_521)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_523(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 522), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_522)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_524(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 523), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_523)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_525(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 524), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_524)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_526(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 525), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_525)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_527(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 526), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_526)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_528(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 527), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_527)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_529(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 528), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_528)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_530(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 529), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_529)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_531(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 530), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_530)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_532(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 531), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_531)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_533(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 532), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_532)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_534(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 533), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_533)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_535(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 534), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_534)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_536(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 535), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_535)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_537(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 536), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_536)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_538(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 537), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_537)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_539(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 538), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_538)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_540(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 539), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_539)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_541(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 540), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_540)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_542(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 541), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_541)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_543(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 542), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_542)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_544(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 543), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_543)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_545(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 544), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_544)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_546(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 545), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_545)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_547(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 546), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_546)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_548(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 547), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_547)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_549(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 548), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_548)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_550(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 549), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_549)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_551(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 550), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_550)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_552(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 551), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_551)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_553(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 552), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_552)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_554(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 553), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_553)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_555(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 554), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_554)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_556(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 555), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_555)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_557(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 556), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_556)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_558(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 557), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_557)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_559(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 558), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_558)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_560(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 559), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_559)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_561(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 560), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_560)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_562(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 561), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_561)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_563(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 562), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_562)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_564(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 563), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_563)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_565(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 564), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_564)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_566(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 565), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_565)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_567(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 566), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_566)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_568(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 567), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_567)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_569(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 568), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_568)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_570(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 569), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_569)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_571(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 570), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_570)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_572(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 571), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_571)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_573(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 572), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_572)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_574(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 573), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_573)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_575(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 574), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_574)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_576(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 575), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_575)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_577(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 576), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_576)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_578(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 577), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_577)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_579(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 578), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_578)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_580(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 579), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_579)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_581(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 580), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_580)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_582(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 581), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_581)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_583(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 582), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_582)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_584(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 583), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_583)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_585(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 584), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_584)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_586(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 585), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_585)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_587(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 586), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_586)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_588(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 587), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_587)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_589(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 588), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_588)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_590(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 589), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_589)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_591(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 590), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_590)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_592(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 591), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_591)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_593(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 592), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_592)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_594(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 593), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_593)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_595(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 594), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_594)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_596(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 595), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_595)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_597(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 596), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_596)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_598(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 597), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_597)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_599(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 598), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_598)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_600(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 599), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_599)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_601(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 600), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_600)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_602(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 601), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_601)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_603(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 602), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_602)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_604(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 603), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_603)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_605(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 604), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_604)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_606(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 605), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_605)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_607(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 606), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_606)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_608(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 607), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_607)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_609(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 608), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_608)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_610(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 609), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_609)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_611(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 610), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_610)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_612(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 611), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_611)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_613(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 612), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_612)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_614(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 613), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_613)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_615(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 614), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_614)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_616(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 615), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_615)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_617(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 616), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_616)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_618(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 617), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_617)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_619(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 618), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_618)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_620(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 619), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_619)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_621(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 620), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_620)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_622(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 621), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_621)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_623(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 622), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_622)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_624(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 623), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_623)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_625(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 624), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_624)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_626(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 625), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_625)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_627(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 626), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_626)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_628(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 627), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_627)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_629(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 628), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_628)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_630(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 629), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_629)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_631(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 630), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_630)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_632(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 631), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_631)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_633(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 632), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_632)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_634(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 633), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_633)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_635(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 634), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_634)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_636(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 635), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_635)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_637(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 636), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_636)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_638(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 637), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_637)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_639(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 638), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_638)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_640(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 639), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_639)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_641(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 640), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_640)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_642(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 641), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_641)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_643(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 642), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_642)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_644(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 643), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_643)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_645(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 644), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_644)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_646(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 645), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_645)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_647(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 646), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_646)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_648(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 647), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_647)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_649(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 648), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_648)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_650(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 649), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_649)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_651(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 650), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_650)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_652(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 651), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_651)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_653(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 652), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_652)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_654(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 653), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_653)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_655(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 654), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_654)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_656(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 655), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_655)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_657(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 656), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_656)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_658(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 657), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_657)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_659(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 658), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_658)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_660(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 659), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_659)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_661(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 660), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_660)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_662(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 661), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_661)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_663(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 662), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_662)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_664(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 663), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_663)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_665(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 664), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_664)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_666(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 665), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_665)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_667(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 666), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_666)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_668(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 667), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_667)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_669(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 668), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_668)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_670(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 669), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_669)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_671(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 670), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_670)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_672(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 671), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_671)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_673(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 672), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_672)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_674(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 673), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_673)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_675(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 674), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_674)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_676(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 675), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_675)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_677(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 676), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_676)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_678(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 677), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_677)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_679(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 678), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_678)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_680(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 679), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_679)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_681(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 680), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_680)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_682(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 681), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_681)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_683(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 682), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_682)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_684(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 683), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_683)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_685(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 684), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_684)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_686(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 685), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_685)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_687(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 686), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_686)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_688(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 687), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_687)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_689(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 688), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_688)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_690(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 689), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_689)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_691(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 690), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_690)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_692(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 691), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_691)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_693(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 692), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_692)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_694(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 693), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_693)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_695(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 694), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_694)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_696(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 695), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_695)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_697(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 696), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_696)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_698(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 697), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_697)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_699(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 698), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_698)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_700(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 699), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_699)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_701(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 700), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_700)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_702(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 701), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_701)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_703(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 702), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_702)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_704(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 703), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_703)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_705(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 704), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_704)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_706(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 705), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_705)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_707(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 706), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_706)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_708(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 707), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_707)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_709(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 708), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_708)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_710(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 709), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_709)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_711(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 710), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_710)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_712(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 711), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_711)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_713(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 712), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_712)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_714(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 713), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_713)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_715(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 714), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_714)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_716(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 715), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_715)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_717(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 716), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_716)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_718(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 717), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_717)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_719(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 718), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_718)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_720(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 719), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_719)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_721(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 720), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_720)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_722(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 721), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_721)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_723(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 722), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_722)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_724(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 723), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_723)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_725(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 724), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_724)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_726(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 725), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_725)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_727(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 726), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_726)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_728(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 727), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_727)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_729(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 728), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_728)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_730(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 729), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_729)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_731(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 730), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_730)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_732(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 731), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_731)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_733(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 732), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_732)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_734(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 733), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_733)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_735(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 734), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_734)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_736(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 735), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_735)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_737(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 736), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_736)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_738(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 737), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_737)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_739(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 738), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_738)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_740(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 739), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_739)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_741(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 740), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_740)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_742(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 741), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_741)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_743(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 742), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_742)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_744(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 743), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_743)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_745(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 744), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_744)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_746(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 745), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_745)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_747(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 746), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_746)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_748(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 747), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_747)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_749(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 748), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_748)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_750(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 749), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_749)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_751(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 750), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_750)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_752(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 751), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_751)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_753(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 752), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_752)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_754(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 753), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_753)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_755(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 754), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_754)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_756(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 755), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_755)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_757(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 756), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_756)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_758(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 757), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_757)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_759(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 758), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_758)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_760(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 759), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_759)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_761(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 760), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_760)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_762(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 761), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_761)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_763(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 762), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_762)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_764(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 763), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_763)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_765(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 764), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_764)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_766(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 765), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_765)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_767(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 766), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_766)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_768(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 767), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_767)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_769(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 768), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_768)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_770(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 769), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_769)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_771(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 770), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_770)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_772(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 771), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_771)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_773(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 772), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_772)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_774(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 773), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_773)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_775(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 774), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_774)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_776(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 775), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_775)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_777(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 776), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_776)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_778(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 777), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_777)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_779(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 778), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_778)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_780(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 779), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_779)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_781(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 780), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_780)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_782(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 781), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_781)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_783(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 782), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_782)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_784(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 783), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_783)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_785(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 784), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_784)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_786(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 785), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_785)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_787(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 786), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_786)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_788(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 787), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_787)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_789(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 788), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_788)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_790(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 789), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_789)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_791(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 790), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_790)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_792(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 791), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_791)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_793(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 792), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_792)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_794(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 793), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_793)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_795(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 794), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_794)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_796(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 795), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_795)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_797(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 796), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_796)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_798(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 797), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_797)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_799(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 798), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_798)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_800(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 799), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_799)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_801(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 800), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_800)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_802(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 801), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_801)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_803(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 802), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_802)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_804(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 803), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_803)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_805(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 804), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_804)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_806(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 805), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_805)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_807(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 806), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_806)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_808(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 807), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_807)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_809(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 808), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_808)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_810(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 809), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_809)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_811(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 810), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_810)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_812(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 811), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_811)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_813(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 812), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_812)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_814(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 813), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_813)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_815(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 814), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_814)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_816(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 815), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_815)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_817(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 816), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_816)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_818(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 817), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_817)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_819(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 818), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_818)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_820(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 819), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_819)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_821(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 820), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_820)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_822(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 821), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_821)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_823(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 822), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_822)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_824(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 823), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_823)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_825(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 824), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_824)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_826(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 825), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_825)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_827(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 826), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_826)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_828(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 827), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_827)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_829(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 828), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_828)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_830(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 829), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_829)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_831(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 830), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_830)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_832(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 831), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_831)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_833(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 832), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_832)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_834(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 833), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_833)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_835(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 834), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_834)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_836(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 835), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_835)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_837(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 836), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_836)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_838(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 837), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_837)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_839(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 838), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_838)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_840(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 839), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_839)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_841(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 840), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_840)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_842(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 841), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_841)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_843(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 842), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_842)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_844(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 843), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_843)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_845(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 844), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_844)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_846(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 845), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_845)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_847(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 846), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_846)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_848(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 847), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_847)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_849(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 848), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_848)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_850(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 849), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_849)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_851(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 850), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_850)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_852(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 851), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_851)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_853(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 852), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_852)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_854(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 853), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_853)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_855(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 854), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_854)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_856(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 855), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_855)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_857(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 856), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_856)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_858(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 857), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_857)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_859(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 858), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_858)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_860(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 859), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_859)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_861(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 860), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_860)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_862(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 861), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_861)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_863(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 862), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_862)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_864(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 863), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_863)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_865(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 864), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_864)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_866(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 865), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_865)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_867(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 866), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_866)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_868(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 867), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_867)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_869(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 868), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_868)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_870(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 869), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_869)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_871(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 870), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_870)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_872(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 871), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_871)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_873(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 872), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_872)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_874(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 873), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_873)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_875(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 874), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_874)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_876(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 875), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_875)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_877(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 876), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_876)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_878(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 877), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_877)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_879(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 878), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_878)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_880(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 879), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_879)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_881(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 880), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_880)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_882(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 881), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_881)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_883(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 882), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_882)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_884(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 883), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_883)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_885(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 884), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_884)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_886(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 885), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_885)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_887(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 886), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_886)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_888(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 887), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_887)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_889(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 888), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_888)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_890(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 889), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_889)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_891(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 890), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_890)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_892(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 891), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_891)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_893(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 892), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_892)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_894(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 893), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_893)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_895(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 894), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_894)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_896(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 895), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_895)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_897(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 896), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_896)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_898(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 897), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_897)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_899(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 898), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_898)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_900(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 899), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_899)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_901(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 900), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_900)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_902(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 901), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_901)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_903(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 902), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_902)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_904(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 903), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_903)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_905(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 904), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_904)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_906(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 905), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_905)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_907(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 906), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_906)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_908(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 907), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_907)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_909(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 908), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_908)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_910(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 909), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_909)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_911(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 910), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_910)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_912(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 911), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_911)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_913(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 912), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_912)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_914(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 913), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_913)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_915(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 914), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_914)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_916(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 915), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_915)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_917(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 916), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_916)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_918(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 917), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_917)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_919(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 918), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_918)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_920(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 919), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_919)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_921(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 920), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_920)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_922(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 921), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_921)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_923(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 922), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_922)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_924(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 923), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_923)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_925(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 924), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_924)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_926(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 925), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_925)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_927(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 926), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_926)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_928(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 927), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_927)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_929(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 928), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_928)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_930(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 929), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_929)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_931(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 930), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_930)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_932(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 931), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_931)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_933(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 932), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_932)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_934(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 933), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_933)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_935(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 934), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_934)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_936(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 935), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_935)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_937(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 936), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_936)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_938(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 937), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_937)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_939(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 938), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_938)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_940(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 939), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_939)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_941(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 940), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_940)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_942(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 941), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_941)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_943(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 942), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_942)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_944(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 943), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_943)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_945(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 944), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_944)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_946(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 945), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_945)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_947(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 946), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_946)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_948(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 947), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_947)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_949(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 948), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_948)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_950(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 949), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_949)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_951(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 950), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_950)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_952(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 951), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_951)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_953(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 952), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_952)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_954(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 953), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_953)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_955(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 954), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_954)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_956(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 955), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_955)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_957(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 956), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_956)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_958(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 957), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_957)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_959(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 958), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_958)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_960(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 959), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_959)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_961(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 960), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_960)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_962(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 961), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_961)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_963(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 962), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_962)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_964(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 963), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_963)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_965(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 964), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_964)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_966(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 965), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_965)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_967(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 966), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_966)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_968(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 967), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_967)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_969(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 968), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_968)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_970(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 969), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_969)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_971(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 970), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_970)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_972(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 971), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_971)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_973(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 972), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_972)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_974(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 973), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_973)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_975(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 974), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_974)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_976(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 975), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_975)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_977(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 976), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_976)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_978(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 977), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_977)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_979(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 978), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_978)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_980(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 979), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_979)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_981(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 980), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_980)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_982(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 981), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_981)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_983(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 982), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_982)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_984(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 983), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_983)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_985(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 984), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_984)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_986(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 985), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_985)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_987(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 986), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_986)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_988(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 987), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_987)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_989(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 988), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_988)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_990(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 989), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_989)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_991(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 990), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_990)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_992(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 991), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_991)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_993(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 992), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_992)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_994(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 993), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_993)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_995(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 994), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_994)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_996(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 995), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_995)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_997(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 996), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_996)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_998(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 997), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_997)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_999(x)                                                           \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 998), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_998)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_1000(x)                                                          \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 999), MACROLOP_PRIV_UINT_LESSER_TRUE,                             \
        MACROLOP_PRIV_UINT_LESSER_999)                                                             \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_1001(x)                                                          \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 1000), MACROLOP_PRIV_UINT_LESSER_TRUE,                            \
        MACROLOP_PRIV_UINT_LESSER_1000)                                                            \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_1002(x)                                                          \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 1001), MACROLOP_PRIV_UINT_LESSER_TRUE,                            \
        MACROLOP_PRIV_UINT_LESSER_1001)                                                            \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_1003(x)                                                          \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 1002), MACROLOP_PRIV_UINT_LESSER_TRUE,                            \
        MACROLOP_PRIV_UINT_LESSER_1002)                                                            \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_1004(x)                                                          \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 1003), MACROLOP_PRIV_UINT_LESSER_TRUE,                            \
        MACROLOP_PRIV_UINT_LESSER_1003)                                                            \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_1005(x)                                                          \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 1004), MACROLOP_PRIV_UINT_LESSER_TRUE,                            \
        MACROLOP_PRIV_UINT_LESSER_1004)                                                            \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_1006(x)                                                          \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 1005), MACROLOP_PRIV_UINT_LESSER_TRUE,                            \
        MACROLOP_PRIV_UINT_LESSER_1005)                                                            \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_1007(x)                                                          \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 1006), MACROLOP_PRIV_UINT_LESSER_TRUE,                            \
        MACROLOP_PRIV_UINT_LESSER_1006)                                                            \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_1008(x)                                                          \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 1007), MACROLOP_PRIV_UINT_LESSER_TRUE,                            \
        MACROLOP_PRIV_UINT_LESSER_1007)                                                            \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_1009(x)                                                          \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 1008), MACROLOP_PRIV_UINT_LESSER_TRUE,                            \
        MACROLOP_PRIV_UINT_LESSER_1008)                                                            \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_1010(x)                                                          \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 1009), MACROLOP_PRIV_UINT_LESSER_TRUE,                            \
        MACROLOP_PRIV_UINT_LESSER_1009)                                                            \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_1011(x)                                                          \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 1010), MACROLOP_PRIV_UINT_LESSER_TRUE,                            \
        MACROLOP_PRIV_UINT_LESSER_1010)                                                            \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_1012(x)                                                          \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 1011), MACROLOP_PRIV_UINT_LESSER_TRUE,                            \
        MACROLOP_PRIV_UINT_LESSER_1011)                                                            \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_1013(x)                                                          \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 1012), MACROLOP_PRIV_UINT_LESSER_TRUE,                            \
        MACROLOP_PRIV_UINT_LESSER_1012)                                                            \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_1014(x)                                                          \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 1013), MACROLOP_PRIV_UINT_LESSER_TRUE,                            \
        MACROLOP_PRIV_UINT_LESSER_1013)                                                            \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_1015(x)                                                          \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 1014), MACROLOP_PRIV_UINT_LESSER_TRUE,                            \
        MACROLOP_PRIV_UINT_LESSER_1014)                                                            \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_1016(x)                                                          \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 1015), MACROLOP_PRIV_UINT_LESSER_TRUE,                            \
        MACROLOP_PRIV_UINT_LESSER_1015)                                                            \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_1017(x)                                                          \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 1016), MACROLOP_PRIV_UINT_LESSER_TRUE,                            \
        MACROLOP_PRIV_UINT_LESSER_1016)                                                            \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_1018(x)                                                          \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 1017), MACROLOP_PRIV_UINT_LESSER_TRUE,                            \
        MACROLOP_PRIV_UINT_LESSER_1017)                                                            \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_1019(x)                                                          \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 1018), MACROLOP_PRIV_UINT_LESSER_TRUE,                            \
        MACROLOP_PRIV_UINT_LESSER_1018)                                                            \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_1020(x)                                                          \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 1019), MACROLOP_PRIV_UINT_LESSER_TRUE,                            \
        MACROLOP_PRIV_UINT_LESSER_1019)                                                            \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_1021(x)                                                          \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 1020), MACROLOP_PRIV_UINT_LESSER_TRUE,                            \
        MACROLOP_PRIV_UINT_LESSER_1020)                                                            \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_1022(x)                                                          \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 1021), MACROLOP_PRIV_UINT_LESSER_TRUE,                            \
        MACROLOP_PRIV_UINT_LESSER_1021)                                                            \
    (x)
#define MACROLOP_PRIV_UINT_LESSER_1023(x)                                                          \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(x, 1022), MACROLOP_PRIV_UINT_LESSER_TRUE,                            \
        MACROLOP_PRIV_UINT_LESSER_1022)                                                            \
    (x)

#define MACROLOP_PRIV_UINT_LESSER_TRUE(_x) 1

#endif // MACROLOP_PRIV_UINT_LESSER_H
