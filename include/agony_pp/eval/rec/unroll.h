#ifndef AGONY_PP_EVAL_REC_UNROLL_H
#define AGONY_PP_EVAL_REC_UNROLL_H

#define AGONY_PP_PRIVATE_EVAL_REC_UNROLL AGONY_PP_PRIVATE_EVAL_REC_0

#define AGONY_PP_PRIVATE_EVAL_REC_0(...)                                                           \
    AGONY_PP_PRIVATE_EVAL_REC_0_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_0_GET_CHOICE(__VA_ARGS__))      \
    (AGONY_PP_PRIVATE_EVAL_REC_0_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_0_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_0_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_0_OVERLOAD(choice)                                               \
    AGONY_PP_PRIVATE_EVAL_REC_0_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_0_OVERLOAD_PRIMITIVE(choice) AGONY_PP_PRIVATE_EVAL_REC_0_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_0_CONTINUE                   AGONY_PP_PRIVATE_EVAL_REC_1
#define AGONY_PP_PRIVATE_EVAL_REC_0_STOP(...)                  __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1(...)                                                           \
    AGONY_PP_PRIVATE_EVAL_REC_1_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_1_GET_CHOICE(__VA_ARGS__))      \
    (AGONY_PP_PRIVATE_EVAL_REC_1_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1_OVERLOAD(choice)                                               \
    AGONY_PP_PRIVATE_EVAL_REC_1_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1_OVERLOAD_PRIMITIVE(choice) AGONY_PP_PRIVATE_EVAL_REC_1_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1_CONTINUE                   AGONY_PP_PRIVATE_EVAL_REC_2
#define AGONY_PP_PRIVATE_EVAL_REC_1_STOP(...)                  __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_2(...)                                                           \
    AGONY_PP_PRIVATE_EVAL_REC_2_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_2_GET_CHOICE(__VA_ARGS__))      \
    (AGONY_PP_PRIVATE_EVAL_REC_2_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_2_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_2_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_2_OVERLOAD(choice)                                               \
    AGONY_PP_PRIVATE_EVAL_REC_2_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_2_OVERLOAD_PRIMITIVE(choice) AGONY_PP_PRIVATE_EVAL_REC_2_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_2_CONTINUE                   AGONY_PP_PRIVATE_EVAL_REC_3
#define AGONY_PP_PRIVATE_EVAL_REC_2_STOP(...)                  __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_3(...)                                                           \
    AGONY_PP_PRIVATE_EVAL_REC_3_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_3_GET_CHOICE(__VA_ARGS__))      \
    (AGONY_PP_PRIVATE_EVAL_REC_3_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_3_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_3_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_3_OVERLOAD(choice)                                               \
    AGONY_PP_PRIVATE_EVAL_REC_3_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_3_OVERLOAD_PRIMITIVE(choice) AGONY_PP_PRIVATE_EVAL_REC_3_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_3_CONTINUE                   AGONY_PP_PRIVATE_EVAL_REC_4
#define AGONY_PP_PRIVATE_EVAL_REC_3_STOP(...)                  __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_4(...)                                                           \
    AGONY_PP_PRIVATE_EVAL_REC_4_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_4_GET_CHOICE(__VA_ARGS__))      \
    (AGONY_PP_PRIVATE_EVAL_REC_4_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_4_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_4_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_4_OVERLOAD(choice)                                               \
    AGONY_PP_PRIVATE_EVAL_REC_4_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_4_OVERLOAD_PRIMITIVE(choice) AGONY_PP_PRIVATE_EVAL_REC_4_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_4_CONTINUE                   AGONY_PP_PRIVATE_EVAL_REC_5
#define AGONY_PP_PRIVATE_EVAL_REC_4_STOP(...)                  __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_5(...)                                                           \
    AGONY_PP_PRIVATE_EVAL_REC_5_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_5_GET_CHOICE(__VA_ARGS__))      \
    (AGONY_PP_PRIVATE_EVAL_REC_5_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_5_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_5_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_5_OVERLOAD(choice)                                               \
    AGONY_PP_PRIVATE_EVAL_REC_5_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_5_OVERLOAD_PRIMITIVE(choice) AGONY_PP_PRIVATE_EVAL_REC_5_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_5_CONTINUE                   AGONY_PP_PRIVATE_EVAL_REC_6
#define AGONY_PP_PRIVATE_EVAL_REC_5_STOP(...)                  __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_6(...)                                                           \
    AGONY_PP_PRIVATE_EVAL_REC_6_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_6_GET_CHOICE(__VA_ARGS__))      \
    (AGONY_PP_PRIVATE_EVAL_REC_6_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_6_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_6_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_6_OVERLOAD(choice)                                               \
    AGONY_PP_PRIVATE_EVAL_REC_6_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_6_OVERLOAD_PRIMITIVE(choice) AGONY_PP_PRIVATE_EVAL_REC_6_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_6_CONTINUE                   AGONY_PP_PRIVATE_EVAL_REC_7
#define AGONY_PP_PRIVATE_EVAL_REC_6_STOP(...)                  __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_7(...)                                                           \
    AGONY_PP_PRIVATE_EVAL_REC_7_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_7_GET_CHOICE(__VA_ARGS__))      \
    (AGONY_PP_PRIVATE_EVAL_REC_7_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_7_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_7_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_7_OVERLOAD(choice)                                               \
    AGONY_PP_PRIVATE_EVAL_REC_7_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_7_OVERLOAD_PRIMITIVE(choice) AGONY_PP_PRIVATE_EVAL_REC_7_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_7_CONTINUE                   AGONY_PP_PRIVATE_EVAL_REC_8
#define AGONY_PP_PRIVATE_EVAL_REC_7_STOP(...)                  __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_8(...)                                                           \
    AGONY_PP_PRIVATE_EVAL_REC_8_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_8_GET_CHOICE(__VA_ARGS__))      \
    (AGONY_PP_PRIVATE_EVAL_REC_8_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_8_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_8_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_8_OVERLOAD(choice)                                               \
    AGONY_PP_PRIVATE_EVAL_REC_8_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_8_OVERLOAD_PRIMITIVE(choice) AGONY_PP_PRIVATE_EVAL_REC_8_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_8_CONTINUE                   AGONY_PP_PRIVATE_EVAL_REC_9
#define AGONY_PP_PRIVATE_EVAL_REC_8_STOP(...)                  __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_9(...)                                                           \
    AGONY_PP_PRIVATE_EVAL_REC_9_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_9_GET_CHOICE(__VA_ARGS__))      \
    (AGONY_PP_PRIVATE_EVAL_REC_9_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_9_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_9_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_9_OVERLOAD(choice)                                               \
    AGONY_PP_PRIVATE_EVAL_REC_9_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_9_OVERLOAD_PRIMITIVE(choice) AGONY_PP_PRIVATE_EVAL_REC_9_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_9_CONTINUE                   AGONY_PP_PRIVATE_EVAL_REC_10
#define AGONY_PP_PRIVATE_EVAL_REC_9_STOP(...)                  __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_10(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_10_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_10_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_10_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_10_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_10_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_10_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_10_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_10_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_10_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_10_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_11
#define AGONY_PP_PRIVATE_EVAL_REC_10_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_11(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_11_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_11_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_11_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_11_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_11_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_11_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_11_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_11_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_11_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_11_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_12
#define AGONY_PP_PRIVATE_EVAL_REC_11_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_12(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_12_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_12_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_12_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_12_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_12_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_12_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_12_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_12_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_12_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_12_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_13
#define AGONY_PP_PRIVATE_EVAL_REC_12_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_13(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_13_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_13_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_13_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_13_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_13_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_13_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_13_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_13_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_13_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_13_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_14
#define AGONY_PP_PRIVATE_EVAL_REC_13_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_14(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_14_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_14_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_14_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_14_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_14_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_14_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_14_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_14_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_14_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_14_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_15
#define AGONY_PP_PRIVATE_EVAL_REC_14_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_15(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_15_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_15_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_15_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_15_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_15_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_15_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_15_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_15_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_15_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_15_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_16
#define AGONY_PP_PRIVATE_EVAL_REC_15_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_16(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_16_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_16_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_16_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_16_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_16_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_16_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_16_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_16_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_16_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_16_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_17
#define AGONY_PP_PRIVATE_EVAL_REC_16_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_17(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_17_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_17_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_17_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_17_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_17_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_17_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_17_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_17_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_17_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_17_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_18
#define AGONY_PP_PRIVATE_EVAL_REC_17_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_18(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_18_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_18_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_18_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_18_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_18_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_18_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_18_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_18_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_18_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_18_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_19
#define AGONY_PP_PRIVATE_EVAL_REC_18_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_19(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_19_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_19_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_19_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_19_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_19_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_19_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_19_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_19_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_19_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_19_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_20
#define AGONY_PP_PRIVATE_EVAL_REC_19_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_20(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_20_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_20_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_20_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_20_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_20_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_20_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_20_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_20_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_20_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_20_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_21
#define AGONY_PP_PRIVATE_EVAL_REC_20_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_21(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_21_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_21_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_21_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_21_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_21_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_21_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_21_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_21_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_21_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_21_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_22
#define AGONY_PP_PRIVATE_EVAL_REC_21_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_22(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_22_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_22_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_22_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_22_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_22_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_22_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_22_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_22_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_22_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_22_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_23
#define AGONY_PP_PRIVATE_EVAL_REC_22_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_23(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_23_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_23_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_23_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_23_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_23_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_23_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_23_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_23_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_23_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_23_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_24
#define AGONY_PP_PRIVATE_EVAL_REC_23_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_24(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_24_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_24_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_24_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_24_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_24_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_24_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_24_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_24_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_24_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_24_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_25
#define AGONY_PP_PRIVATE_EVAL_REC_24_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_25(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_25_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_25_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_25_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_25_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_25_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_25_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_25_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_25_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_25_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_25_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_26
#define AGONY_PP_PRIVATE_EVAL_REC_25_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_26(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_26_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_26_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_26_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_26_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_26_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_26_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_26_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_26_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_26_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_26_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_27
#define AGONY_PP_PRIVATE_EVAL_REC_26_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_27(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_27_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_27_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_27_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_27_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_27_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_27_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_27_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_27_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_27_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_27_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_28
#define AGONY_PP_PRIVATE_EVAL_REC_27_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_28(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_28_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_28_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_28_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_28_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_28_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_28_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_28_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_28_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_28_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_28_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_29
#define AGONY_PP_PRIVATE_EVAL_REC_28_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_29(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_29_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_29_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_29_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_29_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_29_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_29_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_29_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_29_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_29_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_29_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_30
#define AGONY_PP_PRIVATE_EVAL_REC_29_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_30(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_30_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_30_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_30_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_30_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_30_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_30_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_30_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_30_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_30_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_30_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_31
#define AGONY_PP_PRIVATE_EVAL_REC_30_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_31(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_31_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_31_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_31_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_31_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_31_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_31_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_31_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_31_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_31_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_31_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_32
#define AGONY_PP_PRIVATE_EVAL_REC_31_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_32(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_32_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_32_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_32_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_32_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_32_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_32_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_32_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_32_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_32_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_32_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_33
#define AGONY_PP_PRIVATE_EVAL_REC_32_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_33(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_33_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_33_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_33_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_33_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_33_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_33_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_33_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_33_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_33_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_33_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_34
#define AGONY_PP_PRIVATE_EVAL_REC_33_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_34(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_34_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_34_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_34_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_34_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_34_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_34_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_34_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_34_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_34_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_34_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_35
#define AGONY_PP_PRIVATE_EVAL_REC_34_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_35(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_35_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_35_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_35_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_35_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_35_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_35_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_35_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_35_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_35_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_35_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_36
#define AGONY_PP_PRIVATE_EVAL_REC_35_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_36(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_36_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_36_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_36_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_36_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_36_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_36_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_36_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_36_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_36_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_36_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_37
#define AGONY_PP_PRIVATE_EVAL_REC_36_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_37(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_37_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_37_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_37_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_37_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_37_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_37_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_37_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_37_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_37_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_37_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_38
#define AGONY_PP_PRIVATE_EVAL_REC_37_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_38(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_38_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_38_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_38_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_38_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_38_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_38_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_38_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_38_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_38_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_38_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_39
#define AGONY_PP_PRIVATE_EVAL_REC_38_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_39(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_39_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_39_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_39_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_39_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_39_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_39_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_39_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_39_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_39_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_39_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_40
#define AGONY_PP_PRIVATE_EVAL_REC_39_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_40(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_40_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_40_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_40_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_40_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_40_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_40_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_40_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_40_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_40_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_40_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_41
#define AGONY_PP_PRIVATE_EVAL_REC_40_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_41(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_41_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_41_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_41_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_41_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_41_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_41_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_41_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_41_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_41_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_41_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_42
#define AGONY_PP_PRIVATE_EVAL_REC_41_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_42(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_42_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_42_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_42_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_42_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_42_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_42_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_42_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_42_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_42_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_42_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_43
#define AGONY_PP_PRIVATE_EVAL_REC_42_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_43(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_43_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_43_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_43_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_43_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_43_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_43_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_43_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_43_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_43_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_43_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_44
#define AGONY_PP_PRIVATE_EVAL_REC_43_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_44(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_44_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_44_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_44_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_44_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_44_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_44_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_44_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_44_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_44_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_44_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_45
#define AGONY_PP_PRIVATE_EVAL_REC_44_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_45(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_45_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_45_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_45_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_45_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_45_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_45_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_45_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_45_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_45_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_45_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_46
#define AGONY_PP_PRIVATE_EVAL_REC_45_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_46(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_46_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_46_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_46_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_46_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_46_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_46_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_46_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_46_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_46_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_46_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_47
#define AGONY_PP_PRIVATE_EVAL_REC_46_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_47(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_47_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_47_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_47_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_47_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_47_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_47_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_47_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_47_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_47_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_47_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_48
#define AGONY_PP_PRIVATE_EVAL_REC_47_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_48(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_48_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_48_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_48_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_48_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_48_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_48_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_48_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_48_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_48_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_48_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_49
#define AGONY_PP_PRIVATE_EVAL_REC_48_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_49(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_49_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_49_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_49_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_49_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_49_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_49_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_49_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_49_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_49_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_49_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_50
#define AGONY_PP_PRIVATE_EVAL_REC_49_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_50(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_50_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_50_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_50_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_50_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_50_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_50_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_50_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_50_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_50_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_50_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_51
#define AGONY_PP_PRIVATE_EVAL_REC_50_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_51(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_51_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_51_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_51_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_51_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_51_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_51_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_51_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_51_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_51_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_51_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_52
#define AGONY_PP_PRIVATE_EVAL_REC_51_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_52(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_52_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_52_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_52_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_52_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_52_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_52_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_52_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_52_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_52_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_52_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_53
#define AGONY_PP_PRIVATE_EVAL_REC_52_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_53(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_53_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_53_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_53_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_53_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_53_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_53_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_53_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_53_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_53_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_53_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_54
#define AGONY_PP_PRIVATE_EVAL_REC_53_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_54(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_54_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_54_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_54_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_54_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_54_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_54_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_54_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_54_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_54_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_54_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_55
#define AGONY_PP_PRIVATE_EVAL_REC_54_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_55(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_55_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_55_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_55_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_55_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_55_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_55_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_55_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_55_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_55_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_55_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_56
#define AGONY_PP_PRIVATE_EVAL_REC_55_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_56(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_56_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_56_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_56_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_56_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_56_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_56_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_56_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_56_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_56_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_56_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_57
#define AGONY_PP_PRIVATE_EVAL_REC_56_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_57(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_57_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_57_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_57_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_57_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_57_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_57_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_57_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_57_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_57_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_57_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_58
#define AGONY_PP_PRIVATE_EVAL_REC_57_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_58(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_58_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_58_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_58_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_58_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_58_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_58_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_58_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_58_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_58_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_58_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_59
#define AGONY_PP_PRIVATE_EVAL_REC_58_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_59(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_59_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_59_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_59_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_59_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_59_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_59_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_59_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_59_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_59_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_59_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_60
#define AGONY_PP_PRIVATE_EVAL_REC_59_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_60(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_60_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_60_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_60_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_60_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_60_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_60_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_60_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_60_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_60_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_60_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_61
#define AGONY_PP_PRIVATE_EVAL_REC_60_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_61(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_61_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_61_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_61_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_61_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_61_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_61_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_61_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_61_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_61_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_61_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_62
#define AGONY_PP_PRIVATE_EVAL_REC_61_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_62(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_62_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_62_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_62_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_62_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_62_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_62_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_62_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_62_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_62_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_62_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_63
#define AGONY_PP_PRIVATE_EVAL_REC_62_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_63(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_63_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_63_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_63_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_63_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_63_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_63_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_63_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_63_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_63_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_63_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_64
#define AGONY_PP_PRIVATE_EVAL_REC_63_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_64(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_64_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_64_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_64_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_64_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_64_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_64_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_64_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_64_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_64_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_64_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_65
#define AGONY_PP_PRIVATE_EVAL_REC_64_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_65(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_65_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_65_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_65_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_65_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_65_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_65_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_65_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_65_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_65_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_65_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_66
#define AGONY_PP_PRIVATE_EVAL_REC_65_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_66(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_66_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_66_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_66_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_66_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_66_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_66_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_66_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_66_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_66_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_66_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_67
#define AGONY_PP_PRIVATE_EVAL_REC_66_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_67(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_67_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_67_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_67_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_67_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_67_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_67_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_67_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_67_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_67_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_67_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_68
#define AGONY_PP_PRIVATE_EVAL_REC_67_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_68(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_68_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_68_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_68_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_68_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_68_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_68_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_68_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_68_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_68_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_68_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_69
#define AGONY_PP_PRIVATE_EVAL_REC_68_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_69(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_69_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_69_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_69_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_69_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_69_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_69_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_69_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_69_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_69_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_69_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_70
#define AGONY_PP_PRIVATE_EVAL_REC_69_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_70(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_70_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_70_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_70_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_70_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_70_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_70_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_70_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_70_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_70_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_70_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_71
#define AGONY_PP_PRIVATE_EVAL_REC_70_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_71(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_71_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_71_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_71_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_71_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_71_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_71_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_71_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_71_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_71_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_71_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_72
#define AGONY_PP_PRIVATE_EVAL_REC_71_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_72(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_72_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_72_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_72_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_72_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_72_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_72_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_72_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_72_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_72_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_72_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_73
#define AGONY_PP_PRIVATE_EVAL_REC_72_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_73(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_73_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_73_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_73_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_73_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_73_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_73_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_73_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_73_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_73_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_73_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_74
#define AGONY_PP_PRIVATE_EVAL_REC_73_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_74(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_74_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_74_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_74_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_74_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_74_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_74_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_74_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_74_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_74_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_74_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_75
#define AGONY_PP_PRIVATE_EVAL_REC_74_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_75(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_75_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_75_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_75_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_75_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_75_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_75_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_75_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_75_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_75_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_75_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_76
#define AGONY_PP_PRIVATE_EVAL_REC_75_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_76(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_76_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_76_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_76_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_76_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_76_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_76_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_76_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_76_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_76_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_76_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_77
#define AGONY_PP_PRIVATE_EVAL_REC_76_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_77(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_77_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_77_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_77_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_77_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_77_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_77_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_77_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_77_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_77_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_77_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_78
#define AGONY_PP_PRIVATE_EVAL_REC_77_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_78(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_78_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_78_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_78_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_78_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_78_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_78_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_78_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_78_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_78_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_78_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_79
#define AGONY_PP_PRIVATE_EVAL_REC_78_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_79(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_79_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_79_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_79_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_79_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_79_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_79_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_79_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_79_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_79_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_79_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_80
#define AGONY_PP_PRIVATE_EVAL_REC_79_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_80(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_80_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_80_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_80_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_80_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_80_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_80_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_80_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_80_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_80_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_80_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_81
#define AGONY_PP_PRIVATE_EVAL_REC_80_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_81(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_81_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_81_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_81_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_81_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_81_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_81_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_81_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_81_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_81_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_81_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_82
#define AGONY_PP_PRIVATE_EVAL_REC_81_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_82(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_82_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_82_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_82_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_82_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_82_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_82_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_82_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_82_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_82_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_82_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_83
#define AGONY_PP_PRIVATE_EVAL_REC_82_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_83(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_83_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_83_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_83_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_83_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_83_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_83_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_83_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_83_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_83_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_83_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_84
#define AGONY_PP_PRIVATE_EVAL_REC_83_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_84(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_84_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_84_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_84_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_84_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_84_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_84_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_84_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_84_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_84_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_84_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_85
#define AGONY_PP_PRIVATE_EVAL_REC_84_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_85(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_85_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_85_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_85_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_85_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_85_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_85_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_85_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_85_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_85_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_85_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_86
#define AGONY_PP_PRIVATE_EVAL_REC_85_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_86(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_86_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_86_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_86_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_86_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_86_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_86_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_86_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_86_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_86_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_86_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_87
#define AGONY_PP_PRIVATE_EVAL_REC_86_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_87(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_87_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_87_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_87_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_87_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_87_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_87_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_87_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_87_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_87_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_87_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_88
#define AGONY_PP_PRIVATE_EVAL_REC_87_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_88(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_88_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_88_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_88_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_88_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_88_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_88_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_88_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_88_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_88_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_88_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_89
#define AGONY_PP_PRIVATE_EVAL_REC_88_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_89(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_89_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_89_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_89_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_89_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_89_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_89_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_89_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_89_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_89_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_89_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_90
#define AGONY_PP_PRIVATE_EVAL_REC_89_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_90(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_90_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_90_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_90_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_90_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_90_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_90_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_90_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_90_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_90_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_90_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_91
#define AGONY_PP_PRIVATE_EVAL_REC_90_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_91(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_91_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_91_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_91_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_91_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_91_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_91_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_91_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_91_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_91_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_91_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_92
#define AGONY_PP_PRIVATE_EVAL_REC_91_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_92(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_92_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_92_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_92_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_92_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_92_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_92_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_92_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_92_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_92_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_92_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_93
#define AGONY_PP_PRIVATE_EVAL_REC_92_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_93(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_93_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_93_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_93_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_93_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_93_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_93_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_93_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_93_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_93_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_93_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_94
#define AGONY_PP_PRIVATE_EVAL_REC_93_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_94(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_94_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_94_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_94_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_94_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_94_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_94_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_94_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_94_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_94_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_94_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_95
#define AGONY_PP_PRIVATE_EVAL_REC_94_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_95(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_95_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_95_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_95_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_95_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_95_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_95_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_95_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_95_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_95_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_95_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_96
#define AGONY_PP_PRIVATE_EVAL_REC_95_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_96(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_96_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_96_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_96_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_96_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_96_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_96_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_96_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_96_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_96_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_96_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_97
#define AGONY_PP_PRIVATE_EVAL_REC_96_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_97(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_97_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_97_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_97_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_97_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_97_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_97_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_97_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_97_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_97_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_97_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_98
#define AGONY_PP_PRIVATE_EVAL_REC_97_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_98(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_98_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_98_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_98_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_98_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_98_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_98_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_98_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_98_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_98_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_98_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_99
#define AGONY_PP_PRIVATE_EVAL_REC_98_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_99(...)                                                          \
    AGONY_PP_PRIVATE_EVAL_REC_99_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_99_GET_CHOICE(__VA_ARGS__))    \
    (AGONY_PP_PRIVATE_EVAL_REC_99_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_99_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_99_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_99_OVERLOAD(choice)                                              \
    AGONY_PP_PRIVATE_EVAL_REC_99_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_99_OVERLOAD_PRIMITIVE(choice)                                    \
    AGONY_PP_PRIVATE_EVAL_REC_99_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_99_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_100
#define AGONY_PP_PRIVATE_EVAL_REC_99_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_100(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_100_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_100_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_100_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_100_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_100_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_100_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_100_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_100_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_100_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_100_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_101
#define AGONY_PP_PRIVATE_EVAL_REC_100_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_101(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_101_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_101_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_101_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_101_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_101_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_101_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_101_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_101_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_101_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_101_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_102
#define AGONY_PP_PRIVATE_EVAL_REC_101_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_102(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_102_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_102_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_102_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_102_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_102_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_102_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_102_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_102_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_102_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_102_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_103
#define AGONY_PP_PRIVATE_EVAL_REC_102_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_103(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_103_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_103_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_103_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_103_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_103_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_103_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_103_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_103_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_103_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_103_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_104
#define AGONY_PP_PRIVATE_EVAL_REC_103_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_104(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_104_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_104_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_104_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_104_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_104_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_104_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_104_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_104_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_104_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_104_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_105
#define AGONY_PP_PRIVATE_EVAL_REC_104_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_105(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_105_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_105_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_105_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_105_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_105_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_105_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_105_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_105_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_105_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_105_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_106
#define AGONY_PP_PRIVATE_EVAL_REC_105_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_106(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_106_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_106_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_106_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_106_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_106_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_106_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_106_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_106_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_106_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_106_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_107
#define AGONY_PP_PRIVATE_EVAL_REC_106_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_107(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_107_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_107_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_107_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_107_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_107_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_107_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_107_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_107_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_107_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_107_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_108
#define AGONY_PP_PRIVATE_EVAL_REC_107_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_108(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_108_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_108_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_108_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_108_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_108_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_108_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_108_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_108_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_108_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_108_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_109
#define AGONY_PP_PRIVATE_EVAL_REC_108_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_109(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_109_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_109_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_109_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_109_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_109_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_109_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_109_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_109_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_109_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_109_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_110
#define AGONY_PP_PRIVATE_EVAL_REC_109_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_110(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_110_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_110_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_110_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_110_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_110_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_110_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_110_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_110_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_110_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_110_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_111
#define AGONY_PP_PRIVATE_EVAL_REC_110_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_111(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_111_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_111_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_111_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_111_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_111_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_111_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_111_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_111_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_111_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_111_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_112
#define AGONY_PP_PRIVATE_EVAL_REC_111_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_112(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_112_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_112_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_112_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_112_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_112_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_112_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_112_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_112_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_112_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_112_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_113
#define AGONY_PP_PRIVATE_EVAL_REC_112_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_113(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_113_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_113_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_113_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_113_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_113_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_113_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_113_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_113_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_113_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_113_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_114
#define AGONY_PP_PRIVATE_EVAL_REC_113_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_114(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_114_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_114_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_114_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_114_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_114_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_114_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_114_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_114_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_114_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_114_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_115
#define AGONY_PP_PRIVATE_EVAL_REC_114_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_115(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_115_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_115_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_115_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_115_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_115_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_115_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_115_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_115_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_115_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_115_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_116
#define AGONY_PP_PRIVATE_EVAL_REC_115_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_116(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_116_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_116_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_116_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_116_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_116_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_116_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_116_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_116_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_116_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_116_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_117
#define AGONY_PP_PRIVATE_EVAL_REC_116_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_117(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_117_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_117_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_117_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_117_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_117_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_117_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_117_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_117_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_117_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_117_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_118
#define AGONY_PP_PRIVATE_EVAL_REC_117_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_118(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_118_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_118_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_118_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_118_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_118_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_118_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_118_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_118_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_118_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_118_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_119
#define AGONY_PP_PRIVATE_EVAL_REC_118_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_119(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_119_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_119_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_119_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_119_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_119_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_119_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_119_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_119_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_119_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_119_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_120
#define AGONY_PP_PRIVATE_EVAL_REC_119_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_120(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_120_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_120_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_120_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_120_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_120_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_120_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_120_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_120_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_120_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_120_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_121
#define AGONY_PP_PRIVATE_EVAL_REC_120_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_121(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_121_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_121_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_121_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_121_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_121_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_121_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_121_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_121_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_121_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_121_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_122
#define AGONY_PP_PRIVATE_EVAL_REC_121_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_122(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_122_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_122_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_122_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_122_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_122_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_122_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_122_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_122_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_122_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_122_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_123
#define AGONY_PP_PRIVATE_EVAL_REC_122_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_123(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_123_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_123_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_123_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_123_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_123_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_123_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_123_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_123_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_123_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_123_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_124
#define AGONY_PP_PRIVATE_EVAL_REC_123_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_124(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_124_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_124_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_124_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_124_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_124_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_124_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_124_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_124_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_124_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_124_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_125
#define AGONY_PP_PRIVATE_EVAL_REC_124_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_125(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_125_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_125_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_125_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_125_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_125_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_125_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_125_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_125_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_125_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_125_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_126
#define AGONY_PP_PRIVATE_EVAL_REC_125_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_126(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_126_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_126_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_126_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_126_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_126_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_126_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_126_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_126_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_126_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_126_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_127
#define AGONY_PP_PRIVATE_EVAL_REC_126_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_127(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_127_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_127_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_127_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_127_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_127_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_127_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_127_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_127_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_127_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_127_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_128
#define AGONY_PP_PRIVATE_EVAL_REC_127_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_128(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_128_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_128_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_128_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_128_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_128_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_128_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_128_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_128_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_128_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_128_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_129
#define AGONY_PP_PRIVATE_EVAL_REC_128_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_129(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_129_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_129_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_129_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_129_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_129_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_129_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_129_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_129_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_129_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_129_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_130
#define AGONY_PP_PRIVATE_EVAL_REC_129_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_130(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_130_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_130_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_130_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_130_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_130_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_130_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_130_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_130_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_130_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_130_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_131
#define AGONY_PP_PRIVATE_EVAL_REC_130_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_131(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_131_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_131_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_131_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_131_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_131_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_131_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_131_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_131_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_131_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_131_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_132
#define AGONY_PP_PRIVATE_EVAL_REC_131_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_132(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_132_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_132_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_132_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_132_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_132_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_132_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_132_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_132_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_132_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_132_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_133
#define AGONY_PP_PRIVATE_EVAL_REC_132_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_133(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_133_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_133_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_133_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_133_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_133_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_133_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_133_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_133_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_133_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_133_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_134
#define AGONY_PP_PRIVATE_EVAL_REC_133_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_134(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_134_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_134_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_134_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_134_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_134_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_134_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_134_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_134_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_134_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_134_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_135
#define AGONY_PP_PRIVATE_EVAL_REC_134_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_135(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_135_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_135_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_135_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_135_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_135_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_135_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_135_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_135_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_135_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_135_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_136
#define AGONY_PP_PRIVATE_EVAL_REC_135_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_136(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_136_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_136_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_136_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_136_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_136_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_136_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_136_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_136_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_136_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_136_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_137
#define AGONY_PP_PRIVATE_EVAL_REC_136_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_137(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_137_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_137_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_137_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_137_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_137_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_137_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_137_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_137_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_137_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_137_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_138
#define AGONY_PP_PRIVATE_EVAL_REC_137_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_138(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_138_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_138_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_138_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_138_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_138_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_138_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_138_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_138_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_138_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_138_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_139
#define AGONY_PP_PRIVATE_EVAL_REC_138_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_139(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_139_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_139_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_139_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_139_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_139_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_139_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_139_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_139_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_139_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_139_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_140
#define AGONY_PP_PRIVATE_EVAL_REC_139_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_140(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_140_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_140_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_140_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_140_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_140_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_140_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_140_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_140_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_140_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_140_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_141
#define AGONY_PP_PRIVATE_EVAL_REC_140_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_141(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_141_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_141_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_141_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_141_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_141_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_141_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_141_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_141_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_141_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_141_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_142
#define AGONY_PP_PRIVATE_EVAL_REC_141_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_142(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_142_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_142_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_142_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_142_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_142_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_142_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_142_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_142_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_142_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_142_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_143
#define AGONY_PP_PRIVATE_EVAL_REC_142_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_143(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_143_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_143_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_143_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_143_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_143_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_143_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_143_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_143_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_143_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_143_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_144
#define AGONY_PP_PRIVATE_EVAL_REC_143_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_144(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_144_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_144_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_144_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_144_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_144_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_144_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_144_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_144_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_144_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_144_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_145
#define AGONY_PP_PRIVATE_EVAL_REC_144_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_145(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_145_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_145_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_145_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_145_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_145_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_145_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_145_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_145_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_145_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_145_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_146
#define AGONY_PP_PRIVATE_EVAL_REC_145_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_146(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_146_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_146_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_146_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_146_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_146_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_146_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_146_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_146_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_146_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_146_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_147
#define AGONY_PP_PRIVATE_EVAL_REC_146_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_147(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_147_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_147_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_147_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_147_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_147_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_147_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_147_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_147_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_147_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_147_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_148
#define AGONY_PP_PRIVATE_EVAL_REC_147_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_148(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_148_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_148_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_148_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_148_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_148_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_148_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_148_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_148_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_148_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_148_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_149
#define AGONY_PP_PRIVATE_EVAL_REC_148_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_149(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_149_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_149_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_149_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_149_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_149_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_149_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_149_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_149_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_149_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_149_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_150
#define AGONY_PP_PRIVATE_EVAL_REC_149_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_150(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_150_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_150_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_150_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_150_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_150_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_150_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_150_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_150_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_150_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_150_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_151
#define AGONY_PP_PRIVATE_EVAL_REC_150_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_151(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_151_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_151_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_151_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_151_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_151_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_151_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_151_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_151_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_151_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_151_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_152
#define AGONY_PP_PRIVATE_EVAL_REC_151_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_152(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_152_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_152_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_152_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_152_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_152_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_152_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_152_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_152_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_152_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_152_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_153
#define AGONY_PP_PRIVATE_EVAL_REC_152_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_153(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_153_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_153_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_153_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_153_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_153_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_153_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_153_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_153_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_153_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_153_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_154
#define AGONY_PP_PRIVATE_EVAL_REC_153_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_154(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_154_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_154_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_154_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_154_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_154_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_154_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_154_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_154_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_154_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_154_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_155
#define AGONY_PP_PRIVATE_EVAL_REC_154_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_155(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_155_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_155_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_155_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_155_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_155_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_155_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_155_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_155_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_155_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_155_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_156
#define AGONY_PP_PRIVATE_EVAL_REC_155_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_156(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_156_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_156_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_156_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_156_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_156_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_156_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_156_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_156_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_156_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_156_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_157
#define AGONY_PP_PRIVATE_EVAL_REC_156_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_157(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_157_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_157_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_157_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_157_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_157_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_157_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_157_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_157_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_157_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_157_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_158
#define AGONY_PP_PRIVATE_EVAL_REC_157_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_158(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_158_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_158_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_158_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_158_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_158_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_158_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_158_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_158_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_158_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_158_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_159
#define AGONY_PP_PRIVATE_EVAL_REC_158_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_159(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_159_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_159_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_159_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_159_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_159_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_159_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_159_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_159_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_159_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_159_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_160
#define AGONY_PP_PRIVATE_EVAL_REC_159_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_160(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_160_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_160_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_160_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_160_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_160_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_160_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_160_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_160_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_160_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_160_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_161
#define AGONY_PP_PRIVATE_EVAL_REC_160_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_161(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_161_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_161_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_161_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_161_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_161_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_161_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_161_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_161_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_161_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_161_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_162
#define AGONY_PP_PRIVATE_EVAL_REC_161_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_162(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_162_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_162_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_162_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_162_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_162_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_162_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_162_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_162_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_162_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_162_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_163
#define AGONY_PP_PRIVATE_EVAL_REC_162_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_163(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_163_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_163_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_163_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_163_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_163_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_163_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_163_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_163_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_163_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_163_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_164
#define AGONY_PP_PRIVATE_EVAL_REC_163_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_164(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_164_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_164_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_164_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_164_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_164_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_164_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_164_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_164_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_164_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_164_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_165
#define AGONY_PP_PRIVATE_EVAL_REC_164_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_165(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_165_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_165_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_165_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_165_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_165_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_165_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_165_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_165_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_165_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_165_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_166
#define AGONY_PP_PRIVATE_EVAL_REC_165_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_166(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_166_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_166_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_166_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_166_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_166_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_166_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_166_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_166_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_166_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_166_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_167
#define AGONY_PP_PRIVATE_EVAL_REC_166_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_167(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_167_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_167_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_167_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_167_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_167_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_167_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_167_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_167_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_167_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_167_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_168
#define AGONY_PP_PRIVATE_EVAL_REC_167_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_168(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_168_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_168_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_168_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_168_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_168_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_168_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_168_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_168_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_168_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_168_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_169
#define AGONY_PP_PRIVATE_EVAL_REC_168_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_169(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_169_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_169_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_169_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_169_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_169_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_169_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_169_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_169_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_169_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_169_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_170
#define AGONY_PP_PRIVATE_EVAL_REC_169_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_170(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_170_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_170_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_170_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_170_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_170_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_170_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_170_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_170_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_170_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_170_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_171
#define AGONY_PP_PRIVATE_EVAL_REC_170_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_171(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_171_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_171_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_171_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_171_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_171_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_171_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_171_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_171_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_171_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_171_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_172
#define AGONY_PP_PRIVATE_EVAL_REC_171_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_172(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_172_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_172_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_172_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_172_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_172_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_172_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_172_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_172_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_172_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_172_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_173
#define AGONY_PP_PRIVATE_EVAL_REC_172_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_173(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_173_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_173_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_173_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_173_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_173_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_173_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_173_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_173_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_173_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_173_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_174
#define AGONY_PP_PRIVATE_EVAL_REC_173_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_174(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_174_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_174_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_174_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_174_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_174_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_174_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_174_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_174_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_174_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_174_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_175
#define AGONY_PP_PRIVATE_EVAL_REC_174_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_175(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_175_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_175_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_175_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_175_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_175_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_175_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_175_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_175_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_175_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_175_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_176
#define AGONY_PP_PRIVATE_EVAL_REC_175_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_176(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_176_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_176_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_176_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_176_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_176_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_176_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_176_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_176_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_176_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_176_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_177
#define AGONY_PP_PRIVATE_EVAL_REC_176_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_177(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_177_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_177_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_177_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_177_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_177_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_177_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_177_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_177_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_177_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_177_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_178
#define AGONY_PP_PRIVATE_EVAL_REC_177_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_178(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_178_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_178_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_178_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_178_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_178_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_178_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_178_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_178_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_178_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_178_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_179
#define AGONY_PP_PRIVATE_EVAL_REC_178_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_179(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_179_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_179_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_179_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_179_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_179_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_179_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_179_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_179_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_179_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_179_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_180
#define AGONY_PP_PRIVATE_EVAL_REC_179_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_180(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_180_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_180_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_180_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_180_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_180_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_180_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_180_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_180_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_180_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_180_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_181
#define AGONY_PP_PRIVATE_EVAL_REC_180_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_181(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_181_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_181_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_181_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_181_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_181_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_181_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_181_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_181_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_181_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_181_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_182
#define AGONY_PP_PRIVATE_EVAL_REC_181_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_182(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_182_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_182_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_182_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_182_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_182_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_182_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_182_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_182_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_182_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_182_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_183
#define AGONY_PP_PRIVATE_EVAL_REC_182_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_183(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_183_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_183_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_183_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_183_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_183_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_183_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_183_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_183_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_183_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_183_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_184
#define AGONY_PP_PRIVATE_EVAL_REC_183_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_184(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_184_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_184_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_184_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_184_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_184_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_184_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_184_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_184_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_184_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_184_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_185
#define AGONY_PP_PRIVATE_EVAL_REC_184_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_185(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_185_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_185_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_185_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_185_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_185_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_185_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_185_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_185_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_185_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_185_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_186
#define AGONY_PP_PRIVATE_EVAL_REC_185_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_186(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_186_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_186_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_186_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_186_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_186_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_186_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_186_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_186_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_186_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_186_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_187
#define AGONY_PP_PRIVATE_EVAL_REC_186_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_187(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_187_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_187_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_187_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_187_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_187_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_187_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_187_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_187_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_187_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_187_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_188
#define AGONY_PP_PRIVATE_EVAL_REC_187_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_188(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_188_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_188_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_188_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_188_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_188_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_188_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_188_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_188_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_188_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_188_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_189
#define AGONY_PP_PRIVATE_EVAL_REC_188_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_189(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_189_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_189_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_189_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_189_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_189_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_189_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_189_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_189_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_189_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_189_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_190
#define AGONY_PP_PRIVATE_EVAL_REC_189_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_190(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_190_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_190_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_190_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_190_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_190_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_190_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_190_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_190_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_190_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_190_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_191
#define AGONY_PP_PRIVATE_EVAL_REC_190_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_191(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_191_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_191_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_191_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_191_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_191_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_191_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_191_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_191_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_191_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_191_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_192
#define AGONY_PP_PRIVATE_EVAL_REC_191_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_192(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_192_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_192_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_192_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_192_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_192_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_192_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_192_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_192_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_192_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_192_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_193
#define AGONY_PP_PRIVATE_EVAL_REC_192_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_193(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_193_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_193_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_193_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_193_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_193_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_193_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_193_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_193_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_193_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_193_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_194
#define AGONY_PP_PRIVATE_EVAL_REC_193_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_194(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_194_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_194_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_194_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_194_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_194_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_194_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_194_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_194_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_194_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_194_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_195
#define AGONY_PP_PRIVATE_EVAL_REC_194_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_195(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_195_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_195_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_195_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_195_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_195_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_195_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_195_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_195_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_195_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_195_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_196
#define AGONY_PP_PRIVATE_EVAL_REC_195_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_196(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_196_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_196_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_196_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_196_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_196_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_196_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_196_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_196_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_196_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_196_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_197
#define AGONY_PP_PRIVATE_EVAL_REC_196_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_197(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_197_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_197_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_197_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_197_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_197_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_197_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_197_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_197_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_197_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_197_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_198
#define AGONY_PP_PRIVATE_EVAL_REC_197_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_198(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_198_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_198_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_198_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_198_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_198_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_198_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_198_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_198_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_198_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_198_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_199
#define AGONY_PP_PRIVATE_EVAL_REC_198_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_199(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_199_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_199_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_199_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_199_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_199_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_199_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_199_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_199_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_199_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_199_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_200
#define AGONY_PP_PRIVATE_EVAL_REC_199_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_200(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_200_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_200_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_200_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_200_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_200_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_200_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_200_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_200_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_200_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_200_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_201
#define AGONY_PP_PRIVATE_EVAL_REC_200_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_201(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_201_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_201_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_201_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_201_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_201_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_201_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_201_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_201_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_201_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_201_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_202
#define AGONY_PP_PRIVATE_EVAL_REC_201_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_202(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_202_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_202_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_202_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_202_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_202_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_202_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_202_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_202_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_202_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_202_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_203
#define AGONY_PP_PRIVATE_EVAL_REC_202_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_203(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_203_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_203_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_203_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_203_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_203_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_203_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_203_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_203_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_203_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_203_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_204
#define AGONY_PP_PRIVATE_EVAL_REC_203_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_204(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_204_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_204_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_204_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_204_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_204_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_204_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_204_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_204_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_204_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_204_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_205
#define AGONY_PP_PRIVATE_EVAL_REC_204_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_205(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_205_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_205_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_205_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_205_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_205_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_205_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_205_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_205_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_205_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_205_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_206
#define AGONY_PP_PRIVATE_EVAL_REC_205_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_206(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_206_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_206_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_206_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_206_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_206_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_206_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_206_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_206_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_206_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_206_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_207
#define AGONY_PP_PRIVATE_EVAL_REC_206_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_207(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_207_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_207_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_207_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_207_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_207_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_207_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_207_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_207_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_207_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_207_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_208
#define AGONY_PP_PRIVATE_EVAL_REC_207_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_208(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_208_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_208_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_208_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_208_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_208_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_208_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_208_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_208_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_208_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_208_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_209
#define AGONY_PP_PRIVATE_EVAL_REC_208_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_209(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_209_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_209_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_209_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_209_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_209_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_209_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_209_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_209_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_209_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_209_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_210
#define AGONY_PP_PRIVATE_EVAL_REC_209_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_210(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_210_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_210_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_210_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_210_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_210_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_210_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_210_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_210_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_210_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_210_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_211
#define AGONY_PP_PRIVATE_EVAL_REC_210_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_211(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_211_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_211_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_211_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_211_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_211_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_211_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_211_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_211_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_211_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_211_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_212
#define AGONY_PP_PRIVATE_EVAL_REC_211_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_212(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_212_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_212_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_212_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_212_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_212_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_212_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_212_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_212_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_212_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_212_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_213
#define AGONY_PP_PRIVATE_EVAL_REC_212_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_213(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_213_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_213_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_213_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_213_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_213_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_213_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_213_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_213_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_213_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_213_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_214
#define AGONY_PP_PRIVATE_EVAL_REC_213_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_214(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_214_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_214_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_214_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_214_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_214_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_214_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_214_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_214_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_214_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_214_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_215
#define AGONY_PP_PRIVATE_EVAL_REC_214_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_215(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_215_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_215_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_215_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_215_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_215_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_215_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_215_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_215_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_215_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_215_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_216
#define AGONY_PP_PRIVATE_EVAL_REC_215_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_216(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_216_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_216_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_216_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_216_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_216_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_216_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_216_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_216_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_216_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_216_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_217
#define AGONY_PP_PRIVATE_EVAL_REC_216_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_217(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_217_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_217_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_217_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_217_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_217_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_217_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_217_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_217_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_217_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_217_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_218
#define AGONY_PP_PRIVATE_EVAL_REC_217_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_218(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_218_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_218_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_218_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_218_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_218_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_218_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_218_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_218_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_218_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_218_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_219
#define AGONY_PP_PRIVATE_EVAL_REC_218_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_219(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_219_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_219_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_219_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_219_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_219_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_219_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_219_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_219_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_219_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_219_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_220
#define AGONY_PP_PRIVATE_EVAL_REC_219_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_220(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_220_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_220_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_220_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_220_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_220_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_220_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_220_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_220_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_220_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_220_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_221
#define AGONY_PP_PRIVATE_EVAL_REC_220_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_221(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_221_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_221_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_221_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_221_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_221_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_221_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_221_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_221_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_221_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_221_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_222
#define AGONY_PP_PRIVATE_EVAL_REC_221_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_222(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_222_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_222_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_222_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_222_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_222_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_222_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_222_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_222_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_222_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_222_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_223
#define AGONY_PP_PRIVATE_EVAL_REC_222_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_223(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_223_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_223_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_223_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_223_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_223_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_223_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_223_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_223_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_223_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_223_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_224
#define AGONY_PP_PRIVATE_EVAL_REC_223_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_224(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_224_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_224_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_224_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_224_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_224_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_224_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_224_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_224_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_224_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_224_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_225
#define AGONY_PP_PRIVATE_EVAL_REC_224_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_225(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_225_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_225_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_225_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_225_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_225_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_225_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_225_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_225_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_225_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_225_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_226
#define AGONY_PP_PRIVATE_EVAL_REC_225_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_226(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_226_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_226_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_226_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_226_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_226_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_226_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_226_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_226_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_226_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_226_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_227
#define AGONY_PP_PRIVATE_EVAL_REC_226_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_227(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_227_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_227_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_227_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_227_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_227_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_227_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_227_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_227_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_227_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_227_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_228
#define AGONY_PP_PRIVATE_EVAL_REC_227_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_228(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_228_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_228_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_228_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_228_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_228_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_228_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_228_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_228_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_228_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_228_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_229
#define AGONY_PP_PRIVATE_EVAL_REC_228_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_229(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_229_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_229_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_229_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_229_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_229_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_229_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_229_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_229_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_229_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_229_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_230
#define AGONY_PP_PRIVATE_EVAL_REC_229_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_230(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_230_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_230_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_230_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_230_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_230_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_230_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_230_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_230_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_230_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_230_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_231
#define AGONY_PP_PRIVATE_EVAL_REC_230_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_231(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_231_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_231_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_231_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_231_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_231_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_231_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_231_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_231_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_231_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_231_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_232
#define AGONY_PP_PRIVATE_EVAL_REC_231_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_232(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_232_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_232_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_232_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_232_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_232_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_232_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_232_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_232_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_232_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_232_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_233
#define AGONY_PP_PRIVATE_EVAL_REC_232_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_233(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_233_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_233_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_233_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_233_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_233_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_233_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_233_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_233_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_233_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_233_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_234
#define AGONY_PP_PRIVATE_EVAL_REC_233_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_234(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_234_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_234_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_234_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_234_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_234_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_234_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_234_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_234_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_234_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_234_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_235
#define AGONY_PP_PRIVATE_EVAL_REC_234_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_235(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_235_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_235_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_235_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_235_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_235_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_235_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_235_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_235_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_235_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_235_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_236
#define AGONY_PP_PRIVATE_EVAL_REC_235_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_236(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_236_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_236_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_236_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_236_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_236_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_236_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_236_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_236_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_236_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_236_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_237
#define AGONY_PP_PRIVATE_EVAL_REC_236_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_237(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_237_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_237_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_237_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_237_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_237_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_237_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_237_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_237_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_237_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_237_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_238
#define AGONY_PP_PRIVATE_EVAL_REC_237_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_238(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_238_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_238_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_238_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_238_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_238_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_238_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_238_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_238_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_238_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_238_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_239
#define AGONY_PP_PRIVATE_EVAL_REC_238_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_239(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_239_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_239_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_239_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_239_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_239_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_239_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_239_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_239_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_239_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_239_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_240
#define AGONY_PP_PRIVATE_EVAL_REC_239_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_240(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_240_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_240_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_240_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_240_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_240_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_240_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_240_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_240_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_240_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_240_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_241
#define AGONY_PP_PRIVATE_EVAL_REC_240_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_241(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_241_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_241_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_241_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_241_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_241_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_241_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_241_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_241_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_241_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_241_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_242
#define AGONY_PP_PRIVATE_EVAL_REC_241_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_242(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_242_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_242_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_242_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_242_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_242_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_242_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_242_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_242_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_242_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_242_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_243
#define AGONY_PP_PRIVATE_EVAL_REC_242_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_243(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_243_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_243_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_243_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_243_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_243_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_243_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_243_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_243_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_243_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_243_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_244
#define AGONY_PP_PRIVATE_EVAL_REC_243_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_244(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_244_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_244_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_244_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_244_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_244_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_244_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_244_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_244_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_244_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_244_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_245
#define AGONY_PP_PRIVATE_EVAL_REC_244_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_245(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_245_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_245_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_245_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_245_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_245_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_245_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_245_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_245_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_245_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_245_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_246
#define AGONY_PP_PRIVATE_EVAL_REC_245_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_246(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_246_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_246_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_246_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_246_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_246_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_246_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_246_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_246_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_246_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_246_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_247
#define AGONY_PP_PRIVATE_EVAL_REC_246_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_247(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_247_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_247_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_247_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_247_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_247_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_247_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_247_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_247_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_247_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_247_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_248
#define AGONY_PP_PRIVATE_EVAL_REC_247_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_248(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_248_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_248_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_248_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_248_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_248_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_248_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_248_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_248_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_248_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_248_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_249
#define AGONY_PP_PRIVATE_EVAL_REC_248_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_249(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_249_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_249_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_249_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_249_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_249_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_249_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_249_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_249_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_249_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_249_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_250
#define AGONY_PP_PRIVATE_EVAL_REC_249_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_250(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_250_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_250_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_250_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_250_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_250_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_250_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_250_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_250_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_250_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_250_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_251
#define AGONY_PP_PRIVATE_EVAL_REC_250_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_251(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_251_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_251_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_251_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_251_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_251_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_251_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_251_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_251_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_251_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_251_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_252
#define AGONY_PP_PRIVATE_EVAL_REC_251_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_252(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_252_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_252_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_252_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_252_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_252_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_252_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_252_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_252_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_252_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_252_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_253
#define AGONY_PP_PRIVATE_EVAL_REC_252_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_253(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_253_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_253_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_253_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_253_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_253_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_253_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_253_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_253_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_253_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_253_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_254
#define AGONY_PP_PRIVATE_EVAL_REC_253_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_254(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_254_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_254_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_254_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_254_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_254_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_254_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_254_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_254_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_254_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_254_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_255
#define AGONY_PP_PRIVATE_EVAL_REC_254_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_255(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_255_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_255_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_255_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_255_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_255_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_255_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_255_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_255_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_255_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_255_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_256
#define AGONY_PP_PRIVATE_EVAL_REC_255_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_256(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_256_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_256_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_256_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_256_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_256_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_256_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_256_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_256_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_256_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_256_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_257
#define AGONY_PP_PRIVATE_EVAL_REC_256_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_257(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_257_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_257_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_257_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_257_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_257_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_257_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_257_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_257_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_257_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_257_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_258
#define AGONY_PP_PRIVATE_EVAL_REC_257_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_258(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_258_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_258_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_258_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_258_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_258_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_258_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_258_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_258_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_258_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_258_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_259
#define AGONY_PP_PRIVATE_EVAL_REC_258_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_259(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_259_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_259_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_259_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_259_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_259_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_259_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_259_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_259_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_259_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_259_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_260
#define AGONY_PP_PRIVATE_EVAL_REC_259_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_260(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_260_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_260_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_260_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_260_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_260_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_260_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_260_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_260_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_260_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_260_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_261
#define AGONY_PP_PRIVATE_EVAL_REC_260_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_261(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_261_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_261_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_261_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_261_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_261_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_261_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_261_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_261_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_261_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_261_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_262
#define AGONY_PP_PRIVATE_EVAL_REC_261_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_262(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_262_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_262_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_262_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_262_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_262_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_262_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_262_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_262_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_262_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_262_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_263
#define AGONY_PP_PRIVATE_EVAL_REC_262_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_263(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_263_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_263_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_263_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_263_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_263_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_263_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_263_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_263_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_263_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_263_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_264
#define AGONY_PP_PRIVATE_EVAL_REC_263_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_264(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_264_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_264_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_264_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_264_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_264_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_264_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_264_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_264_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_264_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_264_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_265
#define AGONY_PP_PRIVATE_EVAL_REC_264_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_265(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_265_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_265_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_265_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_265_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_265_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_265_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_265_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_265_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_265_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_265_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_266
#define AGONY_PP_PRIVATE_EVAL_REC_265_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_266(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_266_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_266_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_266_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_266_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_266_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_266_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_266_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_266_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_266_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_266_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_267
#define AGONY_PP_PRIVATE_EVAL_REC_266_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_267(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_267_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_267_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_267_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_267_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_267_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_267_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_267_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_267_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_267_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_267_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_268
#define AGONY_PP_PRIVATE_EVAL_REC_267_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_268(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_268_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_268_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_268_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_268_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_268_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_268_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_268_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_268_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_268_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_268_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_269
#define AGONY_PP_PRIVATE_EVAL_REC_268_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_269(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_269_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_269_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_269_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_269_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_269_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_269_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_269_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_269_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_269_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_269_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_270
#define AGONY_PP_PRIVATE_EVAL_REC_269_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_270(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_270_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_270_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_270_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_270_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_270_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_270_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_270_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_270_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_270_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_270_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_271
#define AGONY_PP_PRIVATE_EVAL_REC_270_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_271(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_271_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_271_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_271_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_271_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_271_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_271_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_271_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_271_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_271_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_271_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_272
#define AGONY_PP_PRIVATE_EVAL_REC_271_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_272(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_272_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_272_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_272_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_272_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_272_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_272_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_272_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_272_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_272_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_272_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_273
#define AGONY_PP_PRIVATE_EVAL_REC_272_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_273(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_273_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_273_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_273_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_273_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_273_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_273_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_273_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_273_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_273_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_273_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_274
#define AGONY_PP_PRIVATE_EVAL_REC_273_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_274(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_274_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_274_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_274_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_274_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_274_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_274_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_274_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_274_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_274_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_274_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_275
#define AGONY_PP_PRIVATE_EVAL_REC_274_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_275(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_275_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_275_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_275_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_275_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_275_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_275_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_275_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_275_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_275_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_275_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_276
#define AGONY_PP_PRIVATE_EVAL_REC_275_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_276(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_276_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_276_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_276_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_276_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_276_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_276_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_276_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_276_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_276_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_276_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_277
#define AGONY_PP_PRIVATE_EVAL_REC_276_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_277(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_277_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_277_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_277_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_277_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_277_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_277_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_277_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_277_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_277_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_277_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_278
#define AGONY_PP_PRIVATE_EVAL_REC_277_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_278(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_278_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_278_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_278_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_278_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_278_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_278_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_278_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_278_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_278_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_278_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_279
#define AGONY_PP_PRIVATE_EVAL_REC_278_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_279(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_279_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_279_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_279_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_279_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_279_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_279_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_279_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_279_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_279_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_279_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_280
#define AGONY_PP_PRIVATE_EVAL_REC_279_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_280(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_280_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_280_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_280_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_280_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_280_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_280_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_280_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_280_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_280_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_280_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_281
#define AGONY_PP_PRIVATE_EVAL_REC_280_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_281(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_281_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_281_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_281_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_281_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_281_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_281_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_281_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_281_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_281_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_281_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_282
#define AGONY_PP_PRIVATE_EVAL_REC_281_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_282(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_282_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_282_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_282_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_282_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_282_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_282_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_282_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_282_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_282_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_282_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_283
#define AGONY_PP_PRIVATE_EVAL_REC_282_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_283(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_283_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_283_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_283_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_283_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_283_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_283_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_283_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_283_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_283_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_283_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_284
#define AGONY_PP_PRIVATE_EVAL_REC_283_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_284(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_284_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_284_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_284_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_284_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_284_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_284_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_284_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_284_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_284_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_284_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_285
#define AGONY_PP_PRIVATE_EVAL_REC_284_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_285(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_285_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_285_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_285_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_285_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_285_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_285_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_285_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_285_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_285_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_285_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_286
#define AGONY_PP_PRIVATE_EVAL_REC_285_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_286(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_286_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_286_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_286_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_286_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_286_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_286_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_286_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_286_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_286_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_286_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_287
#define AGONY_PP_PRIVATE_EVAL_REC_286_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_287(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_287_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_287_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_287_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_287_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_287_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_287_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_287_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_287_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_287_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_287_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_288
#define AGONY_PP_PRIVATE_EVAL_REC_287_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_288(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_288_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_288_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_288_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_288_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_288_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_288_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_288_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_288_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_288_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_288_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_289
#define AGONY_PP_PRIVATE_EVAL_REC_288_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_289(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_289_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_289_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_289_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_289_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_289_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_289_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_289_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_289_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_289_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_289_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_290
#define AGONY_PP_PRIVATE_EVAL_REC_289_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_290(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_290_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_290_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_290_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_290_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_290_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_290_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_290_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_290_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_290_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_290_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_291
#define AGONY_PP_PRIVATE_EVAL_REC_290_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_291(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_291_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_291_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_291_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_291_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_291_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_291_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_291_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_291_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_291_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_291_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_292
#define AGONY_PP_PRIVATE_EVAL_REC_291_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_292(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_292_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_292_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_292_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_292_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_292_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_292_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_292_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_292_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_292_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_292_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_293
#define AGONY_PP_PRIVATE_EVAL_REC_292_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_293(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_293_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_293_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_293_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_293_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_293_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_293_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_293_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_293_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_293_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_293_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_294
#define AGONY_PP_PRIVATE_EVAL_REC_293_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_294(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_294_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_294_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_294_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_294_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_294_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_294_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_294_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_294_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_294_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_294_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_295
#define AGONY_PP_PRIVATE_EVAL_REC_294_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_295(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_295_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_295_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_295_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_295_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_295_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_295_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_295_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_295_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_295_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_295_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_296
#define AGONY_PP_PRIVATE_EVAL_REC_295_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_296(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_296_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_296_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_296_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_296_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_296_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_296_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_296_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_296_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_296_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_296_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_297
#define AGONY_PP_PRIVATE_EVAL_REC_296_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_297(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_297_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_297_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_297_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_297_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_297_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_297_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_297_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_297_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_297_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_297_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_298
#define AGONY_PP_PRIVATE_EVAL_REC_297_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_298(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_298_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_298_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_298_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_298_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_298_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_298_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_298_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_298_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_298_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_298_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_299
#define AGONY_PP_PRIVATE_EVAL_REC_298_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_299(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_299_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_299_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_299_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_299_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_299_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_299_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_299_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_299_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_299_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_299_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_300
#define AGONY_PP_PRIVATE_EVAL_REC_299_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_300(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_300_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_300_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_300_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_300_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_300_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_300_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_300_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_300_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_300_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_300_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_301
#define AGONY_PP_PRIVATE_EVAL_REC_300_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_301(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_301_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_301_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_301_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_301_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_301_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_301_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_301_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_301_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_301_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_301_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_302
#define AGONY_PP_PRIVATE_EVAL_REC_301_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_302(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_302_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_302_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_302_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_302_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_302_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_302_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_302_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_302_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_302_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_302_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_303
#define AGONY_PP_PRIVATE_EVAL_REC_302_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_303(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_303_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_303_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_303_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_303_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_303_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_303_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_303_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_303_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_303_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_303_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_304
#define AGONY_PP_PRIVATE_EVAL_REC_303_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_304(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_304_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_304_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_304_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_304_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_304_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_304_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_304_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_304_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_304_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_304_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_305
#define AGONY_PP_PRIVATE_EVAL_REC_304_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_305(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_305_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_305_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_305_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_305_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_305_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_305_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_305_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_305_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_305_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_305_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_306
#define AGONY_PP_PRIVATE_EVAL_REC_305_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_306(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_306_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_306_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_306_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_306_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_306_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_306_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_306_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_306_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_306_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_306_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_307
#define AGONY_PP_PRIVATE_EVAL_REC_306_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_307(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_307_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_307_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_307_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_307_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_307_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_307_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_307_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_307_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_307_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_307_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_308
#define AGONY_PP_PRIVATE_EVAL_REC_307_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_308(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_308_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_308_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_308_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_308_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_308_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_308_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_308_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_308_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_308_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_308_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_309
#define AGONY_PP_PRIVATE_EVAL_REC_308_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_309(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_309_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_309_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_309_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_309_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_309_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_309_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_309_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_309_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_309_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_309_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_310
#define AGONY_PP_PRIVATE_EVAL_REC_309_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_310(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_310_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_310_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_310_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_310_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_310_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_310_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_310_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_310_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_310_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_310_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_311
#define AGONY_PP_PRIVATE_EVAL_REC_310_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_311(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_311_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_311_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_311_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_311_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_311_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_311_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_311_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_311_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_311_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_311_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_312
#define AGONY_PP_PRIVATE_EVAL_REC_311_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_312(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_312_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_312_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_312_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_312_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_312_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_312_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_312_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_312_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_312_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_312_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_313
#define AGONY_PP_PRIVATE_EVAL_REC_312_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_313(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_313_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_313_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_313_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_313_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_313_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_313_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_313_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_313_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_313_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_313_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_314
#define AGONY_PP_PRIVATE_EVAL_REC_313_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_314(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_314_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_314_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_314_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_314_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_314_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_314_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_314_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_314_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_314_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_314_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_315
#define AGONY_PP_PRIVATE_EVAL_REC_314_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_315(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_315_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_315_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_315_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_315_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_315_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_315_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_315_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_315_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_315_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_315_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_316
#define AGONY_PP_PRIVATE_EVAL_REC_315_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_316(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_316_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_316_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_316_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_316_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_316_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_316_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_316_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_316_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_316_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_316_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_317
#define AGONY_PP_PRIVATE_EVAL_REC_316_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_317(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_317_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_317_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_317_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_317_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_317_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_317_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_317_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_317_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_317_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_317_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_318
#define AGONY_PP_PRIVATE_EVAL_REC_317_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_318(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_318_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_318_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_318_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_318_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_318_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_318_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_318_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_318_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_318_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_318_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_319
#define AGONY_PP_PRIVATE_EVAL_REC_318_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_319(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_319_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_319_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_319_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_319_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_319_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_319_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_319_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_319_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_319_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_319_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_320
#define AGONY_PP_PRIVATE_EVAL_REC_319_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_320(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_320_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_320_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_320_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_320_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_320_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_320_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_320_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_320_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_320_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_320_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_321
#define AGONY_PP_PRIVATE_EVAL_REC_320_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_321(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_321_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_321_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_321_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_321_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_321_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_321_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_321_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_321_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_321_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_321_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_322
#define AGONY_PP_PRIVATE_EVAL_REC_321_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_322(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_322_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_322_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_322_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_322_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_322_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_322_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_322_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_322_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_322_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_322_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_323
#define AGONY_PP_PRIVATE_EVAL_REC_322_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_323(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_323_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_323_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_323_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_323_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_323_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_323_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_323_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_323_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_323_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_323_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_324
#define AGONY_PP_PRIVATE_EVAL_REC_323_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_324(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_324_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_324_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_324_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_324_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_324_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_324_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_324_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_324_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_324_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_324_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_325
#define AGONY_PP_PRIVATE_EVAL_REC_324_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_325(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_325_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_325_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_325_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_325_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_325_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_325_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_325_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_325_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_325_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_325_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_326
#define AGONY_PP_PRIVATE_EVAL_REC_325_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_326(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_326_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_326_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_326_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_326_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_326_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_326_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_326_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_326_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_326_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_326_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_327
#define AGONY_PP_PRIVATE_EVAL_REC_326_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_327(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_327_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_327_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_327_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_327_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_327_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_327_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_327_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_327_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_327_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_327_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_328
#define AGONY_PP_PRIVATE_EVAL_REC_327_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_328(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_328_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_328_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_328_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_328_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_328_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_328_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_328_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_328_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_328_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_328_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_329
#define AGONY_PP_PRIVATE_EVAL_REC_328_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_329(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_329_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_329_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_329_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_329_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_329_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_329_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_329_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_329_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_329_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_329_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_330
#define AGONY_PP_PRIVATE_EVAL_REC_329_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_330(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_330_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_330_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_330_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_330_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_330_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_330_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_330_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_330_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_330_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_330_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_331
#define AGONY_PP_PRIVATE_EVAL_REC_330_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_331(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_331_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_331_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_331_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_331_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_331_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_331_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_331_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_331_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_331_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_331_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_332
#define AGONY_PP_PRIVATE_EVAL_REC_331_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_332(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_332_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_332_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_332_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_332_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_332_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_332_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_332_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_332_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_332_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_332_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_333
#define AGONY_PP_PRIVATE_EVAL_REC_332_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_333(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_333_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_333_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_333_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_333_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_333_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_333_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_333_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_333_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_333_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_333_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_334
#define AGONY_PP_PRIVATE_EVAL_REC_333_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_334(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_334_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_334_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_334_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_334_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_334_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_334_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_334_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_334_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_334_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_334_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_335
#define AGONY_PP_PRIVATE_EVAL_REC_334_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_335(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_335_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_335_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_335_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_335_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_335_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_335_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_335_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_335_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_335_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_335_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_336
#define AGONY_PP_PRIVATE_EVAL_REC_335_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_336(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_336_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_336_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_336_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_336_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_336_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_336_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_336_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_336_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_336_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_336_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_337
#define AGONY_PP_PRIVATE_EVAL_REC_336_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_337(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_337_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_337_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_337_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_337_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_337_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_337_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_337_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_337_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_337_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_337_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_338
#define AGONY_PP_PRIVATE_EVAL_REC_337_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_338(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_338_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_338_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_338_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_338_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_338_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_338_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_338_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_338_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_338_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_338_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_339
#define AGONY_PP_PRIVATE_EVAL_REC_338_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_339(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_339_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_339_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_339_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_339_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_339_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_339_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_339_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_339_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_339_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_339_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_340
#define AGONY_PP_PRIVATE_EVAL_REC_339_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_340(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_340_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_340_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_340_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_340_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_340_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_340_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_340_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_340_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_340_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_340_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_341
#define AGONY_PP_PRIVATE_EVAL_REC_340_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_341(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_341_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_341_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_341_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_341_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_341_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_341_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_341_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_341_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_341_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_341_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_342
#define AGONY_PP_PRIVATE_EVAL_REC_341_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_342(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_342_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_342_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_342_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_342_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_342_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_342_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_342_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_342_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_342_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_342_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_343
#define AGONY_PP_PRIVATE_EVAL_REC_342_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_343(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_343_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_343_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_343_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_343_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_343_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_343_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_343_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_343_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_343_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_343_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_344
#define AGONY_PP_PRIVATE_EVAL_REC_343_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_344(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_344_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_344_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_344_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_344_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_344_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_344_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_344_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_344_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_344_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_344_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_345
#define AGONY_PP_PRIVATE_EVAL_REC_344_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_345(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_345_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_345_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_345_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_345_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_345_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_345_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_345_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_345_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_345_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_345_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_346
#define AGONY_PP_PRIVATE_EVAL_REC_345_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_346(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_346_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_346_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_346_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_346_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_346_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_346_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_346_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_346_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_346_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_346_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_347
#define AGONY_PP_PRIVATE_EVAL_REC_346_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_347(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_347_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_347_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_347_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_347_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_347_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_347_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_347_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_347_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_347_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_347_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_348
#define AGONY_PP_PRIVATE_EVAL_REC_347_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_348(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_348_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_348_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_348_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_348_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_348_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_348_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_348_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_348_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_348_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_348_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_349
#define AGONY_PP_PRIVATE_EVAL_REC_348_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_349(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_349_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_349_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_349_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_349_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_349_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_349_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_349_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_349_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_349_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_349_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_350
#define AGONY_PP_PRIVATE_EVAL_REC_349_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_350(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_350_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_350_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_350_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_350_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_350_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_350_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_350_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_350_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_350_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_350_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_351
#define AGONY_PP_PRIVATE_EVAL_REC_350_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_351(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_351_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_351_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_351_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_351_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_351_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_351_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_351_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_351_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_351_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_351_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_352
#define AGONY_PP_PRIVATE_EVAL_REC_351_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_352(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_352_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_352_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_352_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_352_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_352_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_352_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_352_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_352_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_352_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_352_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_353
#define AGONY_PP_PRIVATE_EVAL_REC_352_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_353(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_353_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_353_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_353_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_353_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_353_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_353_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_353_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_353_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_353_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_353_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_354
#define AGONY_PP_PRIVATE_EVAL_REC_353_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_354(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_354_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_354_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_354_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_354_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_354_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_354_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_354_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_354_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_354_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_354_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_355
#define AGONY_PP_PRIVATE_EVAL_REC_354_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_355(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_355_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_355_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_355_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_355_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_355_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_355_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_355_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_355_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_355_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_355_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_356
#define AGONY_PP_PRIVATE_EVAL_REC_355_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_356(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_356_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_356_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_356_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_356_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_356_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_356_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_356_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_356_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_356_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_356_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_357
#define AGONY_PP_PRIVATE_EVAL_REC_356_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_357(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_357_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_357_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_357_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_357_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_357_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_357_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_357_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_357_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_357_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_357_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_358
#define AGONY_PP_PRIVATE_EVAL_REC_357_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_358(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_358_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_358_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_358_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_358_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_358_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_358_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_358_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_358_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_358_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_358_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_359
#define AGONY_PP_PRIVATE_EVAL_REC_358_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_359(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_359_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_359_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_359_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_359_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_359_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_359_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_359_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_359_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_359_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_359_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_360
#define AGONY_PP_PRIVATE_EVAL_REC_359_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_360(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_360_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_360_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_360_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_360_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_360_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_360_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_360_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_360_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_360_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_360_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_361
#define AGONY_PP_PRIVATE_EVAL_REC_360_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_361(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_361_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_361_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_361_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_361_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_361_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_361_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_361_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_361_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_361_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_361_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_362
#define AGONY_PP_PRIVATE_EVAL_REC_361_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_362(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_362_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_362_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_362_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_362_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_362_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_362_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_362_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_362_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_362_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_362_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_363
#define AGONY_PP_PRIVATE_EVAL_REC_362_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_363(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_363_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_363_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_363_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_363_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_363_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_363_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_363_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_363_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_363_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_363_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_364
#define AGONY_PP_PRIVATE_EVAL_REC_363_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_364(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_364_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_364_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_364_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_364_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_364_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_364_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_364_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_364_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_364_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_364_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_365
#define AGONY_PP_PRIVATE_EVAL_REC_364_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_365(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_365_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_365_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_365_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_365_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_365_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_365_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_365_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_365_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_365_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_365_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_366
#define AGONY_PP_PRIVATE_EVAL_REC_365_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_366(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_366_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_366_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_366_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_366_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_366_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_366_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_366_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_366_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_366_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_366_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_367
#define AGONY_PP_PRIVATE_EVAL_REC_366_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_367(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_367_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_367_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_367_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_367_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_367_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_367_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_367_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_367_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_367_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_367_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_368
#define AGONY_PP_PRIVATE_EVAL_REC_367_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_368(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_368_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_368_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_368_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_368_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_368_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_368_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_368_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_368_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_368_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_368_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_369
#define AGONY_PP_PRIVATE_EVAL_REC_368_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_369(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_369_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_369_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_369_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_369_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_369_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_369_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_369_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_369_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_369_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_369_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_370
#define AGONY_PP_PRIVATE_EVAL_REC_369_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_370(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_370_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_370_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_370_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_370_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_370_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_370_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_370_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_370_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_370_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_370_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_371
#define AGONY_PP_PRIVATE_EVAL_REC_370_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_371(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_371_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_371_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_371_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_371_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_371_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_371_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_371_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_371_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_371_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_371_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_372
#define AGONY_PP_PRIVATE_EVAL_REC_371_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_372(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_372_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_372_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_372_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_372_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_372_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_372_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_372_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_372_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_372_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_372_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_373
#define AGONY_PP_PRIVATE_EVAL_REC_372_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_373(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_373_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_373_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_373_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_373_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_373_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_373_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_373_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_373_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_373_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_373_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_374
#define AGONY_PP_PRIVATE_EVAL_REC_373_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_374(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_374_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_374_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_374_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_374_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_374_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_374_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_374_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_374_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_374_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_374_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_375
#define AGONY_PP_PRIVATE_EVAL_REC_374_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_375(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_375_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_375_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_375_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_375_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_375_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_375_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_375_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_375_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_375_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_375_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_376
#define AGONY_PP_PRIVATE_EVAL_REC_375_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_376(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_376_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_376_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_376_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_376_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_376_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_376_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_376_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_376_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_376_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_376_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_377
#define AGONY_PP_PRIVATE_EVAL_REC_376_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_377(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_377_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_377_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_377_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_377_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_377_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_377_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_377_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_377_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_377_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_377_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_378
#define AGONY_PP_PRIVATE_EVAL_REC_377_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_378(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_378_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_378_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_378_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_378_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_378_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_378_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_378_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_378_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_378_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_378_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_379
#define AGONY_PP_PRIVATE_EVAL_REC_378_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_379(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_379_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_379_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_379_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_379_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_379_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_379_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_379_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_379_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_379_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_379_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_380
#define AGONY_PP_PRIVATE_EVAL_REC_379_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_380(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_380_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_380_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_380_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_380_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_380_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_380_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_380_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_380_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_380_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_380_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_381
#define AGONY_PP_PRIVATE_EVAL_REC_380_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_381(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_381_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_381_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_381_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_381_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_381_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_381_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_381_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_381_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_381_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_381_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_382
#define AGONY_PP_PRIVATE_EVAL_REC_381_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_382(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_382_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_382_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_382_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_382_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_382_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_382_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_382_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_382_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_382_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_382_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_383
#define AGONY_PP_PRIVATE_EVAL_REC_382_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_383(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_383_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_383_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_383_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_383_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_383_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_383_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_383_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_383_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_383_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_383_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_384
#define AGONY_PP_PRIVATE_EVAL_REC_383_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_384(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_384_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_384_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_384_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_384_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_384_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_384_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_384_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_384_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_384_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_384_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_385
#define AGONY_PP_PRIVATE_EVAL_REC_384_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_385(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_385_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_385_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_385_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_385_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_385_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_385_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_385_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_385_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_385_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_385_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_386
#define AGONY_PP_PRIVATE_EVAL_REC_385_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_386(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_386_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_386_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_386_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_386_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_386_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_386_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_386_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_386_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_386_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_386_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_387
#define AGONY_PP_PRIVATE_EVAL_REC_386_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_387(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_387_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_387_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_387_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_387_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_387_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_387_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_387_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_387_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_387_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_387_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_388
#define AGONY_PP_PRIVATE_EVAL_REC_387_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_388(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_388_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_388_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_388_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_388_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_388_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_388_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_388_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_388_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_388_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_388_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_389
#define AGONY_PP_PRIVATE_EVAL_REC_388_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_389(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_389_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_389_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_389_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_389_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_389_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_389_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_389_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_389_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_389_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_389_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_390
#define AGONY_PP_PRIVATE_EVAL_REC_389_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_390(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_390_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_390_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_390_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_390_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_390_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_390_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_390_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_390_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_390_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_390_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_391
#define AGONY_PP_PRIVATE_EVAL_REC_390_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_391(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_391_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_391_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_391_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_391_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_391_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_391_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_391_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_391_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_391_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_391_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_392
#define AGONY_PP_PRIVATE_EVAL_REC_391_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_392(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_392_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_392_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_392_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_392_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_392_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_392_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_392_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_392_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_392_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_392_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_393
#define AGONY_PP_PRIVATE_EVAL_REC_392_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_393(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_393_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_393_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_393_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_393_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_393_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_393_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_393_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_393_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_393_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_393_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_394
#define AGONY_PP_PRIVATE_EVAL_REC_393_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_394(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_394_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_394_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_394_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_394_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_394_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_394_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_394_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_394_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_394_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_394_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_395
#define AGONY_PP_PRIVATE_EVAL_REC_394_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_395(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_395_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_395_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_395_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_395_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_395_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_395_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_395_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_395_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_395_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_395_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_396
#define AGONY_PP_PRIVATE_EVAL_REC_395_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_396(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_396_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_396_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_396_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_396_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_396_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_396_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_396_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_396_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_396_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_396_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_397
#define AGONY_PP_PRIVATE_EVAL_REC_396_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_397(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_397_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_397_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_397_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_397_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_397_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_397_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_397_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_397_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_397_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_397_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_398
#define AGONY_PP_PRIVATE_EVAL_REC_397_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_398(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_398_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_398_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_398_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_398_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_398_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_398_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_398_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_398_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_398_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_398_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_399
#define AGONY_PP_PRIVATE_EVAL_REC_398_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_399(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_399_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_399_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_399_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_399_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_399_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_399_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_399_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_399_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_399_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_399_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_400
#define AGONY_PP_PRIVATE_EVAL_REC_399_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_400(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_400_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_400_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_400_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_400_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_400_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_400_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_400_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_400_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_400_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_400_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_401
#define AGONY_PP_PRIVATE_EVAL_REC_400_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_401(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_401_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_401_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_401_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_401_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_401_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_401_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_401_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_401_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_401_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_401_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_402
#define AGONY_PP_PRIVATE_EVAL_REC_401_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_402(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_402_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_402_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_402_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_402_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_402_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_402_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_402_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_402_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_402_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_402_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_403
#define AGONY_PP_PRIVATE_EVAL_REC_402_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_403(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_403_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_403_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_403_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_403_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_403_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_403_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_403_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_403_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_403_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_403_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_404
#define AGONY_PP_PRIVATE_EVAL_REC_403_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_404(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_404_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_404_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_404_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_404_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_404_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_404_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_404_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_404_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_404_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_404_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_405
#define AGONY_PP_PRIVATE_EVAL_REC_404_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_405(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_405_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_405_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_405_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_405_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_405_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_405_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_405_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_405_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_405_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_405_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_406
#define AGONY_PP_PRIVATE_EVAL_REC_405_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_406(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_406_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_406_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_406_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_406_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_406_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_406_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_406_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_406_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_406_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_406_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_407
#define AGONY_PP_PRIVATE_EVAL_REC_406_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_407(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_407_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_407_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_407_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_407_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_407_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_407_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_407_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_407_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_407_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_407_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_408
#define AGONY_PP_PRIVATE_EVAL_REC_407_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_408(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_408_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_408_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_408_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_408_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_408_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_408_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_408_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_408_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_408_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_408_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_409
#define AGONY_PP_PRIVATE_EVAL_REC_408_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_409(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_409_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_409_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_409_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_409_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_409_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_409_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_409_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_409_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_409_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_409_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_410
#define AGONY_PP_PRIVATE_EVAL_REC_409_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_410(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_410_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_410_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_410_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_410_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_410_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_410_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_410_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_410_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_410_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_410_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_411
#define AGONY_PP_PRIVATE_EVAL_REC_410_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_411(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_411_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_411_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_411_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_411_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_411_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_411_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_411_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_411_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_411_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_411_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_412
#define AGONY_PP_PRIVATE_EVAL_REC_411_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_412(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_412_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_412_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_412_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_412_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_412_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_412_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_412_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_412_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_412_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_412_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_413
#define AGONY_PP_PRIVATE_EVAL_REC_412_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_413(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_413_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_413_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_413_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_413_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_413_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_413_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_413_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_413_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_413_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_413_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_414
#define AGONY_PP_PRIVATE_EVAL_REC_413_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_414(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_414_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_414_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_414_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_414_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_414_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_414_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_414_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_414_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_414_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_414_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_415
#define AGONY_PP_PRIVATE_EVAL_REC_414_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_415(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_415_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_415_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_415_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_415_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_415_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_415_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_415_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_415_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_415_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_415_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_416
#define AGONY_PP_PRIVATE_EVAL_REC_415_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_416(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_416_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_416_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_416_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_416_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_416_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_416_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_416_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_416_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_416_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_416_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_417
#define AGONY_PP_PRIVATE_EVAL_REC_416_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_417(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_417_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_417_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_417_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_417_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_417_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_417_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_417_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_417_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_417_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_417_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_418
#define AGONY_PP_PRIVATE_EVAL_REC_417_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_418(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_418_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_418_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_418_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_418_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_418_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_418_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_418_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_418_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_418_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_418_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_419
#define AGONY_PP_PRIVATE_EVAL_REC_418_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_419(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_419_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_419_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_419_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_419_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_419_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_419_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_419_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_419_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_419_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_419_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_420
#define AGONY_PP_PRIVATE_EVAL_REC_419_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_420(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_420_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_420_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_420_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_420_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_420_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_420_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_420_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_420_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_420_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_420_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_421
#define AGONY_PP_PRIVATE_EVAL_REC_420_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_421(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_421_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_421_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_421_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_421_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_421_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_421_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_421_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_421_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_421_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_421_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_422
#define AGONY_PP_PRIVATE_EVAL_REC_421_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_422(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_422_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_422_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_422_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_422_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_422_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_422_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_422_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_422_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_422_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_422_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_423
#define AGONY_PP_PRIVATE_EVAL_REC_422_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_423(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_423_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_423_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_423_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_423_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_423_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_423_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_423_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_423_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_423_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_423_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_424
#define AGONY_PP_PRIVATE_EVAL_REC_423_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_424(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_424_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_424_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_424_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_424_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_424_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_424_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_424_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_424_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_424_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_424_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_425
#define AGONY_PP_PRIVATE_EVAL_REC_424_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_425(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_425_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_425_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_425_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_425_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_425_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_425_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_425_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_425_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_425_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_425_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_426
#define AGONY_PP_PRIVATE_EVAL_REC_425_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_426(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_426_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_426_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_426_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_426_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_426_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_426_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_426_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_426_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_426_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_426_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_427
#define AGONY_PP_PRIVATE_EVAL_REC_426_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_427(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_427_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_427_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_427_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_427_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_427_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_427_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_427_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_427_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_427_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_427_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_428
#define AGONY_PP_PRIVATE_EVAL_REC_427_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_428(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_428_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_428_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_428_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_428_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_428_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_428_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_428_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_428_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_428_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_428_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_429
#define AGONY_PP_PRIVATE_EVAL_REC_428_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_429(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_429_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_429_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_429_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_429_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_429_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_429_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_429_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_429_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_429_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_429_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_430
#define AGONY_PP_PRIVATE_EVAL_REC_429_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_430(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_430_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_430_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_430_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_430_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_430_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_430_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_430_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_430_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_430_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_430_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_431
#define AGONY_PP_PRIVATE_EVAL_REC_430_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_431(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_431_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_431_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_431_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_431_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_431_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_431_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_431_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_431_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_431_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_431_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_432
#define AGONY_PP_PRIVATE_EVAL_REC_431_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_432(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_432_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_432_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_432_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_432_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_432_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_432_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_432_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_432_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_432_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_432_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_433
#define AGONY_PP_PRIVATE_EVAL_REC_432_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_433(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_433_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_433_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_433_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_433_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_433_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_433_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_433_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_433_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_433_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_433_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_434
#define AGONY_PP_PRIVATE_EVAL_REC_433_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_434(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_434_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_434_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_434_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_434_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_434_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_434_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_434_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_434_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_434_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_434_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_435
#define AGONY_PP_PRIVATE_EVAL_REC_434_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_435(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_435_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_435_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_435_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_435_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_435_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_435_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_435_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_435_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_435_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_435_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_436
#define AGONY_PP_PRIVATE_EVAL_REC_435_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_436(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_436_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_436_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_436_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_436_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_436_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_436_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_436_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_436_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_436_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_436_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_437
#define AGONY_PP_PRIVATE_EVAL_REC_436_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_437(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_437_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_437_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_437_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_437_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_437_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_437_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_437_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_437_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_437_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_437_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_438
#define AGONY_PP_PRIVATE_EVAL_REC_437_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_438(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_438_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_438_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_438_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_438_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_438_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_438_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_438_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_438_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_438_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_438_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_439
#define AGONY_PP_PRIVATE_EVAL_REC_438_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_439(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_439_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_439_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_439_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_439_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_439_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_439_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_439_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_439_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_439_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_439_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_440
#define AGONY_PP_PRIVATE_EVAL_REC_439_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_440(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_440_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_440_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_440_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_440_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_440_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_440_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_440_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_440_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_440_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_440_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_441
#define AGONY_PP_PRIVATE_EVAL_REC_440_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_441(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_441_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_441_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_441_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_441_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_441_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_441_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_441_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_441_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_441_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_441_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_442
#define AGONY_PP_PRIVATE_EVAL_REC_441_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_442(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_442_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_442_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_442_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_442_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_442_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_442_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_442_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_442_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_442_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_442_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_443
#define AGONY_PP_PRIVATE_EVAL_REC_442_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_443(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_443_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_443_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_443_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_443_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_443_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_443_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_443_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_443_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_443_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_443_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_444
#define AGONY_PP_PRIVATE_EVAL_REC_443_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_444(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_444_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_444_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_444_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_444_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_444_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_444_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_444_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_444_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_444_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_444_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_445
#define AGONY_PP_PRIVATE_EVAL_REC_444_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_445(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_445_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_445_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_445_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_445_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_445_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_445_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_445_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_445_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_445_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_445_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_446
#define AGONY_PP_PRIVATE_EVAL_REC_445_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_446(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_446_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_446_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_446_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_446_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_446_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_446_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_446_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_446_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_446_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_446_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_447
#define AGONY_PP_PRIVATE_EVAL_REC_446_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_447(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_447_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_447_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_447_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_447_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_447_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_447_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_447_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_447_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_447_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_447_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_448
#define AGONY_PP_PRIVATE_EVAL_REC_447_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_448(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_448_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_448_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_448_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_448_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_448_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_448_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_448_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_448_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_448_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_448_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_449
#define AGONY_PP_PRIVATE_EVAL_REC_448_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_449(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_449_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_449_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_449_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_449_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_449_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_449_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_449_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_449_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_449_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_449_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_450
#define AGONY_PP_PRIVATE_EVAL_REC_449_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_450(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_450_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_450_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_450_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_450_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_450_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_450_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_450_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_450_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_450_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_450_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_451
#define AGONY_PP_PRIVATE_EVAL_REC_450_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_451(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_451_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_451_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_451_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_451_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_451_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_451_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_451_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_451_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_451_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_451_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_452
#define AGONY_PP_PRIVATE_EVAL_REC_451_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_452(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_452_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_452_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_452_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_452_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_452_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_452_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_452_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_452_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_452_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_452_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_453
#define AGONY_PP_PRIVATE_EVAL_REC_452_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_453(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_453_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_453_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_453_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_453_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_453_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_453_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_453_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_453_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_453_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_453_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_454
#define AGONY_PP_PRIVATE_EVAL_REC_453_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_454(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_454_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_454_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_454_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_454_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_454_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_454_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_454_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_454_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_454_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_454_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_455
#define AGONY_PP_PRIVATE_EVAL_REC_454_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_455(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_455_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_455_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_455_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_455_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_455_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_455_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_455_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_455_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_455_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_455_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_456
#define AGONY_PP_PRIVATE_EVAL_REC_455_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_456(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_456_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_456_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_456_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_456_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_456_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_456_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_456_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_456_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_456_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_456_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_457
#define AGONY_PP_PRIVATE_EVAL_REC_456_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_457(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_457_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_457_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_457_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_457_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_457_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_457_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_457_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_457_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_457_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_457_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_458
#define AGONY_PP_PRIVATE_EVAL_REC_457_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_458(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_458_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_458_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_458_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_458_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_458_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_458_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_458_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_458_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_458_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_458_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_459
#define AGONY_PP_PRIVATE_EVAL_REC_458_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_459(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_459_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_459_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_459_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_459_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_459_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_459_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_459_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_459_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_459_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_459_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_460
#define AGONY_PP_PRIVATE_EVAL_REC_459_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_460(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_460_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_460_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_460_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_460_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_460_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_460_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_460_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_460_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_460_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_460_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_461
#define AGONY_PP_PRIVATE_EVAL_REC_460_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_461(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_461_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_461_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_461_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_461_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_461_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_461_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_461_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_461_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_461_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_461_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_462
#define AGONY_PP_PRIVATE_EVAL_REC_461_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_462(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_462_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_462_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_462_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_462_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_462_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_462_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_462_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_462_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_462_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_462_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_463
#define AGONY_PP_PRIVATE_EVAL_REC_462_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_463(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_463_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_463_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_463_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_463_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_463_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_463_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_463_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_463_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_463_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_463_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_464
#define AGONY_PP_PRIVATE_EVAL_REC_463_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_464(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_464_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_464_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_464_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_464_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_464_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_464_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_464_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_464_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_464_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_464_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_465
#define AGONY_PP_PRIVATE_EVAL_REC_464_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_465(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_465_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_465_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_465_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_465_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_465_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_465_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_465_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_465_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_465_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_465_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_466
#define AGONY_PP_PRIVATE_EVAL_REC_465_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_466(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_466_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_466_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_466_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_466_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_466_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_466_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_466_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_466_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_466_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_466_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_467
#define AGONY_PP_PRIVATE_EVAL_REC_466_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_467(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_467_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_467_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_467_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_467_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_467_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_467_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_467_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_467_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_467_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_467_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_468
#define AGONY_PP_PRIVATE_EVAL_REC_467_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_468(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_468_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_468_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_468_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_468_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_468_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_468_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_468_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_468_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_468_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_468_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_469
#define AGONY_PP_PRIVATE_EVAL_REC_468_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_469(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_469_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_469_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_469_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_469_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_469_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_469_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_469_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_469_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_469_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_469_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_470
#define AGONY_PP_PRIVATE_EVAL_REC_469_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_470(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_470_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_470_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_470_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_470_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_470_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_470_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_470_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_470_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_470_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_470_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_471
#define AGONY_PP_PRIVATE_EVAL_REC_470_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_471(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_471_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_471_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_471_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_471_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_471_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_471_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_471_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_471_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_471_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_471_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_472
#define AGONY_PP_PRIVATE_EVAL_REC_471_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_472(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_472_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_472_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_472_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_472_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_472_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_472_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_472_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_472_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_472_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_472_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_473
#define AGONY_PP_PRIVATE_EVAL_REC_472_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_473(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_473_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_473_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_473_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_473_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_473_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_473_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_473_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_473_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_473_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_473_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_474
#define AGONY_PP_PRIVATE_EVAL_REC_473_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_474(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_474_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_474_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_474_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_474_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_474_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_474_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_474_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_474_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_474_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_474_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_475
#define AGONY_PP_PRIVATE_EVAL_REC_474_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_475(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_475_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_475_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_475_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_475_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_475_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_475_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_475_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_475_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_475_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_475_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_476
#define AGONY_PP_PRIVATE_EVAL_REC_475_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_476(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_476_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_476_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_476_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_476_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_476_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_476_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_476_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_476_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_476_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_476_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_477
#define AGONY_PP_PRIVATE_EVAL_REC_476_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_477(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_477_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_477_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_477_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_477_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_477_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_477_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_477_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_477_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_477_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_477_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_478
#define AGONY_PP_PRIVATE_EVAL_REC_477_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_478(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_478_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_478_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_478_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_478_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_478_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_478_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_478_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_478_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_478_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_478_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_479
#define AGONY_PP_PRIVATE_EVAL_REC_478_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_479(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_479_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_479_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_479_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_479_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_479_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_479_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_479_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_479_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_479_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_479_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_480
#define AGONY_PP_PRIVATE_EVAL_REC_479_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_480(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_480_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_480_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_480_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_480_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_480_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_480_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_480_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_480_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_480_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_480_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_481
#define AGONY_PP_PRIVATE_EVAL_REC_480_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_481(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_481_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_481_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_481_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_481_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_481_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_481_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_481_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_481_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_481_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_481_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_482
#define AGONY_PP_PRIVATE_EVAL_REC_481_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_482(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_482_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_482_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_482_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_482_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_482_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_482_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_482_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_482_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_482_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_482_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_483
#define AGONY_PP_PRIVATE_EVAL_REC_482_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_483(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_483_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_483_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_483_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_483_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_483_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_483_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_483_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_483_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_483_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_483_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_484
#define AGONY_PP_PRIVATE_EVAL_REC_483_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_484(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_484_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_484_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_484_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_484_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_484_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_484_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_484_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_484_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_484_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_484_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_485
#define AGONY_PP_PRIVATE_EVAL_REC_484_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_485(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_485_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_485_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_485_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_485_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_485_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_485_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_485_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_485_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_485_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_485_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_486
#define AGONY_PP_PRIVATE_EVAL_REC_485_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_486(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_486_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_486_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_486_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_486_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_486_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_486_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_486_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_486_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_486_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_486_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_487
#define AGONY_PP_PRIVATE_EVAL_REC_486_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_487(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_487_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_487_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_487_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_487_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_487_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_487_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_487_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_487_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_487_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_487_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_488
#define AGONY_PP_PRIVATE_EVAL_REC_487_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_488(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_488_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_488_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_488_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_488_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_488_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_488_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_488_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_488_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_488_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_488_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_489
#define AGONY_PP_PRIVATE_EVAL_REC_488_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_489(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_489_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_489_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_489_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_489_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_489_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_489_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_489_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_489_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_489_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_489_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_490
#define AGONY_PP_PRIVATE_EVAL_REC_489_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_490(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_490_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_490_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_490_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_490_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_490_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_490_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_490_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_490_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_490_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_490_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_491
#define AGONY_PP_PRIVATE_EVAL_REC_490_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_491(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_491_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_491_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_491_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_491_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_491_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_491_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_491_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_491_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_491_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_491_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_492
#define AGONY_PP_PRIVATE_EVAL_REC_491_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_492(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_492_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_492_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_492_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_492_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_492_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_492_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_492_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_492_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_492_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_492_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_493
#define AGONY_PP_PRIVATE_EVAL_REC_492_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_493(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_493_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_493_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_493_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_493_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_493_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_493_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_493_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_493_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_493_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_493_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_494
#define AGONY_PP_PRIVATE_EVAL_REC_493_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_494(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_494_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_494_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_494_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_494_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_494_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_494_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_494_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_494_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_494_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_494_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_495
#define AGONY_PP_PRIVATE_EVAL_REC_494_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_495(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_495_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_495_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_495_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_495_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_495_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_495_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_495_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_495_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_495_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_495_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_496
#define AGONY_PP_PRIVATE_EVAL_REC_495_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_496(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_496_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_496_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_496_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_496_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_496_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_496_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_496_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_496_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_496_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_496_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_497
#define AGONY_PP_PRIVATE_EVAL_REC_496_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_497(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_497_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_497_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_497_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_497_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_497_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_497_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_497_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_497_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_497_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_497_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_498
#define AGONY_PP_PRIVATE_EVAL_REC_497_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_498(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_498_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_498_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_498_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_498_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_498_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_498_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_498_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_498_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_498_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_498_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_499
#define AGONY_PP_PRIVATE_EVAL_REC_498_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_499(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_499_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_499_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_499_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_499_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_499_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_499_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_499_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_499_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_499_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_499_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_500
#define AGONY_PP_PRIVATE_EVAL_REC_499_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_500(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_500_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_500_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_500_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_500_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_500_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_500_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_500_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_500_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_500_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_500_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_501
#define AGONY_PP_PRIVATE_EVAL_REC_500_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_501(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_501_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_501_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_501_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_501_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_501_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_501_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_501_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_501_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_501_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_501_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_502
#define AGONY_PP_PRIVATE_EVAL_REC_501_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_502(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_502_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_502_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_502_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_502_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_502_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_502_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_502_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_502_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_502_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_502_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_503
#define AGONY_PP_PRIVATE_EVAL_REC_502_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_503(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_503_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_503_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_503_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_503_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_503_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_503_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_503_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_503_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_503_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_503_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_504
#define AGONY_PP_PRIVATE_EVAL_REC_503_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_504(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_504_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_504_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_504_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_504_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_504_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_504_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_504_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_504_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_504_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_504_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_505
#define AGONY_PP_PRIVATE_EVAL_REC_504_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_505(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_505_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_505_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_505_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_505_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_505_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_505_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_505_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_505_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_505_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_505_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_506
#define AGONY_PP_PRIVATE_EVAL_REC_505_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_506(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_506_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_506_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_506_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_506_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_506_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_506_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_506_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_506_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_506_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_506_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_507
#define AGONY_PP_PRIVATE_EVAL_REC_506_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_507(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_507_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_507_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_507_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_507_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_507_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_507_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_507_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_507_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_507_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_507_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_508
#define AGONY_PP_PRIVATE_EVAL_REC_507_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_508(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_508_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_508_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_508_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_508_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_508_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_508_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_508_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_508_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_508_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_508_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_509
#define AGONY_PP_PRIVATE_EVAL_REC_508_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_509(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_509_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_509_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_509_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_509_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_509_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_509_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_509_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_509_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_509_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_509_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_510
#define AGONY_PP_PRIVATE_EVAL_REC_509_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_510(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_510_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_510_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_510_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_510_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_510_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_510_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_510_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_510_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_510_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_510_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_511
#define AGONY_PP_PRIVATE_EVAL_REC_510_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_511(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_511_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_511_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_511_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_511_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_511_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_511_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_511_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_511_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_511_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_511_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_512
#define AGONY_PP_PRIVATE_EVAL_REC_511_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_512(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_512_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_512_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_512_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_512_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_512_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_512_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_512_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_512_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_512_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_512_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_513
#define AGONY_PP_PRIVATE_EVAL_REC_512_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_513(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_513_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_513_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_513_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_513_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_513_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_513_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_513_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_513_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_513_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_513_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_514
#define AGONY_PP_PRIVATE_EVAL_REC_513_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_514(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_514_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_514_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_514_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_514_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_514_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_514_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_514_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_514_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_514_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_514_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_515
#define AGONY_PP_PRIVATE_EVAL_REC_514_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_515(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_515_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_515_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_515_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_515_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_515_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_515_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_515_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_515_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_515_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_515_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_516
#define AGONY_PP_PRIVATE_EVAL_REC_515_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_516(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_516_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_516_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_516_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_516_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_516_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_516_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_516_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_516_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_516_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_516_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_517
#define AGONY_PP_PRIVATE_EVAL_REC_516_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_517(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_517_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_517_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_517_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_517_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_517_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_517_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_517_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_517_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_517_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_517_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_518
#define AGONY_PP_PRIVATE_EVAL_REC_517_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_518(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_518_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_518_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_518_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_518_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_518_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_518_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_518_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_518_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_518_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_518_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_519
#define AGONY_PP_PRIVATE_EVAL_REC_518_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_519(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_519_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_519_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_519_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_519_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_519_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_519_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_519_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_519_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_519_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_519_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_520
#define AGONY_PP_PRIVATE_EVAL_REC_519_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_520(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_520_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_520_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_520_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_520_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_520_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_520_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_520_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_520_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_520_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_520_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_521
#define AGONY_PP_PRIVATE_EVAL_REC_520_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_521(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_521_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_521_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_521_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_521_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_521_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_521_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_521_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_521_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_521_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_521_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_522
#define AGONY_PP_PRIVATE_EVAL_REC_521_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_522(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_522_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_522_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_522_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_522_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_522_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_522_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_522_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_522_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_522_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_522_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_523
#define AGONY_PP_PRIVATE_EVAL_REC_522_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_523(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_523_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_523_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_523_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_523_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_523_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_523_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_523_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_523_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_523_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_523_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_524
#define AGONY_PP_PRIVATE_EVAL_REC_523_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_524(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_524_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_524_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_524_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_524_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_524_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_524_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_524_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_524_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_524_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_524_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_525
#define AGONY_PP_PRIVATE_EVAL_REC_524_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_525(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_525_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_525_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_525_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_525_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_525_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_525_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_525_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_525_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_525_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_525_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_526
#define AGONY_PP_PRIVATE_EVAL_REC_525_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_526(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_526_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_526_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_526_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_526_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_526_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_526_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_526_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_526_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_526_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_526_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_527
#define AGONY_PP_PRIVATE_EVAL_REC_526_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_527(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_527_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_527_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_527_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_527_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_527_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_527_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_527_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_527_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_527_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_527_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_528
#define AGONY_PP_PRIVATE_EVAL_REC_527_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_528(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_528_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_528_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_528_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_528_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_528_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_528_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_528_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_528_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_528_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_528_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_529
#define AGONY_PP_PRIVATE_EVAL_REC_528_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_529(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_529_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_529_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_529_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_529_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_529_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_529_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_529_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_529_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_529_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_529_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_530
#define AGONY_PP_PRIVATE_EVAL_REC_529_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_530(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_530_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_530_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_530_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_530_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_530_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_530_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_530_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_530_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_530_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_530_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_531
#define AGONY_PP_PRIVATE_EVAL_REC_530_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_531(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_531_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_531_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_531_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_531_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_531_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_531_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_531_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_531_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_531_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_531_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_532
#define AGONY_PP_PRIVATE_EVAL_REC_531_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_532(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_532_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_532_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_532_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_532_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_532_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_532_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_532_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_532_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_532_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_532_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_533
#define AGONY_PP_PRIVATE_EVAL_REC_532_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_533(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_533_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_533_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_533_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_533_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_533_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_533_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_533_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_533_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_533_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_533_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_534
#define AGONY_PP_PRIVATE_EVAL_REC_533_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_534(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_534_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_534_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_534_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_534_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_534_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_534_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_534_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_534_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_534_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_534_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_535
#define AGONY_PP_PRIVATE_EVAL_REC_534_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_535(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_535_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_535_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_535_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_535_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_535_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_535_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_535_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_535_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_535_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_535_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_536
#define AGONY_PP_PRIVATE_EVAL_REC_535_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_536(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_536_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_536_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_536_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_536_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_536_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_536_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_536_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_536_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_536_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_536_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_537
#define AGONY_PP_PRIVATE_EVAL_REC_536_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_537(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_537_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_537_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_537_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_537_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_537_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_537_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_537_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_537_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_537_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_537_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_538
#define AGONY_PP_PRIVATE_EVAL_REC_537_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_538(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_538_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_538_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_538_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_538_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_538_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_538_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_538_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_538_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_538_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_538_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_539
#define AGONY_PP_PRIVATE_EVAL_REC_538_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_539(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_539_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_539_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_539_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_539_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_539_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_539_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_539_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_539_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_539_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_539_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_540
#define AGONY_PP_PRIVATE_EVAL_REC_539_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_540(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_540_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_540_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_540_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_540_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_540_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_540_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_540_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_540_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_540_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_540_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_541
#define AGONY_PP_PRIVATE_EVAL_REC_540_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_541(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_541_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_541_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_541_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_541_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_541_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_541_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_541_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_541_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_541_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_541_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_542
#define AGONY_PP_PRIVATE_EVAL_REC_541_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_542(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_542_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_542_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_542_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_542_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_542_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_542_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_542_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_542_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_542_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_542_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_543
#define AGONY_PP_PRIVATE_EVAL_REC_542_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_543(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_543_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_543_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_543_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_543_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_543_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_543_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_543_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_543_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_543_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_543_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_544
#define AGONY_PP_PRIVATE_EVAL_REC_543_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_544(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_544_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_544_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_544_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_544_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_544_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_544_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_544_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_544_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_544_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_544_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_545
#define AGONY_PP_PRIVATE_EVAL_REC_544_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_545(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_545_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_545_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_545_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_545_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_545_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_545_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_545_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_545_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_545_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_545_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_546
#define AGONY_PP_PRIVATE_EVAL_REC_545_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_546(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_546_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_546_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_546_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_546_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_546_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_546_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_546_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_546_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_546_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_546_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_547
#define AGONY_PP_PRIVATE_EVAL_REC_546_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_547(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_547_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_547_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_547_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_547_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_547_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_547_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_547_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_547_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_547_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_547_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_548
#define AGONY_PP_PRIVATE_EVAL_REC_547_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_548(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_548_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_548_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_548_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_548_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_548_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_548_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_548_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_548_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_548_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_548_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_549
#define AGONY_PP_PRIVATE_EVAL_REC_548_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_549(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_549_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_549_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_549_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_549_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_549_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_549_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_549_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_549_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_549_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_549_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_550
#define AGONY_PP_PRIVATE_EVAL_REC_549_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_550(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_550_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_550_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_550_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_550_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_550_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_550_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_550_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_550_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_550_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_550_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_551
#define AGONY_PP_PRIVATE_EVAL_REC_550_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_551(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_551_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_551_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_551_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_551_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_551_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_551_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_551_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_551_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_551_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_551_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_552
#define AGONY_PP_PRIVATE_EVAL_REC_551_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_552(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_552_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_552_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_552_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_552_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_552_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_552_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_552_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_552_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_552_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_552_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_553
#define AGONY_PP_PRIVATE_EVAL_REC_552_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_553(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_553_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_553_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_553_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_553_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_553_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_553_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_553_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_553_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_553_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_553_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_554
#define AGONY_PP_PRIVATE_EVAL_REC_553_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_554(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_554_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_554_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_554_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_554_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_554_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_554_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_554_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_554_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_554_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_554_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_555
#define AGONY_PP_PRIVATE_EVAL_REC_554_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_555(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_555_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_555_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_555_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_555_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_555_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_555_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_555_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_555_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_555_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_555_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_556
#define AGONY_PP_PRIVATE_EVAL_REC_555_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_556(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_556_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_556_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_556_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_556_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_556_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_556_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_556_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_556_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_556_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_556_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_557
#define AGONY_PP_PRIVATE_EVAL_REC_556_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_557(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_557_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_557_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_557_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_557_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_557_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_557_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_557_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_557_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_557_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_557_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_558
#define AGONY_PP_PRIVATE_EVAL_REC_557_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_558(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_558_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_558_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_558_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_558_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_558_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_558_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_558_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_558_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_558_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_558_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_559
#define AGONY_PP_PRIVATE_EVAL_REC_558_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_559(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_559_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_559_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_559_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_559_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_559_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_559_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_559_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_559_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_559_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_559_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_560
#define AGONY_PP_PRIVATE_EVAL_REC_559_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_560(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_560_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_560_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_560_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_560_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_560_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_560_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_560_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_560_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_560_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_560_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_561
#define AGONY_PP_PRIVATE_EVAL_REC_560_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_561(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_561_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_561_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_561_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_561_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_561_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_561_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_561_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_561_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_561_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_561_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_562
#define AGONY_PP_PRIVATE_EVAL_REC_561_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_562(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_562_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_562_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_562_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_562_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_562_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_562_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_562_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_562_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_562_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_562_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_563
#define AGONY_PP_PRIVATE_EVAL_REC_562_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_563(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_563_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_563_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_563_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_563_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_563_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_563_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_563_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_563_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_563_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_563_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_564
#define AGONY_PP_PRIVATE_EVAL_REC_563_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_564(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_564_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_564_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_564_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_564_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_564_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_564_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_564_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_564_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_564_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_564_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_565
#define AGONY_PP_PRIVATE_EVAL_REC_564_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_565(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_565_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_565_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_565_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_565_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_565_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_565_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_565_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_565_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_565_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_565_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_566
#define AGONY_PP_PRIVATE_EVAL_REC_565_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_566(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_566_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_566_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_566_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_566_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_566_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_566_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_566_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_566_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_566_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_566_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_567
#define AGONY_PP_PRIVATE_EVAL_REC_566_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_567(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_567_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_567_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_567_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_567_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_567_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_567_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_567_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_567_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_567_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_567_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_568
#define AGONY_PP_PRIVATE_EVAL_REC_567_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_568(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_568_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_568_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_568_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_568_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_568_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_568_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_568_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_568_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_568_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_568_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_569
#define AGONY_PP_PRIVATE_EVAL_REC_568_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_569(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_569_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_569_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_569_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_569_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_569_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_569_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_569_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_569_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_569_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_569_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_570
#define AGONY_PP_PRIVATE_EVAL_REC_569_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_570(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_570_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_570_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_570_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_570_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_570_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_570_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_570_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_570_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_570_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_570_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_571
#define AGONY_PP_PRIVATE_EVAL_REC_570_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_571(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_571_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_571_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_571_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_571_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_571_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_571_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_571_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_571_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_571_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_571_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_572
#define AGONY_PP_PRIVATE_EVAL_REC_571_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_572(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_572_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_572_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_572_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_572_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_572_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_572_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_572_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_572_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_572_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_572_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_573
#define AGONY_PP_PRIVATE_EVAL_REC_572_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_573(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_573_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_573_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_573_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_573_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_573_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_573_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_573_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_573_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_573_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_573_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_574
#define AGONY_PP_PRIVATE_EVAL_REC_573_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_574(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_574_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_574_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_574_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_574_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_574_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_574_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_574_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_574_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_574_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_574_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_575
#define AGONY_PP_PRIVATE_EVAL_REC_574_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_575(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_575_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_575_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_575_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_575_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_575_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_575_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_575_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_575_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_575_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_575_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_576
#define AGONY_PP_PRIVATE_EVAL_REC_575_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_576(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_576_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_576_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_576_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_576_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_576_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_576_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_576_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_576_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_576_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_576_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_577
#define AGONY_PP_PRIVATE_EVAL_REC_576_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_577(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_577_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_577_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_577_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_577_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_577_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_577_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_577_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_577_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_577_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_577_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_578
#define AGONY_PP_PRIVATE_EVAL_REC_577_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_578(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_578_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_578_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_578_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_578_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_578_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_578_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_578_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_578_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_578_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_578_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_579
#define AGONY_PP_PRIVATE_EVAL_REC_578_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_579(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_579_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_579_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_579_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_579_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_579_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_579_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_579_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_579_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_579_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_579_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_580
#define AGONY_PP_PRIVATE_EVAL_REC_579_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_580(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_580_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_580_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_580_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_580_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_580_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_580_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_580_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_580_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_580_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_580_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_581
#define AGONY_PP_PRIVATE_EVAL_REC_580_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_581(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_581_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_581_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_581_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_581_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_581_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_581_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_581_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_581_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_581_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_581_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_582
#define AGONY_PP_PRIVATE_EVAL_REC_581_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_582(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_582_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_582_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_582_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_582_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_582_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_582_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_582_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_582_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_582_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_582_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_583
#define AGONY_PP_PRIVATE_EVAL_REC_582_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_583(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_583_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_583_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_583_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_583_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_583_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_583_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_583_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_583_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_583_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_583_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_584
#define AGONY_PP_PRIVATE_EVAL_REC_583_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_584(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_584_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_584_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_584_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_584_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_584_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_584_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_584_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_584_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_584_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_584_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_585
#define AGONY_PP_PRIVATE_EVAL_REC_584_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_585(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_585_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_585_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_585_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_585_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_585_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_585_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_585_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_585_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_585_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_585_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_586
#define AGONY_PP_PRIVATE_EVAL_REC_585_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_586(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_586_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_586_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_586_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_586_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_586_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_586_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_586_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_586_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_586_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_586_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_587
#define AGONY_PP_PRIVATE_EVAL_REC_586_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_587(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_587_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_587_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_587_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_587_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_587_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_587_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_587_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_587_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_587_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_587_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_588
#define AGONY_PP_PRIVATE_EVAL_REC_587_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_588(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_588_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_588_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_588_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_588_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_588_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_588_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_588_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_588_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_588_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_588_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_589
#define AGONY_PP_PRIVATE_EVAL_REC_588_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_589(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_589_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_589_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_589_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_589_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_589_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_589_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_589_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_589_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_589_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_589_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_590
#define AGONY_PP_PRIVATE_EVAL_REC_589_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_590(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_590_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_590_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_590_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_590_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_590_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_590_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_590_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_590_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_590_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_590_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_591
#define AGONY_PP_PRIVATE_EVAL_REC_590_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_591(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_591_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_591_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_591_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_591_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_591_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_591_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_591_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_591_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_591_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_591_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_592
#define AGONY_PP_PRIVATE_EVAL_REC_591_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_592(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_592_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_592_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_592_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_592_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_592_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_592_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_592_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_592_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_592_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_592_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_593
#define AGONY_PP_PRIVATE_EVAL_REC_592_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_593(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_593_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_593_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_593_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_593_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_593_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_593_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_593_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_593_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_593_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_593_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_594
#define AGONY_PP_PRIVATE_EVAL_REC_593_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_594(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_594_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_594_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_594_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_594_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_594_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_594_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_594_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_594_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_594_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_594_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_595
#define AGONY_PP_PRIVATE_EVAL_REC_594_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_595(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_595_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_595_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_595_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_595_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_595_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_595_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_595_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_595_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_595_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_595_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_596
#define AGONY_PP_PRIVATE_EVAL_REC_595_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_596(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_596_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_596_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_596_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_596_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_596_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_596_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_596_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_596_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_596_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_596_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_597
#define AGONY_PP_PRIVATE_EVAL_REC_596_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_597(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_597_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_597_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_597_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_597_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_597_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_597_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_597_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_597_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_597_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_597_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_598
#define AGONY_PP_PRIVATE_EVAL_REC_597_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_598(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_598_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_598_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_598_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_598_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_598_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_598_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_598_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_598_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_598_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_598_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_599
#define AGONY_PP_PRIVATE_EVAL_REC_598_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_599(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_599_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_599_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_599_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_599_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_599_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_599_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_599_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_599_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_599_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_599_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_600
#define AGONY_PP_PRIVATE_EVAL_REC_599_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_600(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_600_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_600_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_600_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_600_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_600_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_600_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_600_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_600_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_600_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_600_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_601
#define AGONY_PP_PRIVATE_EVAL_REC_600_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_601(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_601_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_601_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_601_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_601_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_601_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_601_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_601_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_601_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_601_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_601_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_602
#define AGONY_PP_PRIVATE_EVAL_REC_601_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_602(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_602_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_602_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_602_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_602_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_602_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_602_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_602_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_602_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_602_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_602_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_603
#define AGONY_PP_PRIVATE_EVAL_REC_602_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_603(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_603_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_603_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_603_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_603_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_603_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_603_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_603_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_603_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_603_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_603_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_604
#define AGONY_PP_PRIVATE_EVAL_REC_603_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_604(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_604_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_604_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_604_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_604_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_604_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_604_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_604_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_604_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_604_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_604_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_605
#define AGONY_PP_PRIVATE_EVAL_REC_604_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_605(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_605_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_605_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_605_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_605_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_605_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_605_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_605_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_605_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_605_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_605_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_606
#define AGONY_PP_PRIVATE_EVAL_REC_605_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_606(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_606_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_606_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_606_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_606_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_606_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_606_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_606_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_606_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_606_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_606_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_607
#define AGONY_PP_PRIVATE_EVAL_REC_606_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_607(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_607_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_607_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_607_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_607_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_607_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_607_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_607_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_607_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_607_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_607_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_608
#define AGONY_PP_PRIVATE_EVAL_REC_607_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_608(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_608_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_608_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_608_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_608_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_608_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_608_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_608_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_608_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_608_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_608_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_609
#define AGONY_PP_PRIVATE_EVAL_REC_608_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_609(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_609_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_609_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_609_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_609_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_609_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_609_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_609_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_609_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_609_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_609_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_610
#define AGONY_PP_PRIVATE_EVAL_REC_609_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_610(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_610_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_610_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_610_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_610_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_610_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_610_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_610_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_610_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_610_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_610_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_611
#define AGONY_PP_PRIVATE_EVAL_REC_610_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_611(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_611_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_611_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_611_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_611_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_611_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_611_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_611_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_611_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_611_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_611_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_612
#define AGONY_PP_PRIVATE_EVAL_REC_611_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_612(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_612_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_612_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_612_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_612_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_612_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_612_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_612_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_612_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_612_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_612_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_613
#define AGONY_PP_PRIVATE_EVAL_REC_612_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_613(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_613_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_613_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_613_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_613_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_613_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_613_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_613_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_613_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_613_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_613_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_614
#define AGONY_PP_PRIVATE_EVAL_REC_613_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_614(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_614_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_614_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_614_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_614_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_614_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_614_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_614_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_614_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_614_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_614_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_615
#define AGONY_PP_PRIVATE_EVAL_REC_614_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_615(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_615_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_615_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_615_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_615_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_615_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_615_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_615_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_615_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_615_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_615_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_616
#define AGONY_PP_PRIVATE_EVAL_REC_615_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_616(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_616_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_616_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_616_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_616_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_616_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_616_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_616_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_616_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_616_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_616_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_617
#define AGONY_PP_PRIVATE_EVAL_REC_616_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_617(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_617_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_617_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_617_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_617_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_617_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_617_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_617_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_617_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_617_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_617_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_618
#define AGONY_PP_PRIVATE_EVAL_REC_617_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_618(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_618_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_618_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_618_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_618_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_618_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_618_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_618_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_618_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_618_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_618_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_619
#define AGONY_PP_PRIVATE_EVAL_REC_618_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_619(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_619_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_619_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_619_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_619_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_619_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_619_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_619_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_619_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_619_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_619_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_620
#define AGONY_PP_PRIVATE_EVAL_REC_619_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_620(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_620_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_620_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_620_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_620_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_620_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_620_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_620_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_620_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_620_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_620_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_621
#define AGONY_PP_PRIVATE_EVAL_REC_620_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_621(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_621_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_621_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_621_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_621_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_621_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_621_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_621_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_621_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_621_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_621_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_622
#define AGONY_PP_PRIVATE_EVAL_REC_621_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_622(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_622_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_622_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_622_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_622_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_622_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_622_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_622_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_622_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_622_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_622_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_623
#define AGONY_PP_PRIVATE_EVAL_REC_622_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_623(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_623_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_623_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_623_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_623_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_623_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_623_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_623_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_623_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_623_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_623_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_624
#define AGONY_PP_PRIVATE_EVAL_REC_623_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_624(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_624_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_624_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_624_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_624_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_624_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_624_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_624_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_624_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_624_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_624_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_625
#define AGONY_PP_PRIVATE_EVAL_REC_624_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_625(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_625_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_625_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_625_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_625_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_625_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_625_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_625_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_625_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_625_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_625_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_626
#define AGONY_PP_PRIVATE_EVAL_REC_625_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_626(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_626_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_626_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_626_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_626_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_626_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_626_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_626_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_626_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_626_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_626_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_627
#define AGONY_PP_PRIVATE_EVAL_REC_626_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_627(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_627_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_627_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_627_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_627_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_627_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_627_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_627_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_627_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_627_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_627_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_628
#define AGONY_PP_PRIVATE_EVAL_REC_627_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_628(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_628_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_628_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_628_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_628_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_628_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_628_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_628_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_628_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_628_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_628_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_629
#define AGONY_PP_PRIVATE_EVAL_REC_628_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_629(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_629_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_629_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_629_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_629_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_629_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_629_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_629_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_629_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_629_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_629_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_630
#define AGONY_PP_PRIVATE_EVAL_REC_629_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_630(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_630_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_630_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_630_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_630_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_630_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_630_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_630_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_630_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_630_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_630_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_631
#define AGONY_PP_PRIVATE_EVAL_REC_630_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_631(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_631_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_631_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_631_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_631_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_631_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_631_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_631_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_631_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_631_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_631_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_632
#define AGONY_PP_PRIVATE_EVAL_REC_631_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_632(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_632_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_632_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_632_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_632_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_632_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_632_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_632_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_632_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_632_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_632_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_633
#define AGONY_PP_PRIVATE_EVAL_REC_632_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_633(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_633_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_633_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_633_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_633_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_633_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_633_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_633_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_633_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_633_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_633_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_634
#define AGONY_PP_PRIVATE_EVAL_REC_633_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_634(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_634_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_634_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_634_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_634_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_634_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_634_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_634_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_634_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_634_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_634_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_635
#define AGONY_PP_PRIVATE_EVAL_REC_634_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_635(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_635_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_635_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_635_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_635_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_635_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_635_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_635_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_635_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_635_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_635_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_636
#define AGONY_PP_PRIVATE_EVAL_REC_635_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_636(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_636_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_636_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_636_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_636_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_636_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_636_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_636_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_636_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_636_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_636_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_637
#define AGONY_PP_PRIVATE_EVAL_REC_636_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_637(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_637_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_637_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_637_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_637_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_637_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_637_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_637_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_637_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_637_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_637_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_638
#define AGONY_PP_PRIVATE_EVAL_REC_637_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_638(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_638_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_638_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_638_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_638_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_638_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_638_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_638_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_638_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_638_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_638_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_639
#define AGONY_PP_PRIVATE_EVAL_REC_638_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_639(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_639_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_639_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_639_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_639_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_639_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_639_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_639_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_639_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_639_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_639_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_640
#define AGONY_PP_PRIVATE_EVAL_REC_639_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_640(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_640_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_640_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_640_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_640_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_640_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_640_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_640_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_640_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_640_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_640_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_641
#define AGONY_PP_PRIVATE_EVAL_REC_640_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_641(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_641_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_641_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_641_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_641_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_641_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_641_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_641_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_641_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_641_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_641_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_642
#define AGONY_PP_PRIVATE_EVAL_REC_641_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_642(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_642_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_642_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_642_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_642_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_642_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_642_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_642_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_642_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_642_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_642_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_643
#define AGONY_PP_PRIVATE_EVAL_REC_642_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_643(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_643_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_643_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_643_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_643_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_643_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_643_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_643_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_643_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_643_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_643_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_644
#define AGONY_PP_PRIVATE_EVAL_REC_643_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_644(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_644_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_644_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_644_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_644_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_644_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_644_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_644_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_644_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_644_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_644_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_645
#define AGONY_PP_PRIVATE_EVAL_REC_644_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_645(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_645_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_645_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_645_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_645_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_645_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_645_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_645_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_645_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_645_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_645_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_646
#define AGONY_PP_PRIVATE_EVAL_REC_645_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_646(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_646_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_646_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_646_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_646_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_646_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_646_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_646_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_646_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_646_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_646_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_647
#define AGONY_PP_PRIVATE_EVAL_REC_646_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_647(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_647_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_647_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_647_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_647_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_647_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_647_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_647_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_647_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_647_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_647_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_648
#define AGONY_PP_PRIVATE_EVAL_REC_647_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_648(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_648_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_648_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_648_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_648_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_648_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_648_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_648_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_648_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_648_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_648_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_649
#define AGONY_PP_PRIVATE_EVAL_REC_648_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_649(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_649_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_649_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_649_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_649_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_649_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_649_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_649_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_649_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_649_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_649_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_650
#define AGONY_PP_PRIVATE_EVAL_REC_649_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_650(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_650_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_650_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_650_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_650_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_650_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_650_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_650_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_650_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_650_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_650_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_651
#define AGONY_PP_PRIVATE_EVAL_REC_650_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_651(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_651_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_651_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_651_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_651_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_651_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_651_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_651_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_651_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_651_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_651_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_652
#define AGONY_PP_PRIVATE_EVAL_REC_651_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_652(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_652_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_652_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_652_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_652_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_652_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_652_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_652_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_652_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_652_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_652_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_653
#define AGONY_PP_PRIVATE_EVAL_REC_652_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_653(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_653_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_653_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_653_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_653_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_653_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_653_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_653_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_653_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_653_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_653_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_654
#define AGONY_PP_PRIVATE_EVAL_REC_653_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_654(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_654_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_654_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_654_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_654_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_654_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_654_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_654_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_654_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_654_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_654_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_655
#define AGONY_PP_PRIVATE_EVAL_REC_654_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_655(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_655_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_655_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_655_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_655_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_655_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_655_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_655_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_655_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_655_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_655_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_656
#define AGONY_PP_PRIVATE_EVAL_REC_655_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_656(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_656_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_656_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_656_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_656_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_656_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_656_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_656_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_656_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_656_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_656_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_657
#define AGONY_PP_PRIVATE_EVAL_REC_656_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_657(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_657_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_657_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_657_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_657_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_657_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_657_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_657_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_657_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_657_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_657_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_658
#define AGONY_PP_PRIVATE_EVAL_REC_657_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_658(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_658_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_658_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_658_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_658_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_658_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_658_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_658_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_658_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_658_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_658_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_659
#define AGONY_PP_PRIVATE_EVAL_REC_658_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_659(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_659_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_659_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_659_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_659_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_659_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_659_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_659_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_659_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_659_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_659_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_660
#define AGONY_PP_PRIVATE_EVAL_REC_659_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_660(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_660_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_660_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_660_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_660_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_660_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_660_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_660_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_660_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_660_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_660_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_661
#define AGONY_PP_PRIVATE_EVAL_REC_660_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_661(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_661_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_661_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_661_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_661_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_661_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_661_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_661_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_661_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_661_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_661_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_662
#define AGONY_PP_PRIVATE_EVAL_REC_661_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_662(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_662_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_662_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_662_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_662_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_662_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_662_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_662_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_662_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_662_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_662_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_663
#define AGONY_PP_PRIVATE_EVAL_REC_662_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_663(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_663_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_663_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_663_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_663_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_663_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_663_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_663_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_663_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_663_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_663_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_664
#define AGONY_PP_PRIVATE_EVAL_REC_663_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_664(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_664_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_664_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_664_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_664_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_664_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_664_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_664_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_664_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_664_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_664_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_665
#define AGONY_PP_PRIVATE_EVAL_REC_664_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_665(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_665_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_665_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_665_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_665_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_665_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_665_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_665_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_665_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_665_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_665_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_666
#define AGONY_PP_PRIVATE_EVAL_REC_665_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_666(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_666_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_666_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_666_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_666_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_666_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_666_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_666_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_666_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_666_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_666_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_667
#define AGONY_PP_PRIVATE_EVAL_REC_666_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_667(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_667_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_667_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_667_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_667_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_667_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_667_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_667_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_667_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_667_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_667_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_668
#define AGONY_PP_PRIVATE_EVAL_REC_667_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_668(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_668_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_668_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_668_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_668_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_668_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_668_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_668_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_668_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_668_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_668_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_669
#define AGONY_PP_PRIVATE_EVAL_REC_668_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_669(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_669_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_669_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_669_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_669_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_669_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_669_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_669_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_669_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_669_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_669_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_670
#define AGONY_PP_PRIVATE_EVAL_REC_669_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_670(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_670_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_670_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_670_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_670_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_670_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_670_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_670_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_670_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_670_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_670_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_671
#define AGONY_PP_PRIVATE_EVAL_REC_670_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_671(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_671_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_671_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_671_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_671_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_671_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_671_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_671_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_671_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_671_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_671_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_672
#define AGONY_PP_PRIVATE_EVAL_REC_671_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_672(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_672_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_672_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_672_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_672_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_672_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_672_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_672_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_672_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_672_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_672_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_673
#define AGONY_PP_PRIVATE_EVAL_REC_672_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_673(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_673_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_673_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_673_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_673_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_673_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_673_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_673_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_673_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_673_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_673_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_674
#define AGONY_PP_PRIVATE_EVAL_REC_673_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_674(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_674_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_674_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_674_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_674_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_674_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_674_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_674_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_674_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_674_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_674_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_675
#define AGONY_PP_PRIVATE_EVAL_REC_674_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_675(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_675_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_675_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_675_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_675_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_675_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_675_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_675_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_675_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_675_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_675_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_676
#define AGONY_PP_PRIVATE_EVAL_REC_675_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_676(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_676_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_676_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_676_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_676_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_676_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_676_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_676_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_676_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_676_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_676_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_677
#define AGONY_PP_PRIVATE_EVAL_REC_676_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_677(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_677_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_677_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_677_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_677_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_677_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_677_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_677_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_677_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_677_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_677_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_678
#define AGONY_PP_PRIVATE_EVAL_REC_677_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_678(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_678_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_678_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_678_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_678_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_678_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_678_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_678_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_678_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_678_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_678_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_679
#define AGONY_PP_PRIVATE_EVAL_REC_678_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_679(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_679_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_679_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_679_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_679_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_679_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_679_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_679_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_679_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_679_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_679_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_680
#define AGONY_PP_PRIVATE_EVAL_REC_679_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_680(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_680_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_680_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_680_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_680_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_680_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_680_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_680_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_680_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_680_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_680_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_681
#define AGONY_PP_PRIVATE_EVAL_REC_680_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_681(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_681_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_681_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_681_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_681_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_681_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_681_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_681_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_681_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_681_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_681_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_682
#define AGONY_PP_PRIVATE_EVAL_REC_681_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_682(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_682_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_682_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_682_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_682_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_682_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_682_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_682_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_682_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_682_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_682_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_683
#define AGONY_PP_PRIVATE_EVAL_REC_682_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_683(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_683_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_683_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_683_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_683_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_683_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_683_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_683_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_683_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_683_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_683_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_684
#define AGONY_PP_PRIVATE_EVAL_REC_683_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_684(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_684_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_684_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_684_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_684_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_684_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_684_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_684_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_684_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_684_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_684_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_685
#define AGONY_PP_PRIVATE_EVAL_REC_684_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_685(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_685_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_685_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_685_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_685_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_685_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_685_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_685_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_685_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_685_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_685_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_686
#define AGONY_PP_PRIVATE_EVAL_REC_685_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_686(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_686_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_686_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_686_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_686_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_686_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_686_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_686_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_686_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_686_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_686_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_687
#define AGONY_PP_PRIVATE_EVAL_REC_686_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_687(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_687_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_687_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_687_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_687_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_687_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_687_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_687_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_687_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_687_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_687_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_688
#define AGONY_PP_PRIVATE_EVAL_REC_687_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_688(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_688_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_688_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_688_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_688_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_688_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_688_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_688_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_688_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_688_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_688_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_689
#define AGONY_PP_PRIVATE_EVAL_REC_688_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_689(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_689_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_689_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_689_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_689_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_689_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_689_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_689_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_689_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_689_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_689_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_690
#define AGONY_PP_PRIVATE_EVAL_REC_689_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_690(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_690_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_690_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_690_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_690_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_690_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_690_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_690_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_690_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_690_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_690_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_691
#define AGONY_PP_PRIVATE_EVAL_REC_690_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_691(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_691_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_691_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_691_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_691_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_691_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_691_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_691_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_691_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_691_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_691_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_692
#define AGONY_PP_PRIVATE_EVAL_REC_691_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_692(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_692_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_692_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_692_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_692_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_692_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_692_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_692_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_692_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_692_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_692_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_693
#define AGONY_PP_PRIVATE_EVAL_REC_692_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_693(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_693_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_693_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_693_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_693_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_693_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_693_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_693_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_693_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_693_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_693_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_694
#define AGONY_PP_PRIVATE_EVAL_REC_693_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_694(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_694_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_694_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_694_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_694_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_694_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_694_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_694_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_694_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_694_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_694_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_695
#define AGONY_PP_PRIVATE_EVAL_REC_694_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_695(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_695_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_695_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_695_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_695_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_695_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_695_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_695_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_695_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_695_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_695_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_696
#define AGONY_PP_PRIVATE_EVAL_REC_695_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_696(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_696_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_696_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_696_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_696_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_696_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_696_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_696_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_696_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_696_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_696_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_697
#define AGONY_PP_PRIVATE_EVAL_REC_696_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_697(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_697_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_697_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_697_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_697_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_697_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_697_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_697_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_697_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_697_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_697_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_698
#define AGONY_PP_PRIVATE_EVAL_REC_697_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_698(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_698_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_698_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_698_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_698_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_698_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_698_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_698_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_698_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_698_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_698_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_699
#define AGONY_PP_PRIVATE_EVAL_REC_698_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_699(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_699_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_699_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_699_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_699_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_699_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_699_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_699_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_699_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_699_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_699_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_700
#define AGONY_PP_PRIVATE_EVAL_REC_699_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_700(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_700_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_700_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_700_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_700_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_700_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_700_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_700_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_700_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_700_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_700_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_701
#define AGONY_PP_PRIVATE_EVAL_REC_700_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_701(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_701_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_701_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_701_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_701_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_701_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_701_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_701_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_701_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_701_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_701_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_702
#define AGONY_PP_PRIVATE_EVAL_REC_701_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_702(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_702_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_702_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_702_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_702_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_702_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_702_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_702_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_702_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_702_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_702_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_703
#define AGONY_PP_PRIVATE_EVAL_REC_702_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_703(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_703_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_703_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_703_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_703_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_703_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_703_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_703_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_703_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_703_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_703_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_704
#define AGONY_PP_PRIVATE_EVAL_REC_703_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_704(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_704_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_704_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_704_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_704_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_704_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_704_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_704_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_704_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_704_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_704_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_705
#define AGONY_PP_PRIVATE_EVAL_REC_704_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_705(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_705_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_705_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_705_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_705_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_705_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_705_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_705_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_705_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_705_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_705_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_706
#define AGONY_PP_PRIVATE_EVAL_REC_705_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_706(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_706_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_706_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_706_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_706_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_706_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_706_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_706_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_706_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_706_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_706_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_707
#define AGONY_PP_PRIVATE_EVAL_REC_706_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_707(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_707_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_707_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_707_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_707_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_707_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_707_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_707_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_707_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_707_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_707_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_708
#define AGONY_PP_PRIVATE_EVAL_REC_707_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_708(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_708_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_708_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_708_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_708_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_708_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_708_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_708_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_708_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_708_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_708_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_709
#define AGONY_PP_PRIVATE_EVAL_REC_708_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_709(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_709_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_709_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_709_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_709_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_709_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_709_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_709_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_709_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_709_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_709_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_710
#define AGONY_PP_PRIVATE_EVAL_REC_709_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_710(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_710_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_710_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_710_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_710_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_710_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_710_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_710_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_710_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_710_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_710_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_711
#define AGONY_PP_PRIVATE_EVAL_REC_710_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_711(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_711_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_711_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_711_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_711_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_711_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_711_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_711_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_711_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_711_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_711_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_712
#define AGONY_PP_PRIVATE_EVAL_REC_711_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_712(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_712_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_712_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_712_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_712_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_712_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_712_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_712_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_712_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_712_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_712_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_713
#define AGONY_PP_PRIVATE_EVAL_REC_712_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_713(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_713_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_713_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_713_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_713_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_713_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_713_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_713_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_713_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_713_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_713_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_714
#define AGONY_PP_PRIVATE_EVAL_REC_713_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_714(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_714_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_714_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_714_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_714_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_714_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_714_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_714_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_714_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_714_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_714_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_715
#define AGONY_PP_PRIVATE_EVAL_REC_714_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_715(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_715_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_715_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_715_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_715_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_715_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_715_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_715_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_715_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_715_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_715_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_716
#define AGONY_PP_PRIVATE_EVAL_REC_715_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_716(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_716_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_716_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_716_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_716_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_716_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_716_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_716_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_716_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_716_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_716_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_717
#define AGONY_PP_PRIVATE_EVAL_REC_716_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_717(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_717_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_717_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_717_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_717_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_717_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_717_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_717_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_717_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_717_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_717_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_718
#define AGONY_PP_PRIVATE_EVAL_REC_717_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_718(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_718_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_718_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_718_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_718_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_718_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_718_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_718_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_718_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_718_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_718_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_719
#define AGONY_PP_PRIVATE_EVAL_REC_718_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_719(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_719_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_719_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_719_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_719_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_719_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_719_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_719_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_719_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_719_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_719_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_720
#define AGONY_PP_PRIVATE_EVAL_REC_719_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_720(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_720_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_720_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_720_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_720_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_720_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_720_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_720_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_720_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_720_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_720_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_721
#define AGONY_PP_PRIVATE_EVAL_REC_720_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_721(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_721_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_721_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_721_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_721_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_721_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_721_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_721_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_721_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_721_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_721_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_722
#define AGONY_PP_PRIVATE_EVAL_REC_721_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_722(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_722_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_722_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_722_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_722_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_722_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_722_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_722_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_722_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_722_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_722_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_723
#define AGONY_PP_PRIVATE_EVAL_REC_722_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_723(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_723_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_723_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_723_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_723_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_723_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_723_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_723_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_723_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_723_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_723_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_724
#define AGONY_PP_PRIVATE_EVAL_REC_723_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_724(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_724_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_724_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_724_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_724_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_724_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_724_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_724_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_724_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_724_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_724_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_725
#define AGONY_PP_PRIVATE_EVAL_REC_724_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_725(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_725_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_725_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_725_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_725_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_725_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_725_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_725_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_725_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_725_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_725_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_726
#define AGONY_PP_PRIVATE_EVAL_REC_725_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_726(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_726_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_726_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_726_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_726_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_726_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_726_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_726_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_726_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_726_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_726_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_727
#define AGONY_PP_PRIVATE_EVAL_REC_726_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_727(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_727_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_727_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_727_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_727_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_727_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_727_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_727_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_727_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_727_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_727_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_728
#define AGONY_PP_PRIVATE_EVAL_REC_727_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_728(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_728_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_728_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_728_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_728_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_728_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_728_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_728_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_728_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_728_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_728_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_729
#define AGONY_PP_PRIVATE_EVAL_REC_728_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_729(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_729_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_729_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_729_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_729_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_729_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_729_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_729_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_729_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_729_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_729_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_730
#define AGONY_PP_PRIVATE_EVAL_REC_729_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_730(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_730_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_730_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_730_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_730_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_730_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_730_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_730_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_730_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_730_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_730_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_731
#define AGONY_PP_PRIVATE_EVAL_REC_730_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_731(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_731_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_731_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_731_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_731_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_731_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_731_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_731_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_731_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_731_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_731_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_732
#define AGONY_PP_PRIVATE_EVAL_REC_731_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_732(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_732_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_732_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_732_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_732_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_732_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_732_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_732_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_732_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_732_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_732_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_733
#define AGONY_PP_PRIVATE_EVAL_REC_732_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_733(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_733_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_733_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_733_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_733_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_733_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_733_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_733_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_733_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_733_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_733_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_734
#define AGONY_PP_PRIVATE_EVAL_REC_733_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_734(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_734_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_734_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_734_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_734_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_734_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_734_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_734_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_734_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_734_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_734_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_735
#define AGONY_PP_PRIVATE_EVAL_REC_734_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_735(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_735_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_735_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_735_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_735_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_735_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_735_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_735_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_735_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_735_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_735_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_736
#define AGONY_PP_PRIVATE_EVAL_REC_735_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_736(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_736_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_736_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_736_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_736_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_736_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_736_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_736_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_736_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_736_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_736_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_737
#define AGONY_PP_PRIVATE_EVAL_REC_736_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_737(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_737_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_737_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_737_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_737_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_737_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_737_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_737_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_737_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_737_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_737_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_738
#define AGONY_PP_PRIVATE_EVAL_REC_737_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_738(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_738_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_738_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_738_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_738_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_738_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_738_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_738_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_738_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_738_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_738_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_739
#define AGONY_PP_PRIVATE_EVAL_REC_738_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_739(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_739_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_739_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_739_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_739_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_739_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_739_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_739_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_739_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_739_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_739_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_740
#define AGONY_PP_PRIVATE_EVAL_REC_739_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_740(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_740_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_740_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_740_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_740_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_740_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_740_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_740_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_740_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_740_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_740_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_741
#define AGONY_PP_PRIVATE_EVAL_REC_740_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_741(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_741_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_741_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_741_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_741_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_741_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_741_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_741_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_741_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_741_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_741_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_742
#define AGONY_PP_PRIVATE_EVAL_REC_741_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_742(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_742_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_742_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_742_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_742_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_742_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_742_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_742_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_742_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_742_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_742_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_743
#define AGONY_PP_PRIVATE_EVAL_REC_742_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_743(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_743_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_743_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_743_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_743_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_743_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_743_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_743_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_743_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_743_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_743_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_744
#define AGONY_PP_PRIVATE_EVAL_REC_743_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_744(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_744_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_744_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_744_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_744_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_744_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_744_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_744_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_744_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_744_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_744_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_745
#define AGONY_PP_PRIVATE_EVAL_REC_744_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_745(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_745_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_745_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_745_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_745_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_745_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_745_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_745_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_745_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_745_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_745_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_746
#define AGONY_PP_PRIVATE_EVAL_REC_745_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_746(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_746_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_746_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_746_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_746_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_746_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_746_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_746_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_746_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_746_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_746_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_747
#define AGONY_PP_PRIVATE_EVAL_REC_746_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_747(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_747_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_747_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_747_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_747_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_747_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_747_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_747_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_747_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_747_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_747_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_748
#define AGONY_PP_PRIVATE_EVAL_REC_747_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_748(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_748_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_748_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_748_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_748_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_748_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_748_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_748_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_748_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_748_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_748_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_749
#define AGONY_PP_PRIVATE_EVAL_REC_748_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_749(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_749_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_749_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_749_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_749_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_749_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_749_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_749_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_749_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_749_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_749_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_750
#define AGONY_PP_PRIVATE_EVAL_REC_749_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_750(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_750_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_750_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_750_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_750_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_750_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_750_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_750_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_750_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_750_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_750_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_751
#define AGONY_PP_PRIVATE_EVAL_REC_750_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_751(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_751_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_751_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_751_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_751_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_751_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_751_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_751_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_751_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_751_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_751_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_752
#define AGONY_PP_PRIVATE_EVAL_REC_751_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_752(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_752_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_752_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_752_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_752_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_752_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_752_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_752_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_752_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_752_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_752_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_753
#define AGONY_PP_PRIVATE_EVAL_REC_752_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_753(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_753_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_753_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_753_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_753_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_753_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_753_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_753_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_753_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_753_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_753_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_754
#define AGONY_PP_PRIVATE_EVAL_REC_753_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_754(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_754_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_754_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_754_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_754_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_754_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_754_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_754_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_754_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_754_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_754_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_755
#define AGONY_PP_PRIVATE_EVAL_REC_754_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_755(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_755_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_755_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_755_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_755_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_755_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_755_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_755_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_755_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_755_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_755_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_756
#define AGONY_PP_PRIVATE_EVAL_REC_755_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_756(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_756_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_756_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_756_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_756_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_756_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_756_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_756_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_756_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_756_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_756_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_757
#define AGONY_PP_PRIVATE_EVAL_REC_756_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_757(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_757_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_757_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_757_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_757_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_757_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_757_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_757_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_757_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_757_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_757_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_758
#define AGONY_PP_PRIVATE_EVAL_REC_757_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_758(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_758_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_758_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_758_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_758_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_758_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_758_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_758_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_758_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_758_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_758_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_759
#define AGONY_PP_PRIVATE_EVAL_REC_758_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_759(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_759_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_759_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_759_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_759_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_759_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_759_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_759_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_759_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_759_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_759_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_760
#define AGONY_PP_PRIVATE_EVAL_REC_759_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_760(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_760_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_760_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_760_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_760_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_760_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_760_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_760_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_760_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_760_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_760_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_761
#define AGONY_PP_PRIVATE_EVAL_REC_760_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_761(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_761_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_761_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_761_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_761_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_761_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_761_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_761_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_761_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_761_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_761_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_762
#define AGONY_PP_PRIVATE_EVAL_REC_761_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_762(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_762_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_762_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_762_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_762_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_762_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_762_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_762_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_762_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_762_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_762_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_763
#define AGONY_PP_PRIVATE_EVAL_REC_762_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_763(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_763_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_763_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_763_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_763_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_763_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_763_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_763_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_763_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_763_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_763_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_764
#define AGONY_PP_PRIVATE_EVAL_REC_763_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_764(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_764_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_764_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_764_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_764_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_764_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_764_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_764_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_764_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_764_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_764_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_765
#define AGONY_PP_PRIVATE_EVAL_REC_764_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_765(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_765_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_765_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_765_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_765_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_765_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_765_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_765_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_765_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_765_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_765_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_766
#define AGONY_PP_PRIVATE_EVAL_REC_765_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_766(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_766_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_766_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_766_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_766_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_766_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_766_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_766_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_766_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_766_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_766_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_767
#define AGONY_PP_PRIVATE_EVAL_REC_766_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_767(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_767_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_767_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_767_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_767_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_767_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_767_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_767_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_767_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_767_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_767_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_768
#define AGONY_PP_PRIVATE_EVAL_REC_767_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_768(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_768_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_768_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_768_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_768_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_768_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_768_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_768_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_768_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_768_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_768_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_769
#define AGONY_PP_PRIVATE_EVAL_REC_768_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_769(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_769_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_769_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_769_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_769_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_769_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_769_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_769_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_769_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_769_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_769_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_770
#define AGONY_PP_PRIVATE_EVAL_REC_769_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_770(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_770_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_770_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_770_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_770_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_770_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_770_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_770_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_770_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_770_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_770_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_771
#define AGONY_PP_PRIVATE_EVAL_REC_770_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_771(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_771_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_771_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_771_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_771_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_771_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_771_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_771_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_771_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_771_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_771_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_772
#define AGONY_PP_PRIVATE_EVAL_REC_771_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_772(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_772_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_772_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_772_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_772_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_772_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_772_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_772_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_772_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_772_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_772_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_773
#define AGONY_PP_PRIVATE_EVAL_REC_772_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_773(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_773_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_773_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_773_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_773_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_773_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_773_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_773_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_773_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_773_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_773_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_774
#define AGONY_PP_PRIVATE_EVAL_REC_773_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_774(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_774_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_774_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_774_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_774_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_774_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_774_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_774_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_774_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_774_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_774_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_775
#define AGONY_PP_PRIVATE_EVAL_REC_774_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_775(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_775_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_775_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_775_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_775_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_775_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_775_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_775_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_775_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_775_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_775_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_776
#define AGONY_PP_PRIVATE_EVAL_REC_775_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_776(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_776_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_776_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_776_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_776_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_776_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_776_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_776_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_776_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_776_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_776_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_777
#define AGONY_PP_PRIVATE_EVAL_REC_776_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_777(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_777_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_777_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_777_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_777_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_777_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_777_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_777_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_777_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_777_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_777_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_778
#define AGONY_PP_PRIVATE_EVAL_REC_777_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_778(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_778_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_778_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_778_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_778_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_778_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_778_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_778_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_778_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_778_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_778_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_779
#define AGONY_PP_PRIVATE_EVAL_REC_778_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_779(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_779_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_779_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_779_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_779_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_779_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_779_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_779_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_779_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_779_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_779_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_780
#define AGONY_PP_PRIVATE_EVAL_REC_779_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_780(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_780_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_780_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_780_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_780_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_780_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_780_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_780_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_780_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_780_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_780_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_781
#define AGONY_PP_PRIVATE_EVAL_REC_780_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_781(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_781_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_781_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_781_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_781_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_781_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_781_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_781_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_781_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_781_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_781_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_782
#define AGONY_PP_PRIVATE_EVAL_REC_781_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_782(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_782_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_782_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_782_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_782_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_782_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_782_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_782_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_782_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_782_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_782_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_783
#define AGONY_PP_PRIVATE_EVAL_REC_782_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_783(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_783_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_783_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_783_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_783_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_783_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_783_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_783_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_783_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_783_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_783_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_784
#define AGONY_PP_PRIVATE_EVAL_REC_783_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_784(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_784_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_784_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_784_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_784_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_784_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_784_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_784_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_784_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_784_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_784_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_785
#define AGONY_PP_PRIVATE_EVAL_REC_784_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_785(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_785_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_785_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_785_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_785_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_785_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_785_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_785_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_785_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_785_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_785_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_786
#define AGONY_PP_PRIVATE_EVAL_REC_785_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_786(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_786_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_786_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_786_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_786_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_786_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_786_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_786_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_786_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_786_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_786_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_787
#define AGONY_PP_PRIVATE_EVAL_REC_786_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_787(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_787_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_787_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_787_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_787_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_787_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_787_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_787_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_787_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_787_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_787_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_788
#define AGONY_PP_PRIVATE_EVAL_REC_787_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_788(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_788_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_788_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_788_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_788_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_788_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_788_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_788_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_788_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_788_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_788_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_789
#define AGONY_PP_PRIVATE_EVAL_REC_788_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_789(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_789_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_789_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_789_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_789_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_789_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_789_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_789_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_789_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_789_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_789_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_790
#define AGONY_PP_PRIVATE_EVAL_REC_789_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_790(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_790_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_790_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_790_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_790_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_790_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_790_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_790_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_790_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_790_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_790_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_791
#define AGONY_PP_PRIVATE_EVAL_REC_790_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_791(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_791_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_791_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_791_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_791_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_791_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_791_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_791_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_791_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_791_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_791_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_792
#define AGONY_PP_PRIVATE_EVAL_REC_791_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_792(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_792_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_792_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_792_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_792_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_792_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_792_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_792_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_792_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_792_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_792_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_793
#define AGONY_PP_PRIVATE_EVAL_REC_792_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_793(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_793_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_793_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_793_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_793_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_793_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_793_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_793_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_793_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_793_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_793_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_794
#define AGONY_PP_PRIVATE_EVAL_REC_793_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_794(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_794_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_794_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_794_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_794_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_794_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_794_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_794_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_794_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_794_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_794_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_795
#define AGONY_PP_PRIVATE_EVAL_REC_794_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_795(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_795_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_795_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_795_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_795_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_795_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_795_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_795_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_795_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_795_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_795_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_796
#define AGONY_PP_PRIVATE_EVAL_REC_795_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_796(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_796_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_796_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_796_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_796_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_796_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_796_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_796_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_796_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_796_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_796_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_797
#define AGONY_PP_PRIVATE_EVAL_REC_796_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_797(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_797_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_797_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_797_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_797_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_797_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_797_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_797_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_797_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_797_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_797_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_798
#define AGONY_PP_PRIVATE_EVAL_REC_797_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_798(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_798_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_798_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_798_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_798_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_798_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_798_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_798_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_798_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_798_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_798_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_799
#define AGONY_PP_PRIVATE_EVAL_REC_798_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_799(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_799_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_799_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_799_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_799_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_799_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_799_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_799_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_799_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_799_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_799_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_800
#define AGONY_PP_PRIVATE_EVAL_REC_799_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_800(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_800_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_800_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_800_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_800_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_800_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_800_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_800_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_800_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_800_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_800_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_801
#define AGONY_PP_PRIVATE_EVAL_REC_800_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_801(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_801_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_801_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_801_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_801_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_801_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_801_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_801_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_801_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_801_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_801_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_802
#define AGONY_PP_PRIVATE_EVAL_REC_801_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_802(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_802_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_802_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_802_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_802_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_802_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_802_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_802_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_802_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_802_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_802_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_803
#define AGONY_PP_PRIVATE_EVAL_REC_802_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_803(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_803_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_803_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_803_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_803_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_803_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_803_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_803_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_803_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_803_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_803_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_804
#define AGONY_PP_PRIVATE_EVAL_REC_803_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_804(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_804_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_804_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_804_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_804_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_804_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_804_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_804_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_804_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_804_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_804_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_805
#define AGONY_PP_PRIVATE_EVAL_REC_804_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_805(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_805_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_805_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_805_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_805_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_805_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_805_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_805_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_805_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_805_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_805_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_806
#define AGONY_PP_PRIVATE_EVAL_REC_805_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_806(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_806_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_806_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_806_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_806_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_806_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_806_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_806_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_806_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_806_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_806_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_807
#define AGONY_PP_PRIVATE_EVAL_REC_806_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_807(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_807_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_807_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_807_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_807_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_807_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_807_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_807_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_807_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_807_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_807_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_808
#define AGONY_PP_PRIVATE_EVAL_REC_807_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_808(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_808_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_808_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_808_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_808_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_808_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_808_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_808_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_808_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_808_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_808_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_809
#define AGONY_PP_PRIVATE_EVAL_REC_808_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_809(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_809_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_809_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_809_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_809_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_809_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_809_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_809_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_809_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_809_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_809_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_810
#define AGONY_PP_PRIVATE_EVAL_REC_809_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_810(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_810_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_810_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_810_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_810_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_810_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_810_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_810_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_810_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_810_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_810_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_811
#define AGONY_PP_PRIVATE_EVAL_REC_810_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_811(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_811_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_811_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_811_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_811_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_811_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_811_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_811_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_811_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_811_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_811_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_812
#define AGONY_PP_PRIVATE_EVAL_REC_811_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_812(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_812_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_812_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_812_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_812_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_812_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_812_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_812_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_812_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_812_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_812_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_813
#define AGONY_PP_PRIVATE_EVAL_REC_812_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_813(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_813_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_813_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_813_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_813_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_813_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_813_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_813_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_813_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_813_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_813_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_814
#define AGONY_PP_PRIVATE_EVAL_REC_813_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_814(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_814_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_814_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_814_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_814_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_814_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_814_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_814_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_814_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_814_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_814_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_815
#define AGONY_PP_PRIVATE_EVAL_REC_814_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_815(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_815_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_815_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_815_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_815_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_815_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_815_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_815_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_815_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_815_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_815_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_816
#define AGONY_PP_PRIVATE_EVAL_REC_815_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_816(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_816_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_816_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_816_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_816_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_816_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_816_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_816_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_816_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_816_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_816_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_817
#define AGONY_PP_PRIVATE_EVAL_REC_816_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_817(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_817_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_817_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_817_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_817_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_817_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_817_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_817_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_817_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_817_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_817_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_818
#define AGONY_PP_PRIVATE_EVAL_REC_817_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_818(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_818_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_818_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_818_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_818_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_818_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_818_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_818_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_818_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_818_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_818_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_819
#define AGONY_PP_PRIVATE_EVAL_REC_818_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_819(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_819_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_819_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_819_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_819_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_819_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_819_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_819_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_819_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_819_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_819_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_820
#define AGONY_PP_PRIVATE_EVAL_REC_819_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_820(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_820_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_820_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_820_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_820_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_820_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_820_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_820_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_820_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_820_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_820_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_821
#define AGONY_PP_PRIVATE_EVAL_REC_820_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_821(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_821_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_821_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_821_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_821_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_821_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_821_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_821_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_821_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_821_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_821_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_822
#define AGONY_PP_PRIVATE_EVAL_REC_821_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_822(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_822_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_822_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_822_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_822_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_822_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_822_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_822_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_822_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_822_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_822_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_823
#define AGONY_PP_PRIVATE_EVAL_REC_822_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_823(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_823_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_823_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_823_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_823_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_823_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_823_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_823_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_823_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_823_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_823_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_824
#define AGONY_PP_PRIVATE_EVAL_REC_823_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_824(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_824_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_824_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_824_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_824_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_824_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_824_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_824_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_824_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_824_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_824_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_825
#define AGONY_PP_PRIVATE_EVAL_REC_824_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_825(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_825_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_825_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_825_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_825_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_825_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_825_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_825_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_825_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_825_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_825_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_826
#define AGONY_PP_PRIVATE_EVAL_REC_825_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_826(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_826_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_826_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_826_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_826_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_826_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_826_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_826_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_826_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_826_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_826_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_827
#define AGONY_PP_PRIVATE_EVAL_REC_826_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_827(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_827_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_827_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_827_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_827_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_827_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_827_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_827_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_827_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_827_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_827_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_828
#define AGONY_PP_PRIVATE_EVAL_REC_827_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_828(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_828_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_828_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_828_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_828_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_828_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_828_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_828_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_828_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_828_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_828_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_829
#define AGONY_PP_PRIVATE_EVAL_REC_828_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_829(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_829_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_829_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_829_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_829_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_829_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_829_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_829_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_829_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_829_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_829_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_830
#define AGONY_PP_PRIVATE_EVAL_REC_829_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_830(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_830_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_830_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_830_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_830_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_830_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_830_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_830_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_830_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_830_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_830_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_831
#define AGONY_PP_PRIVATE_EVAL_REC_830_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_831(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_831_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_831_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_831_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_831_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_831_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_831_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_831_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_831_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_831_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_831_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_832
#define AGONY_PP_PRIVATE_EVAL_REC_831_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_832(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_832_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_832_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_832_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_832_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_832_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_832_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_832_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_832_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_832_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_832_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_833
#define AGONY_PP_PRIVATE_EVAL_REC_832_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_833(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_833_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_833_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_833_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_833_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_833_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_833_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_833_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_833_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_833_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_833_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_834
#define AGONY_PP_PRIVATE_EVAL_REC_833_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_834(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_834_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_834_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_834_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_834_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_834_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_834_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_834_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_834_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_834_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_834_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_835
#define AGONY_PP_PRIVATE_EVAL_REC_834_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_835(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_835_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_835_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_835_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_835_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_835_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_835_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_835_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_835_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_835_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_835_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_836
#define AGONY_PP_PRIVATE_EVAL_REC_835_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_836(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_836_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_836_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_836_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_836_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_836_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_836_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_836_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_836_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_836_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_836_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_837
#define AGONY_PP_PRIVATE_EVAL_REC_836_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_837(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_837_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_837_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_837_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_837_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_837_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_837_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_837_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_837_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_837_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_837_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_838
#define AGONY_PP_PRIVATE_EVAL_REC_837_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_838(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_838_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_838_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_838_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_838_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_838_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_838_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_838_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_838_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_838_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_838_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_839
#define AGONY_PP_PRIVATE_EVAL_REC_838_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_839(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_839_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_839_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_839_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_839_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_839_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_839_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_839_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_839_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_839_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_839_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_840
#define AGONY_PP_PRIVATE_EVAL_REC_839_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_840(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_840_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_840_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_840_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_840_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_840_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_840_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_840_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_840_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_840_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_840_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_841
#define AGONY_PP_PRIVATE_EVAL_REC_840_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_841(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_841_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_841_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_841_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_841_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_841_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_841_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_841_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_841_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_841_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_841_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_842
#define AGONY_PP_PRIVATE_EVAL_REC_841_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_842(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_842_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_842_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_842_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_842_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_842_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_842_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_842_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_842_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_842_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_842_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_843
#define AGONY_PP_PRIVATE_EVAL_REC_842_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_843(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_843_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_843_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_843_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_843_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_843_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_843_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_843_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_843_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_843_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_843_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_844
#define AGONY_PP_PRIVATE_EVAL_REC_843_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_844(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_844_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_844_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_844_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_844_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_844_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_844_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_844_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_844_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_844_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_844_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_845
#define AGONY_PP_PRIVATE_EVAL_REC_844_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_845(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_845_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_845_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_845_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_845_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_845_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_845_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_845_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_845_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_845_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_845_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_846
#define AGONY_PP_PRIVATE_EVAL_REC_845_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_846(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_846_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_846_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_846_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_846_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_846_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_846_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_846_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_846_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_846_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_846_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_847
#define AGONY_PP_PRIVATE_EVAL_REC_846_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_847(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_847_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_847_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_847_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_847_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_847_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_847_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_847_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_847_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_847_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_847_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_848
#define AGONY_PP_PRIVATE_EVAL_REC_847_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_848(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_848_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_848_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_848_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_848_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_848_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_848_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_848_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_848_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_848_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_848_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_849
#define AGONY_PP_PRIVATE_EVAL_REC_848_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_849(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_849_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_849_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_849_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_849_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_849_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_849_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_849_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_849_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_849_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_849_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_850
#define AGONY_PP_PRIVATE_EVAL_REC_849_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_850(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_850_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_850_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_850_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_850_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_850_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_850_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_850_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_850_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_850_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_850_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_851
#define AGONY_PP_PRIVATE_EVAL_REC_850_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_851(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_851_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_851_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_851_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_851_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_851_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_851_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_851_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_851_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_851_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_851_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_852
#define AGONY_PP_PRIVATE_EVAL_REC_851_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_852(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_852_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_852_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_852_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_852_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_852_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_852_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_852_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_852_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_852_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_852_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_853
#define AGONY_PP_PRIVATE_EVAL_REC_852_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_853(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_853_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_853_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_853_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_853_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_853_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_853_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_853_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_853_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_853_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_853_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_854
#define AGONY_PP_PRIVATE_EVAL_REC_853_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_854(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_854_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_854_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_854_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_854_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_854_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_854_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_854_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_854_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_854_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_854_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_855
#define AGONY_PP_PRIVATE_EVAL_REC_854_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_855(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_855_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_855_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_855_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_855_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_855_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_855_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_855_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_855_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_855_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_855_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_856
#define AGONY_PP_PRIVATE_EVAL_REC_855_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_856(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_856_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_856_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_856_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_856_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_856_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_856_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_856_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_856_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_856_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_856_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_857
#define AGONY_PP_PRIVATE_EVAL_REC_856_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_857(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_857_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_857_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_857_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_857_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_857_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_857_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_857_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_857_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_857_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_857_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_858
#define AGONY_PP_PRIVATE_EVAL_REC_857_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_858(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_858_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_858_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_858_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_858_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_858_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_858_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_858_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_858_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_858_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_858_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_859
#define AGONY_PP_PRIVATE_EVAL_REC_858_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_859(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_859_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_859_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_859_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_859_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_859_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_859_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_859_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_859_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_859_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_859_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_860
#define AGONY_PP_PRIVATE_EVAL_REC_859_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_860(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_860_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_860_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_860_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_860_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_860_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_860_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_860_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_860_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_860_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_860_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_861
#define AGONY_PP_PRIVATE_EVAL_REC_860_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_861(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_861_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_861_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_861_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_861_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_861_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_861_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_861_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_861_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_861_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_861_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_862
#define AGONY_PP_PRIVATE_EVAL_REC_861_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_862(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_862_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_862_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_862_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_862_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_862_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_862_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_862_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_862_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_862_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_862_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_863
#define AGONY_PP_PRIVATE_EVAL_REC_862_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_863(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_863_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_863_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_863_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_863_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_863_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_863_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_863_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_863_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_863_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_863_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_864
#define AGONY_PP_PRIVATE_EVAL_REC_863_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_864(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_864_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_864_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_864_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_864_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_864_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_864_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_864_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_864_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_864_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_864_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_865
#define AGONY_PP_PRIVATE_EVAL_REC_864_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_865(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_865_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_865_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_865_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_865_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_865_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_865_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_865_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_865_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_865_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_865_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_866
#define AGONY_PP_PRIVATE_EVAL_REC_865_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_866(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_866_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_866_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_866_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_866_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_866_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_866_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_866_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_866_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_866_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_866_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_867
#define AGONY_PP_PRIVATE_EVAL_REC_866_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_867(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_867_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_867_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_867_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_867_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_867_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_867_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_867_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_867_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_867_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_867_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_868
#define AGONY_PP_PRIVATE_EVAL_REC_867_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_868(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_868_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_868_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_868_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_868_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_868_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_868_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_868_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_868_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_868_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_868_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_869
#define AGONY_PP_PRIVATE_EVAL_REC_868_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_869(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_869_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_869_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_869_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_869_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_869_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_869_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_869_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_869_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_869_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_869_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_870
#define AGONY_PP_PRIVATE_EVAL_REC_869_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_870(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_870_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_870_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_870_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_870_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_870_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_870_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_870_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_870_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_870_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_870_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_871
#define AGONY_PP_PRIVATE_EVAL_REC_870_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_871(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_871_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_871_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_871_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_871_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_871_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_871_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_871_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_871_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_871_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_871_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_872
#define AGONY_PP_PRIVATE_EVAL_REC_871_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_872(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_872_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_872_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_872_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_872_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_872_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_872_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_872_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_872_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_872_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_872_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_873
#define AGONY_PP_PRIVATE_EVAL_REC_872_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_873(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_873_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_873_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_873_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_873_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_873_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_873_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_873_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_873_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_873_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_873_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_874
#define AGONY_PP_PRIVATE_EVAL_REC_873_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_874(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_874_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_874_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_874_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_874_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_874_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_874_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_874_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_874_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_874_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_874_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_875
#define AGONY_PP_PRIVATE_EVAL_REC_874_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_875(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_875_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_875_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_875_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_875_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_875_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_875_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_875_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_875_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_875_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_875_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_876
#define AGONY_PP_PRIVATE_EVAL_REC_875_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_876(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_876_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_876_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_876_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_876_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_876_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_876_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_876_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_876_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_876_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_876_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_877
#define AGONY_PP_PRIVATE_EVAL_REC_876_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_877(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_877_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_877_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_877_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_877_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_877_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_877_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_877_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_877_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_877_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_877_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_878
#define AGONY_PP_PRIVATE_EVAL_REC_877_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_878(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_878_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_878_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_878_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_878_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_878_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_878_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_878_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_878_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_878_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_878_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_879
#define AGONY_PP_PRIVATE_EVAL_REC_878_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_879(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_879_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_879_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_879_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_879_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_879_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_879_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_879_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_879_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_879_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_879_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_880
#define AGONY_PP_PRIVATE_EVAL_REC_879_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_880(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_880_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_880_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_880_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_880_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_880_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_880_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_880_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_880_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_880_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_880_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_881
#define AGONY_PP_PRIVATE_EVAL_REC_880_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_881(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_881_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_881_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_881_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_881_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_881_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_881_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_881_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_881_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_881_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_881_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_882
#define AGONY_PP_PRIVATE_EVAL_REC_881_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_882(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_882_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_882_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_882_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_882_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_882_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_882_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_882_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_882_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_882_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_882_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_883
#define AGONY_PP_PRIVATE_EVAL_REC_882_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_883(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_883_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_883_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_883_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_883_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_883_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_883_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_883_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_883_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_883_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_883_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_884
#define AGONY_PP_PRIVATE_EVAL_REC_883_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_884(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_884_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_884_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_884_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_884_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_884_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_884_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_884_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_884_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_884_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_884_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_885
#define AGONY_PP_PRIVATE_EVAL_REC_884_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_885(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_885_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_885_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_885_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_885_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_885_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_885_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_885_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_885_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_885_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_885_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_886
#define AGONY_PP_PRIVATE_EVAL_REC_885_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_886(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_886_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_886_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_886_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_886_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_886_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_886_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_886_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_886_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_886_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_886_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_887
#define AGONY_PP_PRIVATE_EVAL_REC_886_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_887(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_887_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_887_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_887_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_887_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_887_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_887_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_887_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_887_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_887_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_887_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_888
#define AGONY_PP_PRIVATE_EVAL_REC_887_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_888(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_888_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_888_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_888_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_888_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_888_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_888_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_888_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_888_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_888_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_888_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_889
#define AGONY_PP_PRIVATE_EVAL_REC_888_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_889(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_889_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_889_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_889_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_889_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_889_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_889_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_889_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_889_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_889_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_889_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_890
#define AGONY_PP_PRIVATE_EVAL_REC_889_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_890(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_890_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_890_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_890_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_890_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_890_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_890_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_890_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_890_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_890_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_890_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_891
#define AGONY_PP_PRIVATE_EVAL_REC_890_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_891(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_891_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_891_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_891_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_891_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_891_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_891_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_891_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_891_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_891_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_891_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_892
#define AGONY_PP_PRIVATE_EVAL_REC_891_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_892(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_892_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_892_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_892_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_892_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_892_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_892_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_892_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_892_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_892_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_892_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_893
#define AGONY_PP_PRIVATE_EVAL_REC_892_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_893(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_893_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_893_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_893_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_893_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_893_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_893_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_893_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_893_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_893_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_893_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_894
#define AGONY_PP_PRIVATE_EVAL_REC_893_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_894(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_894_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_894_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_894_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_894_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_894_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_894_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_894_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_894_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_894_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_894_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_895
#define AGONY_PP_PRIVATE_EVAL_REC_894_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_895(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_895_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_895_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_895_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_895_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_895_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_895_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_895_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_895_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_895_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_895_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_896
#define AGONY_PP_PRIVATE_EVAL_REC_895_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_896(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_896_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_896_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_896_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_896_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_896_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_896_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_896_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_896_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_896_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_896_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_897
#define AGONY_PP_PRIVATE_EVAL_REC_896_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_897(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_897_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_897_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_897_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_897_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_897_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_897_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_897_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_897_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_897_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_897_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_898
#define AGONY_PP_PRIVATE_EVAL_REC_897_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_898(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_898_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_898_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_898_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_898_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_898_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_898_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_898_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_898_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_898_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_898_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_899
#define AGONY_PP_PRIVATE_EVAL_REC_898_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_899(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_899_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_899_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_899_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_899_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_899_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_899_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_899_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_899_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_899_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_899_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_900
#define AGONY_PP_PRIVATE_EVAL_REC_899_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_900(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_900_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_900_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_900_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_900_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_900_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_900_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_900_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_900_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_900_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_900_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_901
#define AGONY_PP_PRIVATE_EVAL_REC_900_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_901(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_901_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_901_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_901_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_901_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_901_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_901_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_901_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_901_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_901_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_901_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_902
#define AGONY_PP_PRIVATE_EVAL_REC_901_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_902(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_902_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_902_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_902_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_902_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_902_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_902_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_902_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_902_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_902_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_902_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_903
#define AGONY_PP_PRIVATE_EVAL_REC_902_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_903(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_903_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_903_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_903_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_903_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_903_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_903_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_903_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_903_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_903_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_903_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_904
#define AGONY_PP_PRIVATE_EVAL_REC_903_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_904(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_904_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_904_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_904_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_904_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_904_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_904_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_904_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_904_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_904_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_904_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_905
#define AGONY_PP_PRIVATE_EVAL_REC_904_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_905(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_905_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_905_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_905_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_905_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_905_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_905_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_905_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_905_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_905_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_905_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_906
#define AGONY_PP_PRIVATE_EVAL_REC_905_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_906(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_906_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_906_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_906_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_906_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_906_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_906_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_906_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_906_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_906_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_906_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_907
#define AGONY_PP_PRIVATE_EVAL_REC_906_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_907(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_907_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_907_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_907_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_907_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_907_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_907_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_907_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_907_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_907_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_907_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_908
#define AGONY_PP_PRIVATE_EVAL_REC_907_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_908(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_908_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_908_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_908_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_908_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_908_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_908_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_908_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_908_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_908_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_908_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_909
#define AGONY_PP_PRIVATE_EVAL_REC_908_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_909(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_909_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_909_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_909_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_909_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_909_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_909_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_909_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_909_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_909_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_909_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_910
#define AGONY_PP_PRIVATE_EVAL_REC_909_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_910(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_910_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_910_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_910_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_910_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_910_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_910_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_910_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_910_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_910_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_910_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_911
#define AGONY_PP_PRIVATE_EVAL_REC_910_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_911(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_911_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_911_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_911_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_911_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_911_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_911_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_911_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_911_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_911_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_911_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_912
#define AGONY_PP_PRIVATE_EVAL_REC_911_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_912(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_912_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_912_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_912_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_912_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_912_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_912_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_912_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_912_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_912_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_912_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_913
#define AGONY_PP_PRIVATE_EVAL_REC_912_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_913(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_913_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_913_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_913_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_913_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_913_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_913_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_913_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_913_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_913_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_913_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_914
#define AGONY_PP_PRIVATE_EVAL_REC_913_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_914(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_914_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_914_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_914_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_914_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_914_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_914_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_914_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_914_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_914_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_914_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_915
#define AGONY_PP_PRIVATE_EVAL_REC_914_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_915(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_915_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_915_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_915_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_915_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_915_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_915_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_915_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_915_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_915_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_915_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_916
#define AGONY_PP_PRIVATE_EVAL_REC_915_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_916(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_916_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_916_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_916_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_916_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_916_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_916_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_916_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_916_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_916_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_916_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_917
#define AGONY_PP_PRIVATE_EVAL_REC_916_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_917(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_917_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_917_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_917_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_917_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_917_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_917_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_917_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_917_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_917_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_917_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_918
#define AGONY_PP_PRIVATE_EVAL_REC_917_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_918(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_918_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_918_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_918_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_918_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_918_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_918_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_918_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_918_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_918_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_918_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_919
#define AGONY_PP_PRIVATE_EVAL_REC_918_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_919(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_919_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_919_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_919_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_919_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_919_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_919_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_919_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_919_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_919_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_919_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_920
#define AGONY_PP_PRIVATE_EVAL_REC_919_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_920(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_920_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_920_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_920_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_920_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_920_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_920_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_920_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_920_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_920_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_920_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_921
#define AGONY_PP_PRIVATE_EVAL_REC_920_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_921(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_921_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_921_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_921_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_921_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_921_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_921_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_921_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_921_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_921_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_921_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_922
#define AGONY_PP_PRIVATE_EVAL_REC_921_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_922(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_922_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_922_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_922_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_922_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_922_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_922_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_922_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_922_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_922_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_922_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_923
#define AGONY_PP_PRIVATE_EVAL_REC_922_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_923(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_923_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_923_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_923_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_923_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_923_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_923_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_923_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_923_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_923_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_923_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_924
#define AGONY_PP_PRIVATE_EVAL_REC_923_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_924(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_924_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_924_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_924_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_924_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_924_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_924_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_924_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_924_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_924_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_924_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_925
#define AGONY_PP_PRIVATE_EVAL_REC_924_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_925(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_925_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_925_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_925_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_925_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_925_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_925_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_925_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_925_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_925_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_925_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_926
#define AGONY_PP_PRIVATE_EVAL_REC_925_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_926(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_926_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_926_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_926_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_926_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_926_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_926_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_926_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_926_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_926_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_926_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_927
#define AGONY_PP_PRIVATE_EVAL_REC_926_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_927(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_927_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_927_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_927_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_927_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_927_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_927_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_927_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_927_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_927_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_927_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_928
#define AGONY_PP_PRIVATE_EVAL_REC_927_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_928(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_928_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_928_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_928_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_928_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_928_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_928_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_928_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_928_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_928_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_928_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_929
#define AGONY_PP_PRIVATE_EVAL_REC_928_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_929(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_929_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_929_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_929_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_929_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_929_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_929_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_929_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_929_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_929_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_929_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_930
#define AGONY_PP_PRIVATE_EVAL_REC_929_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_930(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_930_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_930_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_930_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_930_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_930_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_930_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_930_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_930_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_930_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_930_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_931
#define AGONY_PP_PRIVATE_EVAL_REC_930_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_931(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_931_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_931_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_931_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_931_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_931_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_931_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_931_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_931_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_931_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_931_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_932
#define AGONY_PP_PRIVATE_EVAL_REC_931_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_932(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_932_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_932_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_932_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_932_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_932_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_932_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_932_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_932_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_932_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_932_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_933
#define AGONY_PP_PRIVATE_EVAL_REC_932_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_933(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_933_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_933_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_933_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_933_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_933_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_933_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_933_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_933_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_933_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_933_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_934
#define AGONY_PP_PRIVATE_EVAL_REC_933_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_934(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_934_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_934_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_934_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_934_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_934_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_934_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_934_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_934_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_934_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_934_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_935
#define AGONY_PP_PRIVATE_EVAL_REC_934_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_935(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_935_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_935_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_935_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_935_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_935_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_935_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_935_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_935_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_935_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_935_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_936
#define AGONY_PP_PRIVATE_EVAL_REC_935_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_936(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_936_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_936_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_936_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_936_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_936_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_936_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_936_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_936_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_936_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_936_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_937
#define AGONY_PP_PRIVATE_EVAL_REC_936_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_937(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_937_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_937_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_937_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_937_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_937_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_937_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_937_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_937_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_937_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_937_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_938
#define AGONY_PP_PRIVATE_EVAL_REC_937_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_938(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_938_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_938_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_938_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_938_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_938_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_938_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_938_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_938_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_938_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_938_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_939
#define AGONY_PP_PRIVATE_EVAL_REC_938_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_939(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_939_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_939_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_939_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_939_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_939_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_939_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_939_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_939_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_939_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_939_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_940
#define AGONY_PP_PRIVATE_EVAL_REC_939_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_940(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_940_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_940_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_940_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_940_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_940_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_940_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_940_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_940_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_940_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_940_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_941
#define AGONY_PP_PRIVATE_EVAL_REC_940_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_941(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_941_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_941_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_941_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_941_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_941_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_941_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_941_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_941_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_941_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_941_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_942
#define AGONY_PP_PRIVATE_EVAL_REC_941_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_942(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_942_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_942_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_942_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_942_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_942_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_942_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_942_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_942_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_942_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_942_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_943
#define AGONY_PP_PRIVATE_EVAL_REC_942_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_943(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_943_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_943_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_943_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_943_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_943_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_943_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_943_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_943_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_943_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_943_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_944
#define AGONY_PP_PRIVATE_EVAL_REC_943_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_944(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_944_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_944_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_944_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_944_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_944_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_944_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_944_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_944_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_944_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_944_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_945
#define AGONY_PP_PRIVATE_EVAL_REC_944_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_945(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_945_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_945_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_945_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_945_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_945_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_945_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_945_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_945_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_945_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_945_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_946
#define AGONY_PP_PRIVATE_EVAL_REC_945_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_946(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_946_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_946_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_946_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_946_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_946_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_946_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_946_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_946_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_946_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_946_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_947
#define AGONY_PP_PRIVATE_EVAL_REC_946_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_947(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_947_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_947_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_947_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_947_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_947_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_947_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_947_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_947_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_947_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_947_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_948
#define AGONY_PP_PRIVATE_EVAL_REC_947_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_948(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_948_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_948_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_948_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_948_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_948_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_948_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_948_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_948_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_948_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_948_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_949
#define AGONY_PP_PRIVATE_EVAL_REC_948_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_949(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_949_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_949_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_949_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_949_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_949_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_949_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_949_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_949_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_949_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_949_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_950
#define AGONY_PP_PRIVATE_EVAL_REC_949_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_950(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_950_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_950_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_950_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_950_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_950_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_950_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_950_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_950_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_950_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_950_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_951
#define AGONY_PP_PRIVATE_EVAL_REC_950_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_951(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_951_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_951_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_951_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_951_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_951_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_951_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_951_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_951_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_951_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_951_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_952
#define AGONY_PP_PRIVATE_EVAL_REC_951_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_952(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_952_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_952_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_952_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_952_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_952_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_952_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_952_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_952_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_952_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_952_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_953
#define AGONY_PP_PRIVATE_EVAL_REC_952_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_953(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_953_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_953_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_953_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_953_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_953_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_953_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_953_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_953_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_953_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_953_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_954
#define AGONY_PP_PRIVATE_EVAL_REC_953_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_954(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_954_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_954_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_954_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_954_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_954_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_954_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_954_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_954_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_954_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_954_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_955
#define AGONY_PP_PRIVATE_EVAL_REC_954_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_955(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_955_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_955_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_955_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_955_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_955_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_955_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_955_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_955_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_955_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_955_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_956
#define AGONY_PP_PRIVATE_EVAL_REC_955_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_956(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_956_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_956_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_956_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_956_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_956_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_956_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_956_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_956_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_956_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_956_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_957
#define AGONY_PP_PRIVATE_EVAL_REC_956_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_957(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_957_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_957_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_957_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_957_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_957_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_957_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_957_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_957_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_957_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_957_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_958
#define AGONY_PP_PRIVATE_EVAL_REC_957_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_958(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_958_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_958_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_958_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_958_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_958_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_958_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_958_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_958_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_958_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_958_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_959
#define AGONY_PP_PRIVATE_EVAL_REC_958_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_959(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_959_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_959_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_959_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_959_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_959_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_959_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_959_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_959_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_959_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_959_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_960
#define AGONY_PP_PRIVATE_EVAL_REC_959_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_960(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_960_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_960_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_960_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_960_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_960_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_960_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_960_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_960_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_960_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_960_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_961
#define AGONY_PP_PRIVATE_EVAL_REC_960_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_961(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_961_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_961_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_961_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_961_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_961_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_961_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_961_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_961_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_961_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_961_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_962
#define AGONY_PP_PRIVATE_EVAL_REC_961_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_962(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_962_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_962_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_962_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_962_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_962_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_962_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_962_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_962_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_962_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_962_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_963
#define AGONY_PP_PRIVATE_EVAL_REC_962_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_963(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_963_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_963_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_963_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_963_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_963_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_963_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_963_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_963_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_963_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_963_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_964
#define AGONY_PP_PRIVATE_EVAL_REC_963_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_964(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_964_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_964_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_964_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_964_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_964_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_964_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_964_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_964_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_964_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_964_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_965
#define AGONY_PP_PRIVATE_EVAL_REC_964_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_965(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_965_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_965_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_965_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_965_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_965_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_965_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_965_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_965_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_965_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_965_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_966
#define AGONY_PP_PRIVATE_EVAL_REC_965_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_966(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_966_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_966_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_966_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_966_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_966_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_966_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_966_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_966_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_966_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_966_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_967
#define AGONY_PP_PRIVATE_EVAL_REC_966_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_967(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_967_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_967_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_967_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_967_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_967_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_967_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_967_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_967_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_967_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_967_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_968
#define AGONY_PP_PRIVATE_EVAL_REC_967_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_968(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_968_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_968_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_968_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_968_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_968_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_968_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_968_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_968_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_968_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_968_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_969
#define AGONY_PP_PRIVATE_EVAL_REC_968_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_969(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_969_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_969_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_969_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_969_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_969_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_969_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_969_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_969_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_969_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_969_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_970
#define AGONY_PP_PRIVATE_EVAL_REC_969_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_970(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_970_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_970_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_970_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_970_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_970_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_970_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_970_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_970_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_970_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_970_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_971
#define AGONY_PP_PRIVATE_EVAL_REC_970_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_971(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_971_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_971_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_971_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_971_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_971_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_971_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_971_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_971_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_971_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_971_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_972
#define AGONY_PP_PRIVATE_EVAL_REC_971_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_972(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_972_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_972_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_972_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_972_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_972_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_972_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_972_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_972_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_972_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_972_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_973
#define AGONY_PP_PRIVATE_EVAL_REC_972_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_973(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_973_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_973_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_973_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_973_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_973_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_973_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_973_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_973_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_973_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_973_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_974
#define AGONY_PP_PRIVATE_EVAL_REC_973_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_974(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_974_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_974_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_974_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_974_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_974_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_974_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_974_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_974_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_974_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_974_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_975
#define AGONY_PP_PRIVATE_EVAL_REC_974_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_975(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_975_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_975_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_975_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_975_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_975_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_975_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_975_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_975_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_975_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_975_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_976
#define AGONY_PP_PRIVATE_EVAL_REC_975_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_976(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_976_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_976_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_976_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_976_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_976_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_976_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_976_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_976_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_976_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_976_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_977
#define AGONY_PP_PRIVATE_EVAL_REC_976_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_977(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_977_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_977_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_977_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_977_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_977_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_977_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_977_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_977_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_977_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_977_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_978
#define AGONY_PP_PRIVATE_EVAL_REC_977_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_978(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_978_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_978_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_978_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_978_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_978_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_978_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_978_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_978_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_978_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_978_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_979
#define AGONY_PP_PRIVATE_EVAL_REC_978_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_979(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_979_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_979_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_979_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_979_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_979_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_979_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_979_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_979_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_979_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_979_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_980
#define AGONY_PP_PRIVATE_EVAL_REC_979_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_980(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_980_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_980_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_980_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_980_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_980_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_980_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_980_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_980_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_980_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_980_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_981
#define AGONY_PP_PRIVATE_EVAL_REC_980_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_981(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_981_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_981_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_981_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_981_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_981_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_981_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_981_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_981_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_981_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_981_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_982
#define AGONY_PP_PRIVATE_EVAL_REC_981_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_982(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_982_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_982_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_982_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_982_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_982_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_982_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_982_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_982_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_982_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_982_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_983
#define AGONY_PP_PRIVATE_EVAL_REC_982_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_983(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_983_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_983_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_983_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_983_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_983_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_983_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_983_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_983_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_983_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_983_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_984
#define AGONY_PP_PRIVATE_EVAL_REC_983_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_984(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_984_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_984_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_984_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_984_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_984_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_984_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_984_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_984_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_984_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_984_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_985
#define AGONY_PP_PRIVATE_EVAL_REC_984_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_985(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_985_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_985_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_985_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_985_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_985_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_985_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_985_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_985_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_985_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_985_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_986
#define AGONY_PP_PRIVATE_EVAL_REC_985_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_986(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_986_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_986_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_986_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_986_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_986_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_986_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_986_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_986_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_986_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_986_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_987
#define AGONY_PP_PRIVATE_EVAL_REC_986_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_987(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_987_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_987_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_987_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_987_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_987_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_987_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_987_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_987_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_987_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_987_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_988
#define AGONY_PP_PRIVATE_EVAL_REC_987_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_988(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_988_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_988_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_988_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_988_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_988_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_988_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_988_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_988_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_988_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_988_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_989
#define AGONY_PP_PRIVATE_EVAL_REC_988_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_989(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_989_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_989_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_989_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_989_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_989_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_989_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_989_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_989_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_989_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_989_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_990
#define AGONY_PP_PRIVATE_EVAL_REC_989_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_990(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_990_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_990_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_990_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_990_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_990_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_990_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_990_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_990_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_990_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_990_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_991
#define AGONY_PP_PRIVATE_EVAL_REC_990_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_991(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_991_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_991_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_991_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_991_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_991_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_991_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_991_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_991_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_991_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_991_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_992
#define AGONY_PP_PRIVATE_EVAL_REC_991_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_992(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_992_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_992_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_992_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_992_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_992_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_992_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_992_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_992_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_992_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_992_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_993
#define AGONY_PP_PRIVATE_EVAL_REC_992_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_993(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_993_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_993_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_993_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_993_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_993_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_993_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_993_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_993_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_993_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_993_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_994
#define AGONY_PP_PRIVATE_EVAL_REC_993_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_994(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_994_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_994_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_994_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_994_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_994_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_994_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_994_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_994_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_994_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_994_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_995
#define AGONY_PP_PRIVATE_EVAL_REC_994_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_995(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_995_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_995_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_995_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_995_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_995_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_995_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_995_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_995_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_995_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_995_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_996
#define AGONY_PP_PRIVATE_EVAL_REC_995_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_996(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_996_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_996_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_996_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_996_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_996_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_996_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_996_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_996_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_996_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_996_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_997
#define AGONY_PP_PRIVATE_EVAL_REC_996_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_997(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_997_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_997_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_997_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_997_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_997_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_997_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_997_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_997_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_997_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_997_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_998
#define AGONY_PP_PRIVATE_EVAL_REC_997_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_998(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_998_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_998_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_998_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_998_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_998_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_998_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_998_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_998_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_998_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_998_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_999
#define AGONY_PP_PRIVATE_EVAL_REC_998_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_999(...)                                                         \
    AGONY_PP_PRIVATE_EVAL_REC_999_OVERLOAD(AGONY_PP_PRIVATE_EVAL_REC_999_GET_CHOICE(__VA_ARGS__))  \
    (AGONY_PP_PRIVATE_EVAL_REC_999_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_999_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_999_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_999_OVERLOAD(choice)                                             \
    AGONY_PP_PRIVATE_EVAL_REC_999_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_999_OVERLOAD_PRIMITIVE(choice)                                   \
    AGONY_PP_PRIVATE_EVAL_REC_999_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_999_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1000
#define AGONY_PP_PRIVATE_EVAL_REC_999_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1000(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1000_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1000_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1000_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1000_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1000_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1000_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1000_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1000_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1000_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1000_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1001
#define AGONY_PP_PRIVATE_EVAL_REC_1000_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1001(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1001_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1001_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1001_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1001_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1001_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1001_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1001_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1001_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1001_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1001_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1002
#define AGONY_PP_PRIVATE_EVAL_REC_1001_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1002(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1002_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1002_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1002_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1002_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1002_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1002_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1002_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1002_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1002_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1002_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1003
#define AGONY_PP_PRIVATE_EVAL_REC_1002_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1003(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1003_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1003_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1003_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1003_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1003_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1003_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1003_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1003_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1003_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1003_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1004
#define AGONY_PP_PRIVATE_EVAL_REC_1003_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1004(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1004_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1004_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1004_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1004_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1004_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1004_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1004_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1004_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1004_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1004_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1005
#define AGONY_PP_PRIVATE_EVAL_REC_1004_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1005(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1005_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1005_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1005_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1005_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1005_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1005_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1005_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1005_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1005_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1005_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1006
#define AGONY_PP_PRIVATE_EVAL_REC_1005_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1006(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1006_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1006_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1006_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1006_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1006_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1006_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1006_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1006_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1006_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1006_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1007
#define AGONY_PP_PRIVATE_EVAL_REC_1006_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1007(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1007_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1007_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1007_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1007_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1007_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1007_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1007_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1007_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1007_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1007_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1008
#define AGONY_PP_PRIVATE_EVAL_REC_1007_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1008(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1008_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1008_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1008_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1008_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1008_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1008_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1008_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1008_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1008_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1008_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1009
#define AGONY_PP_PRIVATE_EVAL_REC_1008_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1009(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1009_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1009_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1009_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1009_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1009_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1009_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1009_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1009_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1009_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1009_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1010
#define AGONY_PP_PRIVATE_EVAL_REC_1009_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1010(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1010_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1010_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1010_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1010_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1010_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1010_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1010_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1010_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1010_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1010_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1011
#define AGONY_PP_PRIVATE_EVAL_REC_1010_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1011(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1011_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1011_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1011_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1011_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1011_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1011_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1011_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1011_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1011_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1011_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1012
#define AGONY_PP_PRIVATE_EVAL_REC_1011_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1012(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1012_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1012_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1012_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1012_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1012_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1012_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1012_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1012_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1012_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1012_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1013
#define AGONY_PP_PRIVATE_EVAL_REC_1012_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1013(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1013_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1013_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1013_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1013_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1013_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1013_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1013_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1013_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1013_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1013_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1014
#define AGONY_PP_PRIVATE_EVAL_REC_1013_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1014(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1014_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1014_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1014_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1014_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1014_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1014_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1014_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1014_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1014_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1014_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1015
#define AGONY_PP_PRIVATE_EVAL_REC_1014_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1015(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1015_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1015_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1015_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1015_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1015_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1015_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1015_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1015_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1015_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1015_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1016
#define AGONY_PP_PRIVATE_EVAL_REC_1015_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1016(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1016_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1016_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1016_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1016_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1016_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1016_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1016_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1016_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1016_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1016_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1017
#define AGONY_PP_PRIVATE_EVAL_REC_1016_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1017(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1017_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1017_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1017_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1017_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1017_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1017_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1017_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1017_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1017_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1017_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1018
#define AGONY_PP_PRIVATE_EVAL_REC_1017_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1018(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1018_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1018_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1018_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1018_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1018_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1018_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1018_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1018_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1018_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1018_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1019
#define AGONY_PP_PRIVATE_EVAL_REC_1018_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1019(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1019_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1019_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1019_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1019_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1019_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1019_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1019_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1019_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1019_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1019_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1020
#define AGONY_PP_PRIVATE_EVAL_REC_1019_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1020(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1020_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1020_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1020_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1020_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1020_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1020_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1020_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1020_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1020_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1020_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1021
#define AGONY_PP_PRIVATE_EVAL_REC_1020_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1021(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1021_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1021_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1021_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1021_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1021_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1021_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1021_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1021_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1021_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1021_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1022
#define AGONY_PP_PRIVATE_EVAL_REC_1021_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1022(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1022_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1022_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1022_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1022_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1022_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1022_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1022_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1022_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1022_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1022_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1023
#define AGONY_PP_PRIVATE_EVAL_REC_1022_STOP(...) __VA_ARGS__

#define AGONY_PP_PRIVATE_EVAL_REC_1023(...)                                                        \
    AGONY_PP_PRIVATE_EVAL_REC_1023_OVERLOAD(                                                       \
        AGONY_PP_PRIVATE_EVAL_REC_1023_GET_CHOICE(__VA_ARGS__))                                    \
    (AGONY_PP_PRIVATE_EVAL_REC_1023_GET_REST(__VA_ARGS__))
#define AGONY_PP_PRIVATE_EVAL_REC_1023_GET_CHOICE(choice, ...) choice
#define AGONY_PP_PRIVATE_EVAL_REC_1023_GET_REST(choice, ...)   __VA_ARGS__
#define AGONY_PP_PRIVATE_EVAL_REC_1023_OVERLOAD(choice)                                            \
    AGONY_PP_PRIVATE_EVAL_REC_1023_OVERLOAD_PRIMITIVE(choice)
#define AGONY_PP_PRIVATE_EVAL_REC_1023_OVERLOAD_PRIMITIVE(choice)                                  \
    AGONY_PP_PRIVATE_EVAL_REC_1023_##choice
#define AGONY_PP_PRIVATE_EVAL_REC_1023_CONTINUE  AGONY_PP_PRIVATE_EVAL_REC_1024_LIMIT_REACHED
#define AGONY_PP_PRIVATE_EVAL_REC_1023_STOP(...) __VA_ARGS__

#endif // AGONY_PP_EVAL_REC_UNROLL_H
