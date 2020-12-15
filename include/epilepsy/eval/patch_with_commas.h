#ifndef EPILEPSY_EVAL_PATCH_WITH_COMMAS_H
#define EPILEPSY_EVAL_PATCH_WITH_COMMAS_H

#include <epilepsy/eval/control.h>
#include <epilepsy/eval/term.h>
#include <epilepsy/priv/aux.h>
#include <epilepsy/priv/uint/eq.h>
#include <epilepsy/priv/variadics/count.h>

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS(...)                                            \
    EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_AUX(                                                \
        EPILEPSY_PRIV_VARIADICS_COUNT(__VA_ARGS__), __VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_AUX(count, ...)                                 \
    EPILEPSY_PRIV_AUX_IF(                                                                          \
        EPILEPSY_PRIV_UINT_EQ(count, 1), EPILEPSY_PRIV_AUX_CONSUME,                                \
        EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_NON_EMPTY)                                      \
    (count, __VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_NON_EMPTY(count, ...)                           \
    EPILEPSY_PRIV_AUX_CAT(EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_, count)(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_2(head, _space) head,

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_3(head, ...)                                    \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_2(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_4(head, ...)                                    \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_3(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_5(head, ...)                                    \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_4(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_6(head, ...)                                    \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_5(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_7(head, ...)                                    \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_6(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_8(head, ...)                                    \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_7(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_9(head, ...)                                    \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_8(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_10(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_9(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_11(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_10(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_12(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_11(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_13(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_12(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_14(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_13(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_15(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_14(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_16(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_15(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_17(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_16(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_18(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_17(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_19(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_18(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_20(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_19(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_21(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_20(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_22(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_21(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_23(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_22(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_24(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_23(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_25(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_24(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_26(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_25(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_27(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_26(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_28(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_27(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_29(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_28(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_30(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_29(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_31(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_30(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_32(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_31(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_33(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_32(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_34(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_33(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_35(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_34(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_36(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_35(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_37(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_36(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_38(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_37(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_39(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_38(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_40(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_39(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_41(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_40(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_42(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_41(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_43(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_42(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_44(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_43(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_45(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_44(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_46(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_45(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_47(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_46(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_48(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_47(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_49(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_48(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_50(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_49(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_51(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_50(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_52(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_51(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_53(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_52(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_54(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_53(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_55(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_54(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_56(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_55(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_57(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_56(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_58(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_57(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_59(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_58(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_60(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_59(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_61(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_60(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_62(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_61(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_63(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_62(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_64(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_63(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_65(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_64(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_66(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_65(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_67(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_66(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_68(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_67(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_69(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_68(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_70(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_69(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_71(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_70(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_72(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_71(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_73(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_72(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_74(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_73(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_75(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_74(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_76(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_75(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_77(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_76(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_78(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_77(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_79(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_78(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_80(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_79(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_81(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_80(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_82(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_81(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_83(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_82(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_84(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_83(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_85(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_84(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_86(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_85(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_87(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_86(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_88(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_87(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_89(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_88(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_90(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_89(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_91(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_90(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_92(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_91(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_93(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_92(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_94(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_93(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_95(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_94(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_96(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_95(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_97(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_96(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_98(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_97(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_99(head, ...)                                   \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_98(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_100(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_99(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_101(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_100(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_102(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_101(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_103(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_102(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_104(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_103(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_105(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_104(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_106(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_105(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_107(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_106(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_108(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_107(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_109(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_108(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_110(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_109(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_111(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_110(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_112(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_111(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_113(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_112(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_114(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_113(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_115(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_114(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_116(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_115(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_117(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_116(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_118(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_117(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_119(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_118(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_120(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_119(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_121(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_120(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_122(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_121(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_123(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_122(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_124(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_123(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_125(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_124(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_126(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_125(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_127(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_126(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_128(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_127(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_129(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_128(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_130(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_129(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_131(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_130(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_132(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_131(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_133(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_132(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_134(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_133(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_135(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_134(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_136(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_135(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_137(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_136(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_138(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_137(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_139(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_138(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_140(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_139(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_141(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_140(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_142(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_141(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_143(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_142(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_144(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_143(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_145(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_144(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_146(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_145(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_147(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_146(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_148(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_147(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_149(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_148(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_150(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_149(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_151(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_150(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_152(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_151(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_153(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_152(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_154(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_153(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_155(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_154(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_156(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_155(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_157(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_156(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_158(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_157(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_159(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_158(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_160(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_159(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_161(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_160(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_162(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_161(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_163(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_162(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_164(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_163(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_165(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_164(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_166(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_165(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_167(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_166(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_168(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_167(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_169(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_168(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_170(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_169(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_171(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_170(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_172(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_171(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_173(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_172(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_174(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_173(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_175(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_174(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_176(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_175(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_177(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_176(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_178(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_177(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_179(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_178(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_180(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_179(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_181(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_180(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_182(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_181(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_183(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_182(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_184(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_183(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_185(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_184(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_186(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_185(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_187(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_186(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_188(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_187(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_189(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_188(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_190(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_189(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_191(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_190(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_192(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_191(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_193(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_192(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_194(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_193(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_195(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_194(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_196(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_195(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_197(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_196(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_198(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_197(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_199(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_198(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_200(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_199(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_201(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_200(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_202(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_201(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_203(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_202(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_204(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_203(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_205(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_204(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_206(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_205(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_207(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_206(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_208(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_207(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_209(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_208(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_210(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_209(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_211(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_210(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_212(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_211(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_213(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_212(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_214(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_213(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_215(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_214(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_216(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_215(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_217(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_216(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_218(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_217(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_219(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_218(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_220(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_219(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_221(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_220(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_222(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_221(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_223(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_222(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_224(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_223(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_225(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_224(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_226(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_225(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_227(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_226(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_228(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_227(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_229(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_228(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_230(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_229(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_231(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_230(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_232(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_231(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_233(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_232(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_234(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_233(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_235(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_234(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_236(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_235(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_237(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_236(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_238(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_237(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_239(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_238(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_240(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_239(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_241(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_240(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_242(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_241(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_243(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_242(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_244(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_243(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_245(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_244(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_246(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_245(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_247(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_246(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_248(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_247(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_249(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_248(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_250(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_249(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_251(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_250(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_252(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_251(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_253(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_252(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_254(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_253(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_255(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_254(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_256(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_255(__VA_ARGS__)

#define EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_257(head, ...)                                  \
    head, v(, ) EPILEPSY_PRIV_EVAL_PATCH_TERMS_WITH_COMMAS_256(__VA_ARGS__)

#endif // EPILEPSY_EVAL_PATCH_WITH_COMMAS_H
