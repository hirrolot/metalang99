#ifndef EPILEPSY_PRIV_UINT_LESSER_H
#define EPILEPSY_PRIV_UINT_LESSER_H

#include <epilepsy/priv/aux.h>
#include <epilepsy/priv/uint/eq.h>

#define EPILEPSY_PRIV_UINT_LESSER(x, y) EPILEPSY_PRIV_AUX_CAT(EPILEPSY_PRIV_UINT_LESSER_, y)(x)

#define EPILEPSY_PRIV_UINT_LESSER_0(_x) 0
#define EPILEPSY_PRIV_UINT_LESSER_1(x)                                                             \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 0), EPILEPSY_PRIV_UINT_LESSER_TRUE, EPILEPSY_PRIV_UINT_LESSER_0)  \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_2(x)                                                             \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 1), EPILEPSY_PRIV_UINT_LESSER_TRUE, EPILEPSY_PRIV_UINT_LESSER_1)  \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_3(x)                                                             \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 2), EPILEPSY_PRIV_UINT_LESSER_TRUE, EPILEPSY_PRIV_UINT_LESSER_2)  \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_4(x)                                                             \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 3), EPILEPSY_PRIV_UINT_LESSER_TRUE, EPILEPSY_PRIV_UINT_LESSER_3)  \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_5(x)                                                             \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 4), EPILEPSY_PRIV_UINT_LESSER_TRUE, EPILEPSY_PRIV_UINT_LESSER_4)  \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_6(x)                                                             \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 5), EPILEPSY_PRIV_UINT_LESSER_TRUE, EPILEPSY_PRIV_UINT_LESSER_5)  \
    (x) /*  */
