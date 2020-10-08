#ifndef AGONY_PP_UINT_LESSER_H
#define AGONY_PP_UINT_LESSER_H

#include "../aux.h"
#include "../control.h"
#include "../logical.h"
#include "eq.h"

#define AGONY_PP_PRIVATE_UINT_LESSER(x, y) AGONY_PP_PRIVATE_UINT_LESSER_OVERLOAD(y)(x)

#define AGONY_PP_PRIVATE_UINT_LESSER_OVERLOAD(y) AGONY_PP_CAT(AGONY_PP_PRIVATE_UINT_LESSER_, y)

#define AGONY_PP_PRIVATE_UINT_LESSER_0(_x) 0
#define AGONY_PP_PRIVATE_UINT_LESSER_1(x)                                                          \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 0), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_0)        \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_2(x)                                                          \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 1), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_1)        \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_3(x)                                                          \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 2), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_2)        \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_4(x)                                                          \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 3), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_3)        \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_5(x)                                                          \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 4), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_4)        \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_6(x)                                                          \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 5), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_5)        \
    (x) /*  */
#define AGONY_PP_PRIVATE_UINT_LESSER_7(x)                                                          \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 6), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_6)        \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_8(x)                                                          \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 7), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_7)        \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_9(x)                                                          \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 8), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_8)        \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_10(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 9), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_9)        \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_11(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 10), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_10)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_12(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 11), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_11)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_13(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 12), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_12)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_14(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 13), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_13)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_15(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 14), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_14)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_16(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 15), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_15)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_17(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 16), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_16)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_18(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 17), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_17)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_19(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 18), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_18)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_20(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 19), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_19)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_21(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 20), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_20)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_22(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 21), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_21)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_23(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 22), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_22)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_24(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 23), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_23)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_25(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 24), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_24)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_26(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 25), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_25)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_27(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 26), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_26)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_28(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 27), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_27)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_29(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 28), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_28)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_30(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 29), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_29)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_31(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 30), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_30)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_32(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 31), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_31)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_33(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 32), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_32)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_34(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 33), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_33)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_35(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 34), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_34)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_36(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 35), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_35)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_37(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 36), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_36)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_38(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 37), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_37)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_39(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 38), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_38)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_40(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 39), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_39)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_41(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 40), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_40)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_42(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 41), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_41)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_43(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 42), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_42)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_44(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 43), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_43)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_45(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 44), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_44)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_46(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 45), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_45)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_47(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 46), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_46)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_48(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 47), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_47)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_49(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 48), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_48)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_50(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 49), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_49)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_51(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 50), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_50)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_52(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 51), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_51)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_53(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 52), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_52)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_54(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 53), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_53)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_55(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 54), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_54)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_56(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 55), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_55)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_57(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 56), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_56)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_58(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 57), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_57)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_59(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 58), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_58)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_60(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 59), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_59)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_61(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 60), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_60)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_62(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 61), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_61)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_63(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 62), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_62)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_64(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 63), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_63)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_65(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 64), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_64)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_66(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 65), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_65)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_67(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 66), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_66)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_68(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 67), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_67)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_69(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 68), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_68)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_70(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 69), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_69)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_71(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 70), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_70)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_72(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 71), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_71)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_73(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 72), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_72)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_74(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 73), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_73)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_75(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 74), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_74)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_76(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 75), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_75)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_77(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 76), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_76)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_78(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 77), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_77)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_79(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 78), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_78)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_80(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 79), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_79)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_81(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 80), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_80)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_82(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 81), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_81)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_83(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 82), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_82)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_84(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 83), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_83)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_85(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 84), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_84)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_86(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 85), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_85)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_87(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 86), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_86)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_88(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 87), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_87)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_89(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 88), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_88)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_90(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 89), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_89)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_91(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 90), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_90)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_92(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 91), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_91)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_93(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 92), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_92)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_94(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 93), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_93)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_95(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 94), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_94)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_96(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 95), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_95)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_97(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 96), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_96)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_98(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 97), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_97)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_99(x)                                                         \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 98), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_98)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_100(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 99), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_99)      \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_101(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 100), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_100)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_102(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 101), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_101)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_103(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 102), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_102)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_104(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 103), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_103)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_105(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 104), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_104)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_106(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 105), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_105)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_107(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 106), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_106)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_108(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 107), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_107)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_109(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 108), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_108)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_110(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 109), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_109)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_111(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 110), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_110)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_112(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 111), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_111)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_113(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 112), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_112)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_114(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 113), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_113)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_115(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 114), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_114)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_116(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 115), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_115)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_117(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 116), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_116)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_118(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 117), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_117)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_119(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 118), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_118)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_120(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 119), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_119)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_121(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 120), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_120)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_122(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 121), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_121)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_123(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 122), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_122)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_124(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 123), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_123)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_125(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 124), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_124)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_126(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 125), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_125)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_127(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 126), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_126)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_128(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 127), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_127)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_129(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 128), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_128)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_130(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 129), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_129)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_131(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 130), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_130)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_132(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 131), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_131)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_133(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 132), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_132)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_134(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 133), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_133)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_135(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 134), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_134)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_136(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 135), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_135)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_137(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 136), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_136)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_138(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 137), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_137)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_139(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 138), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_138)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_140(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 139), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_139)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_141(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 140), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_140)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_142(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 141), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_141)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_143(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 142), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_142)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_144(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 143), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_143)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_145(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 144), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_144)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_146(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 145), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_145)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_147(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 146), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_146)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_148(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 147), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_147)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_149(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 148), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_148)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_150(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 149), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_149)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_151(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 150), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_150)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_152(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 151), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_151)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_153(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 152), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_152)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_154(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 153), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_153)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_155(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 154), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_154)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_156(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 155), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_155)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_157(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 156), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_156)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_158(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 157), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_157)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_159(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 158), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_158)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_160(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 159), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_159)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_161(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 160), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_160)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_162(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 161), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_161)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_163(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 162), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_162)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_164(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 163), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_163)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_165(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 164), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_164)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_166(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 165), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_165)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_167(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 166), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_166)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_168(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 167), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_167)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_169(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 168), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_168)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_170(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 169), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_169)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_171(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 170), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_170)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_172(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 171), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_171)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_173(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 172), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_172)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_174(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 173), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_173)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_175(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 174), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_174)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_176(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 175), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_175)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_177(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 176), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_176)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_178(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 177), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_177)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_179(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 178), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_178)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_180(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 179), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_179)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_181(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 180), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_180)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_182(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 181), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_181)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_183(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 182), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_182)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_184(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 183), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_183)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_185(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 184), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_184)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_186(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 185), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_185)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_187(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 186), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_186)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_188(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 187), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_187)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_189(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 188), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_188)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_190(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 189), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_189)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_191(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 190), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_190)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_192(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 191), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_191)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_193(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 192), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_192)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_194(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 193), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_193)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_195(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 194), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_194)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_196(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 195), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_195)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_197(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 196), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_196)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_198(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 197), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_197)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_199(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 198), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_198)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_200(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 199), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_199)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_201(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 200), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_200)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_202(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 201), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_201)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_203(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 202), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_202)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_204(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 203), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_203)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_205(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 204), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_204)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_206(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 205), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_205)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_207(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 206), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_206)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_208(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 207), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_207)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_209(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 208), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_208)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_210(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 209), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_209)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_211(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 210), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_210)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_212(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 211), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_211)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_213(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 212), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_212)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_214(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 213), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_213)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_215(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 214), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_214)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_216(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 215), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_215)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_217(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 216), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_216)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_218(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 217), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_217)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_219(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 218), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_218)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_220(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 219), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_219)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_221(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 220), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_220)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_222(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 221), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_221)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_223(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 222), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_222)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_224(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 223), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_223)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_225(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 224), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_224)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_226(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 225), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_225)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_227(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 226), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_226)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_228(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 227), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_227)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_229(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 228), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_228)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_230(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 229), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_229)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_231(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 230), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_230)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_232(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 231), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_231)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_233(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 232), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_232)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_234(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 233), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_233)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_235(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 234), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_234)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_236(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 235), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_235)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_237(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 236), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_236)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_238(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 237), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_237)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_239(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 238), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_238)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_240(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 239), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_239)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_241(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 240), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_240)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_242(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 241), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_241)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_243(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 242), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_242)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_244(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 243), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_243)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_245(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 244), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_244)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_246(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 245), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_245)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_247(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 246), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_246)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_248(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 247), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_247)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_249(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 248), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_248)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_250(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 249), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_249)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_251(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 250), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_250)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_252(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 251), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_251)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_253(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 252), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_252)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_254(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 253), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_253)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_255(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 254), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_254)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_256(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 255), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_255)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_257(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 256), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_256)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_258(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 257), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_257)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_259(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 258), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_258)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_260(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 259), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_259)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_261(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 260), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_260)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_262(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 261), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_261)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_263(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 262), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_262)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_264(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 263), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_263)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_265(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 264), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_264)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_266(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 265), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_265)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_267(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 266), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_266)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_268(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 267), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_267)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_269(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 268), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_268)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_270(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 269), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_269)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_271(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 270), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_270)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_272(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 271), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_271)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_273(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 272), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_272)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_274(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 273), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_273)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_275(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 274), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_274)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_276(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 275), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_275)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_277(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 276), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_276)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_278(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 277), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_277)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_279(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 278), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_278)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_280(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 279), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_279)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_281(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 280), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_280)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_282(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 281), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_281)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_283(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 282), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_282)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_284(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 283), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_283)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_285(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 284), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_284)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_286(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 285), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_285)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_287(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 286), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_286)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_288(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 287), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_287)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_289(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 288), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_288)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_290(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 289), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_289)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_291(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 290), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_290)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_292(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 291), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_291)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_293(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 292), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_292)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_294(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 293), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_293)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_295(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 294), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_294)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_296(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 295), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_295)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_297(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 296), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_296)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_298(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 297), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_297)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_299(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 298), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_298)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_300(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 299), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_299)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_301(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 300), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_300)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_302(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 301), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_301)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_303(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 302), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_302)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_304(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 303), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_303)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_305(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 304), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_304)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_306(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 305), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_305)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_307(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 306), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_306)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_308(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 307), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_307)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_309(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 308), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_308)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_310(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 309), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_309)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_311(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 310), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_310)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_312(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 311), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_311)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_313(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 312), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_312)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_314(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 313), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_313)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_315(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 314), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_314)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_316(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 315), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_315)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_317(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 316), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_316)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_318(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 317), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_317)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_319(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 318), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_318)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_320(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 319), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_319)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_321(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 320), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_320)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_322(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 321), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_321)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_323(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 322), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_322)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_324(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 323), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_323)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_325(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 324), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_324)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_326(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 325), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_325)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_327(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 326), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_326)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_328(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 327), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_327)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_329(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 328), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_328)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_330(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 329), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_329)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_331(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 330), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_330)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_332(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 331), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_331)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_333(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 332), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_332)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_334(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 333), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_333)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_335(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 334), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_334)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_336(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 335), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_335)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_337(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 336), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_336)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_338(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 337), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_337)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_339(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 338), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_338)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_340(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 339), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_339)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_341(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 340), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_340)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_342(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 341), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_341)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_343(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 342), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_342)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_344(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 343), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_343)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_345(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 344), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_344)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_346(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 345), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_345)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_347(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 346), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_346)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_348(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 347), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_347)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_349(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 348), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_348)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_350(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 349), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_349)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_351(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 350), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_350)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_352(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 351), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_351)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_353(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 352), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_352)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_354(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 353), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_353)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_355(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 354), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_354)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_356(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 355), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_355)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_357(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 356), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_356)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_358(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 357), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_357)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_359(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 358), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_358)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_360(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 359), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_359)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_361(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 360), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_360)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_362(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 361), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_361)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_363(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 362), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_362)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_364(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 363), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_363)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_365(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 364), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_364)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_366(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 365), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_365)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_367(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 366), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_366)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_368(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 367), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_367)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_369(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 368), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_368)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_370(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 369), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_369)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_371(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 370), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_370)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_372(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 371), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_371)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_373(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 372), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_372)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_374(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 373), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_373)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_375(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 374), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_374)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_376(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 375), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_375)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_377(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 376), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_376)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_378(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 377), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_377)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_379(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 378), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_378)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_380(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 379), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_379)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_381(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 380), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_380)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_382(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 381), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_381)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_383(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 382), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_382)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_384(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 383), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_383)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_385(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 384), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_384)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_386(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 385), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_385)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_387(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 386), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_386)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_388(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 387), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_387)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_389(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 388), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_388)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_390(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 389), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_389)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_391(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 390), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_390)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_392(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 391), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_391)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_393(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 392), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_392)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_394(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 393), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_393)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_395(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 394), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_394)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_396(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 395), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_395)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_397(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 396), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_396)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_398(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 397), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_397)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_399(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 398), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_398)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_400(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 399), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_399)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_401(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 400), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_400)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_402(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 401), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_401)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_403(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 402), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_402)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_404(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 403), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_403)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_405(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 404), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_404)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_406(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 405), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_405)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_407(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 406), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_406)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_408(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 407), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_407)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_409(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 408), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_408)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_410(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 409), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_409)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_411(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 410), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_410)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_412(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 411), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_411)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_413(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 412), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_412)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_414(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 413), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_413)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_415(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 414), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_414)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_416(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 415), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_415)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_417(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 416), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_416)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_418(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 417), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_417)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_419(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 418), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_418)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_420(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 419), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_419)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_421(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 420), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_420)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_422(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 421), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_421)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_423(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 422), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_422)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_424(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 423), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_423)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_425(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 424), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_424)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_426(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 425), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_425)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_427(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 426), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_426)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_428(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 427), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_427)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_429(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 428), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_428)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_430(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 429), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_429)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_431(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 430), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_430)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_432(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 431), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_431)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_433(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 432), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_432)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_434(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 433), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_433)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_435(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 434), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_434)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_436(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 435), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_435)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_437(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 436), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_436)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_438(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 437), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_437)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_439(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 438), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_438)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_440(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 439), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_439)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_441(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 440), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_440)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_442(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 441), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_441)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_443(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 442), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_442)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_444(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 443), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_443)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_445(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 444), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_444)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_446(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 445), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_445)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_447(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 446), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_446)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_448(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 447), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_447)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_449(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 448), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_448)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_450(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 449), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_449)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_451(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 450), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_450)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_452(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 451), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_451)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_453(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 452), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_452)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_454(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 453), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_453)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_455(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 454), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_454)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_456(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 455), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_455)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_457(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 456), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_456)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_458(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 457), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_457)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_459(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 458), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_458)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_460(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 459), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_459)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_461(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 460), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_460)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_462(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 461), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_461)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_463(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 462), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_462)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_464(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 463), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_463)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_465(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 464), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_464)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_466(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 465), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_465)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_467(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 466), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_466)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_468(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 467), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_467)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_469(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 468), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_468)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_470(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 469), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_469)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_471(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 470), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_470)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_472(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 471), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_471)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_473(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 472), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_472)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_474(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 473), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_473)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_475(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 474), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_474)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_476(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 475), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_475)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_477(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 476), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_476)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_478(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 477), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_477)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_479(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 478), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_478)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_480(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 479), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_479)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_481(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 480), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_480)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_482(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 481), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_481)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_483(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 482), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_482)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_484(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 483), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_483)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_485(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 484), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_484)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_486(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 485), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_485)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_487(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 486), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_486)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_488(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 487), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_487)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_489(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 488), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_488)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_490(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 489), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_489)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_491(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 490), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_490)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_492(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 491), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_491)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_493(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 492), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_492)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_494(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 493), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_493)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_495(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 494), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_494)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_496(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 495), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_495)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_497(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 496), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_496)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_498(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 497), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_497)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_499(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 498), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_498)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_500(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 499), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_499)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_501(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 500), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_500)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_502(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 501), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_501)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_503(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 502), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_502)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_504(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 503), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_503)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_505(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 504), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_504)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_506(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 505), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_505)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_507(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 506), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_506)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_508(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 507), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_507)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_509(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 508), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_508)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_510(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 509), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_509)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_511(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 510), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_510)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_512(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 511), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_511)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_513(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 512), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_512)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_514(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 513), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_513)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_515(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 514), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_514)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_516(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 515), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_515)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_517(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 516), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_516)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_518(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 517), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_517)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_519(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 518), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_518)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_520(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 519), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_519)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_521(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 520), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_520)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_522(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 521), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_521)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_523(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 522), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_522)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_524(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 523), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_523)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_525(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 524), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_524)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_526(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 525), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_525)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_527(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 526), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_526)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_528(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 527), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_527)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_529(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 528), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_528)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_530(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 529), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_529)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_531(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 530), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_530)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_532(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 531), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_531)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_533(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 532), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_532)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_534(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 533), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_533)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_535(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 534), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_534)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_536(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 535), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_535)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_537(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 536), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_536)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_538(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 537), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_537)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_539(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 538), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_538)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_540(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 539), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_539)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_541(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 540), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_540)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_542(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 541), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_541)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_543(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 542), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_542)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_544(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 543), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_543)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_545(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 544), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_544)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_546(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 545), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_545)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_547(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 546), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_546)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_548(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 547), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_547)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_549(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 548), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_548)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_550(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 549), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_549)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_551(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 550), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_550)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_552(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 551), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_551)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_553(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 552), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_552)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_554(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 553), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_553)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_555(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 554), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_554)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_556(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 555), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_555)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_557(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 556), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_556)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_558(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 557), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_557)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_559(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 558), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_558)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_560(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 559), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_559)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_561(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 560), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_560)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_562(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 561), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_561)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_563(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 562), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_562)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_564(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 563), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_563)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_565(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 564), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_564)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_566(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 565), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_565)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_567(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 566), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_566)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_568(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 567), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_567)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_569(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 568), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_568)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_570(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 569), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_569)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_571(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 570), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_570)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_572(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 571), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_571)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_573(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 572), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_572)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_574(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 573), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_573)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_575(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 574), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_574)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_576(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 575), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_575)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_577(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 576), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_576)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_578(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 577), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_577)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_579(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 578), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_578)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_580(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 579), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_579)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_581(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 580), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_580)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_582(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 581), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_581)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_583(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 582), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_582)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_584(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 583), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_583)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_585(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 584), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_584)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_586(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 585), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_585)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_587(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 586), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_586)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_588(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 587), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_587)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_589(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 588), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_588)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_590(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 589), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_589)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_591(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 590), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_590)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_592(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 591), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_591)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_593(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 592), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_592)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_594(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 593), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_593)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_595(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 594), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_594)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_596(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 595), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_595)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_597(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 596), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_596)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_598(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 597), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_597)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_599(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 598), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_598)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_600(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 599), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_599)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_601(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 600), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_600)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_602(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 601), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_601)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_603(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 602), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_602)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_604(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 603), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_603)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_605(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 604), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_604)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_606(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 605), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_605)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_607(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 606), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_606)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_608(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 607), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_607)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_609(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 608), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_608)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_610(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 609), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_609)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_611(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 610), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_610)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_612(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 611), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_611)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_613(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 612), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_612)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_614(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 613), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_613)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_615(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 614), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_614)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_616(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 615), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_615)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_617(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 616), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_616)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_618(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 617), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_617)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_619(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 618), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_618)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_620(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 619), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_619)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_621(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 620), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_620)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_622(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 621), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_621)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_623(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 622), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_622)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_624(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 623), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_623)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_625(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 624), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_624)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_626(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 625), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_625)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_627(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 626), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_626)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_628(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 627), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_627)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_629(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 628), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_628)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_630(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 629), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_629)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_631(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 630), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_630)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_632(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 631), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_631)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_633(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 632), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_632)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_634(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 633), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_633)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_635(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 634), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_634)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_636(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 635), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_635)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_637(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 636), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_636)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_638(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 637), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_637)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_639(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 638), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_638)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_640(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 639), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_639)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_641(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 640), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_640)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_642(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 641), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_641)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_643(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 642), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_642)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_644(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 643), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_643)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_645(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 644), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_644)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_646(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 645), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_645)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_647(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 646), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_646)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_648(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 647), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_647)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_649(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 648), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_648)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_650(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 649), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_649)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_651(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 650), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_650)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_652(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 651), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_651)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_653(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 652), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_652)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_654(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 653), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_653)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_655(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 654), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_654)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_656(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 655), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_655)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_657(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 656), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_656)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_658(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 657), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_657)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_659(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 658), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_658)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_660(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 659), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_659)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_661(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 660), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_660)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_662(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 661), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_661)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_663(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 662), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_662)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_664(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 663), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_663)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_665(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 664), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_664)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_666(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 665), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_665)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_667(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 666), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_666)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_668(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 667), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_667)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_669(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 668), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_668)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_670(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 669), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_669)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_671(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 670), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_670)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_672(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 671), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_671)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_673(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 672), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_672)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_674(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 673), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_673)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_675(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 674), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_674)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_676(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 675), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_675)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_677(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 676), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_676)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_678(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 677), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_677)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_679(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 678), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_678)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_680(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 679), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_679)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_681(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 680), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_680)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_682(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 681), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_681)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_683(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 682), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_682)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_684(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 683), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_683)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_685(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 684), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_684)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_686(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 685), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_685)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_687(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 686), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_686)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_688(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 687), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_687)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_689(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 688), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_688)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_690(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 689), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_689)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_691(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 690), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_690)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_692(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 691), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_691)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_693(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 692), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_692)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_694(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 693), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_693)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_695(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 694), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_694)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_696(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 695), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_695)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_697(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 696), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_696)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_698(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 697), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_697)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_699(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 698), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_698)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_700(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 699), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_699)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_701(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 700), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_700)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_702(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 701), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_701)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_703(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 702), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_702)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_704(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 703), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_703)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_705(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 704), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_704)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_706(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 705), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_705)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_707(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 706), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_706)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_708(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 707), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_707)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_709(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 708), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_708)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_710(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 709), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_709)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_711(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 710), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_710)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_712(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 711), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_711)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_713(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 712), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_712)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_714(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 713), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_713)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_715(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 714), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_714)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_716(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 715), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_715)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_717(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 716), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_716)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_718(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 717), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_717)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_719(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 718), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_718)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_720(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 719), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_719)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_721(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 720), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_720)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_722(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 721), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_721)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_723(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 722), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_722)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_724(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 723), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_723)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_725(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 724), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_724)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_726(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 725), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_725)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_727(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 726), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_726)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_728(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 727), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_727)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_729(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 728), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_728)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_730(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 729), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_729)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_731(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 730), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_730)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_732(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 731), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_731)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_733(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 732), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_732)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_734(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 733), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_733)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_735(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 734), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_734)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_736(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 735), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_735)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_737(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 736), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_736)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_738(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 737), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_737)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_739(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 738), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_738)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_740(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 739), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_739)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_741(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 740), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_740)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_742(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 741), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_741)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_743(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 742), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_742)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_744(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 743), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_743)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_745(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 744), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_744)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_746(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 745), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_745)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_747(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 746), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_746)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_748(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 747), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_747)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_749(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 748), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_748)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_750(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 749), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_749)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_751(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 750), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_750)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_752(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 751), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_751)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_753(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 752), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_752)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_754(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 753), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_753)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_755(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 754), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_754)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_756(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 755), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_755)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_757(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 756), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_756)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_758(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 757), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_757)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_759(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 758), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_758)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_760(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 759), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_759)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_761(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 760), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_760)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_762(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 761), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_761)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_763(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 762), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_762)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_764(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 763), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_763)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_765(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 764), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_764)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_766(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 765), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_765)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_767(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 766), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_766)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_768(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 767), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_767)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_769(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 768), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_768)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_770(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 769), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_769)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_771(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 770), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_770)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_772(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 771), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_771)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_773(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 772), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_772)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_774(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 773), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_773)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_775(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 774), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_774)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_776(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 775), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_775)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_777(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 776), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_776)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_778(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 777), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_777)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_779(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 778), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_778)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_780(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 779), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_779)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_781(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 780), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_780)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_782(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 781), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_781)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_783(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 782), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_782)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_784(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 783), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_783)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_785(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 784), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_784)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_786(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 785), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_785)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_787(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 786), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_786)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_788(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 787), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_787)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_789(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 788), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_788)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_790(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 789), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_789)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_791(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 790), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_790)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_792(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 791), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_791)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_793(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 792), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_792)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_794(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 793), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_793)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_795(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 794), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_794)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_796(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 795), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_795)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_797(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 796), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_796)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_798(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 797), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_797)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_799(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 798), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_798)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_800(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 799), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_799)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_801(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 800), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_800)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_802(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 801), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_801)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_803(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 802), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_802)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_804(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 803), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_803)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_805(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 804), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_804)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_806(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 805), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_805)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_807(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 806), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_806)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_808(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 807), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_807)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_809(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 808), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_808)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_810(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 809), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_809)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_811(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 810), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_810)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_812(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 811), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_811)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_813(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 812), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_812)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_814(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 813), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_813)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_815(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 814), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_814)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_816(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 815), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_815)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_817(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 816), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_816)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_818(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 817), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_817)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_819(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 818), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_818)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_820(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 819), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_819)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_821(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 820), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_820)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_822(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 821), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_821)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_823(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 822), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_822)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_824(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 823), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_823)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_825(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 824), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_824)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_826(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 825), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_825)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_827(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 826), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_826)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_828(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 827), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_827)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_829(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 828), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_828)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_830(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 829), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_829)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_831(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 830), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_830)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_832(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 831), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_831)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_833(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 832), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_832)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_834(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 833), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_833)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_835(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 834), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_834)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_836(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 835), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_835)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_837(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 836), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_836)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_838(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 837), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_837)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_839(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 838), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_838)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_840(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 839), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_839)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_841(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 840), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_840)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_842(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 841), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_841)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_843(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 842), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_842)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_844(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 843), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_843)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_845(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 844), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_844)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_846(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 845), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_845)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_847(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 846), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_846)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_848(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 847), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_847)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_849(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 848), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_848)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_850(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 849), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_849)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_851(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 850), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_850)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_852(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 851), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_851)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_853(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 852), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_852)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_854(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 853), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_853)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_855(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 854), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_854)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_856(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 855), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_855)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_857(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 856), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_856)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_858(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 857), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_857)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_859(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 858), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_858)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_860(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 859), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_859)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_861(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 860), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_860)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_862(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 861), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_861)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_863(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 862), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_862)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_864(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 863), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_863)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_865(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 864), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_864)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_866(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 865), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_865)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_867(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 866), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_866)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_868(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 867), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_867)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_869(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 868), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_868)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_870(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 869), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_869)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_871(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 870), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_870)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_872(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 871), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_871)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_873(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 872), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_872)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_874(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 873), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_873)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_875(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 874), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_874)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_876(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 875), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_875)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_877(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 876), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_876)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_878(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 877), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_877)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_879(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 878), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_878)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_880(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 879), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_879)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_881(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 880), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_880)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_882(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 881), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_881)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_883(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 882), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_882)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_884(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 883), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_883)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_885(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 884), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_884)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_886(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 885), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_885)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_887(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 886), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_886)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_888(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 887), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_887)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_889(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 888), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_888)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_890(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 889), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_889)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_891(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 890), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_890)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_892(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 891), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_891)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_893(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 892), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_892)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_894(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 893), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_893)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_895(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 894), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_894)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_896(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 895), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_895)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_897(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 896), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_896)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_898(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 897), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_897)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_899(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 898), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_898)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_900(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 899), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_899)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_901(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 900), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_900)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_902(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 901), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_901)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_903(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 902), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_902)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_904(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 903), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_903)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_905(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 904), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_904)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_906(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 905), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_905)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_907(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 906), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_906)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_908(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 907), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_907)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_909(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 908), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_908)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_910(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 909), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_909)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_911(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 910), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_910)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_912(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 911), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_911)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_913(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 912), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_912)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_914(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 913), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_913)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_915(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 914), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_914)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_916(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 915), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_915)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_917(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 916), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_916)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_918(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 917), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_917)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_919(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 918), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_918)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_920(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 919), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_919)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_921(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 920), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_920)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_922(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 921), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_921)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_923(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 922), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_922)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_924(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 923), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_923)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_925(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 924), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_924)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_926(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 925), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_925)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_927(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 926), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_926)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_928(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 927), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_927)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_929(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 928), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_928)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_930(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 929), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_929)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_931(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 930), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_930)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_932(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 931), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_931)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_933(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 932), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_932)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_934(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 933), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_933)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_935(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 934), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_934)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_936(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 935), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_935)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_937(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 936), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_936)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_938(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 937), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_937)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_939(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 938), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_938)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_940(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 939), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_939)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_941(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 940), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_940)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_942(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 941), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_941)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_943(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 942), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_942)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_944(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 943), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_943)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_945(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 944), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_944)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_946(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 945), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_945)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_947(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 946), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_946)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_948(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 947), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_947)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_949(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 948), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_948)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_950(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 949), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_949)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_951(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 950), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_950)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_952(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 951), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_951)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_953(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 952), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_952)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_954(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 953), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_953)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_955(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 954), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_954)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_956(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 955), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_955)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_957(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 956), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_956)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_958(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 957), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_957)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_959(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 958), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_958)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_960(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 959), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_959)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_961(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 960), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_960)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_962(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 961), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_961)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_963(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 962), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_962)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_964(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 963), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_963)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_965(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 964), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_964)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_966(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 965), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_965)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_967(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 966), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_966)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_968(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 967), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_967)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_969(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 968), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_968)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_970(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 969), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_969)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_971(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 970), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_970)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_972(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 971), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_971)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_973(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 972), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_972)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_974(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 973), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_973)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_975(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 974), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_974)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_976(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 975), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_975)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_977(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 976), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_976)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_978(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 977), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_977)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_979(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 978), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_978)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_980(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 979), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_979)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_981(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 980), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_980)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_982(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 981), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_981)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_983(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 982), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_982)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_984(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 983), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_983)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_985(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 984), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_984)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_986(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 985), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_985)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_987(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 986), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_986)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_988(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 987), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_987)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_989(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 988), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_988)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_990(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 989), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_989)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_991(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 990), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_990)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_992(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 991), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_991)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_993(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 992), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_992)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_994(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 993), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_993)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_995(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 994), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_994)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_996(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 995), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_995)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_997(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 996), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_996)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_998(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 997), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_997)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_999(x)                                                        \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 998), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_998)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_1000(x)                                                       \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 999), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_999)    \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_1001(x)                                                       \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 1000), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_1000)  \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_1002(x)                                                       \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 1001), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_1001)  \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_1003(x)                                                       \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 1002), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_1002)  \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_1004(x)                                                       \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 1003), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_1003)  \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_1005(x)                                                       \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 1004), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_1004)  \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_1006(x)                                                       \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 1005), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_1005)  \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_1007(x)                                                       \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 1006), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_1006)  \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_1008(x)                                                       \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 1007), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_1007)  \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_1009(x)                                                       \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 1008), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_1008)  \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_1010(x)                                                       \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 1009), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_1009)  \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_1011(x)                                                       \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 1010), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_1010)  \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_1012(x)                                                       \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 1011), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_1011)  \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_1013(x)                                                       \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 1012), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_1012)  \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_1014(x)                                                       \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 1013), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_1013)  \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_1015(x)                                                       \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 1014), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_1014)  \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_1016(x)                                                       \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 1015), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_1015)  \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_1017(x)                                                       \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 1016), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_1016)  \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_1018(x)                                                       \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 1017), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_1017)  \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_1019(x)                                                       \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 1018), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_1018)  \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_1020(x)                                                       \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 1019), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_1019)  \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_1021(x)                                                       \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 1020), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_1020)  \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_1022(x)                                                       \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 1021), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_1021)  \
    (x)
#define AGONY_PP_PRIVATE_UINT_LESSER_1023(x)                                                       \
    AGONY_PP_IF(AGONY_PP_UINT_EQ(x, 1022), 1 AGONY_PP_CONSUME, AGONY_PP_PRIVATE_UINT_LESSER_1022)  \
    (x)

#endif // AGONY_PP_UINT_LESSER_H
