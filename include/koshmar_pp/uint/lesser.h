#ifndef KOSHMAR_PP_UINT_LESSER_H
#define KOSHMAR_PP_UINT_LESSER_H

#include "../aux.h"
#include "../control.h"
#include "../logical.h"
#include "eq.h"

#define KOSHMAR_PP_PRIVATE_UINT_LESSER(x, y) KOSHMAR_PP_PRIVATE_UINT_LESSER_OVERLOAD(y)(x)

#define KOSHMAR_PP_PRIVATE_UINT_LESSER_OVERLOAD(y)                                                 \
    KOSHMAR_PP_CAT(KOSHMAR_PP_PRIVATE_UINT_LESSER_, y)

#define KOSHMAR_PP_PRIVATE_UINT_LESSER_0(_x) 0
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_1(x)                                                        \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 0), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_0)          \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_2(x)                                                        \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 1), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_1)          \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_3(x)                                                        \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 2), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_2)          \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_4(x)                                                        \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 3), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_3)          \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_5(x)                                                        \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 4), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_4)          \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_6(x)                                                        \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 5), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_5)          \
    (x) /*  */
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_7(x)                                                        \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 6), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_6)          \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_8(x)                                                        \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 7), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_7)          \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_9(x)                                                        \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 8), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_8)          \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_10(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 9), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_9)          \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_11(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 10), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_10)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_12(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 11), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_11)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_13(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 12), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_12)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_14(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 13), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_13)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_15(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 14), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_14)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_16(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 15), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_15)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_17(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 16), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_16)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_18(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 17), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_17)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_19(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 18), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_18)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_20(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 19), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_19)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_21(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 20), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_20)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_22(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 21), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_21)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_23(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 22), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_22)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_24(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 23), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_23)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_25(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 24), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_24)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_26(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 25), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_25)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_27(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 26), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_26)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_28(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 27), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_27)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_29(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 28), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_28)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_30(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 29), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_29)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_31(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 30), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_30)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_32(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 31), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_31)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_33(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 32), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_32)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_34(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 33), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_33)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_35(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 34), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_34)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_36(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 35), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_35)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_37(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 36), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_36)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_38(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 37), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_37)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_39(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 38), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_38)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_40(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 39), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_39)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_41(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 40), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_40)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_42(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 41), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_41)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_43(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 42), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_42)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_44(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 43), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_43)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_45(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 44), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_44)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_46(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 45), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_45)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_47(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 46), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_46)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_48(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 47), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_47)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_49(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 48), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_48)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_50(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 49), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_49)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_51(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 50), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_50)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_52(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 51), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_51)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_53(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 52), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_52)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_54(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 53), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_53)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_55(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 54), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_54)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_56(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 55), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_55)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_57(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 56), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_56)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_58(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 57), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_57)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_59(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 58), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_58)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_60(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 59), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_59)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_61(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 60), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_60)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_62(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 61), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_61)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_63(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 62), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_62)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_64(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 63), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_63)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_65(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 64), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_64)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_66(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 65), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_65)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_67(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 66), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_66)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_68(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 67), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_67)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_69(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 68), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_68)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_70(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 69), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_69)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_71(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 70), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_70)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_72(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 71), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_71)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_73(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 72), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_72)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_74(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 73), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_73)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_75(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 74), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_74)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_76(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 75), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_75)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_77(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 76), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_76)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_78(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 77), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_77)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_79(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 78), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_78)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_80(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 79), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_79)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_81(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 80), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_80)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_82(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 81), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_81)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_83(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 82), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_82)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_84(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 83), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_83)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_85(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 84), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_84)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_86(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 85), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_85)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_87(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 86), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_86)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_88(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 87), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_87)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_89(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 88), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_88)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_90(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 89), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_89)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_91(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 90), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_90)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_92(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 91), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_91)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_93(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 92), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_92)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_94(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 93), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_93)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_95(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 94), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_94)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_96(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 95), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_95)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_97(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 96), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_96)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_98(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 97), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_97)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_99(x)                                                       \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 98), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_98)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_100(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 99), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_99)        \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_101(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 100), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_100)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_102(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 101), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_101)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_103(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 102), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_102)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_104(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 103), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_103)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_105(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 104), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_104)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_106(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 105), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_105)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_107(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 106), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_106)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_108(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 107), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_107)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_109(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 108), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_108)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_110(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 109), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_109)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_111(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 110), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_110)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_112(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 111), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_111)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_113(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 112), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_112)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_114(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 113), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_113)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_115(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 114), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_114)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_116(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 115), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_115)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_117(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 116), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_116)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_118(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 117), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_117)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_119(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 118), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_118)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_120(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 119), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_119)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_121(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 120), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_120)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_122(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 121), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_121)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_123(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 122), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_122)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_124(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 123), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_123)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_125(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 124), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_124)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_126(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 125), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_125)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_127(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 126), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_126)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_128(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 127), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_127)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_129(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 128), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_128)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_130(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 129), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_129)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_131(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 130), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_130)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_132(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 131), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_131)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_133(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 132), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_132)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_134(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 133), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_133)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_135(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 134), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_134)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_136(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 135), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_135)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_137(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 136), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_136)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_138(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 137), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_137)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_139(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 138), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_138)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_140(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 139), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_139)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_141(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 140), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_140)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_142(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 141), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_141)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_143(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 142), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_142)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_144(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 143), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_143)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_145(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 144), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_144)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_146(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 145), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_145)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_147(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 146), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_146)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_148(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 147), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_147)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_149(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 148), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_148)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_150(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 149), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_149)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_151(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 150), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_150)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_152(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 151), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_151)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_153(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 152), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_152)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_154(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 153), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_153)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_155(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 154), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_154)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_156(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 155), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_155)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_157(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 156), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_156)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_158(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 157), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_157)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_159(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 158), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_158)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_160(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 159), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_159)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_161(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 160), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_160)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_162(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 161), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_161)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_163(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 162), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_162)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_164(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 163), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_163)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_165(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 164), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_164)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_166(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 165), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_165)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_167(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 166), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_166)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_168(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 167), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_167)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_169(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 168), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_168)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_170(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 169), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_169)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_171(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 170), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_170)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_172(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 171), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_171)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_173(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 172), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_172)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_174(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 173), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_173)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_175(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 174), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_174)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_176(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 175), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_175)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_177(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 176), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_176)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_178(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 177), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_177)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_179(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 178), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_178)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_180(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 179), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_179)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_181(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 180), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_180)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_182(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 181), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_181)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_183(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 182), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_182)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_184(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 183), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_183)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_185(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 184), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_184)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_186(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 185), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_185)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_187(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 186), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_186)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_188(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 187), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_187)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_189(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 188), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_188)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_190(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 189), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_189)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_191(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 190), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_190)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_192(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 191), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_191)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_193(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 192), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_192)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_194(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 193), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_193)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_195(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 194), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_194)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_196(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 195), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_195)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_197(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 196), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_196)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_198(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 197), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_197)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_199(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 198), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_198)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_200(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 199), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_199)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_201(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 200), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_200)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_202(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 201), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_201)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_203(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 202), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_202)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_204(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 203), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_203)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_205(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 204), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_204)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_206(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 205), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_205)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_207(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 206), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_206)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_208(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 207), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_207)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_209(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 208), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_208)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_210(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 209), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_209)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_211(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 210), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_210)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_212(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 211), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_211)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_213(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 212), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_212)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_214(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 213), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_213)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_215(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 214), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_214)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_216(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 215), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_215)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_217(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 216), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_216)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_218(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 217), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_217)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_219(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 218), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_218)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_220(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 219), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_219)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_221(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 220), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_220)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_222(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 221), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_221)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_223(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 222), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_222)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_224(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 223), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_223)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_225(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 224), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_224)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_226(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 225), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_225)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_227(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 226), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_226)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_228(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 227), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_227)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_229(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 228), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_228)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_230(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 229), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_229)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_231(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 230), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_230)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_232(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 231), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_231)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_233(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 232), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_232)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_234(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 233), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_233)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_235(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 234), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_234)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_236(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 235), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_235)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_237(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 236), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_236)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_238(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 237), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_237)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_239(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 238), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_238)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_240(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 239), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_239)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_241(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 240), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_240)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_242(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 241), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_241)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_243(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 242), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_242)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_244(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 243), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_243)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_245(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 244), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_244)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_246(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 245), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_245)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_247(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 246), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_246)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_248(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 247), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_247)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_249(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 248), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_248)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_250(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 249), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_249)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_251(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 250), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_250)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_252(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 251), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_251)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_253(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 252), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_252)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_254(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 253), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_253)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_255(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 254), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_254)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_256(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 255), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_255)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_257(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 256), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_256)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_258(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 257), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_257)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_259(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 258), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_258)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_260(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 259), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_259)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_261(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 260), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_260)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_262(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 261), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_261)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_263(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 262), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_262)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_264(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 263), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_263)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_265(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 264), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_264)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_266(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 265), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_265)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_267(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 266), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_266)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_268(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 267), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_267)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_269(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 268), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_268)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_270(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 269), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_269)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_271(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 270), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_270)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_272(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 271), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_271)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_273(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 272), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_272)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_274(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 273), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_273)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_275(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 274), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_274)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_276(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 275), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_275)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_277(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 276), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_276)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_278(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 277), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_277)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_279(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 278), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_278)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_280(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 279), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_279)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_281(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 280), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_280)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_282(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 281), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_281)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_283(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 282), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_282)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_284(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 283), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_283)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_285(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 284), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_284)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_286(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 285), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_285)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_287(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 286), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_286)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_288(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 287), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_287)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_289(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 288), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_288)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_290(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 289), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_289)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_291(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 290), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_290)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_292(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 291), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_291)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_293(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 292), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_292)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_294(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 293), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_293)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_295(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 294), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_294)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_296(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 295), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_295)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_297(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 296), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_296)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_298(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 297), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_297)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_299(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 298), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_298)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_300(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 299), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_299)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_301(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 300), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_300)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_302(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 301), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_301)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_303(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 302), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_302)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_304(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 303), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_303)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_305(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 304), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_304)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_306(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 305), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_305)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_307(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 306), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_306)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_308(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 307), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_307)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_309(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 308), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_308)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_310(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 309), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_309)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_311(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 310), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_310)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_312(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 311), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_311)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_313(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 312), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_312)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_314(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 313), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_313)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_315(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 314), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_314)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_316(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 315), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_315)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_317(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 316), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_316)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_318(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 317), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_317)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_319(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 318), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_318)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_320(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 319), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_319)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_321(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 320), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_320)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_322(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 321), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_321)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_323(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 322), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_322)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_324(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 323), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_323)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_325(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 324), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_324)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_326(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 325), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_325)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_327(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 326), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_326)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_328(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 327), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_327)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_329(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 328), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_328)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_330(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 329), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_329)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_331(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 330), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_330)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_332(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 331), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_331)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_333(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 332), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_332)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_334(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 333), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_333)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_335(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 334), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_334)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_336(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 335), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_335)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_337(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 336), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_336)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_338(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 337), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_337)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_339(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 338), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_338)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_340(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 339), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_339)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_341(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 340), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_340)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_342(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 341), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_341)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_343(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 342), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_342)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_344(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 343), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_343)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_345(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 344), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_344)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_346(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 345), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_345)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_347(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 346), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_346)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_348(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 347), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_347)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_349(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 348), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_348)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_350(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 349), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_349)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_351(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 350), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_350)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_352(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 351), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_351)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_353(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 352), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_352)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_354(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 353), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_353)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_355(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 354), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_354)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_356(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 355), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_355)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_357(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 356), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_356)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_358(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 357), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_357)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_359(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 358), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_358)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_360(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 359), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_359)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_361(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 360), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_360)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_362(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 361), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_361)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_363(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 362), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_362)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_364(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 363), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_363)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_365(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 364), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_364)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_366(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 365), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_365)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_367(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 366), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_366)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_368(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 367), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_367)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_369(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 368), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_368)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_370(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 369), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_369)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_371(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 370), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_370)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_372(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 371), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_371)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_373(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 372), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_372)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_374(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 373), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_373)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_375(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 374), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_374)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_376(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 375), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_375)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_377(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 376), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_376)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_378(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 377), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_377)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_379(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 378), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_378)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_380(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 379), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_379)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_381(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 380), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_380)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_382(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 381), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_381)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_383(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 382), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_382)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_384(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 383), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_383)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_385(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 384), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_384)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_386(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 385), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_385)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_387(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 386), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_386)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_388(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 387), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_387)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_389(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 388), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_388)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_390(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 389), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_389)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_391(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 390), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_390)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_392(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 391), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_391)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_393(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 392), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_392)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_394(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 393), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_393)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_395(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 394), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_394)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_396(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 395), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_395)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_397(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 396), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_396)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_398(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 397), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_397)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_399(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 398), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_398)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_400(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 399), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_399)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_401(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 400), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_400)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_402(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 401), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_401)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_403(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 402), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_402)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_404(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 403), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_403)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_405(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 404), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_404)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_406(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 405), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_405)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_407(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 406), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_406)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_408(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 407), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_407)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_409(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 408), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_408)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_410(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 409), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_409)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_411(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 410), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_410)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_412(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 411), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_411)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_413(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 412), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_412)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_414(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 413), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_413)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_415(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 414), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_414)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_416(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 415), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_415)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_417(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 416), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_416)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_418(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 417), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_417)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_419(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 418), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_418)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_420(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 419), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_419)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_421(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 420), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_420)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_422(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 421), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_421)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_423(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 422), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_422)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_424(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 423), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_423)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_425(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 424), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_424)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_426(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 425), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_425)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_427(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 426), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_426)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_428(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 427), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_427)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_429(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 428), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_428)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_430(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 429), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_429)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_431(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 430), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_430)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_432(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 431), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_431)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_433(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 432), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_432)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_434(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 433), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_433)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_435(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 434), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_434)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_436(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 435), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_435)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_437(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 436), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_436)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_438(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 437), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_437)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_439(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 438), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_438)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_440(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 439), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_439)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_441(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 440), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_440)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_442(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 441), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_441)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_443(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 442), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_442)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_444(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 443), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_443)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_445(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 444), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_444)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_446(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 445), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_445)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_447(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 446), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_446)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_448(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 447), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_447)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_449(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 448), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_448)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_450(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 449), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_449)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_451(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 450), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_450)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_452(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 451), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_451)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_453(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 452), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_452)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_454(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 453), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_453)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_455(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 454), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_454)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_456(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 455), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_455)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_457(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 456), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_456)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_458(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 457), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_457)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_459(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 458), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_458)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_460(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 459), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_459)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_461(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 460), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_460)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_462(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 461), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_461)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_463(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 462), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_462)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_464(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 463), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_463)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_465(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 464), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_464)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_466(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 465), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_465)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_467(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 466), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_466)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_468(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 467), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_467)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_469(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 468), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_468)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_470(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 469), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_469)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_471(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 470), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_470)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_472(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 471), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_471)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_473(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 472), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_472)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_474(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 473), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_473)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_475(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 474), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_474)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_476(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 475), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_475)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_477(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 476), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_476)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_478(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 477), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_477)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_479(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 478), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_478)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_480(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 479), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_479)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_481(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 480), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_480)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_482(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 481), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_481)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_483(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 482), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_482)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_484(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 483), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_483)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_485(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 484), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_484)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_486(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 485), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_485)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_487(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 486), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_486)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_488(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 487), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_487)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_489(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 488), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_488)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_490(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 489), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_489)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_491(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 490), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_490)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_492(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 491), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_491)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_493(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 492), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_492)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_494(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 493), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_493)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_495(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 494), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_494)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_496(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 495), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_495)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_497(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 496), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_496)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_498(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 497), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_497)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_499(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 498), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_498)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_500(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 499), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_499)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_501(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 500), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_500)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_502(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 501), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_501)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_503(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 502), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_502)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_504(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 503), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_503)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_505(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 504), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_504)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_506(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 505), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_505)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_507(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 506), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_506)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_508(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 507), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_507)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_509(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 508), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_508)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_510(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 509), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_509)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_511(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 510), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_510)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_512(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 511), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_511)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_513(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 512), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_512)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_514(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 513), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_513)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_515(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 514), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_514)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_516(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 515), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_515)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_517(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 516), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_516)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_518(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 517), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_517)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_519(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 518), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_518)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_520(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 519), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_519)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_521(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 520), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_520)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_522(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 521), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_521)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_523(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 522), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_522)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_524(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 523), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_523)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_525(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 524), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_524)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_526(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 525), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_525)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_527(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 526), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_526)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_528(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 527), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_527)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_529(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 528), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_528)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_530(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 529), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_529)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_531(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 530), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_530)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_532(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 531), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_531)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_533(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 532), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_532)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_534(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 533), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_533)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_535(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 534), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_534)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_536(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 535), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_535)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_537(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 536), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_536)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_538(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 537), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_537)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_539(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 538), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_538)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_540(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 539), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_539)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_541(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 540), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_540)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_542(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 541), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_541)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_543(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 542), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_542)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_544(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 543), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_543)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_545(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 544), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_544)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_546(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 545), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_545)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_547(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 546), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_546)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_548(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 547), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_547)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_549(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 548), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_548)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_550(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 549), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_549)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_551(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 550), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_550)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_552(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 551), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_551)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_553(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 552), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_552)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_554(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 553), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_553)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_555(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 554), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_554)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_556(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 555), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_555)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_557(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 556), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_556)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_558(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 557), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_557)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_559(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 558), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_558)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_560(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 559), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_559)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_561(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 560), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_560)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_562(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 561), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_561)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_563(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 562), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_562)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_564(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 563), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_563)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_565(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 564), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_564)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_566(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 565), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_565)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_567(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 566), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_566)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_568(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 567), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_567)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_569(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 568), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_568)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_570(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 569), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_569)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_571(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 570), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_570)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_572(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 571), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_571)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_573(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 572), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_572)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_574(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 573), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_573)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_575(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 574), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_574)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_576(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 575), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_575)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_577(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 576), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_576)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_578(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 577), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_577)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_579(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 578), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_578)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_580(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 579), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_579)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_581(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 580), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_580)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_582(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 581), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_581)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_583(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 582), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_582)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_584(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 583), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_583)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_585(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 584), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_584)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_586(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 585), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_585)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_587(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 586), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_586)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_588(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 587), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_587)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_589(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 588), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_588)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_590(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 589), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_589)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_591(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 590), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_590)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_592(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 591), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_591)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_593(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 592), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_592)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_594(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 593), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_593)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_595(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 594), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_594)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_596(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 595), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_595)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_597(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 596), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_596)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_598(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 597), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_597)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_599(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 598), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_598)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_600(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 599), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_599)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_601(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 600), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_600)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_602(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 601), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_601)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_603(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 602), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_602)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_604(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 603), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_603)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_605(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 604), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_604)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_606(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 605), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_605)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_607(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 606), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_606)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_608(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 607), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_607)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_609(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 608), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_608)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_610(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 609), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_609)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_611(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 610), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_610)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_612(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 611), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_611)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_613(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 612), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_612)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_614(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 613), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_613)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_615(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 614), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_614)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_616(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 615), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_615)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_617(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 616), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_616)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_618(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 617), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_617)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_619(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 618), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_618)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_620(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 619), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_619)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_621(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 620), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_620)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_622(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 621), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_621)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_623(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 622), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_622)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_624(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 623), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_623)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_625(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 624), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_624)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_626(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 625), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_625)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_627(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 626), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_626)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_628(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 627), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_627)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_629(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 628), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_628)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_630(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 629), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_629)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_631(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 630), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_630)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_632(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 631), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_631)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_633(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 632), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_632)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_634(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 633), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_633)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_635(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 634), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_634)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_636(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 635), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_635)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_637(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 636), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_636)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_638(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 637), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_637)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_639(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 638), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_638)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_640(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 639), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_639)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_641(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 640), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_640)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_642(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 641), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_641)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_643(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 642), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_642)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_644(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 643), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_643)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_645(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 644), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_644)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_646(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 645), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_645)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_647(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 646), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_646)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_648(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 647), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_647)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_649(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 648), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_648)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_650(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 649), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_649)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_651(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 650), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_650)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_652(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 651), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_651)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_653(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 652), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_652)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_654(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 653), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_653)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_655(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 654), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_654)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_656(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 655), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_655)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_657(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 656), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_656)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_658(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 657), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_657)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_659(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 658), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_658)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_660(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 659), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_659)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_661(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 660), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_660)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_662(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 661), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_661)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_663(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 662), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_662)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_664(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 663), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_663)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_665(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 664), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_664)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_666(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 665), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_665)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_667(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 666), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_666)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_668(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 667), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_667)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_669(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 668), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_668)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_670(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 669), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_669)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_671(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 670), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_670)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_672(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 671), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_671)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_673(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 672), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_672)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_674(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 673), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_673)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_675(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 674), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_674)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_676(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 675), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_675)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_677(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 676), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_676)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_678(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 677), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_677)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_679(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 678), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_678)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_680(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 679), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_679)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_681(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 680), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_680)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_682(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 681), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_681)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_683(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 682), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_682)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_684(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 683), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_683)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_685(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 684), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_684)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_686(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 685), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_685)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_687(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 686), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_686)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_688(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 687), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_687)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_689(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 688), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_688)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_690(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 689), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_689)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_691(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 690), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_690)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_692(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 691), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_691)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_693(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 692), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_692)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_694(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 693), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_693)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_695(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 694), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_694)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_696(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 695), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_695)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_697(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 696), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_696)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_698(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 697), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_697)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_699(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 698), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_698)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_700(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 699), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_699)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_701(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 700), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_700)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_702(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 701), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_701)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_703(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 702), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_702)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_704(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 703), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_703)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_705(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 704), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_704)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_706(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 705), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_705)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_707(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 706), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_706)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_708(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 707), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_707)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_709(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 708), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_708)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_710(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 709), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_709)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_711(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 710), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_710)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_712(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 711), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_711)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_713(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 712), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_712)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_714(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 713), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_713)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_715(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 714), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_714)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_716(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 715), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_715)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_717(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 716), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_716)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_718(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 717), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_717)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_719(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 718), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_718)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_720(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 719), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_719)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_721(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 720), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_720)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_722(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 721), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_721)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_723(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 722), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_722)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_724(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 723), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_723)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_725(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 724), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_724)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_726(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 725), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_725)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_727(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 726), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_726)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_728(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 727), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_727)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_729(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 728), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_728)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_730(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 729), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_729)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_731(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 730), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_730)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_732(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 731), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_731)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_733(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 732), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_732)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_734(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 733), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_733)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_735(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 734), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_734)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_736(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 735), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_735)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_737(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 736), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_736)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_738(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 737), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_737)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_739(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 738), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_738)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_740(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 739), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_739)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_741(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 740), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_740)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_742(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 741), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_741)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_743(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 742), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_742)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_744(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 743), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_743)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_745(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 744), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_744)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_746(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 745), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_745)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_747(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 746), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_746)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_748(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 747), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_747)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_749(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 748), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_748)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_750(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 749), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_749)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_751(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 750), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_750)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_752(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 751), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_751)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_753(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 752), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_752)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_754(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 753), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_753)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_755(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 754), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_754)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_756(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 755), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_755)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_757(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 756), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_756)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_758(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 757), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_757)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_759(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 758), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_758)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_760(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 759), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_759)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_761(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 760), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_760)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_762(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 761), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_761)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_763(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 762), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_762)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_764(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 763), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_763)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_765(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 764), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_764)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_766(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 765), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_765)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_767(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 766), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_766)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_768(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 767), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_767)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_769(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 768), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_768)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_770(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 769), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_769)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_771(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 770), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_770)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_772(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 771), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_771)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_773(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 772), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_772)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_774(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 773), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_773)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_775(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 774), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_774)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_776(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 775), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_775)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_777(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 776), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_776)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_778(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 777), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_777)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_779(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 778), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_778)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_780(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 779), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_779)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_781(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 780), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_780)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_782(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 781), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_781)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_783(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 782), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_782)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_784(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 783), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_783)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_785(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 784), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_784)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_786(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 785), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_785)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_787(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 786), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_786)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_788(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 787), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_787)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_789(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 788), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_788)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_790(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 789), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_789)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_791(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 790), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_790)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_792(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 791), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_791)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_793(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 792), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_792)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_794(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 793), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_793)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_795(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 794), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_794)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_796(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 795), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_795)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_797(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 796), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_796)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_798(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 797), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_797)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_799(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 798), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_798)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_800(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 799), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_799)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_801(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 800), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_800)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_802(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 801), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_801)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_803(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 802), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_802)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_804(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 803), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_803)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_805(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 804), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_804)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_806(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 805), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_805)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_807(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 806), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_806)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_808(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 807), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_807)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_809(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 808), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_808)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_810(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 809), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_809)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_811(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 810), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_810)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_812(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 811), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_811)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_813(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 812), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_812)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_814(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 813), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_813)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_815(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 814), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_814)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_816(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 815), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_815)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_817(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 816), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_816)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_818(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 817), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_817)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_819(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 818), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_818)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_820(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 819), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_819)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_821(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 820), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_820)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_822(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 821), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_821)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_823(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 822), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_822)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_824(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 823), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_823)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_825(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 824), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_824)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_826(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 825), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_825)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_827(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 826), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_826)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_828(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 827), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_827)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_829(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 828), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_828)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_830(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 829), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_829)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_831(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 830), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_830)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_832(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 831), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_831)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_833(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 832), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_832)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_834(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 833), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_833)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_835(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 834), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_834)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_836(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 835), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_835)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_837(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 836), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_836)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_838(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 837), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_837)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_839(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 838), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_838)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_840(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 839), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_839)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_841(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 840), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_840)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_842(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 841), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_841)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_843(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 842), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_842)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_844(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 843), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_843)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_845(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 844), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_844)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_846(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 845), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_845)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_847(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 846), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_846)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_848(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 847), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_847)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_849(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 848), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_848)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_850(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 849), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_849)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_851(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 850), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_850)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_852(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 851), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_851)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_853(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 852), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_852)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_854(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 853), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_853)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_855(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 854), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_854)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_856(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 855), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_855)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_857(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 856), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_856)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_858(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 857), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_857)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_859(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 858), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_858)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_860(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 859), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_859)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_861(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 860), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_860)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_862(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 861), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_861)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_863(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 862), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_862)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_864(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 863), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_863)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_865(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 864), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_864)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_866(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 865), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_865)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_867(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 866), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_866)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_868(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 867), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_867)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_869(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 868), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_868)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_870(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 869), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_869)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_871(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 870), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_870)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_872(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 871), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_871)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_873(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 872), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_872)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_874(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 873), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_873)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_875(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 874), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_874)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_876(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 875), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_875)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_877(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 876), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_876)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_878(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 877), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_877)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_879(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 878), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_878)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_880(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 879), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_879)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_881(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 880), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_880)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_882(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 881), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_881)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_883(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 882), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_882)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_884(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 883), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_883)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_885(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 884), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_884)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_886(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 885), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_885)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_887(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 886), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_886)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_888(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 887), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_887)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_889(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 888), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_888)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_890(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 889), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_889)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_891(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 890), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_890)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_892(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 891), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_891)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_893(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 892), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_892)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_894(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 893), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_893)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_895(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 894), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_894)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_896(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 895), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_895)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_897(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 896), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_896)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_898(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 897), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_897)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_899(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 898), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_898)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_900(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 899), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_899)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_901(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 900), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_900)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_902(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 901), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_901)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_903(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 902), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_902)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_904(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 903), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_903)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_905(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 904), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_904)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_906(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 905), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_905)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_907(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 906), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_906)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_908(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 907), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_907)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_909(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 908), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_908)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_910(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 909), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_909)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_911(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 910), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_910)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_912(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 911), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_911)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_913(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 912), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_912)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_914(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 913), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_913)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_915(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 914), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_914)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_916(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 915), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_915)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_917(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 916), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_916)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_918(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 917), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_917)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_919(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 918), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_918)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_920(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 919), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_919)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_921(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 920), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_920)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_922(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 921), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_921)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_923(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 922), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_922)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_924(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 923), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_923)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_925(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 924), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_924)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_926(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 925), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_925)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_927(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 926), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_926)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_928(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 927), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_927)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_929(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 928), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_928)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_930(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 929), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_929)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_931(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 930), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_930)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_932(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 931), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_931)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_933(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 932), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_932)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_934(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 933), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_933)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_935(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 934), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_934)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_936(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 935), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_935)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_937(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 936), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_936)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_938(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 937), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_937)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_939(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 938), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_938)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_940(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 939), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_939)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_941(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 940), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_940)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_942(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 941), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_941)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_943(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 942), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_942)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_944(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 943), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_943)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_945(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 944), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_944)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_946(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 945), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_945)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_947(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 946), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_946)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_948(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 947), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_947)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_949(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 948), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_948)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_950(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 949), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_949)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_951(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 950), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_950)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_952(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 951), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_951)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_953(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 952), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_952)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_954(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 953), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_953)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_955(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 954), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_954)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_956(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 955), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_955)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_957(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 956), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_956)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_958(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 957), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_957)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_959(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 958), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_958)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_960(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 959), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_959)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_961(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 960), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_960)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_962(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 961), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_961)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_963(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 962), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_962)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_964(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 963), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_963)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_965(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 964), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_964)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_966(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 965), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_965)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_967(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 966), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_966)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_968(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 967), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_967)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_969(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 968), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_968)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_970(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 969), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_969)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_971(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 970), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_970)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_972(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 971), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_971)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_973(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 972), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_972)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_974(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 973), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_973)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_975(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 974), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_974)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_976(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 975), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_975)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_977(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 976), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_976)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_978(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 977), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_977)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_979(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 978), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_978)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_980(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 979), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_979)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_981(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 980), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_980)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_982(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 981), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_981)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_983(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 982), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_982)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_984(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 983), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_983)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_985(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 984), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_984)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_986(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 985), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_985)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_987(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 986), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_986)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_988(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 987), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_987)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_989(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 988), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_988)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_990(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 989), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_989)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_991(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 990), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_990)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_992(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 991), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_991)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_993(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 992), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_992)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_994(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 993), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_993)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_995(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 994), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_994)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_996(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 995), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_995)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_997(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 996), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_996)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_998(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 997), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_997)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_999(x)                                                      \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 998), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_998)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_1000(x)                                                     \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 999), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_999)      \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_1001(x)                                                     \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 1000), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_1000)    \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_1002(x)                                                     \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 1001), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_1001)    \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_1003(x)                                                     \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 1002), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_1002)    \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_1004(x)                                                     \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 1003), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_1003)    \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_1005(x)                                                     \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 1004), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_1004)    \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_1006(x)                                                     \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 1005), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_1005)    \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_1007(x)                                                     \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 1006), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_1006)    \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_1008(x)                                                     \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 1007), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_1007)    \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_1009(x)                                                     \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 1008), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_1008)    \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_1010(x)                                                     \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 1009), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_1009)    \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_1011(x)                                                     \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 1010), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_1010)    \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_1012(x)                                                     \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 1011), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_1011)    \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_1013(x)                                                     \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 1012), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_1012)    \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_1014(x)                                                     \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 1013), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_1013)    \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_1015(x)                                                     \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 1014), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_1014)    \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_1016(x)                                                     \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 1015), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_1015)    \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_1017(x)                                                     \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 1016), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_1016)    \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_1018(x)                                                     \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 1017), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_1017)    \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_1019(x)                                                     \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 1018), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_1018)    \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_1020(x)                                                     \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 1019), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_1019)    \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_1021(x)                                                     \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 1020), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_1020)    \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_1022(x)                                                     \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 1021), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_1021)    \
    (x)
#define KOSHMAR_PP_PRIVATE_UINT_LESSER_1023(x)                                                     \
    KOSHMAR_PP_IF(                                                                                 \
        KOSHMAR_PP_UINT_EQ(x, 1022), 1 KOSHMAR_PP_CONSUME, KOSHMAR_PP_PRIVATE_UINT_LESSER_1022)    \
    (x)

#endif // KOSHMAR_PP_UINT_LESSER_H