#define EPILEPSY_PRIV_UINT_LESSER_7(x)                                                             \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 6), EPILEPSY_PRIV_UINT_LESSER_TRUE, EPILEPSY_PRIV_UINT_LESSER_6)  \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_8(x)                                                             \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 7), EPILEPSY_PRIV_UINT_LESSER_TRUE, EPILEPSY_PRIV_UINT_LESSER_7)  \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_9(x)                                                             \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 8), EPILEPSY_PRIV_UINT_LESSER_TRUE, EPILEPSY_PRIV_UINT_LESSER_8)  \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_10(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 9), EPILEPSY_PRIV_UINT_LESSER_TRUE, EPILEPSY_PRIV_UINT_LESSER_9)  \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_11(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 10), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_10)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_12(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 11), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_11)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_13(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 12), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_12)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_14(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 13), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_13)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_15(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 14), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_14)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_16(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 15), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_15)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_17(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 16), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_16)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_18(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 17), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_17)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_19(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 18), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_18)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_20(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 19), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_19)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_21(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 20), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_20)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_22(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 21), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_21)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_23(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 22), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_22)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_24(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 23), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_23)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_25(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 24), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_24)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_26(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 25), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_25)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_27(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 26), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_26)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_28(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 27), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_27)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_29(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 28), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_28)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_30(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 29), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_29)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_31(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 30), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_30)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_32(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 31), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_31)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_33(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 32), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_32)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_34(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 33), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_33)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_35(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 34), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_34)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_36(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 35), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_35)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_37(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 36), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_36)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_38(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 37), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_37)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_39(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 38), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_38)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_40(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 39), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_39)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_41(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 40), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_40)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_42(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 41), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_41)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_43(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 42), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_42)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_44(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 43), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_43)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_45(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 44), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_44)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_46(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 45), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_45)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_47(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 46), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_46)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_48(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 47), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_47)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_49(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 48), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_48)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_50(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 49), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_49)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_51(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 50), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_50)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_52(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 51), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_51)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_53(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 52), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_52)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_54(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 53), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_53)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_55(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 54), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_54)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_56(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 55), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_55)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_57(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 56), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_56)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_58(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 57), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_57)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_59(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 58), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_58)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_60(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 59), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_59)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_61(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 60), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_60)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_62(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 61), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_61)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_63(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 62), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_62)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_64(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 63), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_63)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_65(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 64), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_64)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_66(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 65), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_65)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_67(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 66), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_66)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_68(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 67), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_67)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_69(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 68), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_68)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_70(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 69), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_69)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_71(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 70), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_70)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_72(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 71), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_71)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_73(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 72), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_72)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_74(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 73), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_73)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_75(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 74), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_74)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_76(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 75), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_75)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_77(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 76), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_76)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_78(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 77), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_77)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_79(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 78), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_78)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_80(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 79), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_79)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_81(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 80), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_80)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_82(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 81), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_81)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_83(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 82), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_82)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_84(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 83), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_83)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_85(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 84), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_84)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_86(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 85), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_85)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_87(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 86), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_86)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_88(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 87), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_87)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_89(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 88), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_88)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_90(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 89), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_89)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_91(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 90), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_90)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_92(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 91), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_91)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_93(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 92), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_92)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_94(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 93), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_93)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_95(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 94), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_94)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_96(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 95), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_95)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_97(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 96), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_96)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_98(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 97), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_97)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_99(x)                                                            \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 98), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_98)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_100(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 99), EPILEPSY_PRIV_UINT_LESSER_TRUE,                              \
        EPILEPSY_PRIV_UINT_LESSER_99)                                                              \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_101(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 100), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_100)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_102(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 101), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_101)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_103(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 102), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_102)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_104(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 103), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_103)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_105(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 104), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_104)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_106(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 105), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_105)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_107(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 106), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_106)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_108(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 107), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_107)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_109(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 108), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_108)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_110(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 109), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_109)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_111(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 110), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_110)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_112(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 111), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_111)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_113(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 112), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_112)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_114(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 113), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_113)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_115(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 114), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_114)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_116(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 115), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_115)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_117(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 116), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_116)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_118(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 117), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_117)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_119(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 118), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_118)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_120(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 119), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_119)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_121(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 120), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_120)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_122(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 121), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_121)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_123(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 122), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_122)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_124(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 123), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_123)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_125(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 124), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_124)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_126(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 125), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_125)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_127(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 126), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_126)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_128(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 127), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_127)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_129(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 128), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_128)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_130(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 129), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_129)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_131(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 130), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_130)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_132(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 131), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_131)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_133(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 132), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_132)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_134(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 133), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_133)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_135(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 134), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_134)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_136(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 135), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_135)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_137(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 136), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_136)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_138(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 137), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_137)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_139(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 138), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_138)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_140(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 139), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_139)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_141(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 140), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_140)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_142(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 141), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_141)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_143(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 142), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_142)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_144(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 143), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_143)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_145(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 144), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_144)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_146(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 145), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_145)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_147(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 146), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_146)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_148(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 147), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_147)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_149(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 148), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_148)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_150(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 149), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_149)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_151(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 150), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_150)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_152(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 151), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_151)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_153(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 152), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_152)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_154(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 153), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_153)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_155(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 154), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_154)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_156(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 155), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_155)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_157(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 156), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_156)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_158(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 157), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_157)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_159(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 158), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_158)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_160(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 159), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_159)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_161(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 160), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_160)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_162(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 161), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_161)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_163(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 162), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_162)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_164(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 163), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_163)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_165(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 164), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_164)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_166(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 165), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_165)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_167(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 166), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_166)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_168(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 167), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_167)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_169(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 168), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_168)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_170(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 169), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_169)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_171(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 170), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_170)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_172(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 171), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_171)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_173(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 172), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_172)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_174(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 173), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_173)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_175(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 174), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_174)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_176(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 175), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_175)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_177(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 176), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_176)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_178(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 177), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_177)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_179(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 178), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_178)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_180(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 179), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_179)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_181(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 180), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_180)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_182(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 181), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_181)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_183(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 182), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_182)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_184(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 183), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_183)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_185(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 184), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_184)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_186(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 185), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_185)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_187(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 186), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_186)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_188(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 187), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_187)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_189(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 188), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_188)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_190(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 189), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_189)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_191(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 190), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_190)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_192(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 191), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_191)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_193(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 192), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_192)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_194(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 193), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_193)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_195(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 194), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_194)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_196(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 195), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_195)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_197(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 196), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_196)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_198(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 197), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_197)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_199(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 198), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_198)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_200(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 199), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_199)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_201(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 200), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_200)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_202(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 201), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_201)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_203(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 202), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_202)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_204(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 203), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_203)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_205(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 204), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_204)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_206(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 205), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_205)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_207(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 206), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_206)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_208(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 207), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_207)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_209(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 208), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_208)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_210(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 209), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_209)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_211(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 210), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_210)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_212(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 211), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_211)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_213(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 212), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_212)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_214(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 213), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_213)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_215(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 214), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_214)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_216(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 215), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_215)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_217(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 216), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_216)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_218(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 217), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_217)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_219(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 218), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_218)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_220(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 219), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_219)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_221(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 220), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_220)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_222(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 221), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_221)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_223(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 222), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_222)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_224(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 223), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_223)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_225(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 224), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_224)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_226(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 225), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_225)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_227(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 226), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_226)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_228(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 227), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_227)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_229(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 228), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_228)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_230(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 229), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_229)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_231(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 230), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_230)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_232(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 231), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_231)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_233(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 232), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_232)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_234(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 233), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_233)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_235(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 234), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_234)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_236(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 235), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_235)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_237(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 236), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_236)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_238(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 237), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_237)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_239(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 238), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_238)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_240(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 239), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_239)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_241(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 240), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_240)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_242(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 241), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_241)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_243(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 242), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_242)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_244(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 243), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_243)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_245(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 244), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_244)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_246(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 245), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_245)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_247(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 246), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_246)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_248(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 247), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_247)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_249(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 248), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_248)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_250(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 249), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_249)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_251(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 250), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_250)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_252(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 251), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_251)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_253(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 252), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_252)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_254(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 253), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_253)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_255(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 254), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_254)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_256(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 255), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_255)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_257(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 256), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_256)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_258(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 257), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_257)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_259(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 258), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_258)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_260(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 259), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_259)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_261(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 260), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_260)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_262(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 261), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_261)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_263(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 262), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_262)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_264(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 263), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_263)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_265(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 264), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_264)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_266(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 265), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_265)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_267(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 266), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_266)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_268(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 267), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_267)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_269(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 268), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_268)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_270(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 269), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_269)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_271(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 270), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_270)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_272(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 271), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_271)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_273(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 272), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_272)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_274(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 273), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_273)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_275(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 274), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_274)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_276(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 275), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_275)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_277(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 276), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_276)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_278(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 277), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_277)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_279(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 278), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_278)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_280(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 279), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_279)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_281(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 280), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_280)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_282(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 281), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_281)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_283(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 282), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_282)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_284(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 283), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_283)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_285(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 284), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_284)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_286(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 285), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_285)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_287(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 286), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_286)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_288(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 287), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_287)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_289(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 288), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_288)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_290(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 289), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_289)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_291(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 290), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_290)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_292(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 291), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_291)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_293(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 292), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_292)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_294(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 293), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_293)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_295(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 294), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_294)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_296(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 295), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_295)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_297(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 296), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_296)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_298(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 297), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_297)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_299(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 298), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_298)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_300(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 299), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_299)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_301(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 300), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_300)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_302(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 301), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_301)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_303(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 302), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_302)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_304(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 303), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_303)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_305(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 304), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_304)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_306(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 305), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_305)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_307(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 306), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_306)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_308(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 307), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_307)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_309(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 308), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_308)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_310(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 309), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_309)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_311(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 310), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_310)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_312(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 311), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_311)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_313(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 312), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_312)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_314(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 313), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_313)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_315(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 314), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_314)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_316(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 315), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_315)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_317(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 316), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_316)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_318(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 317), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_317)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_319(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 318), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_318)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_320(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 319), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_319)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_321(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 320), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_320)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_322(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 321), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_321)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_323(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 322), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_322)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_324(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 323), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_323)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_325(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 324), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_324)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_326(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 325), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_325)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_327(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 326), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_326)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_328(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 327), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_327)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_329(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 328), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_328)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_330(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 329), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_329)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_331(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 330), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_330)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_332(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 331), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_331)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_333(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 332), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_332)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_334(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 333), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_333)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_335(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 334), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_334)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_336(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 335), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_335)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_337(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 336), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_336)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_338(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 337), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_337)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_339(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 338), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_338)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_340(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 339), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_339)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_341(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 340), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_340)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_342(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 341), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_341)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_343(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 342), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_342)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_344(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 343), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_343)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_345(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 344), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_344)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_346(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 345), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_345)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_347(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 346), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_346)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_348(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 347), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_347)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_349(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 348), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_348)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_350(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 349), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_349)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_351(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 350), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_350)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_352(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 351), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_351)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_353(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 352), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_352)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_354(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 353), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_353)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_355(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 354), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_354)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_356(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 355), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_355)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_357(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 356), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_356)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_358(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 357), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_357)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_359(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 358), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_358)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_360(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 359), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_359)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_361(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 360), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_360)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_362(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 361), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_361)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_363(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 362), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_362)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_364(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 363), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_363)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_365(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 364), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_364)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_366(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 365), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_365)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_367(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 366), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_366)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_368(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 367), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_367)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_369(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 368), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_368)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_370(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 369), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_369)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_371(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 370), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_370)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_372(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 371), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_371)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_373(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 372), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_372)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_374(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 373), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_373)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_375(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 374), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_374)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_376(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 375), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_375)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_377(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 376), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_376)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_378(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 377), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_377)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_379(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 378), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_378)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_380(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 379), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_379)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_381(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 380), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_380)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_382(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 381), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_381)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_383(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 382), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_382)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_384(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 383), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_383)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_385(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 384), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_384)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_386(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 385), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_385)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_387(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 386), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_386)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_388(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 387), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_387)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_389(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 388), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_388)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_390(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 389), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_389)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_391(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 390), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_390)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_392(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 391), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_391)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_393(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 392), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_392)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_394(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 393), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_393)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_395(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 394), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_394)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_396(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 395), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_395)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_397(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 396), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_396)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_398(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 397), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_397)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_399(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 398), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_398)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_400(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 399), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_399)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_401(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 400), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_400)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_402(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 401), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_401)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_403(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 402), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_402)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_404(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 403), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_403)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_405(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 404), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_404)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_406(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 405), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_405)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_407(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 406), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_406)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_408(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 407), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_407)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_409(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 408), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_408)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_410(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 409), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_409)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_411(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 410), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_410)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_412(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 411), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_411)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_413(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 412), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_412)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_414(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 413), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_413)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_415(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 414), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_414)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_416(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 415), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_415)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_417(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 416), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_416)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_418(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 417), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_417)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_419(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 418), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_418)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_420(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 419), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_419)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_421(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 420), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_420)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_422(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 421), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_421)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_423(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 422), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_422)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_424(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 423), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_423)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_425(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 424), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_424)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_426(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 425), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_425)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_427(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 426), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_426)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_428(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 427), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_427)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_429(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 428), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_428)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_430(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 429), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_429)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_431(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 430), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_430)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_432(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 431), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_431)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_433(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 432), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_432)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_434(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 433), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_433)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_435(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 434), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_434)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_436(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 435), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_435)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_437(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 436), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_436)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_438(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 437), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_437)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_439(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 438), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_438)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_440(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 439), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_439)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_441(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 440), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_440)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_442(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 441), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_441)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_443(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 442), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_442)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_444(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 443), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_443)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_445(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 444), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_444)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_446(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 445), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_445)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_447(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 446), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_446)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_448(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 447), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_447)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_449(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 448), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_448)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_450(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 449), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_449)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_451(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 450), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_450)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_452(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 451), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_451)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_453(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 452), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_452)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_454(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 453), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_453)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_455(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 454), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_454)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_456(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 455), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_455)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_457(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 456), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_456)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_458(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 457), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_457)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_459(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 458), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_458)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_460(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 459), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_459)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_461(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 460), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_460)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_462(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 461), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_461)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_463(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 462), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_462)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_464(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 463), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_463)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_465(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 464), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_464)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_466(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 465), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_465)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_467(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 466), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_466)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_468(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 467), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_467)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_469(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 468), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_468)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_470(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 469), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_469)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_471(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 470), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_470)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_472(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 471), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_471)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_473(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 472), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_472)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_474(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 473), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_473)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_475(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 474), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_474)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_476(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 475), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_475)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_477(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 476), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_476)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_478(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 477), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_477)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_479(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 478), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_478)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_480(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 479), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_479)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_481(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 480), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_480)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_482(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 481), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_481)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_483(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 482), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_482)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_484(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 483), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_483)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_485(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 484), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_484)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_486(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 485), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_485)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_487(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 486), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_486)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_488(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 487), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_487)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_489(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 488), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_488)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_490(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 489), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_489)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_491(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 490), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_490)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_492(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 491), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_491)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_493(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 492), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_492)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_494(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 493), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_493)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_495(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 494), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_494)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_496(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 495), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_495)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_497(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 496), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_496)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_498(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 497), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_497)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_499(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 498), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_498)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_500(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 499), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_499)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_501(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 500), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_500)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_502(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 501), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_501)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_503(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 502), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_502)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_504(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 503), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_503)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_505(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 504), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_504)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_506(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 505), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_505)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_507(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 506), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_506)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_508(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 507), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_507)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_509(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 508), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_508)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_510(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 509), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_509)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_511(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 510), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_510)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_512(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 511), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_511)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_513(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 512), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_512)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_514(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 513), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_513)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_515(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 514), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_514)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_516(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 515), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_515)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_517(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 516), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_516)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_518(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 517), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_517)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_519(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 518), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_518)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_520(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 519), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_519)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_521(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 520), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_520)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_522(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 521), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_521)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_523(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 522), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_522)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_524(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 523), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_523)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_525(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 524), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_524)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_526(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 525), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_525)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_527(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 526), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_526)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_528(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 527), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_527)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_529(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 528), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_528)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_530(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 529), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_529)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_531(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 530), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_530)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_532(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 531), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_531)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_533(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 532), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_532)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_534(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 533), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_533)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_535(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 534), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_534)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_536(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 535), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_535)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_537(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 536), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_536)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_538(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 537), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_537)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_539(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 538), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_538)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_540(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 539), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_539)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_541(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 540), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_540)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_542(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 541), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_541)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_543(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 542), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_542)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_544(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 543), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_543)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_545(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 544), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_544)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_546(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 545), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_545)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_547(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 546), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_546)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_548(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 547), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_547)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_549(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 548), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_548)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_550(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 549), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_549)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_551(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 550), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_550)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_552(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 551), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_551)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_553(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 552), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_552)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_554(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 553), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_553)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_555(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 554), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_554)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_556(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 555), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_555)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_557(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 556), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_556)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_558(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 557), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_557)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_559(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 558), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_558)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_560(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 559), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_559)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_561(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 560), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_560)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_562(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 561), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_561)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_563(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 562), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_562)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_564(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 563), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_563)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_565(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 564), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_564)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_566(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 565), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_565)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_567(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 566), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_566)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_568(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 567), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_567)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_569(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 568), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_568)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_570(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 569), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_569)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_571(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 570), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_570)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_572(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 571), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_571)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_573(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 572), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_572)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_574(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 573), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_573)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_575(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 574), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_574)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_576(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 575), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_575)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_577(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 576), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_576)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_578(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 577), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_577)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_579(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 578), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_578)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_580(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 579), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_579)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_581(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 580), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_580)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_582(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 581), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_581)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_583(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 582), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_582)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_584(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 583), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_583)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_585(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 584), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_584)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_586(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 585), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_585)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_587(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 586), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_586)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_588(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 587), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_587)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_589(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 588), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_588)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_590(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 589), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_589)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_591(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 590), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_590)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_592(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 591), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_591)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_593(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 592), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_592)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_594(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 593), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_593)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_595(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 594), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_594)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_596(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 595), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_595)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_597(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 596), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_596)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_598(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 597), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_597)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_599(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 598), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_598)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_600(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 599), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_599)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_601(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 600), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_600)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_602(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 601), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_601)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_603(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 602), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_602)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_604(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 603), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_603)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_605(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 604), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_604)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_606(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 605), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_605)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_607(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 606), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_606)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_608(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 607), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_607)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_609(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 608), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_608)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_610(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 609), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_609)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_611(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 610), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_610)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_612(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 611), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_611)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_613(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 612), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_612)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_614(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 613), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_613)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_615(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 614), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_614)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_616(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 615), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_615)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_617(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 616), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_616)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_618(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 617), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_617)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_619(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 618), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_618)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_620(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 619), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_619)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_621(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 620), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_620)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_622(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 621), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_621)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_623(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 622), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_622)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_624(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 623), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_623)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_625(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 624), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_624)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_626(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 625), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_625)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_627(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 626), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_626)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_628(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 627), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_627)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_629(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 628), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_628)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_630(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 629), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_629)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_631(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 630), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_630)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_632(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 631), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_631)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_633(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 632), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_632)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_634(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 633), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_633)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_635(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 634), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_634)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_636(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 635), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_635)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_637(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 636), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_636)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_638(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 637), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_637)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_639(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 638), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_638)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_640(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 639), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_639)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_641(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 640), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_640)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_642(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 641), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_641)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_643(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 642), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_642)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_644(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 643), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_643)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_645(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 644), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_644)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_646(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 645), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_645)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_647(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 646), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_646)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_648(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 647), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_647)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_649(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 648), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_648)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_650(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 649), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_649)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_651(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 650), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_650)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_652(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 651), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_651)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_653(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 652), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_652)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_654(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 653), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_653)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_655(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 654), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_654)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_656(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 655), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_655)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_657(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 656), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_656)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_658(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 657), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_657)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_659(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 658), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_658)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_660(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 659), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_659)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_661(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 660), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_660)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_662(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 661), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_661)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_663(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 662), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_662)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_664(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 663), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_663)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_665(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 664), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_664)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_666(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 665), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_665)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_667(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 666), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_666)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_668(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 667), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_667)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_669(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 668), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_668)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_670(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 669), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_669)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_671(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 670), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_670)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_672(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 671), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_671)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_673(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 672), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_672)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_674(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 673), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_673)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_675(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 674), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_674)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_676(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 675), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_675)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_677(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 676), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_676)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_678(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 677), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_677)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_679(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 678), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_678)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_680(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 679), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_679)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_681(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 680), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_680)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_682(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 681), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_681)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_683(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 682), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_682)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_684(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 683), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_683)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_685(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 684), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_684)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_686(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 685), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_685)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_687(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 686), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_686)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_688(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 687), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_687)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_689(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 688), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_688)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_690(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 689), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_689)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_691(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 690), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_690)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_692(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 691), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_691)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_693(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 692), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_692)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_694(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 693), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_693)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_695(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 694), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_694)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_696(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 695), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_695)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_697(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 696), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_696)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_698(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 697), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_697)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_699(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 698), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_698)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_700(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 699), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_699)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_701(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 700), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_700)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_702(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 701), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_701)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_703(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 702), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_702)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_704(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 703), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_703)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_705(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 704), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_704)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_706(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 705), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_705)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_707(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 706), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_706)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_708(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 707), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_707)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_709(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 708), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_708)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_710(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 709), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_709)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_711(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 710), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_710)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_712(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 711), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_711)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_713(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 712), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_712)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_714(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 713), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_713)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_715(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 714), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_714)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_716(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 715), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_715)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_717(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 716), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_716)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_718(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 717), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_717)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_719(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 718), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_718)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_720(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 719), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_719)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_721(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 720), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_720)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_722(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 721), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_721)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_723(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 722), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_722)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_724(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 723), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_723)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_725(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 724), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_724)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_726(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 725), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_725)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_727(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 726), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_726)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_728(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 727), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_727)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_729(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 728), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_728)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_730(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 729), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_729)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_731(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 730), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_730)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_732(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 731), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_731)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_733(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 732), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_732)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_734(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 733), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_733)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_735(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 734), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_734)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_736(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 735), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_735)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_737(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 736), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_736)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_738(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 737), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_737)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_739(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 738), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_738)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_740(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 739), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_739)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_741(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 740), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_740)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_742(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 741), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_741)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_743(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 742), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_742)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_744(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 743), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_743)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_745(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 744), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_744)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_746(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 745), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_745)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_747(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 746), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_746)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_748(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 747), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_747)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_749(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 748), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_748)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_750(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 749), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_749)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_751(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 750), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_750)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_752(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 751), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_751)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_753(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 752), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_752)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_754(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 753), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_753)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_755(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 754), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_754)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_756(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 755), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_755)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_757(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 756), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_756)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_758(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 757), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_757)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_759(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 758), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_758)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_760(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 759), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_759)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_761(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 760), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_760)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_762(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 761), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_761)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_763(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 762), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_762)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_764(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 763), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_763)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_765(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 764), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_764)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_766(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 765), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_765)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_767(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 766), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_766)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_768(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 767), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_767)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_769(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 768), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_768)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_770(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 769), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_769)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_771(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 770), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_770)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_772(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 771), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_771)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_773(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 772), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_772)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_774(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 773), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_773)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_775(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 774), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_774)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_776(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 775), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_775)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_777(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 776), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_776)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_778(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 777), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_777)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_779(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 778), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_778)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_780(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 779), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_779)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_781(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 780), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_780)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_782(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 781), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_781)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_783(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 782), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_782)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_784(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 783), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_783)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_785(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 784), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_784)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_786(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 785), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_785)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_787(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 786), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_786)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_788(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 787), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_787)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_789(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 788), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_788)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_790(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 789), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_789)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_791(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 790), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_790)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_792(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 791), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_791)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_793(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 792), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_792)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_794(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 793), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_793)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_795(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 794), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_794)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_796(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 795), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_795)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_797(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 796), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_796)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_798(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 797), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_797)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_799(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 798), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_798)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_800(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 799), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_799)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_801(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 800), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_800)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_802(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 801), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_801)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_803(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 802), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_802)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_804(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 803), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_803)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_805(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 804), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_804)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_806(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 805), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_805)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_807(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 806), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_806)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_808(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 807), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_807)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_809(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 808), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_808)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_810(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 809), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_809)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_811(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 810), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_810)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_812(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 811), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_811)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_813(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 812), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_812)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_814(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 813), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_813)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_815(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 814), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_814)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_816(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 815), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_815)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_817(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 816), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_816)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_818(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 817), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_817)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_819(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 818), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_818)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_820(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 819), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_819)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_821(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 820), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_820)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_822(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 821), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_821)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_823(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 822), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_822)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_824(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 823), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_823)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_825(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 824), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_824)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_826(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 825), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_825)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_827(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 826), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_826)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_828(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 827), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_827)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_829(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 828), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_828)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_830(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 829), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_829)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_831(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 830), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_830)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_832(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 831), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_831)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_833(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 832), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_832)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_834(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 833), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_833)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_835(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 834), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_834)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_836(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 835), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_835)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_837(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 836), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_836)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_838(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 837), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_837)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_839(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 838), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_838)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_840(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 839), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_839)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_841(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 840), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_840)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_842(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 841), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_841)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_843(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 842), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_842)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_844(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 843), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_843)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_845(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 844), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_844)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_846(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 845), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_845)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_847(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 846), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_846)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_848(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 847), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_847)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_849(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 848), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_848)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_850(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 849), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_849)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_851(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 850), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_850)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_852(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 851), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_851)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_853(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 852), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_852)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_854(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 853), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_853)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_855(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 854), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_854)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_856(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 855), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_855)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_857(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 856), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_856)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_858(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 857), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_857)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_859(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 858), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_858)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_860(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 859), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_859)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_861(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 860), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_860)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_862(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 861), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_861)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_863(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 862), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_862)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_864(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 863), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_863)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_865(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 864), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_864)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_866(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 865), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_865)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_867(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 866), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_866)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_868(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 867), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_867)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_869(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 868), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_868)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_870(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 869), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_869)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_871(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 870), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_870)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_872(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 871), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_871)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_873(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 872), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_872)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_874(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 873), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_873)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_875(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 874), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_874)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_876(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 875), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_875)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_877(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 876), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_876)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_878(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 877), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_877)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_879(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 878), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_878)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_880(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 879), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_879)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_881(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 880), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_880)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_882(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 881), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_881)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_883(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 882), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_882)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_884(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 883), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_883)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_885(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 884), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_884)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_886(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 885), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_885)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_887(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 886), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_886)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_888(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 887), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_887)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_889(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 888), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_888)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_890(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 889), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_889)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_891(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 890), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_890)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_892(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 891), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_891)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_893(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 892), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_892)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_894(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 893), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_893)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_895(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 894), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_894)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_896(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 895), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_895)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_897(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 896), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_896)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_898(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 897), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_897)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_899(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 898), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_898)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_900(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 899), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_899)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_901(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 900), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_900)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_902(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 901), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_901)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_903(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 902), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_902)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_904(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 903), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_903)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_905(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 904), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_904)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_906(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 905), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_905)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_907(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 906), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_906)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_908(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 907), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_907)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_909(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 908), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_908)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_910(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 909), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_909)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_911(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 910), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_910)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_912(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 911), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_911)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_913(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 912), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_912)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_914(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 913), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_913)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_915(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 914), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_914)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_916(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 915), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_915)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_917(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 916), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_916)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_918(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 917), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_917)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_919(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 918), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_918)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_920(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 919), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_919)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_921(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 920), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_920)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_922(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 921), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_921)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_923(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 922), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_922)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_924(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 923), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_923)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_925(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 924), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_924)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_926(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 925), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_925)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_927(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 926), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_926)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_928(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 927), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_927)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_929(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 928), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_928)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_930(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 929), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_929)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_931(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 930), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_930)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_932(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 931), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_931)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_933(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 932), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_932)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_934(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 933), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_933)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_935(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 934), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_934)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_936(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 935), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_935)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_937(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 936), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_936)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_938(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 937), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_937)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_939(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 938), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_938)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_940(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 939), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_939)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_941(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 940), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_940)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_942(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 941), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_941)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_943(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 942), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_942)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_944(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 943), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_943)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_945(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 944), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_944)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_946(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 945), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_945)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_947(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 946), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_946)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_948(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 947), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_947)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_949(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 948), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_948)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_950(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 949), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_949)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_951(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 950), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_950)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_952(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 951), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_951)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_953(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 952), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_952)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_954(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 953), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_953)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_955(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 954), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_954)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_956(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 955), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_955)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_957(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 956), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_956)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_958(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 957), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_957)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_959(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 958), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_958)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_960(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 959), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_959)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_961(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 960), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_960)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_962(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 961), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_961)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_963(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 962), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_962)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_964(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 963), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_963)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_965(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 964), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_964)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_966(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 965), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_965)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_967(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 966), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_966)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_968(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 967), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_967)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_969(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 968), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_968)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_970(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 969), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_969)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_971(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 970), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_970)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_972(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 971), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_971)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_973(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 972), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_972)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_974(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 973), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_973)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_975(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 974), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_974)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_976(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 975), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_975)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_977(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 976), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_976)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_978(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 977), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_977)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_979(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 978), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_978)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_980(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 979), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_979)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_981(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 980), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_980)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_982(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 981), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_981)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_983(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 982), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_982)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_984(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 983), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_983)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_985(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 984), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_984)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_986(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 985), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_985)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_987(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 986), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_986)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_988(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 987), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_987)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_989(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 988), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_988)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_990(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 989), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_989)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_991(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 990), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_990)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_992(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 991), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_991)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_993(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 992), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_992)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_994(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 993), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_993)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_995(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 994), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_994)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_996(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 995), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_995)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_997(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 996), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_996)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_998(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 997), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_997)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_999(x)                                                           \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 998), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_998)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_1000(x)                                                          \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 999), EPILEPSY_PRIV_UINT_LESSER_TRUE,                             \
        EPILEPSY_PRIV_UINT_LESSER_999)                                                             \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_1001(x)                                                          \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 1000), EPILEPSY_PRIV_UINT_LESSER_TRUE,                            \
        EPILEPSY_PRIV_UINT_LESSER_1000)                                                            \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_1002(x)                                                          \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 1001), EPILEPSY_PRIV_UINT_LESSER_TRUE,                            \
        EPILEPSY_PRIV_UINT_LESSER_1001)                                                            \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_1003(x)                                                          \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 1002), EPILEPSY_PRIV_UINT_LESSER_TRUE,                            \
        EPILEPSY_PRIV_UINT_LESSER_1002)                                                            \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_1004(x)                                                          \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 1003), EPILEPSY_PRIV_UINT_LESSER_TRUE,                            \
        EPILEPSY_PRIV_UINT_LESSER_1003)                                                            \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_1005(x)                                                          \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 1004), EPILEPSY_PRIV_UINT_LESSER_TRUE,                            \
        EPILEPSY_PRIV_UINT_LESSER_1004)                                                            \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_1006(x)                                                          \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 1005), EPILEPSY_PRIV_UINT_LESSER_TRUE,                            \
        EPILEPSY_PRIV_UINT_LESSER_1005)                                                            \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_1007(x)                                                          \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 1006), EPILEPSY_PRIV_UINT_LESSER_TRUE,                            \
        EPILEPSY_PRIV_UINT_LESSER_1006)                                                            \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_1008(x)                                                          \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 1007), EPILEPSY_PRIV_UINT_LESSER_TRUE,                            \
        EPILEPSY_PRIV_UINT_LESSER_1007)                                                            \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_1009(x)                                                          \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 1008), EPILEPSY_PRIV_UINT_LESSER_TRUE,                            \
        EPILEPSY_PRIV_UINT_LESSER_1008)                                                            \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_1010(x)                                                          \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 1009), EPILEPSY_PRIV_UINT_LESSER_TRUE,                            \
        EPILEPSY_PRIV_UINT_LESSER_1009)                                                            \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_1011(x)                                                          \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 1010), EPILEPSY_PRIV_UINT_LESSER_TRUE,                            \
        EPILEPSY_PRIV_UINT_LESSER_1010)                                                            \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_1012(x)                                                          \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 1011), EPILEPSY_PRIV_UINT_LESSER_TRUE,                            \
        EPILEPSY_PRIV_UINT_LESSER_1011)                                                            \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_1013(x)                                                          \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 1012), EPILEPSY_PRIV_UINT_LESSER_TRUE,                            \
        EPILEPSY_PRIV_UINT_LESSER_1012)                                                            \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_1014(x)                                                          \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 1013), EPILEPSY_PRIV_UINT_LESSER_TRUE,                            \
        EPILEPSY_PRIV_UINT_LESSER_1013)                                                            \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_1015(x)                                                          \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 1014), EPILEPSY_PRIV_UINT_LESSER_TRUE,                            \
        EPILEPSY_PRIV_UINT_LESSER_1014)                                                            \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_1016(x)                                                          \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 1015), EPILEPSY_PRIV_UINT_LESSER_TRUE,                            \
        EPILEPSY_PRIV_UINT_LESSER_1015)                                                            \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_1017(x)                                                          \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 1016), EPILEPSY_PRIV_UINT_LESSER_TRUE,                            \
        EPILEPSY_PRIV_UINT_LESSER_1016)                                                            \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_1018(x)                                                          \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 1017), EPILEPSY_PRIV_UINT_LESSER_TRUE,                            \
        EPILEPSY_PRIV_UINT_LESSER_1017)                                                            \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_1019(x)                                                          \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 1018), EPILEPSY_PRIV_UINT_LESSER_TRUE,                            \
        EPILEPSY_PRIV_UINT_LESSER_1018)                                                            \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_1020(x)                                                          \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 1019), EPILEPSY_PRIV_UINT_LESSER_TRUE,                            \
        EPILEPSY_PRIV_UINT_LESSER_1019)                                                            \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_1021(x)                                                          \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 1020), EPILEPSY_PRIV_UINT_LESSER_TRUE,                            \
        EPILEPSY_PRIV_UINT_LESSER_1020)                                                            \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_1022(x)                                                          \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 1021), EPILEPSY_PRIV_UINT_LESSER_TRUE,                            \
        EPILEPSY_PRIV_UINT_LESSER_1021)                                                            \
    (x)
#define EPILEPSY_PRIV_UINT_LESSER_1023(x)                                                          \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(x, 1022), EPILEPSY_PRIV_UINT_LESSER_TRUE,                            \
        EPILEPSY_PRIV_UINT_LESSER_1022)                                                            \
    (x)

#define EPILEPSY_PRIV_UINT_LESSER_TRUE(_x) 1

#endif // EPILEPSY_PRIV_UINT_LESSER_H
