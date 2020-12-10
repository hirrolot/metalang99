#ifndef MACROLOP_EVAL_PATCH_WITH_COMMAS_H
#define MACROLOP_EVAL_PATCH_WITH_COMMAS_H

#include "../priv/aux.h"
#include "../priv/uint/eq.h"
#include "../priv/variadics/count.h"
#include "control.h"
#include "term.h"

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS(...)                                            \
    MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_AUX(                                                \
        MACROLOP_PRIV_VARIADICS_COUNT(__VA_ARGS__ MACROLOP_PRIV_EVAL_TERM_END()),                  \
        __VA_ARGS__ MACROLOP_PRIV_EVAL_TERM_END())

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_AUX(count, ...)                                 \
    MACROLOP_PRIV_AUX_IF(                                                                          \
        MACROLOP_PRIV_UINT_EQ(count, 1), MACROLOP_PRIV_AUX_CONSUME,                                \
        MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_NON_EMPTY)                                      \
    (count, __VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_NON_EMPTY(count, ...)                           \
    MACROLOP_PRIV_AUX_CAT(MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_, count)(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_2(head, end) head,

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_3(head, ...)                                    \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_2(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_4(head, ...)                                    \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_3(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_5(head, ...)                                    \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_4(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_6(head, ...)                                    \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_5(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_7(head, ...)                                    \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_6(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_8(head, ...)                                    \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_7(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_9(head, ...)                                    \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_8(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_10(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_9(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_11(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_10(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_12(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_11(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_13(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_12(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_14(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_13(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_15(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_14(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_16(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_15(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_17(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_16(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_18(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_17(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_19(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_18(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_20(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_19(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_21(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_20(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_22(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_21(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_23(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_22(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_24(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_23(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_25(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_24(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_26(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_25(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_27(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_26(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_28(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_27(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_29(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_28(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_30(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_29(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_31(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_30(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_32(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_31(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_33(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_32(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_34(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_33(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_35(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_34(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_36(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_35(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_37(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_36(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_38(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_37(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_39(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_38(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_40(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_39(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_41(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_40(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_42(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_41(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_43(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_42(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_44(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_43(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_45(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_44(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_46(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_45(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_47(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_46(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_48(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_47(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_49(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_48(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_50(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_49(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_51(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_50(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_52(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_51(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_53(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_52(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_54(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_53(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_55(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_54(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_56(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_55(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_57(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_56(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_58(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_57(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_59(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_58(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_60(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_59(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_61(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_60(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_62(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_61(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_63(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_62(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_64(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_63(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_65(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_64(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_66(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_65(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_67(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_66(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_68(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_67(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_69(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_68(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_70(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_69(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_71(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_70(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_72(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_71(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_73(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_72(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_74(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_73(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_75(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_74(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_76(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_75(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_77(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_76(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_78(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_77(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_79(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_78(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_80(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_79(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_81(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_80(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_82(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_81(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_83(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_82(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_84(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_83(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_85(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_84(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_86(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_85(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_87(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_86(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_88(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_87(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_89(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_88(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_90(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_89(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_91(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_90(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_92(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_91(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_93(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_92(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_94(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_93(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_95(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_94(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_96(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_95(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_97(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_96(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_98(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_97(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_99(head, ...)                                   \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_98(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_100(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_99(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_101(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_100(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_102(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_101(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_103(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_102(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_104(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_103(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_105(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_104(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_106(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_105(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_107(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_106(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_108(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_107(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_109(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_108(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_110(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_109(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_111(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_110(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_112(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_111(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_113(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_112(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_114(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_113(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_115(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_114(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_116(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_115(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_117(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_116(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_118(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_117(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_119(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_118(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_120(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_119(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_121(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_120(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_122(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_121(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_123(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_122(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_124(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_123(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_125(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_124(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_126(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_125(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_127(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_126(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_128(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_127(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_129(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_128(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_130(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_129(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_131(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_130(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_132(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_131(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_133(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_132(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_134(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_133(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_135(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_134(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_136(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_135(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_137(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_136(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_138(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_137(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_139(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_138(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_140(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_139(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_141(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_140(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_142(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_141(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_143(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_142(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_144(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_143(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_145(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_144(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_146(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_145(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_147(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_146(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_148(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_147(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_149(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_148(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_150(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_149(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_151(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_150(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_152(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_151(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_153(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_152(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_154(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_153(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_155(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_154(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_156(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_155(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_157(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_156(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_158(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_157(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_159(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_158(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_160(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_159(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_161(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_160(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_162(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_161(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_163(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_162(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_164(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_163(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_165(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_164(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_166(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_165(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_167(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_166(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_168(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_167(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_169(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_168(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_170(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_169(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_171(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_170(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_172(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_171(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_173(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_172(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_174(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_173(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_175(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_174(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_176(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_175(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_177(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_176(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_178(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_177(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_179(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_178(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_180(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_179(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_181(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_180(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_182(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_181(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_183(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_182(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_184(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_183(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_185(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_184(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_186(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_185(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_187(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_186(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_188(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_187(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_189(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_188(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_190(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_189(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_191(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_190(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_192(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_191(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_193(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_192(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_194(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_193(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_195(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_194(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_196(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_195(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_197(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_196(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_198(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_197(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_199(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_198(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_200(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_199(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_201(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_200(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_202(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_201(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_203(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_202(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_204(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_203(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_205(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_204(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_206(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_205(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_207(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_206(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_208(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_207(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_209(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_208(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_210(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_209(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_211(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_210(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_212(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_211(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_213(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_212(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_214(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_213(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_215(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_214(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_216(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_215(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_217(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_216(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_218(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_217(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_219(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_218(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_220(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_219(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_221(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_220(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_222(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_221(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_223(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_222(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_224(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_223(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_225(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_224(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_226(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_225(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_227(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_226(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_228(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_227(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_229(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_228(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_230(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_229(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_231(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_230(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_232(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_231(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_233(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_232(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_234(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_233(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_235(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_234(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_236(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_235(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_237(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_236(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_238(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_237(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_239(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_238(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_240(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_239(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_241(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_240(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_242(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_241(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_243(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_242(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_244(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_243(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_245(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_244(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_246(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_245(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_247(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_246(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_248(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_247(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_249(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_248(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_250(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_249(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_251(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_250(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_252(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_251(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_253(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_252(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_254(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_253(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_255(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_254(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_256(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_255(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_257(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_256(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_258(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_257(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_259(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_258(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_260(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_259(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_261(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_260(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_262(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_261(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_263(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_262(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_264(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_263(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_265(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_264(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_266(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_265(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_267(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_266(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_268(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_267(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_269(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_268(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_270(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_269(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_271(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_270(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_272(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_271(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_273(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_272(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_274(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_273(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_275(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_274(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_276(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_275(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_277(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_276(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_278(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_277(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_279(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_278(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_280(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_279(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_281(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_280(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_282(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_281(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_283(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_282(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_284(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_283(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_285(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_284(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_286(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_285(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_287(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_286(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_288(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_287(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_289(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_288(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_290(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_289(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_291(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_290(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_292(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_291(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_293(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_292(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_294(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_293(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_295(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_294(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_296(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_295(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_297(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_296(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_298(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_297(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_299(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_298(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_300(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_299(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_301(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_300(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_302(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_301(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_303(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_302(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_304(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_303(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_305(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_304(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_306(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_305(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_307(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_306(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_308(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_307(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_309(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_308(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_310(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_309(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_311(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_310(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_312(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_311(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_313(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_312(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_314(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_313(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_315(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_314(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_316(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_315(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_317(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_316(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_318(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_317(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_319(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_318(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_320(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_319(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_321(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_320(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_322(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_321(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_323(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_322(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_324(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_323(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_325(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_324(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_326(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_325(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_327(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_326(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_328(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_327(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_329(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_328(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_330(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_329(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_331(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_330(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_332(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_331(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_333(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_332(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_334(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_333(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_335(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_334(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_336(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_335(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_337(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_336(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_338(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_337(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_339(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_338(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_340(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_339(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_341(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_340(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_342(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_341(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_343(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_342(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_344(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_343(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_345(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_344(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_346(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_345(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_347(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_346(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_348(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_347(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_349(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_348(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_350(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_349(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_351(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_350(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_352(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_351(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_353(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_352(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_354(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_353(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_355(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_354(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_356(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_355(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_357(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_356(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_358(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_357(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_359(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_358(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_360(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_359(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_361(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_360(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_362(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_361(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_363(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_362(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_364(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_363(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_365(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_364(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_366(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_365(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_367(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_366(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_368(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_367(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_369(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_368(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_370(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_369(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_371(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_370(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_372(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_371(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_373(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_372(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_374(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_373(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_375(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_374(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_376(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_375(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_377(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_376(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_378(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_377(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_379(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_378(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_380(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_379(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_381(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_380(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_382(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_381(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_383(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_382(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_384(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_383(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_385(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_384(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_386(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_385(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_387(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_386(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_388(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_387(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_389(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_388(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_390(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_389(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_391(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_390(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_392(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_391(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_393(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_392(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_394(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_393(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_395(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_394(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_396(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_395(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_397(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_396(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_398(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_397(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_399(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_398(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_400(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_399(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_401(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_400(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_402(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_401(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_403(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_402(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_404(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_403(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_405(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_404(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_406(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_405(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_407(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_406(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_408(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_407(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_409(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_408(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_410(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_409(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_411(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_410(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_412(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_411(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_413(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_412(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_414(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_413(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_415(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_414(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_416(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_415(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_417(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_416(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_418(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_417(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_419(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_418(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_420(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_419(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_421(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_420(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_422(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_421(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_423(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_422(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_424(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_423(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_425(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_424(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_426(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_425(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_427(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_426(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_428(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_427(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_429(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_428(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_430(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_429(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_431(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_430(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_432(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_431(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_433(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_432(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_434(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_433(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_435(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_434(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_436(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_435(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_437(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_436(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_438(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_437(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_439(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_438(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_440(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_439(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_441(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_440(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_442(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_441(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_443(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_442(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_444(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_443(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_445(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_444(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_446(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_445(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_447(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_446(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_448(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_447(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_449(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_448(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_450(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_449(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_451(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_450(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_452(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_451(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_453(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_452(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_454(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_453(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_455(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_454(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_456(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_455(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_457(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_456(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_458(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_457(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_459(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_458(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_460(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_459(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_461(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_460(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_462(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_461(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_463(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_462(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_464(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_463(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_465(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_464(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_466(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_465(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_467(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_466(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_468(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_467(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_469(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_468(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_470(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_469(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_471(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_470(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_472(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_471(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_473(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_472(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_474(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_473(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_475(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_474(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_476(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_475(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_477(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_476(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_478(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_477(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_479(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_478(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_480(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_479(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_481(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_480(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_482(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_481(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_483(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_482(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_484(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_483(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_485(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_484(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_486(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_485(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_487(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_486(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_488(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_487(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_489(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_488(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_490(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_489(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_491(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_490(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_492(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_491(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_493(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_492(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_494(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_493(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_495(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_494(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_496(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_495(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_497(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_496(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_498(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_497(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_499(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_498(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_500(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_499(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_501(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_500(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_502(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_501(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_503(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_502(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_504(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_503(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_505(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_504(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_506(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_505(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_507(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_506(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_508(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_507(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_509(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_508(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_510(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_509(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_511(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_510(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_512(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_511(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_513(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_512(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_514(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_513(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_515(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_514(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_516(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_515(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_517(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_516(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_518(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_517(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_519(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_518(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_520(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_519(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_521(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_520(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_522(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_521(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_523(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_522(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_524(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_523(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_525(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_524(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_526(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_525(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_527(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_526(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_528(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_527(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_529(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_528(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_530(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_529(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_531(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_530(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_532(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_531(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_533(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_532(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_534(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_533(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_535(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_534(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_536(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_535(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_537(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_536(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_538(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_537(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_539(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_538(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_540(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_539(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_541(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_540(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_542(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_541(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_543(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_542(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_544(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_543(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_545(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_544(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_546(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_545(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_547(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_546(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_548(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_547(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_549(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_548(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_550(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_549(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_551(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_550(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_552(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_551(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_553(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_552(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_554(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_553(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_555(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_554(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_556(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_555(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_557(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_556(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_558(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_557(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_559(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_558(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_560(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_559(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_561(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_560(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_562(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_561(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_563(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_562(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_564(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_563(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_565(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_564(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_566(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_565(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_567(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_566(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_568(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_567(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_569(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_568(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_570(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_569(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_571(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_570(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_572(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_571(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_573(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_572(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_574(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_573(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_575(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_574(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_576(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_575(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_577(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_576(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_578(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_577(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_579(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_578(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_580(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_579(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_581(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_580(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_582(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_581(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_583(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_582(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_584(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_583(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_585(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_584(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_586(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_585(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_587(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_586(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_588(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_587(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_589(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_588(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_590(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_589(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_591(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_590(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_592(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_591(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_593(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_592(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_594(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_593(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_595(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_594(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_596(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_595(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_597(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_596(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_598(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_597(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_599(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_598(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_600(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_599(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_601(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_600(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_602(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_601(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_603(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_602(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_604(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_603(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_605(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_604(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_606(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_605(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_607(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_606(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_608(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_607(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_609(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_608(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_610(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_609(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_611(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_610(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_612(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_611(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_613(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_612(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_614(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_613(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_615(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_614(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_616(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_615(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_617(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_616(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_618(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_617(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_619(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_618(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_620(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_619(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_621(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_620(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_622(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_621(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_623(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_622(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_624(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_623(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_625(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_624(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_626(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_625(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_627(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_626(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_628(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_627(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_629(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_628(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_630(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_629(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_631(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_630(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_632(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_631(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_633(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_632(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_634(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_633(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_635(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_634(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_636(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_635(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_637(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_636(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_638(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_637(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_639(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_638(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_640(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_639(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_641(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_640(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_642(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_641(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_643(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_642(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_644(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_643(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_645(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_644(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_646(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_645(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_647(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_646(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_648(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_647(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_649(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_648(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_650(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_649(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_651(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_650(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_652(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_651(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_653(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_652(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_654(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_653(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_655(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_654(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_656(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_655(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_657(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_656(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_658(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_657(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_659(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_658(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_660(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_659(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_661(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_660(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_662(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_661(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_663(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_662(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_664(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_663(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_665(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_664(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_666(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_665(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_667(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_666(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_668(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_667(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_669(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_668(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_670(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_669(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_671(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_670(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_672(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_671(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_673(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_672(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_674(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_673(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_675(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_674(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_676(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_675(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_677(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_676(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_678(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_677(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_679(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_678(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_680(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_679(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_681(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_680(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_682(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_681(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_683(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_682(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_684(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_683(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_685(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_684(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_686(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_685(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_687(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_686(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_688(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_687(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_689(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_688(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_690(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_689(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_691(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_690(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_692(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_691(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_693(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_692(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_694(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_693(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_695(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_694(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_696(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_695(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_697(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_696(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_698(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_697(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_699(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_698(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_700(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_699(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_701(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_700(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_702(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_701(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_703(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_702(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_704(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_703(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_705(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_704(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_706(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_705(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_707(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_706(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_708(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_707(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_709(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_708(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_710(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_709(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_711(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_710(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_712(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_711(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_713(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_712(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_714(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_713(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_715(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_714(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_716(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_715(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_717(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_716(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_718(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_717(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_719(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_718(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_720(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_719(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_721(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_720(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_722(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_721(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_723(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_722(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_724(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_723(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_725(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_724(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_726(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_725(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_727(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_726(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_728(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_727(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_729(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_728(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_730(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_729(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_731(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_730(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_732(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_731(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_733(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_732(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_734(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_733(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_735(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_734(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_736(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_735(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_737(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_736(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_738(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_737(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_739(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_738(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_740(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_739(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_741(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_740(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_742(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_741(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_743(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_742(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_744(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_743(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_745(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_744(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_746(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_745(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_747(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_746(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_748(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_747(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_749(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_748(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_750(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_749(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_751(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_750(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_752(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_751(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_753(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_752(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_754(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_753(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_755(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_754(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_756(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_755(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_757(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_756(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_758(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_757(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_759(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_758(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_760(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_759(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_761(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_760(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_762(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_761(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_763(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_762(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_764(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_763(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_765(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_764(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_766(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_765(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_767(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_766(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_768(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_767(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_769(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_768(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_770(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_769(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_771(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_770(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_772(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_771(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_773(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_772(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_774(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_773(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_775(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_774(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_776(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_775(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_777(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_776(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_778(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_777(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_779(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_778(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_780(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_779(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_781(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_780(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_782(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_781(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_783(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_782(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_784(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_783(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_785(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_784(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_786(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_785(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_787(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_786(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_788(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_787(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_789(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_788(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_790(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_789(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_791(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_790(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_792(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_791(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_793(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_792(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_794(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_793(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_795(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_794(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_796(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_795(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_797(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_796(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_798(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_797(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_799(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_798(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_800(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_799(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_801(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_800(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_802(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_801(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_803(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_802(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_804(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_803(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_805(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_804(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_806(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_805(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_807(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_806(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_808(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_807(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_809(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_808(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_810(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_809(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_811(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_810(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_812(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_811(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_813(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_812(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_814(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_813(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_815(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_814(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_816(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_815(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_817(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_816(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_818(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_817(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_819(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_818(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_820(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_819(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_821(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_820(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_822(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_821(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_823(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_822(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_824(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_823(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_825(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_824(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_826(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_825(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_827(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_826(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_828(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_827(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_829(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_828(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_830(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_829(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_831(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_830(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_832(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_831(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_833(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_832(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_834(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_833(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_835(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_834(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_836(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_835(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_837(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_836(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_838(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_837(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_839(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_838(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_840(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_839(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_841(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_840(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_842(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_841(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_843(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_842(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_844(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_843(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_845(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_844(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_846(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_845(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_847(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_846(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_848(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_847(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_849(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_848(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_850(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_849(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_851(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_850(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_852(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_851(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_853(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_852(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_854(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_853(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_855(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_854(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_856(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_855(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_857(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_856(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_858(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_857(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_859(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_858(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_860(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_859(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_861(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_860(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_862(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_861(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_863(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_862(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_864(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_863(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_865(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_864(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_866(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_865(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_867(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_866(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_868(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_867(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_869(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_868(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_870(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_869(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_871(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_870(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_872(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_871(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_873(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_872(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_874(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_873(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_875(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_874(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_876(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_875(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_877(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_876(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_878(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_877(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_879(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_878(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_880(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_879(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_881(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_880(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_882(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_881(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_883(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_882(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_884(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_883(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_885(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_884(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_886(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_885(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_887(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_886(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_888(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_887(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_889(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_888(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_890(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_889(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_891(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_890(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_892(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_891(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_893(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_892(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_894(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_893(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_895(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_894(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_896(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_895(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_897(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_896(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_898(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_897(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_899(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_898(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_900(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_899(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_901(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_900(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_902(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_901(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_903(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_902(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_904(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_903(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_905(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_904(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_906(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_905(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_907(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_906(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_908(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_907(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_909(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_908(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_910(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_909(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_911(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_910(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_912(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_911(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_913(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_912(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_914(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_913(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_915(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_914(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_916(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_915(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_917(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_916(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_918(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_917(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_919(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_918(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_920(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_919(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_921(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_920(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_922(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_921(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_923(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_922(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_924(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_923(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_925(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_924(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_926(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_925(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_927(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_926(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_928(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_927(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_929(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_928(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_930(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_929(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_931(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_930(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_932(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_931(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_933(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_932(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_934(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_933(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_935(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_934(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_936(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_935(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_937(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_936(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_938(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_937(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_939(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_938(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_940(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_939(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_941(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_940(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_942(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_941(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_943(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_942(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_944(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_943(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_945(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_944(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_946(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_945(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_947(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_946(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_948(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_947(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_949(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_948(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_950(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_949(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_951(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_950(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_952(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_951(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_953(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_952(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_954(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_953(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_955(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_954(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_956(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_955(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_957(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_956(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_958(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_957(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_959(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_958(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_960(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_959(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_961(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_960(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_962(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_961(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_963(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_962(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_964(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_963(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_965(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_964(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_966(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_965(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_967(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_966(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_968(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_967(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_969(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_968(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_970(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_969(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_971(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_970(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_972(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_971(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_973(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_972(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_974(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_973(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_975(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_974(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_976(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_975(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_977(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_976(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_978(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_977(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_979(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_978(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_980(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_979(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_981(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_980(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_982(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_981(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_983(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_982(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_984(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_983(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_985(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_984(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_986(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_985(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_987(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_986(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_988(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_987(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_989(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_988(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_990(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_989(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_991(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_990(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_992(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_991(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_993(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_992(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_994(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_993(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_995(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_994(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_996(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_995(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_997(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_996(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_998(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_997(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_999(head, ...)                                  \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_998(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_1000(head, ...)                                 \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_999(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_1001(head, ...)                                 \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_1000(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_1002(head, ...)                                 \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_1001(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_1003(head, ...)                                 \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_1002(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_1004(head, ...)                                 \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_1003(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_1005(head, ...)                                 \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_1004(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_1006(head, ...)                                 \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_1005(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_1007(head, ...)                                 \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_1006(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_1008(head, ...)                                 \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_1007(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_1009(head, ...)                                 \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_1008(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_1010(head, ...)                                 \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_1009(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_1011(head, ...)                                 \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_1010(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_1012(head, ...)                                 \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_1011(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_1013(head, ...)                                 \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_1012(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_1014(head, ...)                                 \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_1013(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_1015(head, ...)                                 \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_1014(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_1016(head, ...)                                 \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_1015(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_1017(head, ...)                                 \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_1016(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_1018(head, ...)                                 \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_1017(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_1019(head, ...)                                 \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_1018(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_1020(head, ...)                                 \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_1019(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_1021(head, ...)                                 \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_1020(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_1022(head, ...)                                 \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_1021(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_1023(head, ...)                                 \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_1022(__VA_ARGS__)

#define MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_1024(head, ...)                                 \
    head, v(, ) MACROLOP_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_1023(__VA_ARGS__)

#endif // MACROLOP_EVAL_PATCH_WITH_COMMAS_H
