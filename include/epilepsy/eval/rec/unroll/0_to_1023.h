#ifndef EPILEPSY_EVAL_REC_UNROLL_0_TO_1023_H
#define EPILEPSY_EVAL_REC_UNROLL_0_TO_1023_H

#define EPILEPSY_PRIV_EVAL_REC_0(...)                                                              \
    EPILEPSY_PRIV_EVAL_REC_0_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_0_GET_CHOICE(__VA_ARGS__))            \
    (EPILEPSY_PRIV_EVAL_REC_0_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_0_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_0_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_0_OVERLOAD(choice)                                                  \
    EPILEPSY_PRIV_EVAL_REC_0_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_0_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_0_##choice
#define EPILEPSY_PRIV_EVAL_REC_0_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_1
#define EPILEPSY_PRIV_EVAL_REC_0_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_1(...)                                                              \
    EPILEPSY_PRIV_EVAL_REC_1_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_1_GET_CHOICE(__VA_ARGS__))            \
    (EPILEPSY_PRIV_EVAL_REC_1_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_1_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_1_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_1_OVERLOAD(choice)                                                  \
    EPILEPSY_PRIV_EVAL_REC_1_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_1_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_1_##choice
#define EPILEPSY_PRIV_EVAL_REC_1_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_2
#define EPILEPSY_PRIV_EVAL_REC_1_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_2(...)                                                              \
    EPILEPSY_PRIV_EVAL_REC_2_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_2_GET_CHOICE(__VA_ARGS__))            \
    (EPILEPSY_PRIV_EVAL_REC_2_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_2_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_2_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_2_OVERLOAD(choice)                                                  \
    EPILEPSY_PRIV_EVAL_REC_2_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_2_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_2_##choice
#define EPILEPSY_PRIV_EVAL_REC_2_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_3
#define EPILEPSY_PRIV_EVAL_REC_2_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_3(...)                                                              \
    EPILEPSY_PRIV_EVAL_REC_3_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_3_GET_CHOICE(__VA_ARGS__))            \
    (EPILEPSY_PRIV_EVAL_REC_3_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_3_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_3_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_3_OVERLOAD(choice)                                                  \
    EPILEPSY_PRIV_EVAL_REC_3_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_3_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_3_##choice
#define EPILEPSY_PRIV_EVAL_REC_3_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_4
#define EPILEPSY_PRIV_EVAL_REC_3_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_4(...)                                                              \
    EPILEPSY_PRIV_EVAL_REC_4_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_4_GET_CHOICE(__VA_ARGS__))            \
    (EPILEPSY_PRIV_EVAL_REC_4_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_4_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_4_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_4_OVERLOAD(choice)                                                  \
    EPILEPSY_PRIV_EVAL_REC_4_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_4_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_4_##choice
#define EPILEPSY_PRIV_EVAL_REC_4_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_5
#define EPILEPSY_PRIV_EVAL_REC_4_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_5(...)                                                              \
    EPILEPSY_PRIV_EVAL_REC_5_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_5_GET_CHOICE(__VA_ARGS__))            \
    (EPILEPSY_PRIV_EVAL_REC_5_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_5_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_5_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_5_OVERLOAD(choice)                                                  \
    EPILEPSY_PRIV_EVAL_REC_5_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_5_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_5_##choice
#define EPILEPSY_PRIV_EVAL_REC_5_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_6
#define EPILEPSY_PRIV_EVAL_REC_5_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_6(...)                                                              \
    EPILEPSY_PRIV_EVAL_REC_6_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_6_GET_CHOICE(__VA_ARGS__))            \
    (EPILEPSY_PRIV_EVAL_REC_6_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_6_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_6_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_6_OVERLOAD(choice)                                                  \
    EPILEPSY_PRIV_EVAL_REC_6_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_6_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_6_##choice
#define EPILEPSY_PRIV_EVAL_REC_6_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_7
#define EPILEPSY_PRIV_EVAL_REC_6_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_7(...)                                                              \
    EPILEPSY_PRIV_EVAL_REC_7_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_7_GET_CHOICE(__VA_ARGS__))            \
    (EPILEPSY_PRIV_EVAL_REC_7_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_7_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_7_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_7_OVERLOAD(choice)                                                  \
    EPILEPSY_PRIV_EVAL_REC_7_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_7_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_7_##choice
#define EPILEPSY_PRIV_EVAL_REC_7_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_8
#define EPILEPSY_PRIV_EVAL_REC_7_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_8(...)                                                              \
    EPILEPSY_PRIV_EVAL_REC_8_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_8_GET_CHOICE(__VA_ARGS__))            \
    (EPILEPSY_PRIV_EVAL_REC_8_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_8_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_8_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_8_OVERLOAD(choice)                                                  \
    EPILEPSY_PRIV_EVAL_REC_8_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_8_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_8_##choice
#define EPILEPSY_PRIV_EVAL_REC_8_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_9
#define EPILEPSY_PRIV_EVAL_REC_8_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_9(...)                                                              \
    EPILEPSY_PRIV_EVAL_REC_9_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_9_GET_CHOICE(__VA_ARGS__))            \
    (EPILEPSY_PRIV_EVAL_REC_9_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_9_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_9_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_9_OVERLOAD(choice)                                                  \
    EPILEPSY_PRIV_EVAL_REC_9_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_9_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_9_##choice
#define EPILEPSY_PRIV_EVAL_REC_9_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_10
#define EPILEPSY_PRIV_EVAL_REC_9_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_10(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_10_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_10_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_10_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_10_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_10_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_10_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_10_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_10_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_10_##choice
#define EPILEPSY_PRIV_EVAL_REC_10_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_11
#define EPILEPSY_PRIV_EVAL_REC_10_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_11(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_11_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_11_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_11_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_11_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_11_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_11_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_11_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_11_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_11_##choice
#define EPILEPSY_PRIV_EVAL_REC_11_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_12
#define EPILEPSY_PRIV_EVAL_REC_11_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_12(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_12_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_12_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_12_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_12_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_12_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_12_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_12_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_12_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_12_##choice
#define EPILEPSY_PRIV_EVAL_REC_12_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_13
#define EPILEPSY_PRIV_EVAL_REC_12_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_13(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_13_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_13_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_13_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_13_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_13_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_13_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_13_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_13_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_13_##choice
#define EPILEPSY_PRIV_EVAL_REC_13_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_14
#define EPILEPSY_PRIV_EVAL_REC_13_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_14(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_14_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_14_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_14_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_14_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_14_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_14_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_14_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_14_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_14_##choice
#define EPILEPSY_PRIV_EVAL_REC_14_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_15
#define EPILEPSY_PRIV_EVAL_REC_14_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_15(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_15_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_15_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_15_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_15_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_15_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_15_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_15_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_15_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_15_##choice
#define EPILEPSY_PRIV_EVAL_REC_15_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_16
#define EPILEPSY_PRIV_EVAL_REC_15_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_16(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_16_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_16_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_16_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_16_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_16_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_16_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_16_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_16_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_16_##choice
#define EPILEPSY_PRIV_EVAL_REC_16_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_17
#define EPILEPSY_PRIV_EVAL_REC_16_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_17(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_17_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_17_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_17_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_17_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_17_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_17_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_17_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_17_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_17_##choice
#define EPILEPSY_PRIV_EVAL_REC_17_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_18
#define EPILEPSY_PRIV_EVAL_REC_17_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_18(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_18_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_18_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_18_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_18_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_18_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_18_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_18_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_18_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_18_##choice
#define EPILEPSY_PRIV_EVAL_REC_18_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_19
#define EPILEPSY_PRIV_EVAL_REC_18_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_19(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_19_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_19_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_19_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_19_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_19_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_19_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_19_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_19_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_19_##choice
#define EPILEPSY_PRIV_EVAL_REC_19_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_20
#define EPILEPSY_PRIV_EVAL_REC_19_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_20(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_20_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_20_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_20_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_20_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_20_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_20_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_20_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_20_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_20_##choice
#define EPILEPSY_PRIV_EVAL_REC_20_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_21
#define EPILEPSY_PRIV_EVAL_REC_20_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_21(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_21_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_21_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_21_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_21_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_21_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_21_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_21_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_21_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_21_##choice
#define EPILEPSY_PRIV_EVAL_REC_21_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_22
#define EPILEPSY_PRIV_EVAL_REC_21_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_22(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_22_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_22_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_22_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_22_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_22_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_22_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_22_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_22_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_22_##choice
#define EPILEPSY_PRIV_EVAL_REC_22_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_23
#define EPILEPSY_PRIV_EVAL_REC_22_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_23(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_23_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_23_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_23_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_23_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_23_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_23_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_23_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_23_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_23_##choice
#define EPILEPSY_PRIV_EVAL_REC_23_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_24
#define EPILEPSY_PRIV_EVAL_REC_23_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_24(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_24_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_24_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_24_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_24_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_24_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_24_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_24_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_24_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_24_##choice
#define EPILEPSY_PRIV_EVAL_REC_24_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_25
#define EPILEPSY_PRIV_EVAL_REC_24_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_25(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_25_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_25_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_25_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_25_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_25_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_25_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_25_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_25_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_25_##choice
#define EPILEPSY_PRIV_EVAL_REC_25_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_26
#define EPILEPSY_PRIV_EVAL_REC_25_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_26(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_26_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_26_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_26_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_26_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_26_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_26_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_26_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_26_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_26_##choice
#define EPILEPSY_PRIV_EVAL_REC_26_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_27
#define EPILEPSY_PRIV_EVAL_REC_26_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_27(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_27_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_27_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_27_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_27_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_27_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_27_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_27_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_27_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_27_##choice
#define EPILEPSY_PRIV_EVAL_REC_27_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_28
#define EPILEPSY_PRIV_EVAL_REC_27_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_28(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_28_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_28_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_28_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_28_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_28_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_28_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_28_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_28_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_28_##choice
#define EPILEPSY_PRIV_EVAL_REC_28_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_29
#define EPILEPSY_PRIV_EVAL_REC_28_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_29(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_29_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_29_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_29_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_29_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_29_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_29_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_29_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_29_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_29_##choice
#define EPILEPSY_PRIV_EVAL_REC_29_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_30
#define EPILEPSY_PRIV_EVAL_REC_29_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_30(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_30_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_30_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_30_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_30_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_30_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_30_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_30_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_30_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_30_##choice
#define EPILEPSY_PRIV_EVAL_REC_30_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_31
#define EPILEPSY_PRIV_EVAL_REC_30_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_31(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_31_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_31_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_31_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_31_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_31_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_31_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_31_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_31_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_31_##choice
#define EPILEPSY_PRIV_EVAL_REC_31_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_32
#define EPILEPSY_PRIV_EVAL_REC_31_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_32(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_32_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_32_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_32_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_32_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_32_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_32_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_32_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_32_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_32_##choice
#define EPILEPSY_PRIV_EVAL_REC_32_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_33
#define EPILEPSY_PRIV_EVAL_REC_32_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_33(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_33_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_33_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_33_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_33_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_33_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_33_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_33_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_33_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_33_##choice
#define EPILEPSY_PRIV_EVAL_REC_33_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_34
#define EPILEPSY_PRIV_EVAL_REC_33_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_34(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_34_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_34_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_34_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_34_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_34_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_34_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_34_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_34_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_34_##choice
#define EPILEPSY_PRIV_EVAL_REC_34_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_35
#define EPILEPSY_PRIV_EVAL_REC_34_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_35(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_35_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_35_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_35_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_35_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_35_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_35_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_35_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_35_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_35_##choice
#define EPILEPSY_PRIV_EVAL_REC_35_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_36
#define EPILEPSY_PRIV_EVAL_REC_35_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_36(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_36_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_36_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_36_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_36_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_36_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_36_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_36_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_36_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_36_##choice
#define EPILEPSY_PRIV_EVAL_REC_36_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_37
#define EPILEPSY_PRIV_EVAL_REC_36_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_37(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_37_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_37_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_37_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_37_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_37_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_37_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_37_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_37_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_37_##choice
#define EPILEPSY_PRIV_EVAL_REC_37_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_38
#define EPILEPSY_PRIV_EVAL_REC_37_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_38(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_38_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_38_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_38_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_38_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_38_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_38_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_38_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_38_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_38_##choice
#define EPILEPSY_PRIV_EVAL_REC_38_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_39
#define EPILEPSY_PRIV_EVAL_REC_38_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_39(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_39_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_39_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_39_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_39_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_39_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_39_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_39_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_39_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_39_##choice
#define EPILEPSY_PRIV_EVAL_REC_39_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_40
#define EPILEPSY_PRIV_EVAL_REC_39_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_40(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_40_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_40_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_40_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_40_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_40_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_40_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_40_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_40_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_40_##choice
#define EPILEPSY_PRIV_EVAL_REC_40_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_41
#define EPILEPSY_PRIV_EVAL_REC_40_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_41(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_41_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_41_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_41_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_41_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_41_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_41_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_41_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_41_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_41_##choice
#define EPILEPSY_PRIV_EVAL_REC_41_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_42
#define EPILEPSY_PRIV_EVAL_REC_41_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_42(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_42_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_42_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_42_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_42_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_42_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_42_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_42_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_42_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_42_##choice
#define EPILEPSY_PRIV_EVAL_REC_42_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_43
#define EPILEPSY_PRIV_EVAL_REC_42_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_43(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_43_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_43_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_43_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_43_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_43_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_43_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_43_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_43_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_43_##choice
#define EPILEPSY_PRIV_EVAL_REC_43_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_44
#define EPILEPSY_PRIV_EVAL_REC_43_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_44(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_44_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_44_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_44_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_44_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_44_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_44_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_44_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_44_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_44_##choice
#define EPILEPSY_PRIV_EVAL_REC_44_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_45
#define EPILEPSY_PRIV_EVAL_REC_44_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_45(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_45_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_45_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_45_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_45_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_45_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_45_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_45_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_45_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_45_##choice
#define EPILEPSY_PRIV_EVAL_REC_45_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_46
#define EPILEPSY_PRIV_EVAL_REC_45_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_46(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_46_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_46_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_46_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_46_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_46_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_46_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_46_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_46_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_46_##choice
#define EPILEPSY_PRIV_EVAL_REC_46_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_47
#define EPILEPSY_PRIV_EVAL_REC_46_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_47(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_47_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_47_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_47_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_47_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_47_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_47_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_47_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_47_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_47_##choice
#define EPILEPSY_PRIV_EVAL_REC_47_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_48
#define EPILEPSY_PRIV_EVAL_REC_47_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_48(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_48_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_48_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_48_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_48_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_48_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_48_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_48_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_48_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_48_##choice
#define EPILEPSY_PRIV_EVAL_REC_48_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_49
#define EPILEPSY_PRIV_EVAL_REC_48_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_49(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_49_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_49_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_49_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_49_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_49_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_49_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_49_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_49_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_49_##choice
#define EPILEPSY_PRIV_EVAL_REC_49_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_50
#define EPILEPSY_PRIV_EVAL_REC_49_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_50(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_50_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_50_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_50_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_50_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_50_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_50_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_50_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_50_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_50_##choice
#define EPILEPSY_PRIV_EVAL_REC_50_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_51
#define EPILEPSY_PRIV_EVAL_REC_50_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_51(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_51_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_51_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_51_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_51_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_51_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_51_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_51_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_51_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_51_##choice
#define EPILEPSY_PRIV_EVAL_REC_51_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_52
#define EPILEPSY_PRIV_EVAL_REC_51_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_52(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_52_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_52_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_52_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_52_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_52_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_52_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_52_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_52_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_52_##choice
#define EPILEPSY_PRIV_EVAL_REC_52_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_53
#define EPILEPSY_PRIV_EVAL_REC_52_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_53(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_53_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_53_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_53_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_53_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_53_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_53_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_53_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_53_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_53_##choice
#define EPILEPSY_PRIV_EVAL_REC_53_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_54
#define EPILEPSY_PRIV_EVAL_REC_53_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_54(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_54_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_54_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_54_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_54_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_54_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_54_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_54_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_54_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_54_##choice
#define EPILEPSY_PRIV_EVAL_REC_54_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_55
#define EPILEPSY_PRIV_EVAL_REC_54_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_55(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_55_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_55_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_55_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_55_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_55_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_55_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_55_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_55_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_55_##choice
#define EPILEPSY_PRIV_EVAL_REC_55_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_56
#define EPILEPSY_PRIV_EVAL_REC_55_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_56(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_56_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_56_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_56_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_56_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_56_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_56_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_56_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_56_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_56_##choice
#define EPILEPSY_PRIV_EVAL_REC_56_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_57
#define EPILEPSY_PRIV_EVAL_REC_56_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_57(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_57_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_57_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_57_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_57_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_57_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_57_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_57_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_57_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_57_##choice
#define EPILEPSY_PRIV_EVAL_REC_57_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_58
#define EPILEPSY_PRIV_EVAL_REC_57_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_58(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_58_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_58_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_58_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_58_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_58_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_58_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_58_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_58_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_58_##choice
#define EPILEPSY_PRIV_EVAL_REC_58_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_59
#define EPILEPSY_PRIV_EVAL_REC_58_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_59(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_59_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_59_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_59_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_59_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_59_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_59_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_59_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_59_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_59_##choice
#define EPILEPSY_PRIV_EVAL_REC_59_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_60
#define EPILEPSY_PRIV_EVAL_REC_59_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_60(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_60_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_60_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_60_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_60_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_60_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_60_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_60_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_60_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_60_##choice
#define EPILEPSY_PRIV_EVAL_REC_60_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_61
#define EPILEPSY_PRIV_EVAL_REC_60_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_61(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_61_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_61_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_61_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_61_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_61_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_61_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_61_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_61_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_61_##choice
#define EPILEPSY_PRIV_EVAL_REC_61_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_62
#define EPILEPSY_PRIV_EVAL_REC_61_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_62(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_62_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_62_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_62_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_62_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_62_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_62_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_62_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_62_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_62_##choice
#define EPILEPSY_PRIV_EVAL_REC_62_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_63
#define EPILEPSY_PRIV_EVAL_REC_62_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_63(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_63_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_63_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_63_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_63_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_63_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_63_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_63_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_63_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_63_##choice
#define EPILEPSY_PRIV_EVAL_REC_63_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_64
#define EPILEPSY_PRIV_EVAL_REC_63_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_64(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_64_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_64_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_64_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_64_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_64_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_64_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_64_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_64_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_64_##choice
#define EPILEPSY_PRIV_EVAL_REC_64_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_65
#define EPILEPSY_PRIV_EVAL_REC_64_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_65(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_65_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_65_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_65_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_65_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_65_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_65_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_65_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_65_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_65_##choice
#define EPILEPSY_PRIV_EVAL_REC_65_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_66
#define EPILEPSY_PRIV_EVAL_REC_65_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_66(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_66_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_66_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_66_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_66_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_66_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_66_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_66_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_66_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_66_##choice
#define EPILEPSY_PRIV_EVAL_REC_66_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_67
#define EPILEPSY_PRIV_EVAL_REC_66_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_67(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_67_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_67_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_67_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_67_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_67_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_67_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_67_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_67_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_67_##choice
#define EPILEPSY_PRIV_EVAL_REC_67_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_68
#define EPILEPSY_PRIV_EVAL_REC_67_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_68(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_68_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_68_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_68_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_68_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_68_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_68_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_68_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_68_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_68_##choice
#define EPILEPSY_PRIV_EVAL_REC_68_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_69
#define EPILEPSY_PRIV_EVAL_REC_68_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_69(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_69_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_69_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_69_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_69_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_69_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_69_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_69_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_69_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_69_##choice
#define EPILEPSY_PRIV_EVAL_REC_69_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_70
#define EPILEPSY_PRIV_EVAL_REC_69_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_70(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_70_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_70_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_70_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_70_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_70_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_70_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_70_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_70_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_70_##choice
#define EPILEPSY_PRIV_EVAL_REC_70_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_71
#define EPILEPSY_PRIV_EVAL_REC_70_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_71(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_71_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_71_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_71_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_71_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_71_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_71_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_71_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_71_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_71_##choice
#define EPILEPSY_PRIV_EVAL_REC_71_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_72
#define EPILEPSY_PRIV_EVAL_REC_71_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_72(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_72_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_72_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_72_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_72_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_72_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_72_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_72_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_72_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_72_##choice
#define EPILEPSY_PRIV_EVAL_REC_72_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_73
#define EPILEPSY_PRIV_EVAL_REC_72_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_73(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_73_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_73_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_73_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_73_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_73_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_73_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_73_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_73_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_73_##choice
#define EPILEPSY_PRIV_EVAL_REC_73_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_74
#define EPILEPSY_PRIV_EVAL_REC_73_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_74(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_74_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_74_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_74_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_74_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_74_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_74_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_74_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_74_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_74_##choice
#define EPILEPSY_PRIV_EVAL_REC_74_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_75
#define EPILEPSY_PRIV_EVAL_REC_74_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_75(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_75_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_75_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_75_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_75_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_75_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_75_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_75_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_75_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_75_##choice
#define EPILEPSY_PRIV_EVAL_REC_75_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_76
#define EPILEPSY_PRIV_EVAL_REC_75_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_76(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_76_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_76_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_76_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_76_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_76_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_76_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_76_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_76_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_76_##choice
#define EPILEPSY_PRIV_EVAL_REC_76_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_77
#define EPILEPSY_PRIV_EVAL_REC_76_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_77(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_77_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_77_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_77_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_77_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_77_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_77_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_77_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_77_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_77_##choice
#define EPILEPSY_PRIV_EVAL_REC_77_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_78
#define EPILEPSY_PRIV_EVAL_REC_77_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_78(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_78_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_78_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_78_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_78_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_78_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_78_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_78_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_78_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_78_##choice
#define EPILEPSY_PRIV_EVAL_REC_78_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_79
#define EPILEPSY_PRIV_EVAL_REC_78_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_79(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_79_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_79_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_79_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_79_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_79_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_79_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_79_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_79_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_79_##choice
#define EPILEPSY_PRIV_EVAL_REC_79_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_80
#define EPILEPSY_PRIV_EVAL_REC_79_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_80(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_80_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_80_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_80_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_80_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_80_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_80_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_80_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_80_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_80_##choice
#define EPILEPSY_PRIV_EVAL_REC_80_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_81
#define EPILEPSY_PRIV_EVAL_REC_80_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_81(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_81_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_81_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_81_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_81_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_81_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_81_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_81_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_81_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_81_##choice
#define EPILEPSY_PRIV_EVAL_REC_81_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_82
#define EPILEPSY_PRIV_EVAL_REC_81_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_82(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_82_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_82_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_82_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_82_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_82_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_82_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_82_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_82_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_82_##choice
#define EPILEPSY_PRIV_EVAL_REC_82_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_83
#define EPILEPSY_PRIV_EVAL_REC_82_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_83(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_83_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_83_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_83_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_83_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_83_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_83_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_83_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_83_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_83_##choice
#define EPILEPSY_PRIV_EVAL_REC_83_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_84
#define EPILEPSY_PRIV_EVAL_REC_83_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_84(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_84_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_84_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_84_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_84_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_84_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_84_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_84_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_84_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_84_##choice
#define EPILEPSY_PRIV_EVAL_REC_84_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_85
#define EPILEPSY_PRIV_EVAL_REC_84_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_85(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_85_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_85_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_85_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_85_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_85_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_85_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_85_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_85_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_85_##choice
#define EPILEPSY_PRIV_EVAL_REC_85_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_86
#define EPILEPSY_PRIV_EVAL_REC_85_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_86(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_86_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_86_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_86_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_86_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_86_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_86_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_86_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_86_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_86_##choice
#define EPILEPSY_PRIV_EVAL_REC_86_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_87
#define EPILEPSY_PRIV_EVAL_REC_86_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_87(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_87_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_87_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_87_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_87_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_87_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_87_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_87_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_87_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_87_##choice
#define EPILEPSY_PRIV_EVAL_REC_87_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_88
#define EPILEPSY_PRIV_EVAL_REC_87_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_88(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_88_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_88_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_88_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_88_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_88_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_88_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_88_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_88_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_88_##choice
#define EPILEPSY_PRIV_EVAL_REC_88_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_89
#define EPILEPSY_PRIV_EVAL_REC_88_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_89(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_89_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_89_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_89_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_89_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_89_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_89_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_89_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_89_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_89_##choice
#define EPILEPSY_PRIV_EVAL_REC_89_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_90
#define EPILEPSY_PRIV_EVAL_REC_89_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_90(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_90_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_90_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_90_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_90_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_90_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_90_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_90_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_90_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_90_##choice
#define EPILEPSY_PRIV_EVAL_REC_90_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_91
#define EPILEPSY_PRIV_EVAL_REC_90_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_91(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_91_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_91_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_91_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_91_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_91_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_91_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_91_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_91_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_91_##choice
#define EPILEPSY_PRIV_EVAL_REC_91_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_92
#define EPILEPSY_PRIV_EVAL_REC_91_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_92(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_92_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_92_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_92_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_92_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_92_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_92_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_92_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_92_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_92_##choice
#define EPILEPSY_PRIV_EVAL_REC_92_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_93
#define EPILEPSY_PRIV_EVAL_REC_92_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_93(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_93_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_93_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_93_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_93_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_93_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_93_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_93_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_93_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_93_##choice
#define EPILEPSY_PRIV_EVAL_REC_93_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_94
#define EPILEPSY_PRIV_EVAL_REC_93_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_94(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_94_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_94_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_94_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_94_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_94_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_94_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_94_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_94_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_94_##choice
#define EPILEPSY_PRIV_EVAL_REC_94_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_95
#define EPILEPSY_PRIV_EVAL_REC_94_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_95(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_95_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_95_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_95_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_95_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_95_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_95_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_95_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_95_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_95_##choice
#define EPILEPSY_PRIV_EVAL_REC_95_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_96
#define EPILEPSY_PRIV_EVAL_REC_95_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_96(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_96_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_96_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_96_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_96_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_96_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_96_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_96_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_96_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_96_##choice
#define EPILEPSY_PRIV_EVAL_REC_96_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_97
#define EPILEPSY_PRIV_EVAL_REC_96_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_97(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_97_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_97_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_97_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_97_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_97_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_97_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_97_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_97_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_97_##choice
#define EPILEPSY_PRIV_EVAL_REC_97_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_98
#define EPILEPSY_PRIV_EVAL_REC_97_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_98(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_98_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_98_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_98_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_98_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_98_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_98_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_98_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_98_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_98_##choice
#define EPILEPSY_PRIV_EVAL_REC_98_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_99
#define EPILEPSY_PRIV_EVAL_REC_98_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_99(...)                                                             \
    EPILEPSY_PRIV_EVAL_REC_99_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_99_GET_CHOICE(__VA_ARGS__))          \
    (EPILEPSY_PRIV_EVAL_REC_99_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_99_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_99_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_99_OVERLOAD(choice)                                                 \
    EPILEPSY_PRIV_EVAL_REC_99_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_99_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_99_##choice
#define EPILEPSY_PRIV_EVAL_REC_99_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_100
#define EPILEPSY_PRIV_EVAL_REC_99_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_100(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_100_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_100_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_100_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_100_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_100_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_100_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_100_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_100_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_100_##choice
#define EPILEPSY_PRIV_EVAL_REC_100_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_101
#define EPILEPSY_PRIV_EVAL_REC_100_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_101(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_101_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_101_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_101_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_101_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_101_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_101_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_101_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_101_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_101_##choice
#define EPILEPSY_PRIV_EVAL_REC_101_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_102
#define EPILEPSY_PRIV_EVAL_REC_101_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_102(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_102_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_102_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_102_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_102_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_102_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_102_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_102_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_102_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_102_##choice
#define EPILEPSY_PRIV_EVAL_REC_102_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_103
#define EPILEPSY_PRIV_EVAL_REC_102_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_103(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_103_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_103_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_103_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_103_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_103_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_103_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_103_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_103_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_103_##choice
#define EPILEPSY_PRIV_EVAL_REC_103_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_104
#define EPILEPSY_PRIV_EVAL_REC_103_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_104(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_104_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_104_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_104_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_104_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_104_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_104_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_104_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_104_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_104_##choice
#define EPILEPSY_PRIV_EVAL_REC_104_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_105
#define EPILEPSY_PRIV_EVAL_REC_104_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_105(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_105_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_105_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_105_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_105_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_105_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_105_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_105_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_105_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_105_##choice
#define EPILEPSY_PRIV_EVAL_REC_105_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_106
#define EPILEPSY_PRIV_EVAL_REC_105_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_106(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_106_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_106_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_106_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_106_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_106_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_106_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_106_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_106_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_106_##choice
#define EPILEPSY_PRIV_EVAL_REC_106_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_107
#define EPILEPSY_PRIV_EVAL_REC_106_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_107(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_107_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_107_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_107_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_107_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_107_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_107_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_107_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_107_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_107_##choice
#define EPILEPSY_PRIV_EVAL_REC_107_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_108
#define EPILEPSY_PRIV_EVAL_REC_107_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_108(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_108_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_108_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_108_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_108_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_108_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_108_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_108_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_108_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_108_##choice
#define EPILEPSY_PRIV_EVAL_REC_108_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_109
#define EPILEPSY_PRIV_EVAL_REC_108_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_109(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_109_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_109_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_109_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_109_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_109_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_109_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_109_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_109_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_109_##choice
#define EPILEPSY_PRIV_EVAL_REC_109_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_110
#define EPILEPSY_PRIV_EVAL_REC_109_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_110(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_110_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_110_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_110_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_110_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_110_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_110_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_110_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_110_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_110_##choice
#define EPILEPSY_PRIV_EVAL_REC_110_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_111
#define EPILEPSY_PRIV_EVAL_REC_110_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_111(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_111_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_111_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_111_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_111_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_111_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_111_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_111_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_111_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_111_##choice
#define EPILEPSY_PRIV_EVAL_REC_111_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_112
#define EPILEPSY_PRIV_EVAL_REC_111_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_112(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_112_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_112_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_112_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_112_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_112_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_112_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_112_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_112_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_112_##choice
#define EPILEPSY_PRIV_EVAL_REC_112_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_113
#define EPILEPSY_PRIV_EVAL_REC_112_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_113(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_113_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_113_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_113_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_113_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_113_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_113_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_113_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_113_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_113_##choice
#define EPILEPSY_PRIV_EVAL_REC_113_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_114
#define EPILEPSY_PRIV_EVAL_REC_113_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_114(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_114_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_114_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_114_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_114_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_114_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_114_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_114_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_114_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_114_##choice
#define EPILEPSY_PRIV_EVAL_REC_114_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_115
#define EPILEPSY_PRIV_EVAL_REC_114_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_115(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_115_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_115_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_115_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_115_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_115_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_115_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_115_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_115_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_115_##choice
#define EPILEPSY_PRIV_EVAL_REC_115_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_116
#define EPILEPSY_PRIV_EVAL_REC_115_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_116(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_116_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_116_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_116_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_116_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_116_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_116_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_116_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_116_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_116_##choice
#define EPILEPSY_PRIV_EVAL_REC_116_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_117
#define EPILEPSY_PRIV_EVAL_REC_116_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_117(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_117_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_117_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_117_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_117_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_117_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_117_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_117_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_117_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_117_##choice
#define EPILEPSY_PRIV_EVAL_REC_117_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_118
#define EPILEPSY_PRIV_EVAL_REC_117_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_118(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_118_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_118_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_118_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_118_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_118_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_118_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_118_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_118_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_118_##choice
#define EPILEPSY_PRIV_EVAL_REC_118_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_119
#define EPILEPSY_PRIV_EVAL_REC_118_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_119(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_119_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_119_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_119_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_119_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_119_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_119_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_119_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_119_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_119_##choice
#define EPILEPSY_PRIV_EVAL_REC_119_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_120
#define EPILEPSY_PRIV_EVAL_REC_119_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_120(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_120_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_120_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_120_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_120_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_120_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_120_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_120_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_120_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_120_##choice
#define EPILEPSY_PRIV_EVAL_REC_120_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_121
#define EPILEPSY_PRIV_EVAL_REC_120_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_121(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_121_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_121_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_121_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_121_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_121_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_121_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_121_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_121_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_121_##choice
#define EPILEPSY_PRIV_EVAL_REC_121_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_122
#define EPILEPSY_PRIV_EVAL_REC_121_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_122(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_122_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_122_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_122_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_122_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_122_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_122_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_122_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_122_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_122_##choice
#define EPILEPSY_PRIV_EVAL_REC_122_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_123
#define EPILEPSY_PRIV_EVAL_REC_122_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_123(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_123_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_123_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_123_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_123_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_123_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_123_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_123_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_123_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_123_##choice
#define EPILEPSY_PRIV_EVAL_REC_123_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_124
#define EPILEPSY_PRIV_EVAL_REC_123_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_124(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_124_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_124_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_124_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_124_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_124_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_124_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_124_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_124_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_124_##choice
#define EPILEPSY_PRIV_EVAL_REC_124_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_125
#define EPILEPSY_PRIV_EVAL_REC_124_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_125(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_125_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_125_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_125_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_125_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_125_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_125_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_125_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_125_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_125_##choice
#define EPILEPSY_PRIV_EVAL_REC_125_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_126
#define EPILEPSY_PRIV_EVAL_REC_125_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_126(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_126_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_126_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_126_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_126_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_126_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_126_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_126_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_126_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_126_##choice
#define EPILEPSY_PRIV_EVAL_REC_126_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_127
#define EPILEPSY_PRIV_EVAL_REC_126_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_127(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_127_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_127_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_127_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_127_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_127_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_127_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_127_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_127_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_127_##choice
#define EPILEPSY_PRIV_EVAL_REC_127_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_128
#define EPILEPSY_PRIV_EVAL_REC_127_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_128(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_128_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_128_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_128_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_128_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_128_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_128_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_128_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_128_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_128_##choice
#define EPILEPSY_PRIV_EVAL_REC_128_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_129
#define EPILEPSY_PRIV_EVAL_REC_128_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_129(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_129_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_129_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_129_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_129_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_129_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_129_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_129_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_129_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_129_##choice
#define EPILEPSY_PRIV_EVAL_REC_129_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_130
#define EPILEPSY_PRIV_EVAL_REC_129_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_130(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_130_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_130_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_130_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_130_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_130_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_130_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_130_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_130_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_130_##choice
#define EPILEPSY_PRIV_EVAL_REC_130_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_131
#define EPILEPSY_PRIV_EVAL_REC_130_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_131(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_131_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_131_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_131_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_131_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_131_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_131_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_131_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_131_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_131_##choice
#define EPILEPSY_PRIV_EVAL_REC_131_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_132
#define EPILEPSY_PRIV_EVAL_REC_131_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_132(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_132_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_132_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_132_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_132_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_132_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_132_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_132_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_132_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_132_##choice
#define EPILEPSY_PRIV_EVAL_REC_132_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_133
#define EPILEPSY_PRIV_EVAL_REC_132_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_133(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_133_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_133_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_133_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_133_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_133_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_133_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_133_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_133_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_133_##choice
#define EPILEPSY_PRIV_EVAL_REC_133_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_134
#define EPILEPSY_PRIV_EVAL_REC_133_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_134(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_134_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_134_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_134_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_134_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_134_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_134_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_134_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_134_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_134_##choice
#define EPILEPSY_PRIV_EVAL_REC_134_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_135
#define EPILEPSY_PRIV_EVAL_REC_134_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_135(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_135_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_135_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_135_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_135_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_135_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_135_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_135_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_135_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_135_##choice
#define EPILEPSY_PRIV_EVAL_REC_135_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_136
#define EPILEPSY_PRIV_EVAL_REC_135_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_136(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_136_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_136_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_136_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_136_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_136_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_136_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_136_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_136_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_136_##choice
#define EPILEPSY_PRIV_EVAL_REC_136_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_137
#define EPILEPSY_PRIV_EVAL_REC_136_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_137(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_137_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_137_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_137_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_137_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_137_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_137_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_137_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_137_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_137_##choice
#define EPILEPSY_PRIV_EVAL_REC_137_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_138
#define EPILEPSY_PRIV_EVAL_REC_137_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_138(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_138_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_138_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_138_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_138_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_138_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_138_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_138_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_138_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_138_##choice
#define EPILEPSY_PRIV_EVAL_REC_138_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_139
#define EPILEPSY_PRIV_EVAL_REC_138_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_139(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_139_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_139_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_139_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_139_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_139_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_139_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_139_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_139_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_139_##choice
#define EPILEPSY_PRIV_EVAL_REC_139_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_140
#define EPILEPSY_PRIV_EVAL_REC_139_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_140(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_140_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_140_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_140_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_140_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_140_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_140_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_140_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_140_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_140_##choice
#define EPILEPSY_PRIV_EVAL_REC_140_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_141
#define EPILEPSY_PRIV_EVAL_REC_140_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_141(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_141_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_141_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_141_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_141_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_141_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_141_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_141_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_141_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_141_##choice
#define EPILEPSY_PRIV_EVAL_REC_141_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_142
#define EPILEPSY_PRIV_EVAL_REC_141_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_142(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_142_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_142_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_142_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_142_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_142_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_142_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_142_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_142_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_142_##choice
#define EPILEPSY_PRIV_EVAL_REC_142_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_143
#define EPILEPSY_PRIV_EVAL_REC_142_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_143(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_143_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_143_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_143_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_143_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_143_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_143_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_143_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_143_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_143_##choice
#define EPILEPSY_PRIV_EVAL_REC_143_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_144
#define EPILEPSY_PRIV_EVAL_REC_143_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_144(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_144_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_144_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_144_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_144_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_144_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_144_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_144_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_144_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_144_##choice
#define EPILEPSY_PRIV_EVAL_REC_144_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_145
#define EPILEPSY_PRIV_EVAL_REC_144_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_145(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_145_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_145_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_145_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_145_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_145_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_145_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_145_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_145_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_145_##choice
#define EPILEPSY_PRIV_EVAL_REC_145_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_146
#define EPILEPSY_PRIV_EVAL_REC_145_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_146(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_146_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_146_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_146_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_146_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_146_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_146_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_146_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_146_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_146_##choice
#define EPILEPSY_PRIV_EVAL_REC_146_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_147
#define EPILEPSY_PRIV_EVAL_REC_146_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_147(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_147_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_147_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_147_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_147_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_147_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_147_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_147_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_147_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_147_##choice
#define EPILEPSY_PRIV_EVAL_REC_147_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_148
#define EPILEPSY_PRIV_EVAL_REC_147_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_148(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_148_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_148_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_148_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_148_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_148_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_148_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_148_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_148_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_148_##choice
#define EPILEPSY_PRIV_EVAL_REC_148_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_149
#define EPILEPSY_PRIV_EVAL_REC_148_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_149(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_149_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_149_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_149_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_149_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_149_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_149_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_149_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_149_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_149_##choice
#define EPILEPSY_PRIV_EVAL_REC_149_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_150
#define EPILEPSY_PRIV_EVAL_REC_149_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_150(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_150_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_150_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_150_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_150_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_150_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_150_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_150_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_150_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_150_##choice
#define EPILEPSY_PRIV_EVAL_REC_150_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_151
#define EPILEPSY_PRIV_EVAL_REC_150_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_151(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_151_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_151_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_151_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_151_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_151_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_151_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_151_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_151_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_151_##choice
#define EPILEPSY_PRIV_EVAL_REC_151_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_152
#define EPILEPSY_PRIV_EVAL_REC_151_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_152(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_152_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_152_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_152_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_152_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_152_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_152_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_152_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_152_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_152_##choice
#define EPILEPSY_PRIV_EVAL_REC_152_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_153
#define EPILEPSY_PRIV_EVAL_REC_152_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_153(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_153_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_153_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_153_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_153_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_153_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_153_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_153_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_153_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_153_##choice
#define EPILEPSY_PRIV_EVAL_REC_153_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_154
#define EPILEPSY_PRIV_EVAL_REC_153_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_154(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_154_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_154_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_154_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_154_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_154_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_154_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_154_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_154_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_154_##choice
#define EPILEPSY_PRIV_EVAL_REC_154_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_155
#define EPILEPSY_PRIV_EVAL_REC_154_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_155(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_155_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_155_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_155_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_155_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_155_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_155_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_155_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_155_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_155_##choice
#define EPILEPSY_PRIV_EVAL_REC_155_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_156
#define EPILEPSY_PRIV_EVAL_REC_155_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_156(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_156_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_156_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_156_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_156_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_156_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_156_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_156_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_156_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_156_##choice
#define EPILEPSY_PRIV_EVAL_REC_156_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_157
#define EPILEPSY_PRIV_EVAL_REC_156_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_157(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_157_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_157_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_157_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_157_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_157_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_157_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_157_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_157_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_157_##choice
#define EPILEPSY_PRIV_EVAL_REC_157_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_158
#define EPILEPSY_PRIV_EVAL_REC_157_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_158(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_158_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_158_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_158_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_158_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_158_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_158_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_158_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_158_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_158_##choice
#define EPILEPSY_PRIV_EVAL_REC_158_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_159
#define EPILEPSY_PRIV_EVAL_REC_158_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_159(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_159_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_159_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_159_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_159_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_159_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_159_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_159_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_159_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_159_##choice
#define EPILEPSY_PRIV_EVAL_REC_159_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_160
#define EPILEPSY_PRIV_EVAL_REC_159_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_160(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_160_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_160_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_160_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_160_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_160_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_160_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_160_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_160_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_160_##choice
#define EPILEPSY_PRIV_EVAL_REC_160_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_161
#define EPILEPSY_PRIV_EVAL_REC_160_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_161(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_161_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_161_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_161_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_161_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_161_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_161_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_161_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_161_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_161_##choice
#define EPILEPSY_PRIV_EVAL_REC_161_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_162
#define EPILEPSY_PRIV_EVAL_REC_161_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_162(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_162_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_162_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_162_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_162_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_162_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_162_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_162_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_162_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_162_##choice
#define EPILEPSY_PRIV_EVAL_REC_162_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_163
#define EPILEPSY_PRIV_EVAL_REC_162_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_163(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_163_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_163_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_163_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_163_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_163_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_163_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_163_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_163_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_163_##choice
#define EPILEPSY_PRIV_EVAL_REC_163_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_164
#define EPILEPSY_PRIV_EVAL_REC_163_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_164(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_164_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_164_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_164_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_164_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_164_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_164_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_164_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_164_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_164_##choice
#define EPILEPSY_PRIV_EVAL_REC_164_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_165
#define EPILEPSY_PRIV_EVAL_REC_164_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_165(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_165_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_165_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_165_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_165_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_165_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_165_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_165_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_165_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_165_##choice
#define EPILEPSY_PRIV_EVAL_REC_165_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_166
#define EPILEPSY_PRIV_EVAL_REC_165_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_166(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_166_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_166_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_166_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_166_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_166_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_166_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_166_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_166_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_166_##choice
#define EPILEPSY_PRIV_EVAL_REC_166_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_167
#define EPILEPSY_PRIV_EVAL_REC_166_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_167(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_167_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_167_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_167_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_167_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_167_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_167_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_167_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_167_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_167_##choice
#define EPILEPSY_PRIV_EVAL_REC_167_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_168
#define EPILEPSY_PRIV_EVAL_REC_167_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_168(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_168_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_168_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_168_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_168_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_168_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_168_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_168_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_168_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_168_##choice
#define EPILEPSY_PRIV_EVAL_REC_168_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_169
#define EPILEPSY_PRIV_EVAL_REC_168_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_169(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_169_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_169_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_169_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_169_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_169_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_169_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_169_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_169_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_169_##choice
#define EPILEPSY_PRIV_EVAL_REC_169_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_170
#define EPILEPSY_PRIV_EVAL_REC_169_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_170(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_170_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_170_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_170_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_170_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_170_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_170_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_170_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_170_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_170_##choice
#define EPILEPSY_PRIV_EVAL_REC_170_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_171
#define EPILEPSY_PRIV_EVAL_REC_170_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_171(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_171_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_171_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_171_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_171_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_171_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_171_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_171_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_171_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_171_##choice
#define EPILEPSY_PRIV_EVAL_REC_171_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_172
#define EPILEPSY_PRIV_EVAL_REC_171_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_172(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_172_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_172_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_172_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_172_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_172_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_172_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_172_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_172_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_172_##choice
#define EPILEPSY_PRIV_EVAL_REC_172_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_173
#define EPILEPSY_PRIV_EVAL_REC_172_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_173(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_173_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_173_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_173_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_173_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_173_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_173_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_173_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_173_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_173_##choice
#define EPILEPSY_PRIV_EVAL_REC_173_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_174
#define EPILEPSY_PRIV_EVAL_REC_173_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_174(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_174_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_174_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_174_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_174_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_174_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_174_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_174_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_174_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_174_##choice
#define EPILEPSY_PRIV_EVAL_REC_174_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_175
#define EPILEPSY_PRIV_EVAL_REC_174_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_175(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_175_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_175_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_175_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_175_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_175_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_175_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_175_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_175_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_175_##choice
#define EPILEPSY_PRIV_EVAL_REC_175_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_176
#define EPILEPSY_PRIV_EVAL_REC_175_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_176(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_176_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_176_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_176_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_176_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_176_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_176_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_176_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_176_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_176_##choice
#define EPILEPSY_PRIV_EVAL_REC_176_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_177
#define EPILEPSY_PRIV_EVAL_REC_176_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_177(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_177_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_177_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_177_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_177_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_177_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_177_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_177_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_177_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_177_##choice
#define EPILEPSY_PRIV_EVAL_REC_177_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_178
#define EPILEPSY_PRIV_EVAL_REC_177_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_178(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_178_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_178_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_178_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_178_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_178_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_178_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_178_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_178_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_178_##choice
#define EPILEPSY_PRIV_EVAL_REC_178_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_179
#define EPILEPSY_PRIV_EVAL_REC_178_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_179(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_179_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_179_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_179_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_179_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_179_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_179_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_179_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_179_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_179_##choice
#define EPILEPSY_PRIV_EVAL_REC_179_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_180
#define EPILEPSY_PRIV_EVAL_REC_179_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_180(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_180_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_180_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_180_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_180_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_180_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_180_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_180_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_180_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_180_##choice
#define EPILEPSY_PRIV_EVAL_REC_180_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_181
#define EPILEPSY_PRIV_EVAL_REC_180_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_181(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_181_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_181_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_181_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_181_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_181_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_181_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_181_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_181_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_181_##choice
#define EPILEPSY_PRIV_EVAL_REC_181_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_182
#define EPILEPSY_PRIV_EVAL_REC_181_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_182(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_182_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_182_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_182_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_182_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_182_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_182_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_182_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_182_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_182_##choice
#define EPILEPSY_PRIV_EVAL_REC_182_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_183
#define EPILEPSY_PRIV_EVAL_REC_182_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_183(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_183_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_183_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_183_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_183_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_183_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_183_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_183_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_183_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_183_##choice
#define EPILEPSY_PRIV_EVAL_REC_183_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_184
#define EPILEPSY_PRIV_EVAL_REC_183_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_184(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_184_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_184_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_184_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_184_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_184_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_184_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_184_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_184_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_184_##choice
#define EPILEPSY_PRIV_EVAL_REC_184_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_185
#define EPILEPSY_PRIV_EVAL_REC_184_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_185(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_185_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_185_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_185_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_185_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_185_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_185_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_185_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_185_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_185_##choice
#define EPILEPSY_PRIV_EVAL_REC_185_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_186
#define EPILEPSY_PRIV_EVAL_REC_185_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_186(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_186_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_186_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_186_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_186_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_186_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_186_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_186_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_186_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_186_##choice
#define EPILEPSY_PRIV_EVAL_REC_186_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_187
#define EPILEPSY_PRIV_EVAL_REC_186_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_187(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_187_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_187_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_187_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_187_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_187_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_187_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_187_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_187_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_187_##choice
#define EPILEPSY_PRIV_EVAL_REC_187_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_188
#define EPILEPSY_PRIV_EVAL_REC_187_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_188(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_188_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_188_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_188_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_188_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_188_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_188_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_188_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_188_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_188_##choice
#define EPILEPSY_PRIV_EVAL_REC_188_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_189
#define EPILEPSY_PRIV_EVAL_REC_188_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_189(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_189_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_189_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_189_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_189_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_189_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_189_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_189_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_189_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_189_##choice
#define EPILEPSY_PRIV_EVAL_REC_189_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_190
#define EPILEPSY_PRIV_EVAL_REC_189_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_190(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_190_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_190_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_190_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_190_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_190_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_190_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_190_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_190_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_190_##choice
#define EPILEPSY_PRIV_EVAL_REC_190_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_191
#define EPILEPSY_PRIV_EVAL_REC_190_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_191(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_191_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_191_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_191_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_191_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_191_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_191_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_191_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_191_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_191_##choice
#define EPILEPSY_PRIV_EVAL_REC_191_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_192
#define EPILEPSY_PRIV_EVAL_REC_191_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_192(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_192_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_192_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_192_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_192_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_192_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_192_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_192_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_192_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_192_##choice
#define EPILEPSY_PRIV_EVAL_REC_192_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_193
#define EPILEPSY_PRIV_EVAL_REC_192_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_193(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_193_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_193_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_193_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_193_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_193_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_193_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_193_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_193_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_193_##choice
#define EPILEPSY_PRIV_EVAL_REC_193_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_194
#define EPILEPSY_PRIV_EVAL_REC_193_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_194(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_194_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_194_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_194_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_194_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_194_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_194_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_194_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_194_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_194_##choice
#define EPILEPSY_PRIV_EVAL_REC_194_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_195
#define EPILEPSY_PRIV_EVAL_REC_194_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_195(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_195_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_195_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_195_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_195_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_195_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_195_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_195_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_195_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_195_##choice
#define EPILEPSY_PRIV_EVAL_REC_195_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_196
#define EPILEPSY_PRIV_EVAL_REC_195_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_196(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_196_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_196_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_196_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_196_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_196_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_196_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_196_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_196_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_196_##choice
#define EPILEPSY_PRIV_EVAL_REC_196_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_197
#define EPILEPSY_PRIV_EVAL_REC_196_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_197(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_197_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_197_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_197_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_197_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_197_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_197_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_197_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_197_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_197_##choice
#define EPILEPSY_PRIV_EVAL_REC_197_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_198
#define EPILEPSY_PRIV_EVAL_REC_197_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_198(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_198_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_198_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_198_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_198_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_198_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_198_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_198_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_198_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_198_##choice
#define EPILEPSY_PRIV_EVAL_REC_198_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_199
#define EPILEPSY_PRIV_EVAL_REC_198_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_199(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_199_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_199_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_199_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_199_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_199_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_199_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_199_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_199_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_199_##choice
#define EPILEPSY_PRIV_EVAL_REC_199_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_200
#define EPILEPSY_PRIV_EVAL_REC_199_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_200(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_200_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_200_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_200_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_200_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_200_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_200_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_200_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_200_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_200_##choice
#define EPILEPSY_PRIV_EVAL_REC_200_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_201
#define EPILEPSY_PRIV_EVAL_REC_200_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_201(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_201_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_201_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_201_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_201_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_201_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_201_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_201_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_201_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_201_##choice
#define EPILEPSY_PRIV_EVAL_REC_201_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_202
#define EPILEPSY_PRIV_EVAL_REC_201_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_202(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_202_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_202_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_202_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_202_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_202_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_202_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_202_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_202_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_202_##choice
#define EPILEPSY_PRIV_EVAL_REC_202_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_203
#define EPILEPSY_PRIV_EVAL_REC_202_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_203(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_203_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_203_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_203_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_203_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_203_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_203_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_203_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_203_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_203_##choice
#define EPILEPSY_PRIV_EVAL_REC_203_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_204
#define EPILEPSY_PRIV_EVAL_REC_203_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_204(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_204_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_204_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_204_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_204_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_204_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_204_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_204_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_204_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_204_##choice
#define EPILEPSY_PRIV_EVAL_REC_204_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_205
#define EPILEPSY_PRIV_EVAL_REC_204_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_205(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_205_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_205_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_205_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_205_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_205_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_205_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_205_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_205_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_205_##choice
#define EPILEPSY_PRIV_EVAL_REC_205_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_206
#define EPILEPSY_PRIV_EVAL_REC_205_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_206(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_206_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_206_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_206_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_206_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_206_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_206_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_206_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_206_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_206_##choice
#define EPILEPSY_PRIV_EVAL_REC_206_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_207
#define EPILEPSY_PRIV_EVAL_REC_206_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_207(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_207_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_207_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_207_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_207_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_207_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_207_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_207_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_207_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_207_##choice
#define EPILEPSY_PRIV_EVAL_REC_207_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_208
#define EPILEPSY_PRIV_EVAL_REC_207_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_208(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_208_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_208_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_208_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_208_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_208_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_208_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_208_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_208_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_208_##choice
#define EPILEPSY_PRIV_EVAL_REC_208_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_209
#define EPILEPSY_PRIV_EVAL_REC_208_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_209(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_209_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_209_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_209_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_209_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_209_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_209_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_209_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_209_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_209_##choice
#define EPILEPSY_PRIV_EVAL_REC_209_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_210
#define EPILEPSY_PRIV_EVAL_REC_209_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_210(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_210_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_210_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_210_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_210_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_210_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_210_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_210_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_210_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_210_##choice
#define EPILEPSY_PRIV_EVAL_REC_210_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_211
#define EPILEPSY_PRIV_EVAL_REC_210_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_211(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_211_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_211_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_211_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_211_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_211_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_211_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_211_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_211_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_211_##choice
#define EPILEPSY_PRIV_EVAL_REC_211_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_212
#define EPILEPSY_PRIV_EVAL_REC_211_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_212(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_212_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_212_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_212_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_212_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_212_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_212_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_212_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_212_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_212_##choice
#define EPILEPSY_PRIV_EVAL_REC_212_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_213
#define EPILEPSY_PRIV_EVAL_REC_212_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_213(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_213_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_213_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_213_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_213_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_213_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_213_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_213_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_213_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_213_##choice
#define EPILEPSY_PRIV_EVAL_REC_213_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_214
#define EPILEPSY_PRIV_EVAL_REC_213_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_214(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_214_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_214_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_214_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_214_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_214_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_214_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_214_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_214_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_214_##choice
#define EPILEPSY_PRIV_EVAL_REC_214_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_215
#define EPILEPSY_PRIV_EVAL_REC_214_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_215(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_215_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_215_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_215_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_215_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_215_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_215_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_215_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_215_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_215_##choice
#define EPILEPSY_PRIV_EVAL_REC_215_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_216
#define EPILEPSY_PRIV_EVAL_REC_215_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_216(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_216_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_216_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_216_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_216_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_216_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_216_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_216_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_216_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_216_##choice
#define EPILEPSY_PRIV_EVAL_REC_216_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_217
#define EPILEPSY_PRIV_EVAL_REC_216_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_217(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_217_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_217_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_217_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_217_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_217_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_217_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_217_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_217_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_217_##choice
#define EPILEPSY_PRIV_EVAL_REC_217_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_218
#define EPILEPSY_PRIV_EVAL_REC_217_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_218(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_218_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_218_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_218_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_218_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_218_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_218_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_218_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_218_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_218_##choice
#define EPILEPSY_PRIV_EVAL_REC_218_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_219
#define EPILEPSY_PRIV_EVAL_REC_218_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_219(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_219_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_219_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_219_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_219_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_219_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_219_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_219_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_219_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_219_##choice
#define EPILEPSY_PRIV_EVAL_REC_219_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_220
#define EPILEPSY_PRIV_EVAL_REC_219_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_220(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_220_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_220_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_220_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_220_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_220_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_220_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_220_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_220_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_220_##choice
#define EPILEPSY_PRIV_EVAL_REC_220_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_221
#define EPILEPSY_PRIV_EVAL_REC_220_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_221(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_221_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_221_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_221_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_221_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_221_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_221_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_221_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_221_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_221_##choice
#define EPILEPSY_PRIV_EVAL_REC_221_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_222
#define EPILEPSY_PRIV_EVAL_REC_221_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_222(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_222_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_222_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_222_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_222_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_222_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_222_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_222_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_222_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_222_##choice
#define EPILEPSY_PRIV_EVAL_REC_222_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_223
#define EPILEPSY_PRIV_EVAL_REC_222_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_223(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_223_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_223_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_223_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_223_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_223_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_223_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_223_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_223_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_223_##choice
#define EPILEPSY_PRIV_EVAL_REC_223_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_224
#define EPILEPSY_PRIV_EVAL_REC_223_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_224(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_224_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_224_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_224_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_224_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_224_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_224_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_224_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_224_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_224_##choice
#define EPILEPSY_PRIV_EVAL_REC_224_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_225
#define EPILEPSY_PRIV_EVAL_REC_224_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_225(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_225_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_225_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_225_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_225_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_225_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_225_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_225_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_225_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_225_##choice
#define EPILEPSY_PRIV_EVAL_REC_225_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_226
#define EPILEPSY_PRIV_EVAL_REC_225_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_226(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_226_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_226_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_226_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_226_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_226_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_226_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_226_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_226_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_226_##choice
#define EPILEPSY_PRIV_EVAL_REC_226_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_227
#define EPILEPSY_PRIV_EVAL_REC_226_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_227(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_227_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_227_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_227_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_227_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_227_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_227_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_227_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_227_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_227_##choice
#define EPILEPSY_PRIV_EVAL_REC_227_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_228
#define EPILEPSY_PRIV_EVAL_REC_227_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_228(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_228_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_228_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_228_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_228_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_228_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_228_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_228_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_228_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_228_##choice
#define EPILEPSY_PRIV_EVAL_REC_228_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_229
#define EPILEPSY_PRIV_EVAL_REC_228_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_229(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_229_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_229_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_229_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_229_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_229_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_229_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_229_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_229_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_229_##choice
#define EPILEPSY_PRIV_EVAL_REC_229_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_230
#define EPILEPSY_PRIV_EVAL_REC_229_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_230(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_230_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_230_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_230_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_230_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_230_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_230_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_230_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_230_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_230_##choice
#define EPILEPSY_PRIV_EVAL_REC_230_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_231
#define EPILEPSY_PRIV_EVAL_REC_230_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_231(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_231_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_231_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_231_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_231_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_231_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_231_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_231_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_231_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_231_##choice
#define EPILEPSY_PRIV_EVAL_REC_231_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_232
#define EPILEPSY_PRIV_EVAL_REC_231_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_232(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_232_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_232_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_232_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_232_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_232_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_232_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_232_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_232_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_232_##choice
#define EPILEPSY_PRIV_EVAL_REC_232_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_233
#define EPILEPSY_PRIV_EVAL_REC_232_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_233(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_233_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_233_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_233_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_233_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_233_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_233_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_233_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_233_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_233_##choice
#define EPILEPSY_PRIV_EVAL_REC_233_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_234
#define EPILEPSY_PRIV_EVAL_REC_233_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_234(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_234_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_234_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_234_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_234_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_234_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_234_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_234_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_234_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_234_##choice
#define EPILEPSY_PRIV_EVAL_REC_234_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_235
#define EPILEPSY_PRIV_EVAL_REC_234_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_235(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_235_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_235_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_235_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_235_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_235_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_235_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_235_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_235_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_235_##choice
#define EPILEPSY_PRIV_EVAL_REC_235_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_236
#define EPILEPSY_PRIV_EVAL_REC_235_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_236(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_236_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_236_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_236_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_236_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_236_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_236_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_236_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_236_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_236_##choice
#define EPILEPSY_PRIV_EVAL_REC_236_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_237
#define EPILEPSY_PRIV_EVAL_REC_236_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_237(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_237_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_237_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_237_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_237_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_237_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_237_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_237_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_237_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_237_##choice
#define EPILEPSY_PRIV_EVAL_REC_237_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_238
#define EPILEPSY_PRIV_EVAL_REC_237_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_238(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_238_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_238_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_238_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_238_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_238_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_238_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_238_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_238_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_238_##choice
#define EPILEPSY_PRIV_EVAL_REC_238_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_239
#define EPILEPSY_PRIV_EVAL_REC_238_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_239(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_239_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_239_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_239_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_239_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_239_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_239_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_239_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_239_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_239_##choice
#define EPILEPSY_PRIV_EVAL_REC_239_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_240
#define EPILEPSY_PRIV_EVAL_REC_239_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_240(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_240_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_240_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_240_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_240_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_240_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_240_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_240_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_240_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_240_##choice
#define EPILEPSY_PRIV_EVAL_REC_240_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_241
#define EPILEPSY_PRIV_EVAL_REC_240_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_241(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_241_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_241_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_241_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_241_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_241_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_241_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_241_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_241_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_241_##choice
#define EPILEPSY_PRIV_EVAL_REC_241_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_242
#define EPILEPSY_PRIV_EVAL_REC_241_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_242(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_242_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_242_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_242_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_242_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_242_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_242_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_242_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_242_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_242_##choice
#define EPILEPSY_PRIV_EVAL_REC_242_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_243
#define EPILEPSY_PRIV_EVAL_REC_242_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_243(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_243_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_243_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_243_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_243_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_243_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_243_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_243_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_243_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_243_##choice
#define EPILEPSY_PRIV_EVAL_REC_243_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_244
#define EPILEPSY_PRIV_EVAL_REC_243_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_244(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_244_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_244_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_244_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_244_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_244_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_244_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_244_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_244_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_244_##choice
#define EPILEPSY_PRIV_EVAL_REC_244_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_245
#define EPILEPSY_PRIV_EVAL_REC_244_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_245(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_245_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_245_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_245_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_245_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_245_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_245_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_245_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_245_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_245_##choice
#define EPILEPSY_PRIV_EVAL_REC_245_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_246
#define EPILEPSY_PRIV_EVAL_REC_245_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_246(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_246_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_246_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_246_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_246_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_246_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_246_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_246_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_246_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_246_##choice
#define EPILEPSY_PRIV_EVAL_REC_246_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_247
#define EPILEPSY_PRIV_EVAL_REC_246_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_247(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_247_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_247_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_247_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_247_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_247_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_247_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_247_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_247_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_247_##choice
#define EPILEPSY_PRIV_EVAL_REC_247_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_248
#define EPILEPSY_PRIV_EVAL_REC_247_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_248(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_248_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_248_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_248_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_248_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_248_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_248_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_248_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_248_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_248_##choice
#define EPILEPSY_PRIV_EVAL_REC_248_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_249
#define EPILEPSY_PRIV_EVAL_REC_248_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_249(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_249_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_249_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_249_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_249_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_249_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_249_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_249_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_249_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_249_##choice
#define EPILEPSY_PRIV_EVAL_REC_249_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_250
#define EPILEPSY_PRIV_EVAL_REC_249_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_250(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_250_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_250_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_250_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_250_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_250_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_250_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_250_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_250_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_250_##choice
#define EPILEPSY_PRIV_EVAL_REC_250_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_251
#define EPILEPSY_PRIV_EVAL_REC_250_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_251(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_251_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_251_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_251_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_251_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_251_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_251_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_251_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_251_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_251_##choice
#define EPILEPSY_PRIV_EVAL_REC_251_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_252
#define EPILEPSY_PRIV_EVAL_REC_251_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_252(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_252_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_252_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_252_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_252_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_252_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_252_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_252_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_252_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_252_##choice
#define EPILEPSY_PRIV_EVAL_REC_252_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_253
#define EPILEPSY_PRIV_EVAL_REC_252_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_253(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_253_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_253_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_253_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_253_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_253_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_253_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_253_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_253_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_253_##choice
#define EPILEPSY_PRIV_EVAL_REC_253_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_254
#define EPILEPSY_PRIV_EVAL_REC_253_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_254(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_254_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_254_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_254_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_254_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_254_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_254_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_254_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_254_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_254_##choice
#define EPILEPSY_PRIV_EVAL_REC_254_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_255
#define EPILEPSY_PRIV_EVAL_REC_254_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_255(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_255_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_255_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_255_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_255_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_255_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_255_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_255_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_255_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_255_##choice
#define EPILEPSY_PRIV_EVAL_REC_255_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_256
#define EPILEPSY_PRIV_EVAL_REC_255_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_256(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_256_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_256_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_256_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_256_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_256_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_256_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_256_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_256_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_256_##choice
#define EPILEPSY_PRIV_EVAL_REC_256_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_257
#define EPILEPSY_PRIV_EVAL_REC_256_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_257(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_257_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_257_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_257_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_257_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_257_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_257_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_257_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_257_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_257_##choice
#define EPILEPSY_PRIV_EVAL_REC_257_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_258
#define EPILEPSY_PRIV_EVAL_REC_257_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_258(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_258_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_258_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_258_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_258_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_258_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_258_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_258_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_258_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_258_##choice
#define EPILEPSY_PRIV_EVAL_REC_258_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_259
#define EPILEPSY_PRIV_EVAL_REC_258_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_259(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_259_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_259_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_259_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_259_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_259_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_259_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_259_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_259_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_259_##choice
#define EPILEPSY_PRIV_EVAL_REC_259_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_260
#define EPILEPSY_PRIV_EVAL_REC_259_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_260(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_260_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_260_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_260_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_260_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_260_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_260_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_260_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_260_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_260_##choice
#define EPILEPSY_PRIV_EVAL_REC_260_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_261
#define EPILEPSY_PRIV_EVAL_REC_260_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_261(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_261_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_261_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_261_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_261_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_261_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_261_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_261_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_261_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_261_##choice
#define EPILEPSY_PRIV_EVAL_REC_261_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_262
#define EPILEPSY_PRIV_EVAL_REC_261_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_262(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_262_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_262_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_262_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_262_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_262_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_262_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_262_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_262_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_262_##choice
#define EPILEPSY_PRIV_EVAL_REC_262_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_263
#define EPILEPSY_PRIV_EVAL_REC_262_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_263(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_263_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_263_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_263_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_263_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_263_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_263_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_263_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_263_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_263_##choice
#define EPILEPSY_PRIV_EVAL_REC_263_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_264
#define EPILEPSY_PRIV_EVAL_REC_263_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_264(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_264_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_264_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_264_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_264_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_264_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_264_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_264_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_264_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_264_##choice
#define EPILEPSY_PRIV_EVAL_REC_264_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_265
#define EPILEPSY_PRIV_EVAL_REC_264_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_265(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_265_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_265_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_265_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_265_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_265_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_265_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_265_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_265_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_265_##choice
#define EPILEPSY_PRIV_EVAL_REC_265_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_266
#define EPILEPSY_PRIV_EVAL_REC_265_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_266(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_266_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_266_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_266_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_266_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_266_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_266_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_266_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_266_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_266_##choice
#define EPILEPSY_PRIV_EVAL_REC_266_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_267
#define EPILEPSY_PRIV_EVAL_REC_266_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_267(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_267_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_267_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_267_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_267_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_267_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_267_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_267_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_267_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_267_##choice
#define EPILEPSY_PRIV_EVAL_REC_267_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_268
#define EPILEPSY_PRIV_EVAL_REC_267_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_268(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_268_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_268_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_268_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_268_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_268_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_268_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_268_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_268_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_268_##choice
#define EPILEPSY_PRIV_EVAL_REC_268_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_269
#define EPILEPSY_PRIV_EVAL_REC_268_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_269(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_269_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_269_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_269_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_269_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_269_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_269_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_269_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_269_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_269_##choice
#define EPILEPSY_PRIV_EVAL_REC_269_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_270
#define EPILEPSY_PRIV_EVAL_REC_269_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_270(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_270_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_270_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_270_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_270_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_270_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_270_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_270_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_270_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_270_##choice
#define EPILEPSY_PRIV_EVAL_REC_270_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_271
#define EPILEPSY_PRIV_EVAL_REC_270_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_271(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_271_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_271_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_271_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_271_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_271_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_271_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_271_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_271_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_271_##choice
#define EPILEPSY_PRIV_EVAL_REC_271_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_272
#define EPILEPSY_PRIV_EVAL_REC_271_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_272(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_272_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_272_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_272_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_272_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_272_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_272_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_272_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_272_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_272_##choice
#define EPILEPSY_PRIV_EVAL_REC_272_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_273
#define EPILEPSY_PRIV_EVAL_REC_272_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_273(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_273_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_273_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_273_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_273_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_273_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_273_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_273_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_273_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_273_##choice
#define EPILEPSY_PRIV_EVAL_REC_273_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_274
#define EPILEPSY_PRIV_EVAL_REC_273_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_274(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_274_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_274_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_274_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_274_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_274_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_274_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_274_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_274_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_274_##choice
#define EPILEPSY_PRIV_EVAL_REC_274_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_275
#define EPILEPSY_PRIV_EVAL_REC_274_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_275(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_275_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_275_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_275_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_275_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_275_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_275_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_275_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_275_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_275_##choice
#define EPILEPSY_PRIV_EVAL_REC_275_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_276
#define EPILEPSY_PRIV_EVAL_REC_275_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_276(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_276_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_276_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_276_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_276_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_276_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_276_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_276_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_276_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_276_##choice
#define EPILEPSY_PRIV_EVAL_REC_276_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_277
#define EPILEPSY_PRIV_EVAL_REC_276_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_277(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_277_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_277_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_277_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_277_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_277_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_277_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_277_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_277_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_277_##choice
#define EPILEPSY_PRIV_EVAL_REC_277_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_278
#define EPILEPSY_PRIV_EVAL_REC_277_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_278(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_278_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_278_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_278_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_278_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_278_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_278_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_278_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_278_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_278_##choice
#define EPILEPSY_PRIV_EVAL_REC_278_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_279
#define EPILEPSY_PRIV_EVAL_REC_278_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_279(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_279_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_279_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_279_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_279_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_279_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_279_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_279_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_279_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_279_##choice
#define EPILEPSY_PRIV_EVAL_REC_279_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_280
#define EPILEPSY_PRIV_EVAL_REC_279_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_280(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_280_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_280_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_280_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_280_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_280_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_280_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_280_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_280_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_280_##choice
#define EPILEPSY_PRIV_EVAL_REC_280_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_281
#define EPILEPSY_PRIV_EVAL_REC_280_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_281(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_281_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_281_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_281_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_281_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_281_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_281_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_281_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_281_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_281_##choice
#define EPILEPSY_PRIV_EVAL_REC_281_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_282
#define EPILEPSY_PRIV_EVAL_REC_281_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_282(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_282_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_282_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_282_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_282_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_282_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_282_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_282_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_282_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_282_##choice
#define EPILEPSY_PRIV_EVAL_REC_282_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_283
#define EPILEPSY_PRIV_EVAL_REC_282_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_283(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_283_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_283_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_283_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_283_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_283_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_283_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_283_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_283_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_283_##choice
#define EPILEPSY_PRIV_EVAL_REC_283_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_284
#define EPILEPSY_PRIV_EVAL_REC_283_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_284(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_284_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_284_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_284_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_284_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_284_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_284_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_284_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_284_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_284_##choice
#define EPILEPSY_PRIV_EVAL_REC_284_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_285
#define EPILEPSY_PRIV_EVAL_REC_284_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_285(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_285_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_285_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_285_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_285_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_285_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_285_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_285_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_285_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_285_##choice
#define EPILEPSY_PRIV_EVAL_REC_285_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_286
#define EPILEPSY_PRIV_EVAL_REC_285_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_286(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_286_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_286_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_286_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_286_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_286_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_286_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_286_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_286_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_286_##choice
#define EPILEPSY_PRIV_EVAL_REC_286_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_287
#define EPILEPSY_PRIV_EVAL_REC_286_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_287(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_287_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_287_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_287_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_287_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_287_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_287_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_287_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_287_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_287_##choice
#define EPILEPSY_PRIV_EVAL_REC_287_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_288
#define EPILEPSY_PRIV_EVAL_REC_287_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_288(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_288_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_288_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_288_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_288_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_288_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_288_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_288_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_288_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_288_##choice
#define EPILEPSY_PRIV_EVAL_REC_288_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_289
#define EPILEPSY_PRIV_EVAL_REC_288_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_289(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_289_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_289_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_289_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_289_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_289_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_289_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_289_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_289_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_289_##choice
#define EPILEPSY_PRIV_EVAL_REC_289_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_290
#define EPILEPSY_PRIV_EVAL_REC_289_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_290(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_290_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_290_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_290_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_290_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_290_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_290_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_290_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_290_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_290_##choice
#define EPILEPSY_PRIV_EVAL_REC_290_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_291
#define EPILEPSY_PRIV_EVAL_REC_290_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_291(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_291_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_291_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_291_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_291_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_291_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_291_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_291_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_291_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_291_##choice
#define EPILEPSY_PRIV_EVAL_REC_291_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_292
#define EPILEPSY_PRIV_EVAL_REC_291_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_292(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_292_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_292_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_292_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_292_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_292_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_292_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_292_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_292_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_292_##choice
#define EPILEPSY_PRIV_EVAL_REC_292_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_293
#define EPILEPSY_PRIV_EVAL_REC_292_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_293(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_293_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_293_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_293_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_293_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_293_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_293_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_293_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_293_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_293_##choice
#define EPILEPSY_PRIV_EVAL_REC_293_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_294
#define EPILEPSY_PRIV_EVAL_REC_293_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_294(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_294_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_294_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_294_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_294_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_294_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_294_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_294_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_294_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_294_##choice
#define EPILEPSY_PRIV_EVAL_REC_294_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_295
#define EPILEPSY_PRIV_EVAL_REC_294_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_295(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_295_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_295_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_295_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_295_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_295_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_295_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_295_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_295_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_295_##choice
#define EPILEPSY_PRIV_EVAL_REC_295_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_296
#define EPILEPSY_PRIV_EVAL_REC_295_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_296(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_296_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_296_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_296_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_296_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_296_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_296_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_296_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_296_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_296_##choice
#define EPILEPSY_PRIV_EVAL_REC_296_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_297
#define EPILEPSY_PRIV_EVAL_REC_296_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_297(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_297_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_297_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_297_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_297_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_297_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_297_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_297_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_297_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_297_##choice
#define EPILEPSY_PRIV_EVAL_REC_297_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_298
#define EPILEPSY_PRIV_EVAL_REC_297_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_298(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_298_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_298_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_298_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_298_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_298_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_298_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_298_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_298_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_298_##choice
#define EPILEPSY_PRIV_EVAL_REC_298_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_299
#define EPILEPSY_PRIV_EVAL_REC_298_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_299(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_299_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_299_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_299_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_299_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_299_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_299_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_299_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_299_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_299_##choice
#define EPILEPSY_PRIV_EVAL_REC_299_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_300
#define EPILEPSY_PRIV_EVAL_REC_299_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_300(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_300_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_300_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_300_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_300_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_300_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_300_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_300_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_300_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_300_##choice
#define EPILEPSY_PRIV_EVAL_REC_300_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_301
#define EPILEPSY_PRIV_EVAL_REC_300_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_301(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_301_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_301_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_301_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_301_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_301_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_301_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_301_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_301_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_301_##choice
#define EPILEPSY_PRIV_EVAL_REC_301_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_302
#define EPILEPSY_PRIV_EVAL_REC_301_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_302(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_302_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_302_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_302_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_302_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_302_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_302_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_302_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_302_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_302_##choice
#define EPILEPSY_PRIV_EVAL_REC_302_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_303
#define EPILEPSY_PRIV_EVAL_REC_302_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_303(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_303_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_303_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_303_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_303_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_303_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_303_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_303_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_303_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_303_##choice
#define EPILEPSY_PRIV_EVAL_REC_303_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_304
#define EPILEPSY_PRIV_EVAL_REC_303_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_304(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_304_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_304_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_304_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_304_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_304_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_304_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_304_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_304_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_304_##choice
#define EPILEPSY_PRIV_EVAL_REC_304_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_305
#define EPILEPSY_PRIV_EVAL_REC_304_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_305(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_305_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_305_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_305_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_305_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_305_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_305_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_305_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_305_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_305_##choice
#define EPILEPSY_PRIV_EVAL_REC_305_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_306
#define EPILEPSY_PRIV_EVAL_REC_305_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_306(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_306_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_306_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_306_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_306_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_306_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_306_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_306_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_306_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_306_##choice
#define EPILEPSY_PRIV_EVAL_REC_306_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_307
#define EPILEPSY_PRIV_EVAL_REC_306_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_307(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_307_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_307_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_307_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_307_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_307_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_307_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_307_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_307_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_307_##choice
#define EPILEPSY_PRIV_EVAL_REC_307_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_308
#define EPILEPSY_PRIV_EVAL_REC_307_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_308(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_308_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_308_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_308_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_308_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_308_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_308_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_308_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_308_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_308_##choice
#define EPILEPSY_PRIV_EVAL_REC_308_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_309
#define EPILEPSY_PRIV_EVAL_REC_308_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_309(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_309_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_309_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_309_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_309_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_309_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_309_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_309_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_309_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_309_##choice
#define EPILEPSY_PRIV_EVAL_REC_309_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_310
#define EPILEPSY_PRIV_EVAL_REC_309_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_310(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_310_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_310_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_310_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_310_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_310_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_310_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_310_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_310_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_310_##choice
#define EPILEPSY_PRIV_EVAL_REC_310_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_311
#define EPILEPSY_PRIV_EVAL_REC_310_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_311(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_311_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_311_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_311_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_311_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_311_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_311_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_311_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_311_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_311_##choice
#define EPILEPSY_PRIV_EVAL_REC_311_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_312
#define EPILEPSY_PRIV_EVAL_REC_311_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_312(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_312_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_312_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_312_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_312_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_312_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_312_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_312_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_312_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_312_##choice
#define EPILEPSY_PRIV_EVAL_REC_312_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_313
#define EPILEPSY_PRIV_EVAL_REC_312_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_313(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_313_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_313_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_313_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_313_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_313_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_313_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_313_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_313_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_313_##choice
#define EPILEPSY_PRIV_EVAL_REC_313_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_314
#define EPILEPSY_PRIV_EVAL_REC_313_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_314(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_314_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_314_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_314_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_314_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_314_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_314_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_314_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_314_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_314_##choice
#define EPILEPSY_PRIV_EVAL_REC_314_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_315
#define EPILEPSY_PRIV_EVAL_REC_314_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_315(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_315_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_315_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_315_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_315_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_315_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_315_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_315_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_315_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_315_##choice
#define EPILEPSY_PRIV_EVAL_REC_315_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_316
#define EPILEPSY_PRIV_EVAL_REC_315_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_316(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_316_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_316_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_316_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_316_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_316_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_316_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_316_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_316_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_316_##choice
#define EPILEPSY_PRIV_EVAL_REC_316_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_317
#define EPILEPSY_PRIV_EVAL_REC_316_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_317(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_317_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_317_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_317_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_317_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_317_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_317_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_317_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_317_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_317_##choice
#define EPILEPSY_PRIV_EVAL_REC_317_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_318
#define EPILEPSY_PRIV_EVAL_REC_317_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_318(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_318_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_318_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_318_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_318_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_318_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_318_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_318_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_318_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_318_##choice
#define EPILEPSY_PRIV_EVAL_REC_318_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_319
#define EPILEPSY_PRIV_EVAL_REC_318_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_319(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_319_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_319_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_319_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_319_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_319_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_319_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_319_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_319_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_319_##choice
#define EPILEPSY_PRIV_EVAL_REC_319_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_320
#define EPILEPSY_PRIV_EVAL_REC_319_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_320(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_320_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_320_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_320_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_320_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_320_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_320_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_320_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_320_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_320_##choice
#define EPILEPSY_PRIV_EVAL_REC_320_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_321
#define EPILEPSY_PRIV_EVAL_REC_320_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_321(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_321_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_321_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_321_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_321_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_321_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_321_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_321_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_321_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_321_##choice
#define EPILEPSY_PRIV_EVAL_REC_321_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_322
#define EPILEPSY_PRIV_EVAL_REC_321_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_322(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_322_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_322_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_322_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_322_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_322_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_322_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_322_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_322_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_322_##choice
#define EPILEPSY_PRIV_EVAL_REC_322_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_323
#define EPILEPSY_PRIV_EVAL_REC_322_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_323(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_323_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_323_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_323_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_323_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_323_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_323_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_323_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_323_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_323_##choice
#define EPILEPSY_PRIV_EVAL_REC_323_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_324
#define EPILEPSY_PRIV_EVAL_REC_323_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_324(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_324_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_324_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_324_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_324_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_324_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_324_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_324_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_324_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_324_##choice
#define EPILEPSY_PRIV_EVAL_REC_324_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_325
#define EPILEPSY_PRIV_EVAL_REC_324_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_325(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_325_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_325_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_325_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_325_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_325_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_325_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_325_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_325_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_325_##choice
#define EPILEPSY_PRIV_EVAL_REC_325_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_326
#define EPILEPSY_PRIV_EVAL_REC_325_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_326(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_326_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_326_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_326_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_326_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_326_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_326_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_326_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_326_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_326_##choice
#define EPILEPSY_PRIV_EVAL_REC_326_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_327
#define EPILEPSY_PRIV_EVAL_REC_326_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_327(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_327_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_327_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_327_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_327_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_327_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_327_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_327_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_327_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_327_##choice
#define EPILEPSY_PRIV_EVAL_REC_327_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_328
#define EPILEPSY_PRIV_EVAL_REC_327_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_328(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_328_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_328_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_328_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_328_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_328_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_328_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_328_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_328_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_328_##choice
#define EPILEPSY_PRIV_EVAL_REC_328_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_329
#define EPILEPSY_PRIV_EVAL_REC_328_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_329(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_329_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_329_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_329_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_329_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_329_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_329_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_329_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_329_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_329_##choice
#define EPILEPSY_PRIV_EVAL_REC_329_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_330
#define EPILEPSY_PRIV_EVAL_REC_329_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_330(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_330_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_330_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_330_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_330_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_330_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_330_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_330_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_330_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_330_##choice
#define EPILEPSY_PRIV_EVAL_REC_330_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_331
#define EPILEPSY_PRIV_EVAL_REC_330_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_331(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_331_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_331_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_331_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_331_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_331_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_331_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_331_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_331_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_331_##choice
#define EPILEPSY_PRIV_EVAL_REC_331_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_332
#define EPILEPSY_PRIV_EVAL_REC_331_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_332(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_332_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_332_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_332_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_332_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_332_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_332_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_332_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_332_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_332_##choice
#define EPILEPSY_PRIV_EVAL_REC_332_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_333
#define EPILEPSY_PRIV_EVAL_REC_332_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_333(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_333_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_333_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_333_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_333_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_333_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_333_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_333_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_333_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_333_##choice
#define EPILEPSY_PRIV_EVAL_REC_333_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_334
#define EPILEPSY_PRIV_EVAL_REC_333_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_334(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_334_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_334_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_334_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_334_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_334_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_334_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_334_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_334_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_334_##choice
#define EPILEPSY_PRIV_EVAL_REC_334_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_335
#define EPILEPSY_PRIV_EVAL_REC_334_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_335(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_335_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_335_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_335_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_335_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_335_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_335_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_335_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_335_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_335_##choice
#define EPILEPSY_PRIV_EVAL_REC_335_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_336
#define EPILEPSY_PRIV_EVAL_REC_335_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_336(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_336_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_336_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_336_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_336_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_336_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_336_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_336_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_336_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_336_##choice
#define EPILEPSY_PRIV_EVAL_REC_336_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_337
#define EPILEPSY_PRIV_EVAL_REC_336_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_337(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_337_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_337_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_337_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_337_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_337_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_337_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_337_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_337_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_337_##choice
#define EPILEPSY_PRIV_EVAL_REC_337_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_338
#define EPILEPSY_PRIV_EVAL_REC_337_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_338(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_338_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_338_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_338_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_338_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_338_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_338_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_338_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_338_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_338_##choice
#define EPILEPSY_PRIV_EVAL_REC_338_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_339
#define EPILEPSY_PRIV_EVAL_REC_338_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_339(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_339_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_339_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_339_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_339_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_339_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_339_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_339_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_339_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_339_##choice
#define EPILEPSY_PRIV_EVAL_REC_339_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_340
#define EPILEPSY_PRIV_EVAL_REC_339_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_340(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_340_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_340_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_340_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_340_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_340_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_340_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_340_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_340_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_340_##choice
#define EPILEPSY_PRIV_EVAL_REC_340_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_341
#define EPILEPSY_PRIV_EVAL_REC_340_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_341(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_341_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_341_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_341_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_341_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_341_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_341_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_341_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_341_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_341_##choice
#define EPILEPSY_PRIV_EVAL_REC_341_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_342
#define EPILEPSY_PRIV_EVAL_REC_341_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_342(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_342_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_342_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_342_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_342_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_342_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_342_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_342_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_342_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_342_##choice
#define EPILEPSY_PRIV_EVAL_REC_342_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_343
#define EPILEPSY_PRIV_EVAL_REC_342_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_343(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_343_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_343_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_343_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_343_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_343_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_343_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_343_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_343_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_343_##choice
#define EPILEPSY_PRIV_EVAL_REC_343_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_344
#define EPILEPSY_PRIV_EVAL_REC_343_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_344(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_344_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_344_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_344_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_344_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_344_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_344_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_344_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_344_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_344_##choice
#define EPILEPSY_PRIV_EVAL_REC_344_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_345
#define EPILEPSY_PRIV_EVAL_REC_344_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_345(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_345_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_345_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_345_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_345_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_345_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_345_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_345_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_345_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_345_##choice
#define EPILEPSY_PRIV_EVAL_REC_345_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_346
#define EPILEPSY_PRIV_EVAL_REC_345_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_346(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_346_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_346_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_346_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_346_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_346_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_346_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_346_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_346_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_346_##choice
#define EPILEPSY_PRIV_EVAL_REC_346_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_347
#define EPILEPSY_PRIV_EVAL_REC_346_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_347(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_347_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_347_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_347_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_347_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_347_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_347_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_347_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_347_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_347_##choice
#define EPILEPSY_PRIV_EVAL_REC_347_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_348
#define EPILEPSY_PRIV_EVAL_REC_347_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_348(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_348_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_348_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_348_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_348_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_348_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_348_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_348_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_348_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_348_##choice
#define EPILEPSY_PRIV_EVAL_REC_348_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_349
#define EPILEPSY_PRIV_EVAL_REC_348_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_349(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_349_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_349_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_349_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_349_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_349_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_349_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_349_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_349_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_349_##choice
#define EPILEPSY_PRIV_EVAL_REC_349_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_350
#define EPILEPSY_PRIV_EVAL_REC_349_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_350(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_350_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_350_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_350_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_350_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_350_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_350_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_350_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_350_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_350_##choice
#define EPILEPSY_PRIV_EVAL_REC_350_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_351
#define EPILEPSY_PRIV_EVAL_REC_350_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_351(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_351_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_351_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_351_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_351_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_351_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_351_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_351_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_351_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_351_##choice
#define EPILEPSY_PRIV_EVAL_REC_351_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_352
#define EPILEPSY_PRIV_EVAL_REC_351_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_352(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_352_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_352_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_352_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_352_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_352_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_352_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_352_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_352_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_352_##choice
#define EPILEPSY_PRIV_EVAL_REC_352_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_353
#define EPILEPSY_PRIV_EVAL_REC_352_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_353(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_353_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_353_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_353_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_353_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_353_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_353_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_353_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_353_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_353_##choice
#define EPILEPSY_PRIV_EVAL_REC_353_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_354
#define EPILEPSY_PRIV_EVAL_REC_353_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_354(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_354_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_354_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_354_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_354_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_354_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_354_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_354_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_354_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_354_##choice
#define EPILEPSY_PRIV_EVAL_REC_354_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_355
#define EPILEPSY_PRIV_EVAL_REC_354_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_355(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_355_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_355_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_355_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_355_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_355_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_355_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_355_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_355_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_355_##choice
#define EPILEPSY_PRIV_EVAL_REC_355_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_356
#define EPILEPSY_PRIV_EVAL_REC_355_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_356(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_356_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_356_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_356_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_356_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_356_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_356_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_356_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_356_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_356_##choice
#define EPILEPSY_PRIV_EVAL_REC_356_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_357
#define EPILEPSY_PRIV_EVAL_REC_356_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_357(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_357_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_357_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_357_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_357_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_357_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_357_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_357_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_357_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_357_##choice
#define EPILEPSY_PRIV_EVAL_REC_357_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_358
#define EPILEPSY_PRIV_EVAL_REC_357_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_358(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_358_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_358_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_358_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_358_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_358_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_358_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_358_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_358_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_358_##choice
#define EPILEPSY_PRIV_EVAL_REC_358_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_359
#define EPILEPSY_PRIV_EVAL_REC_358_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_359(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_359_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_359_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_359_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_359_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_359_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_359_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_359_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_359_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_359_##choice
#define EPILEPSY_PRIV_EVAL_REC_359_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_360
#define EPILEPSY_PRIV_EVAL_REC_359_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_360(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_360_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_360_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_360_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_360_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_360_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_360_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_360_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_360_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_360_##choice
#define EPILEPSY_PRIV_EVAL_REC_360_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_361
#define EPILEPSY_PRIV_EVAL_REC_360_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_361(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_361_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_361_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_361_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_361_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_361_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_361_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_361_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_361_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_361_##choice
#define EPILEPSY_PRIV_EVAL_REC_361_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_362
#define EPILEPSY_PRIV_EVAL_REC_361_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_362(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_362_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_362_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_362_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_362_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_362_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_362_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_362_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_362_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_362_##choice
#define EPILEPSY_PRIV_EVAL_REC_362_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_363
#define EPILEPSY_PRIV_EVAL_REC_362_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_363(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_363_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_363_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_363_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_363_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_363_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_363_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_363_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_363_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_363_##choice
#define EPILEPSY_PRIV_EVAL_REC_363_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_364
#define EPILEPSY_PRIV_EVAL_REC_363_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_364(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_364_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_364_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_364_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_364_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_364_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_364_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_364_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_364_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_364_##choice
#define EPILEPSY_PRIV_EVAL_REC_364_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_365
#define EPILEPSY_PRIV_EVAL_REC_364_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_365(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_365_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_365_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_365_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_365_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_365_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_365_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_365_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_365_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_365_##choice
#define EPILEPSY_PRIV_EVAL_REC_365_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_366
#define EPILEPSY_PRIV_EVAL_REC_365_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_366(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_366_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_366_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_366_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_366_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_366_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_366_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_366_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_366_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_366_##choice
#define EPILEPSY_PRIV_EVAL_REC_366_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_367
#define EPILEPSY_PRIV_EVAL_REC_366_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_367(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_367_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_367_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_367_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_367_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_367_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_367_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_367_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_367_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_367_##choice
#define EPILEPSY_PRIV_EVAL_REC_367_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_368
#define EPILEPSY_PRIV_EVAL_REC_367_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_368(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_368_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_368_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_368_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_368_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_368_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_368_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_368_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_368_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_368_##choice
#define EPILEPSY_PRIV_EVAL_REC_368_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_369
#define EPILEPSY_PRIV_EVAL_REC_368_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_369(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_369_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_369_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_369_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_369_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_369_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_369_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_369_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_369_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_369_##choice
#define EPILEPSY_PRIV_EVAL_REC_369_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_370
#define EPILEPSY_PRIV_EVAL_REC_369_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_370(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_370_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_370_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_370_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_370_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_370_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_370_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_370_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_370_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_370_##choice
#define EPILEPSY_PRIV_EVAL_REC_370_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_371
#define EPILEPSY_PRIV_EVAL_REC_370_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_371(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_371_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_371_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_371_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_371_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_371_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_371_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_371_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_371_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_371_##choice
#define EPILEPSY_PRIV_EVAL_REC_371_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_372
#define EPILEPSY_PRIV_EVAL_REC_371_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_372(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_372_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_372_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_372_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_372_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_372_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_372_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_372_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_372_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_372_##choice
#define EPILEPSY_PRIV_EVAL_REC_372_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_373
#define EPILEPSY_PRIV_EVAL_REC_372_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_373(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_373_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_373_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_373_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_373_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_373_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_373_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_373_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_373_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_373_##choice
#define EPILEPSY_PRIV_EVAL_REC_373_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_374
#define EPILEPSY_PRIV_EVAL_REC_373_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_374(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_374_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_374_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_374_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_374_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_374_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_374_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_374_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_374_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_374_##choice
#define EPILEPSY_PRIV_EVAL_REC_374_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_375
#define EPILEPSY_PRIV_EVAL_REC_374_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_375(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_375_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_375_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_375_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_375_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_375_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_375_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_375_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_375_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_375_##choice
#define EPILEPSY_PRIV_EVAL_REC_375_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_376
#define EPILEPSY_PRIV_EVAL_REC_375_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_376(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_376_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_376_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_376_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_376_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_376_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_376_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_376_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_376_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_376_##choice
#define EPILEPSY_PRIV_EVAL_REC_376_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_377
#define EPILEPSY_PRIV_EVAL_REC_376_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_377(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_377_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_377_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_377_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_377_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_377_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_377_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_377_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_377_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_377_##choice
#define EPILEPSY_PRIV_EVAL_REC_377_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_378
#define EPILEPSY_PRIV_EVAL_REC_377_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_378(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_378_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_378_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_378_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_378_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_378_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_378_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_378_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_378_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_378_##choice
#define EPILEPSY_PRIV_EVAL_REC_378_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_379
#define EPILEPSY_PRIV_EVAL_REC_378_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_379(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_379_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_379_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_379_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_379_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_379_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_379_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_379_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_379_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_379_##choice
#define EPILEPSY_PRIV_EVAL_REC_379_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_380
#define EPILEPSY_PRIV_EVAL_REC_379_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_380(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_380_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_380_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_380_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_380_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_380_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_380_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_380_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_380_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_380_##choice
#define EPILEPSY_PRIV_EVAL_REC_380_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_381
#define EPILEPSY_PRIV_EVAL_REC_380_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_381(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_381_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_381_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_381_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_381_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_381_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_381_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_381_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_381_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_381_##choice
#define EPILEPSY_PRIV_EVAL_REC_381_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_382
#define EPILEPSY_PRIV_EVAL_REC_381_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_382(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_382_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_382_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_382_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_382_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_382_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_382_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_382_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_382_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_382_##choice
#define EPILEPSY_PRIV_EVAL_REC_382_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_383
#define EPILEPSY_PRIV_EVAL_REC_382_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_383(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_383_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_383_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_383_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_383_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_383_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_383_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_383_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_383_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_383_##choice
#define EPILEPSY_PRIV_EVAL_REC_383_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_384
#define EPILEPSY_PRIV_EVAL_REC_383_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_384(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_384_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_384_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_384_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_384_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_384_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_384_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_384_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_384_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_384_##choice
#define EPILEPSY_PRIV_EVAL_REC_384_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_385
#define EPILEPSY_PRIV_EVAL_REC_384_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_385(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_385_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_385_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_385_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_385_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_385_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_385_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_385_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_385_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_385_##choice
#define EPILEPSY_PRIV_EVAL_REC_385_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_386
#define EPILEPSY_PRIV_EVAL_REC_385_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_386(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_386_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_386_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_386_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_386_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_386_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_386_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_386_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_386_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_386_##choice
#define EPILEPSY_PRIV_EVAL_REC_386_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_387
#define EPILEPSY_PRIV_EVAL_REC_386_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_387(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_387_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_387_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_387_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_387_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_387_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_387_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_387_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_387_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_387_##choice
#define EPILEPSY_PRIV_EVAL_REC_387_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_388
#define EPILEPSY_PRIV_EVAL_REC_387_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_388(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_388_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_388_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_388_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_388_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_388_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_388_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_388_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_388_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_388_##choice
#define EPILEPSY_PRIV_EVAL_REC_388_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_389
#define EPILEPSY_PRIV_EVAL_REC_388_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_389(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_389_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_389_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_389_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_389_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_389_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_389_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_389_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_389_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_389_##choice
#define EPILEPSY_PRIV_EVAL_REC_389_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_390
#define EPILEPSY_PRIV_EVAL_REC_389_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_390(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_390_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_390_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_390_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_390_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_390_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_390_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_390_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_390_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_390_##choice
#define EPILEPSY_PRIV_EVAL_REC_390_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_391
#define EPILEPSY_PRIV_EVAL_REC_390_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_391(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_391_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_391_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_391_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_391_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_391_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_391_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_391_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_391_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_391_##choice
#define EPILEPSY_PRIV_EVAL_REC_391_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_392
#define EPILEPSY_PRIV_EVAL_REC_391_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_392(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_392_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_392_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_392_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_392_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_392_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_392_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_392_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_392_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_392_##choice
#define EPILEPSY_PRIV_EVAL_REC_392_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_393
#define EPILEPSY_PRIV_EVAL_REC_392_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_393(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_393_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_393_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_393_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_393_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_393_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_393_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_393_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_393_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_393_##choice
#define EPILEPSY_PRIV_EVAL_REC_393_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_394
#define EPILEPSY_PRIV_EVAL_REC_393_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_394(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_394_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_394_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_394_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_394_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_394_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_394_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_394_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_394_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_394_##choice
#define EPILEPSY_PRIV_EVAL_REC_394_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_395
#define EPILEPSY_PRIV_EVAL_REC_394_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_395(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_395_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_395_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_395_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_395_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_395_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_395_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_395_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_395_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_395_##choice
#define EPILEPSY_PRIV_EVAL_REC_395_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_396
#define EPILEPSY_PRIV_EVAL_REC_395_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_396(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_396_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_396_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_396_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_396_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_396_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_396_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_396_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_396_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_396_##choice
#define EPILEPSY_PRIV_EVAL_REC_396_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_397
#define EPILEPSY_PRIV_EVAL_REC_396_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_397(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_397_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_397_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_397_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_397_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_397_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_397_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_397_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_397_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_397_##choice
#define EPILEPSY_PRIV_EVAL_REC_397_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_398
#define EPILEPSY_PRIV_EVAL_REC_397_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_398(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_398_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_398_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_398_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_398_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_398_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_398_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_398_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_398_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_398_##choice
#define EPILEPSY_PRIV_EVAL_REC_398_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_399
#define EPILEPSY_PRIV_EVAL_REC_398_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_399(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_399_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_399_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_399_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_399_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_399_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_399_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_399_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_399_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_399_##choice
#define EPILEPSY_PRIV_EVAL_REC_399_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_400
#define EPILEPSY_PRIV_EVAL_REC_399_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_400(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_400_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_400_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_400_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_400_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_400_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_400_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_400_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_400_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_400_##choice
#define EPILEPSY_PRIV_EVAL_REC_400_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_401
#define EPILEPSY_PRIV_EVAL_REC_400_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_401(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_401_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_401_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_401_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_401_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_401_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_401_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_401_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_401_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_401_##choice
#define EPILEPSY_PRIV_EVAL_REC_401_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_402
#define EPILEPSY_PRIV_EVAL_REC_401_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_402(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_402_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_402_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_402_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_402_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_402_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_402_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_402_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_402_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_402_##choice
#define EPILEPSY_PRIV_EVAL_REC_402_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_403
#define EPILEPSY_PRIV_EVAL_REC_402_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_403(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_403_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_403_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_403_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_403_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_403_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_403_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_403_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_403_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_403_##choice
#define EPILEPSY_PRIV_EVAL_REC_403_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_404
#define EPILEPSY_PRIV_EVAL_REC_403_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_404(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_404_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_404_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_404_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_404_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_404_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_404_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_404_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_404_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_404_##choice
#define EPILEPSY_PRIV_EVAL_REC_404_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_405
#define EPILEPSY_PRIV_EVAL_REC_404_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_405(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_405_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_405_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_405_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_405_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_405_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_405_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_405_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_405_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_405_##choice
#define EPILEPSY_PRIV_EVAL_REC_405_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_406
#define EPILEPSY_PRIV_EVAL_REC_405_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_406(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_406_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_406_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_406_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_406_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_406_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_406_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_406_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_406_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_406_##choice
#define EPILEPSY_PRIV_EVAL_REC_406_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_407
#define EPILEPSY_PRIV_EVAL_REC_406_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_407(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_407_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_407_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_407_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_407_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_407_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_407_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_407_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_407_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_407_##choice
#define EPILEPSY_PRIV_EVAL_REC_407_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_408
#define EPILEPSY_PRIV_EVAL_REC_407_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_408(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_408_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_408_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_408_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_408_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_408_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_408_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_408_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_408_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_408_##choice
#define EPILEPSY_PRIV_EVAL_REC_408_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_409
#define EPILEPSY_PRIV_EVAL_REC_408_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_409(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_409_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_409_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_409_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_409_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_409_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_409_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_409_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_409_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_409_##choice
#define EPILEPSY_PRIV_EVAL_REC_409_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_410
#define EPILEPSY_PRIV_EVAL_REC_409_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_410(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_410_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_410_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_410_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_410_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_410_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_410_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_410_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_410_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_410_##choice
#define EPILEPSY_PRIV_EVAL_REC_410_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_411
#define EPILEPSY_PRIV_EVAL_REC_410_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_411(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_411_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_411_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_411_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_411_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_411_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_411_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_411_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_411_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_411_##choice
#define EPILEPSY_PRIV_EVAL_REC_411_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_412
#define EPILEPSY_PRIV_EVAL_REC_411_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_412(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_412_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_412_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_412_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_412_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_412_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_412_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_412_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_412_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_412_##choice
#define EPILEPSY_PRIV_EVAL_REC_412_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_413
#define EPILEPSY_PRIV_EVAL_REC_412_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_413(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_413_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_413_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_413_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_413_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_413_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_413_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_413_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_413_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_413_##choice
#define EPILEPSY_PRIV_EVAL_REC_413_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_414
#define EPILEPSY_PRIV_EVAL_REC_413_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_414(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_414_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_414_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_414_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_414_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_414_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_414_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_414_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_414_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_414_##choice
#define EPILEPSY_PRIV_EVAL_REC_414_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_415
#define EPILEPSY_PRIV_EVAL_REC_414_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_415(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_415_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_415_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_415_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_415_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_415_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_415_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_415_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_415_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_415_##choice
#define EPILEPSY_PRIV_EVAL_REC_415_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_416
#define EPILEPSY_PRIV_EVAL_REC_415_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_416(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_416_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_416_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_416_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_416_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_416_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_416_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_416_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_416_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_416_##choice
#define EPILEPSY_PRIV_EVAL_REC_416_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_417
#define EPILEPSY_PRIV_EVAL_REC_416_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_417(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_417_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_417_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_417_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_417_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_417_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_417_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_417_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_417_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_417_##choice
#define EPILEPSY_PRIV_EVAL_REC_417_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_418
#define EPILEPSY_PRIV_EVAL_REC_417_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_418(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_418_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_418_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_418_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_418_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_418_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_418_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_418_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_418_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_418_##choice
#define EPILEPSY_PRIV_EVAL_REC_418_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_419
#define EPILEPSY_PRIV_EVAL_REC_418_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_419(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_419_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_419_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_419_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_419_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_419_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_419_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_419_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_419_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_419_##choice
#define EPILEPSY_PRIV_EVAL_REC_419_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_420
#define EPILEPSY_PRIV_EVAL_REC_419_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_420(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_420_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_420_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_420_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_420_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_420_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_420_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_420_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_420_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_420_##choice
#define EPILEPSY_PRIV_EVAL_REC_420_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_421
#define EPILEPSY_PRIV_EVAL_REC_420_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_421(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_421_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_421_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_421_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_421_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_421_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_421_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_421_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_421_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_421_##choice
#define EPILEPSY_PRIV_EVAL_REC_421_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_422
#define EPILEPSY_PRIV_EVAL_REC_421_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_422(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_422_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_422_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_422_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_422_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_422_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_422_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_422_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_422_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_422_##choice
#define EPILEPSY_PRIV_EVAL_REC_422_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_423
#define EPILEPSY_PRIV_EVAL_REC_422_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_423(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_423_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_423_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_423_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_423_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_423_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_423_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_423_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_423_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_423_##choice
#define EPILEPSY_PRIV_EVAL_REC_423_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_424
#define EPILEPSY_PRIV_EVAL_REC_423_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_424(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_424_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_424_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_424_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_424_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_424_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_424_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_424_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_424_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_424_##choice
#define EPILEPSY_PRIV_EVAL_REC_424_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_425
#define EPILEPSY_PRIV_EVAL_REC_424_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_425(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_425_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_425_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_425_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_425_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_425_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_425_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_425_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_425_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_425_##choice
#define EPILEPSY_PRIV_EVAL_REC_425_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_426
#define EPILEPSY_PRIV_EVAL_REC_425_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_426(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_426_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_426_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_426_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_426_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_426_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_426_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_426_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_426_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_426_##choice
#define EPILEPSY_PRIV_EVAL_REC_426_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_427
#define EPILEPSY_PRIV_EVAL_REC_426_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_427(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_427_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_427_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_427_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_427_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_427_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_427_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_427_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_427_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_427_##choice
#define EPILEPSY_PRIV_EVAL_REC_427_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_428
#define EPILEPSY_PRIV_EVAL_REC_427_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_428(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_428_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_428_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_428_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_428_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_428_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_428_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_428_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_428_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_428_##choice
#define EPILEPSY_PRIV_EVAL_REC_428_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_429
#define EPILEPSY_PRIV_EVAL_REC_428_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_429(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_429_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_429_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_429_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_429_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_429_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_429_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_429_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_429_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_429_##choice
#define EPILEPSY_PRIV_EVAL_REC_429_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_430
#define EPILEPSY_PRIV_EVAL_REC_429_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_430(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_430_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_430_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_430_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_430_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_430_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_430_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_430_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_430_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_430_##choice
#define EPILEPSY_PRIV_EVAL_REC_430_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_431
#define EPILEPSY_PRIV_EVAL_REC_430_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_431(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_431_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_431_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_431_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_431_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_431_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_431_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_431_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_431_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_431_##choice
#define EPILEPSY_PRIV_EVAL_REC_431_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_432
#define EPILEPSY_PRIV_EVAL_REC_431_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_432(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_432_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_432_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_432_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_432_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_432_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_432_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_432_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_432_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_432_##choice
#define EPILEPSY_PRIV_EVAL_REC_432_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_433
#define EPILEPSY_PRIV_EVAL_REC_432_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_433(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_433_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_433_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_433_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_433_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_433_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_433_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_433_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_433_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_433_##choice
#define EPILEPSY_PRIV_EVAL_REC_433_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_434
#define EPILEPSY_PRIV_EVAL_REC_433_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_434(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_434_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_434_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_434_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_434_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_434_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_434_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_434_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_434_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_434_##choice
#define EPILEPSY_PRIV_EVAL_REC_434_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_435
#define EPILEPSY_PRIV_EVAL_REC_434_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_435(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_435_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_435_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_435_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_435_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_435_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_435_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_435_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_435_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_435_##choice
#define EPILEPSY_PRIV_EVAL_REC_435_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_436
#define EPILEPSY_PRIV_EVAL_REC_435_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_436(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_436_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_436_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_436_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_436_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_436_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_436_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_436_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_436_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_436_##choice
#define EPILEPSY_PRIV_EVAL_REC_436_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_437
#define EPILEPSY_PRIV_EVAL_REC_436_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_437(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_437_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_437_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_437_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_437_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_437_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_437_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_437_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_437_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_437_##choice
#define EPILEPSY_PRIV_EVAL_REC_437_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_438
#define EPILEPSY_PRIV_EVAL_REC_437_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_438(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_438_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_438_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_438_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_438_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_438_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_438_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_438_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_438_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_438_##choice
#define EPILEPSY_PRIV_EVAL_REC_438_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_439
#define EPILEPSY_PRIV_EVAL_REC_438_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_439(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_439_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_439_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_439_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_439_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_439_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_439_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_439_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_439_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_439_##choice
#define EPILEPSY_PRIV_EVAL_REC_439_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_440
#define EPILEPSY_PRIV_EVAL_REC_439_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_440(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_440_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_440_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_440_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_440_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_440_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_440_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_440_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_440_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_440_##choice
#define EPILEPSY_PRIV_EVAL_REC_440_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_441
#define EPILEPSY_PRIV_EVAL_REC_440_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_441(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_441_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_441_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_441_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_441_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_441_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_441_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_441_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_441_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_441_##choice
#define EPILEPSY_PRIV_EVAL_REC_441_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_442
#define EPILEPSY_PRIV_EVAL_REC_441_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_442(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_442_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_442_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_442_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_442_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_442_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_442_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_442_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_442_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_442_##choice
#define EPILEPSY_PRIV_EVAL_REC_442_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_443
#define EPILEPSY_PRIV_EVAL_REC_442_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_443(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_443_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_443_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_443_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_443_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_443_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_443_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_443_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_443_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_443_##choice
#define EPILEPSY_PRIV_EVAL_REC_443_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_444
#define EPILEPSY_PRIV_EVAL_REC_443_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_444(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_444_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_444_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_444_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_444_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_444_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_444_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_444_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_444_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_444_##choice
#define EPILEPSY_PRIV_EVAL_REC_444_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_445
#define EPILEPSY_PRIV_EVAL_REC_444_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_445(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_445_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_445_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_445_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_445_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_445_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_445_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_445_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_445_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_445_##choice
#define EPILEPSY_PRIV_EVAL_REC_445_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_446
#define EPILEPSY_PRIV_EVAL_REC_445_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_446(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_446_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_446_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_446_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_446_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_446_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_446_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_446_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_446_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_446_##choice
#define EPILEPSY_PRIV_EVAL_REC_446_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_447
#define EPILEPSY_PRIV_EVAL_REC_446_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_447(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_447_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_447_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_447_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_447_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_447_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_447_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_447_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_447_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_447_##choice
#define EPILEPSY_PRIV_EVAL_REC_447_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_448
#define EPILEPSY_PRIV_EVAL_REC_447_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_448(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_448_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_448_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_448_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_448_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_448_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_448_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_448_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_448_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_448_##choice
#define EPILEPSY_PRIV_EVAL_REC_448_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_449
#define EPILEPSY_PRIV_EVAL_REC_448_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_449(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_449_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_449_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_449_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_449_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_449_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_449_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_449_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_449_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_449_##choice
#define EPILEPSY_PRIV_EVAL_REC_449_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_450
#define EPILEPSY_PRIV_EVAL_REC_449_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_450(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_450_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_450_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_450_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_450_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_450_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_450_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_450_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_450_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_450_##choice
#define EPILEPSY_PRIV_EVAL_REC_450_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_451
#define EPILEPSY_PRIV_EVAL_REC_450_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_451(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_451_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_451_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_451_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_451_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_451_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_451_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_451_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_451_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_451_##choice
#define EPILEPSY_PRIV_EVAL_REC_451_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_452
#define EPILEPSY_PRIV_EVAL_REC_451_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_452(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_452_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_452_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_452_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_452_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_452_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_452_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_452_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_452_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_452_##choice
#define EPILEPSY_PRIV_EVAL_REC_452_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_453
#define EPILEPSY_PRIV_EVAL_REC_452_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_453(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_453_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_453_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_453_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_453_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_453_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_453_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_453_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_453_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_453_##choice
#define EPILEPSY_PRIV_EVAL_REC_453_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_454
#define EPILEPSY_PRIV_EVAL_REC_453_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_454(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_454_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_454_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_454_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_454_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_454_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_454_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_454_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_454_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_454_##choice
#define EPILEPSY_PRIV_EVAL_REC_454_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_455
#define EPILEPSY_PRIV_EVAL_REC_454_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_455(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_455_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_455_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_455_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_455_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_455_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_455_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_455_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_455_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_455_##choice
#define EPILEPSY_PRIV_EVAL_REC_455_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_456
#define EPILEPSY_PRIV_EVAL_REC_455_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_456(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_456_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_456_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_456_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_456_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_456_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_456_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_456_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_456_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_456_##choice
#define EPILEPSY_PRIV_EVAL_REC_456_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_457
#define EPILEPSY_PRIV_EVAL_REC_456_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_457(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_457_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_457_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_457_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_457_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_457_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_457_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_457_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_457_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_457_##choice
#define EPILEPSY_PRIV_EVAL_REC_457_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_458
#define EPILEPSY_PRIV_EVAL_REC_457_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_458(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_458_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_458_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_458_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_458_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_458_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_458_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_458_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_458_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_458_##choice
#define EPILEPSY_PRIV_EVAL_REC_458_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_459
#define EPILEPSY_PRIV_EVAL_REC_458_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_459(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_459_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_459_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_459_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_459_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_459_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_459_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_459_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_459_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_459_##choice
#define EPILEPSY_PRIV_EVAL_REC_459_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_460
#define EPILEPSY_PRIV_EVAL_REC_459_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_460(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_460_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_460_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_460_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_460_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_460_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_460_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_460_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_460_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_460_##choice
#define EPILEPSY_PRIV_EVAL_REC_460_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_461
#define EPILEPSY_PRIV_EVAL_REC_460_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_461(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_461_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_461_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_461_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_461_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_461_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_461_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_461_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_461_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_461_##choice
#define EPILEPSY_PRIV_EVAL_REC_461_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_462
#define EPILEPSY_PRIV_EVAL_REC_461_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_462(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_462_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_462_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_462_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_462_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_462_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_462_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_462_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_462_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_462_##choice
#define EPILEPSY_PRIV_EVAL_REC_462_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_463
#define EPILEPSY_PRIV_EVAL_REC_462_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_463(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_463_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_463_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_463_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_463_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_463_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_463_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_463_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_463_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_463_##choice
#define EPILEPSY_PRIV_EVAL_REC_463_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_464
#define EPILEPSY_PRIV_EVAL_REC_463_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_464(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_464_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_464_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_464_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_464_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_464_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_464_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_464_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_464_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_464_##choice
#define EPILEPSY_PRIV_EVAL_REC_464_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_465
#define EPILEPSY_PRIV_EVAL_REC_464_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_465(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_465_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_465_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_465_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_465_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_465_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_465_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_465_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_465_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_465_##choice
#define EPILEPSY_PRIV_EVAL_REC_465_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_466
#define EPILEPSY_PRIV_EVAL_REC_465_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_466(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_466_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_466_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_466_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_466_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_466_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_466_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_466_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_466_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_466_##choice
#define EPILEPSY_PRIV_EVAL_REC_466_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_467
#define EPILEPSY_PRIV_EVAL_REC_466_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_467(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_467_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_467_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_467_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_467_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_467_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_467_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_467_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_467_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_467_##choice
#define EPILEPSY_PRIV_EVAL_REC_467_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_468
#define EPILEPSY_PRIV_EVAL_REC_467_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_468(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_468_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_468_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_468_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_468_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_468_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_468_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_468_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_468_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_468_##choice
#define EPILEPSY_PRIV_EVAL_REC_468_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_469
#define EPILEPSY_PRIV_EVAL_REC_468_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_469(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_469_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_469_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_469_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_469_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_469_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_469_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_469_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_469_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_469_##choice
#define EPILEPSY_PRIV_EVAL_REC_469_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_470
#define EPILEPSY_PRIV_EVAL_REC_469_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_470(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_470_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_470_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_470_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_470_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_470_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_470_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_470_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_470_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_470_##choice
#define EPILEPSY_PRIV_EVAL_REC_470_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_471
#define EPILEPSY_PRIV_EVAL_REC_470_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_471(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_471_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_471_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_471_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_471_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_471_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_471_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_471_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_471_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_471_##choice
#define EPILEPSY_PRIV_EVAL_REC_471_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_472
#define EPILEPSY_PRIV_EVAL_REC_471_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_472(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_472_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_472_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_472_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_472_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_472_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_472_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_472_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_472_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_472_##choice
#define EPILEPSY_PRIV_EVAL_REC_472_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_473
#define EPILEPSY_PRIV_EVAL_REC_472_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_473(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_473_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_473_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_473_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_473_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_473_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_473_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_473_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_473_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_473_##choice
#define EPILEPSY_PRIV_EVAL_REC_473_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_474
#define EPILEPSY_PRIV_EVAL_REC_473_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_474(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_474_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_474_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_474_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_474_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_474_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_474_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_474_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_474_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_474_##choice
#define EPILEPSY_PRIV_EVAL_REC_474_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_475
#define EPILEPSY_PRIV_EVAL_REC_474_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_475(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_475_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_475_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_475_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_475_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_475_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_475_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_475_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_475_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_475_##choice
#define EPILEPSY_PRIV_EVAL_REC_475_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_476
#define EPILEPSY_PRIV_EVAL_REC_475_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_476(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_476_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_476_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_476_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_476_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_476_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_476_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_476_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_476_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_476_##choice
#define EPILEPSY_PRIV_EVAL_REC_476_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_477
#define EPILEPSY_PRIV_EVAL_REC_476_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_477(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_477_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_477_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_477_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_477_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_477_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_477_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_477_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_477_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_477_##choice
#define EPILEPSY_PRIV_EVAL_REC_477_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_478
#define EPILEPSY_PRIV_EVAL_REC_477_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_478(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_478_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_478_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_478_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_478_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_478_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_478_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_478_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_478_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_478_##choice
#define EPILEPSY_PRIV_EVAL_REC_478_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_479
#define EPILEPSY_PRIV_EVAL_REC_478_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_479(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_479_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_479_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_479_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_479_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_479_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_479_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_479_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_479_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_479_##choice
#define EPILEPSY_PRIV_EVAL_REC_479_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_480
#define EPILEPSY_PRIV_EVAL_REC_479_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_480(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_480_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_480_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_480_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_480_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_480_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_480_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_480_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_480_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_480_##choice
#define EPILEPSY_PRIV_EVAL_REC_480_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_481
#define EPILEPSY_PRIV_EVAL_REC_480_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_481(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_481_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_481_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_481_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_481_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_481_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_481_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_481_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_481_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_481_##choice
#define EPILEPSY_PRIV_EVAL_REC_481_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_482
#define EPILEPSY_PRIV_EVAL_REC_481_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_482(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_482_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_482_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_482_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_482_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_482_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_482_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_482_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_482_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_482_##choice
#define EPILEPSY_PRIV_EVAL_REC_482_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_483
#define EPILEPSY_PRIV_EVAL_REC_482_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_483(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_483_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_483_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_483_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_483_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_483_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_483_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_483_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_483_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_483_##choice
#define EPILEPSY_PRIV_EVAL_REC_483_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_484
#define EPILEPSY_PRIV_EVAL_REC_483_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_484(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_484_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_484_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_484_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_484_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_484_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_484_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_484_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_484_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_484_##choice
#define EPILEPSY_PRIV_EVAL_REC_484_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_485
#define EPILEPSY_PRIV_EVAL_REC_484_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_485(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_485_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_485_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_485_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_485_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_485_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_485_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_485_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_485_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_485_##choice
#define EPILEPSY_PRIV_EVAL_REC_485_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_486
#define EPILEPSY_PRIV_EVAL_REC_485_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_486(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_486_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_486_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_486_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_486_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_486_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_486_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_486_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_486_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_486_##choice
#define EPILEPSY_PRIV_EVAL_REC_486_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_487
#define EPILEPSY_PRIV_EVAL_REC_486_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_487(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_487_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_487_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_487_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_487_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_487_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_487_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_487_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_487_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_487_##choice
#define EPILEPSY_PRIV_EVAL_REC_487_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_488
#define EPILEPSY_PRIV_EVAL_REC_487_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_488(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_488_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_488_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_488_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_488_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_488_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_488_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_488_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_488_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_488_##choice
#define EPILEPSY_PRIV_EVAL_REC_488_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_489
#define EPILEPSY_PRIV_EVAL_REC_488_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_489(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_489_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_489_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_489_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_489_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_489_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_489_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_489_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_489_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_489_##choice
#define EPILEPSY_PRIV_EVAL_REC_489_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_490
#define EPILEPSY_PRIV_EVAL_REC_489_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_490(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_490_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_490_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_490_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_490_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_490_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_490_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_490_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_490_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_490_##choice
#define EPILEPSY_PRIV_EVAL_REC_490_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_491
#define EPILEPSY_PRIV_EVAL_REC_490_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_491(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_491_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_491_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_491_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_491_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_491_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_491_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_491_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_491_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_491_##choice
#define EPILEPSY_PRIV_EVAL_REC_491_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_492
#define EPILEPSY_PRIV_EVAL_REC_491_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_492(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_492_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_492_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_492_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_492_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_492_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_492_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_492_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_492_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_492_##choice
#define EPILEPSY_PRIV_EVAL_REC_492_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_493
#define EPILEPSY_PRIV_EVAL_REC_492_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_493(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_493_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_493_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_493_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_493_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_493_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_493_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_493_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_493_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_493_##choice
#define EPILEPSY_PRIV_EVAL_REC_493_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_494
#define EPILEPSY_PRIV_EVAL_REC_493_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_494(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_494_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_494_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_494_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_494_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_494_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_494_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_494_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_494_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_494_##choice
#define EPILEPSY_PRIV_EVAL_REC_494_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_495
#define EPILEPSY_PRIV_EVAL_REC_494_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_495(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_495_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_495_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_495_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_495_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_495_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_495_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_495_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_495_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_495_##choice
#define EPILEPSY_PRIV_EVAL_REC_495_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_496
#define EPILEPSY_PRIV_EVAL_REC_495_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_496(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_496_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_496_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_496_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_496_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_496_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_496_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_496_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_496_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_496_##choice
#define EPILEPSY_PRIV_EVAL_REC_496_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_497
#define EPILEPSY_PRIV_EVAL_REC_496_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_497(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_497_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_497_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_497_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_497_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_497_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_497_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_497_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_497_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_497_##choice
#define EPILEPSY_PRIV_EVAL_REC_497_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_498
#define EPILEPSY_PRIV_EVAL_REC_497_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_498(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_498_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_498_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_498_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_498_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_498_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_498_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_498_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_498_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_498_##choice
#define EPILEPSY_PRIV_EVAL_REC_498_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_499
#define EPILEPSY_PRIV_EVAL_REC_498_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_499(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_499_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_499_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_499_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_499_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_499_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_499_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_499_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_499_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_499_##choice
#define EPILEPSY_PRIV_EVAL_REC_499_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_500
#define EPILEPSY_PRIV_EVAL_REC_499_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_500(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_500_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_500_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_500_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_500_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_500_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_500_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_500_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_500_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_500_##choice
#define EPILEPSY_PRIV_EVAL_REC_500_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_501
#define EPILEPSY_PRIV_EVAL_REC_500_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_501(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_501_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_501_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_501_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_501_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_501_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_501_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_501_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_501_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_501_##choice
#define EPILEPSY_PRIV_EVAL_REC_501_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_502
#define EPILEPSY_PRIV_EVAL_REC_501_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_502(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_502_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_502_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_502_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_502_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_502_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_502_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_502_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_502_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_502_##choice
#define EPILEPSY_PRIV_EVAL_REC_502_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_503
#define EPILEPSY_PRIV_EVAL_REC_502_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_503(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_503_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_503_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_503_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_503_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_503_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_503_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_503_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_503_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_503_##choice
#define EPILEPSY_PRIV_EVAL_REC_503_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_504
#define EPILEPSY_PRIV_EVAL_REC_503_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_504(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_504_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_504_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_504_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_504_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_504_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_504_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_504_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_504_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_504_##choice
#define EPILEPSY_PRIV_EVAL_REC_504_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_505
#define EPILEPSY_PRIV_EVAL_REC_504_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_505(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_505_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_505_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_505_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_505_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_505_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_505_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_505_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_505_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_505_##choice
#define EPILEPSY_PRIV_EVAL_REC_505_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_506
#define EPILEPSY_PRIV_EVAL_REC_505_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_506(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_506_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_506_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_506_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_506_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_506_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_506_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_506_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_506_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_506_##choice
#define EPILEPSY_PRIV_EVAL_REC_506_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_507
#define EPILEPSY_PRIV_EVAL_REC_506_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_507(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_507_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_507_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_507_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_507_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_507_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_507_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_507_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_507_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_507_##choice
#define EPILEPSY_PRIV_EVAL_REC_507_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_508
#define EPILEPSY_PRIV_EVAL_REC_507_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_508(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_508_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_508_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_508_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_508_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_508_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_508_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_508_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_508_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_508_##choice
#define EPILEPSY_PRIV_EVAL_REC_508_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_509
#define EPILEPSY_PRIV_EVAL_REC_508_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_509(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_509_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_509_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_509_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_509_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_509_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_509_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_509_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_509_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_509_##choice
#define EPILEPSY_PRIV_EVAL_REC_509_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_510
#define EPILEPSY_PRIV_EVAL_REC_509_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_510(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_510_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_510_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_510_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_510_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_510_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_510_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_510_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_510_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_510_##choice
#define EPILEPSY_PRIV_EVAL_REC_510_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_511
#define EPILEPSY_PRIV_EVAL_REC_510_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_511(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_511_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_511_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_511_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_511_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_511_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_511_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_511_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_511_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_511_##choice
#define EPILEPSY_PRIV_EVAL_REC_511_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_512
#define EPILEPSY_PRIV_EVAL_REC_511_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_512(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_512_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_512_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_512_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_512_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_512_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_512_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_512_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_512_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_512_##choice
#define EPILEPSY_PRIV_EVAL_REC_512_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_513
#define EPILEPSY_PRIV_EVAL_REC_512_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_513(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_513_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_513_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_513_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_513_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_513_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_513_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_513_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_513_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_513_##choice
#define EPILEPSY_PRIV_EVAL_REC_513_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_514
#define EPILEPSY_PRIV_EVAL_REC_513_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_514(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_514_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_514_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_514_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_514_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_514_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_514_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_514_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_514_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_514_##choice
#define EPILEPSY_PRIV_EVAL_REC_514_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_515
#define EPILEPSY_PRIV_EVAL_REC_514_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_515(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_515_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_515_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_515_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_515_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_515_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_515_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_515_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_515_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_515_##choice
#define EPILEPSY_PRIV_EVAL_REC_515_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_516
#define EPILEPSY_PRIV_EVAL_REC_515_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_516(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_516_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_516_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_516_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_516_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_516_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_516_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_516_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_516_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_516_##choice
#define EPILEPSY_PRIV_EVAL_REC_516_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_517
#define EPILEPSY_PRIV_EVAL_REC_516_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_517(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_517_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_517_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_517_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_517_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_517_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_517_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_517_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_517_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_517_##choice
#define EPILEPSY_PRIV_EVAL_REC_517_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_518
#define EPILEPSY_PRIV_EVAL_REC_517_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_518(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_518_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_518_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_518_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_518_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_518_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_518_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_518_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_518_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_518_##choice
#define EPILEPSY_PRIV_EVAL_REC_518_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_519
#define EPILEPSY_PRIV_EVAL_REC_518_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_519(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_519_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_519_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_519_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_519_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_519_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_519_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_519_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_519_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_519_##choice
#define EPILEPSY_PRIV_EVAL_REC_519_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_520
#define EPILEPSY_PRIV_EVAL_REC_519_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_520(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_520_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_520_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_520_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_520_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_520_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_520_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_520_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_520_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_520_##choice
#define EPILEPSY_PRIV_EVAL_REC_520_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_521
#define EPILEPSY_PRIV_EVAL_REC_520_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_521(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_521_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_521_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_521_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_521_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_521_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_521_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_521_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_521_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_521_##choice
#define EPILEPSY_PRIV_EVAL_REC_521_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_522
#define EPILEPSY_PRIV_EVAL_REC_521_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_522(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_522_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_522_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_522_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_522_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_522_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_522_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_522_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_522_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_522_##choice
#define EPILEPSY_PRIV_EVAL_REC_522_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_523
#define EPILEPSY_PRIV_EVAL_REC_522_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_523(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_523_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_523_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_523_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_523_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_523_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_523_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_523_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_523_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_523_##choice
#define EPILEPSY_PRIV_EVAL_REC_523_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_524
#define EPILEPSY_PRIV_EVAL_REC_523_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_524(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_524_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_524_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_524_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_524_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_524_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_524_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_524_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_524_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_524_##choice
#define EPILEPSY_PRIV_EVAL_REC_524_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_525
#define EPILEPSY_PRIV_EVAL_REC_524_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_525(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_525_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_525_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_525_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_525_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_525_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_525_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_525_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_525_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_525_##choice
#define EPILEPSY_PRIV_EVAL_REC_525_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_526
#define EPILEPSY_PRIV_EVAL_REC_525_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_526(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_526_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_526_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_526_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_526_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_526_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_526_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_526_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_526_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_526_##choice
#define EPILEPSY_PRIV_EVAL_REC_526_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_527
#define EPILEPSY_PRIV_EVAL_REC_526_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_527(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_527_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_527_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_527_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_527_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_527_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_527_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_527_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_527_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_527_##choice
#define EPILEPSY_PRIV_EVAL_REC_527_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_528
#define EPILEPSY_PRIV_EVAL_REC_527_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_528(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_528_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_528_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_528_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_528_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_528_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_528_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_528_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_528_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_528_##choice
#define EPILEPSY_PRIV_EVAL_REC_528_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_529
#define EPILEPSY_PRIV_EVAL_REC_528_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_529(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_529_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_529_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_529_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_529_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_529_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_529_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_529_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_529_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_529_##choice
#define EPILEPSY_PRIV_EVAL_REC_529_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_530
#define EPILEPSY_PRIV_EVAL_REC_529_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_530(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_530_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_530_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_530_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_530_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_530_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_530_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_530_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_530_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_530_##choice
#define EPILEPSY_PRIV_EVAL_REC_530_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_531
#define EPILEPSY_PRIV_EVAL_REC_530_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_531(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_531_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_531_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_531_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_531_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_531_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_531_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_531_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_531_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_531_##choice
#define EPILEPSY_PRIV_EVAL_REC_531_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_532
#define EPILEPSY_PRIV_EVAL_REC_531_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_532(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_532_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_532_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_532_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_532_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_532_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_532_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_532_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_532_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_532_##choice
#define EPILEPSY_PRIV_EVAL_REC_532_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_533
#define EPILEPSY_PRIV_EVAL_REC_532_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_533(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_533_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_533_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_533_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_533_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_533_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_533_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_533_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_533_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_533_##choice
#define EPILEPSY_PRIV_EVAL_REC_533_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_534
#define EPILEPSY_PRIV_EVAL_REC_533_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_534(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_534_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_534_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_534_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_534_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_534_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_534_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_534_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_534_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_534_##choice
#define EPILEPSY_PRIV_EVAL_REC_534_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_535
#define EPILEPSY_PRIV_EVAL_REC_534_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_535(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_535_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_535_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_535_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_535_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_535_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_535_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_535_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_535_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_535_##choice
#define EPILEPSY_PRIV_EVAL_REC_535_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_536
#define EPILEPSY_PRIV_EVAL_REC_535_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_536(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_536_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_536_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_536_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_536_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_536_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_536_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_536_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_536_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_536_##choice
#define EPILEPSY_PRIV_EVAL_REC_536_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_537
#define EPILEPSY_PRIV_EVAL_REC_536_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_537(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_537_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_537_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_537_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_537_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_537_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_537_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_537_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_537_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_537_##choice
#define EPILEPSY_PRIV_EVAL_REC_537_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_538
#define EPILEPSY_PRIV_EVAL_REC_537_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_538(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_538_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_538_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_538_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_538_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_538_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_538_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_538_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_538_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_538_##choice
#define EPILEPSY_PRIV_EVAL_REC_538_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_539
#define EPILEPSY_PRIV_EVAL_REC_538_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_539(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_539_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_539_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_539_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_539_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_539_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_539_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_539_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_539_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_539_##choice
#define EPILEPSY_PRIV_EVAL_REC_539_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_540
#define EPILEPSY_PRIV_EVAL_REC_539_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_540(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_540_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_540_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_540_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_540_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_540_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_540_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_540_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_540_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_540_##choice
#define EPILEPSY_PRIV_EVAL_REC_540_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_541
#define EPILEPSY_PRIV_EVAL_REC_540_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_541(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_541_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_541_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_541_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_541_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_541_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_541_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_541_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_541_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_541_##choice
#define EPILEPSY_PRIV_EVAL_REC_541_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_542
#define EPILEPSY_PRIV_EVAL_REC_541_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_542(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_542_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_542_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_542_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_542_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_542_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_542_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_542_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_542_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_542_##choice
#define EPILEPSY_PRIV_EVAL_REC_542_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_543
#define EPILEPSY_PRIV_EVAL_REC_542_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_543(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_543_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_543_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_543_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_543_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_543_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_543_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_543_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_543_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_543_##choice
#define EPILEPSY_PRIV_EVAL_REC_543_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_544
#define EPILEPSY_PRIV_EVAL_REC_543_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_544(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_544_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_544_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_544_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_544_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_544_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_544_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_544_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_544_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_544_##choice
#define EPILEPSY_PRIV_EVAL_REC_544_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_545
#define EPILEPSY_PRIV_EVAL_REC_544_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_545(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_545_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_545_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_545_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_545_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_545_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_545_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_545_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_545_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_545_##choice
#define EPILEPSY_PRIV_EVAL_REC_545_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_546
#define EPILEPSY_PRIV_EVAL_REC_545_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_546(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_546_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_546_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_546_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_546_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_546_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_546_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_546_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_546_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_546_##choice
#define EPILEPSY_PRIV_EVAL_REC_546_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_547
#define EPILEPSY_PRIV_EVAL_REC_546_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_547(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_547_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_547_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_547_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_547_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_547_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_547_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_547_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_547_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_547_##choice
#define EPILEPSY_PRIV_EVAL_REC_547_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_548
#define EPILEPSY_PRIV_EVAL_REC_547_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_548(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_548_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_548_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_548_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_548_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_548_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_548_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_548_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_548_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_548_##choice
#define EPILEPSY_PRIV_EVAL_REC_548_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_549
#define EPILEPSY_PRIV_EVAL_REC_548_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_549(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_549_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_549_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_549_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_549_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_549_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_549_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_549_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_549_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_549_##choice
#define EPILEPSY_PRIV_EVAL_REC_549_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_550
#define EPILEPSY_PRIV_EVAL_REC_549_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_550(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_550_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_550_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_550_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_550_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_550_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_550_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_550_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_550_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_550_##choice
#define EPILEPSY_PRIV_EVAL_REC_550_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_551
#define EPILEPSY_PRIV_EVAL_REC_550_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_551(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_551_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_551_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_551_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_551_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_551_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_551_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_551_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_551_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_551_##choice
#define EPILEPSY_PRIV_EVAL_REC_551_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_552
#define EPILEPSY_PRIV_EVAL_REC_551_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_552(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_552_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_552_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_552_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_552_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_552_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_552_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_552_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_552_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_552_##choice
#define EPILEPSY_PRIV_EVAL_REC_552_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_553
#define EPILEPSY_PRIV_EVAL_REC_552_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_553(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_553_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_553_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_553_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_553_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_553_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_553_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_553_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_553_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_553_##choice
#define EPILEPSY_PRIV_EVAL_REC_553_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_554
#define EPILEPSY_PRIV_EVAL_REC_553_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_554(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_554_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_554_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_554_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_554_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_554_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_554_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_554_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_554_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_554_##choice
#define EPILEPSY_PRIV_EVAL_REC_554_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_555
#define EPILEPSY_PRIV_EVAL_REC_554_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_555(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_555_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_555_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_555_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_555_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_555_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_555_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_555_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_555_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_555_##choice
#define EPILEPSY_PRIV_EVAL_REC_555_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_556
#define EPILEPSY_PRIV_EVAL_REC_555_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_556(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_556_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_556_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_556_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_556_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_556_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_556_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_556_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_556_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_556_##choice
#define EPILEPSY_PRIV_EVAL_REC_556_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_557
#define EPILEPSY_PRIV_EVAL_REC_556_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_557(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_557_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_557_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_557_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_557_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_557_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_557_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_557_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_557_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_557_##choice
#define EPILEPSY_PRIV_EVAL_REC_557_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_558
#define EPILEPSY_PRIV_EVAL_REC_557_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_558(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_558_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_558_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_558_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_558_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_558_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_558_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_558_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_558_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_558_##choice
#define EPILEPSY_PRIV_EVAL_REC_558_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_559
#define EPILEPSY_PRIV_EVAL_REC_558_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_559(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_559_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_559_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_559_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_559_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_559_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_559_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_559_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_559_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_559_##choice
#define EPILEPSY_PRIV_EVAL_REC_559_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_560
#define EPILEPSY_PRIV_EVAL_REC_559_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_560(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_560_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_560_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_560_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_560_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_560_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_560_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_560_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_560_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_560_##choice
#define EPILEPSY_PRIV_EVAL_REC_560_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_561
#define EPILEPSY_PRIV_EVAL_REC_560_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_561(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_561_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_561_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_561_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_561_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_561_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_561_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_561_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_561_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_561_##choice
#define EPILEPSY_PRIV_EVAL_REC_561_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_562
#define EPILEPSY_PRIV_EVAL_REC_561_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_562(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_562_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_562_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_562_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_562_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_562_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_562_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_562_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_562_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_562_##choice
#define EPILEPSY_PRIV_EVAL_REC_562_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_563
#define EPILEPSY_PRIV_EVAL_REC_562_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_563(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_563_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_563_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_563_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_563_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_563_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_563_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_563_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_563_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_563_##choice
#define EPILEPSY_PRIV_EVAL_REC_563_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_564
#define EPILEPSY_PRIV_EVAL_REC_563_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_564(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_564_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_564_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_564_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_564_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_564_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_564_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_564_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_564_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_564_##choice
#define EPILEPSY_PRIV_EVAL_REC_564_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_565
#define EPILEPSY_PRIV_EVAL_REC_564_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_565(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_565_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_565_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_565_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_565_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_565_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_565_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_565_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_565_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_565_##choice
#define EPILEPSY_PRIV_EVAL_REC_565_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_566
#define EPILEPSY_PRIV_EVAL_REC_565_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_566(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_566_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_566_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_566_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_566_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_566_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_566_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_566_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_566_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_566_##choice
#define EPILEPSY_PRIV_EVAL_REC_566_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_567
#define EPILEPSY_PRIV_EVAL_REC_566_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_567(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_567_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_567_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_567_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_567_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_567_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_567_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_567_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_567_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_567_##choice
#define EPILEPSY_PRIV_EVAL_REC_567_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_568
#define EPILEPSY_PRIV_EVAL_REC_567_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_568(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_568_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_568_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_568_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_568_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_568_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_568_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_568_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_568_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_568_##choice
#define EPILEPSY_PRIV_EVAL_REC_568_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_569
#define EPILEPSY_PRIV_EVAL_REC_568_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_569(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_569_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_569_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_569_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_569_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_569_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_569_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_569_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_569_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_569_##choice
#define EPILEPSY_PRIV_EVAL_REC_569_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_570
#define EPILEPSY_PRIV_EVAL_REC_569_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_570(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_570_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_570_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_570_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_570_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_570_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_570_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_570_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_570_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_570_##choice
#define EPILEPSY_PRIV_EVAL_REC_570_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_571
#define EPILEPSY_PRIV_EVAL_REC_570_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_571(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_571_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_571_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_571_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_571_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_571_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_571_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_571_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_571_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_571_##choice
#define EPILEPSY_PRIV_EVAL_REC_571_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_572
#define EPILEPSY_PRIV_EVAL_REC_571_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_572(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_572_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_572_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_572_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_572_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_572_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_572_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_572_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_572_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_572_##choice
#define EPILEPSY_PRIV_EVAL_REC_572_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_573
#define EPILEPSY_PRIV_EVAL_REC_572_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_573(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_573_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_573_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_573_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_573_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_573_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_573_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_573_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_573_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_573_##choice
#define EPILEPSY_PRIV_EVAL_REC_573_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_574
#define EPILEPSY_PRIV_EVAL_REC_573_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_574(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_574_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_574_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_574_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_574_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_574_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_574_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_574_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_574_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_574_##choice
#define EPILEPSY_PRIV_EVAL_REC_574_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_575
#define EPILEPSY_PRIV_EVAL_REC_574_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_575(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_575_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_575_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_575_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_575_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_575_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_575_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_575_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_575_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_575_##choice
#define EPILEPSY_PRIV_EVAL_REC_575_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_576
#define EPILEPSY_PRIV_EVAL_REC_575_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_576(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_576_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_576_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_576_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_576_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_576_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_576_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_576_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_576_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_576_##choice
#define EPILEPSY_PRIV_EVAL_REC_576_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_577
#define EPILEPSY_PRIV_EVAL_REC_576_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_577(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_577_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_577_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_577_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_577_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_577_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_577_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_577_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_577_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_577_##choice
#define EPILEPSY_PRIV_EVAL_REC_577_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_578
#define EPILEPSY_PRIV_EVAL_REC_577_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_578(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_578_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_578_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_578_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_578_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_578_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_578_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_578_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_578_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_578_##choice
#define EPILEPSY_PRIV_EVAL_REC_578_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_579
#define EPILEPSY_PRIV_EVAL_REC_578_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_579(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_579_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_579_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_579_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_579_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_579_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_579_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_579_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_579_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_579_##choice
#define EPILEPSY_PRIV_EVAL_REC_579_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_580
#define EPILEPSY_PRIV_EVAL_REC_579_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_580(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_580_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_580_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_580_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_580_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_580_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_580_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_580_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_580_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_580_##choice
#define EPILEPSY_PRIV_EVAL_REC_580_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_581
#define EPILEPSY_PRIV_EVAL_REC_580_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_581(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_581_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_581_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_581_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_581_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_581_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_581_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_581_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_581_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_581_##choice
#define EPILEPSY_PRIV_EVAL_REC_581_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_582
#define EPILEPSY_PRIV_EVAL_REC_581_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_582(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_582_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_582_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_582_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_582_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_582_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_582_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_582_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_582_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_582_##choice
#define EPILEPSY_PRIV_EVAL_REC_582_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_583
#define EPILEPSY_PRIV_EVAL_REC_582_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_583(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_583_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_583_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_583_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_583_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_583_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_583_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_583_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_583_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_583_##choice
#define EPILEPSY_PRIV_EVAL_REC_583_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_584
#define EPILEPSY_PRIV_EVAL_REC_583_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_584(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_584_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_584_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_584_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_584_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_584_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_584_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_584_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_584_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_584_##choice
#define EPILEPSY_PRIV_EVAL_REC_584_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_585
#define EPILEPSY_PRIV_EVAL_REC_584_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_585(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_585_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_585_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_585_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_585_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_585_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_585_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_585_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_585_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_585_##choice
#define EPILEPSY_PRIV_EVAL_REC_585_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_586
#define EPILEPSY_PRIV_EVAL_REC_585_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_586(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_586_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_586_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_586_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_586_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_586_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_586_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_586_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_586_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_586_##choice
#define EPILEPSY_PRIV_EVAL_REC_586_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_587
#define EPILEPSY_PRIV_EVAL_REC_586_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_587(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_587_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_587_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_587_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_587_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_587_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_587_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_587_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_587_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_587_##choice
#define EPILEPSY_PRIV_EVAL_REC_587_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_588
#define EPILEPSY_PRIV_EVAL_REC_587_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_588(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_588_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_588_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_588_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_588_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_588_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_588_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_588_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_588_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_588_##choice
#define EPILEPSY_PRIV_EVAL_REC_588_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_589
#define EPILEPSY_PRIV_EVAL_REC_588_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_589(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_589_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_589_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_589_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_589_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_589_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_589_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_589_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_589_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_589_##choice
#define EPILEPSY_PRIV_EVAL_REC_589_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_590
#define EPILEPSY_PRIV_EVAL_REC_589_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_590(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_590_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_590_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_590_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_590_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_590_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_590_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_590_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_590_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_590_##choice
#define EPILEPSY_PRIV_EVAL_REC_590_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_591
#define EPILEPSY_PRIV_EVAL_REC_590_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_591(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_591_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_591_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_591_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_591_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_591_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_591_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_591_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_591_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_591_##choice
#define EPILEPSY_PRIV_EVAL_REC_591_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_592
#define EPILEPSY_PRIV_EVAL_REC_591_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_592(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_592_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_592_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_592_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_592_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_592_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_592_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_592_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_592_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_592_##choice
#define EPILEPSY_PRIV_EVAL_REC_592_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_593
#define EPILEPSY_PRIV_EVAL_REC_592_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_593(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_593_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_593_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_593_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_593_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_593_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_593_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_593_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_593_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_593_##choice
#define EPILEPSY_PRIV_EVAL_REC_593_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_594
#define EPILEPSY_PRIV_EVAL_REC_593_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_594(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_594_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_594_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_594_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_594_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_594_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_594_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_594_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_594_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_594_##choice
#define EPILEPSY_PRIV_EVAL_REC_594_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_595
#define EPILEPSY_PRIV_EVAL_REC_594_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_595(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_595_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_595_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_595_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_595_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_595_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_595_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_595_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_595_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_595_##choice
#define EPILEPSY_PRIV_EVAL_REC_595_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_596
#define EPILEPSY_PRIV_EVAL_REC_595_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_596(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_596_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_596_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_596_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_596_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_596_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_596_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_596_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_596_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_596_##choice
#define EPILEPSY_PRIV_EVAL_REC_596_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_597
#define EPILEPSY_PRIV_EVAL_REC_596_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_597(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_597_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_597_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_597_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_597_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_597_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_597_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_597_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_597_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_597_##choice
#define EPILEPSY_PRIV_EVAL_REC_597_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_598
#define EPILEPSY_PRIV_EVAL_REC_597_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_598(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_598_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_598_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_598_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_598_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_598_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_598_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_598_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_598_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_598_##choice
#define EPILEPSY_PRIV_EVAL_REC_598_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_599
#define EPILEPSY_PRIV_EVAL_REC_598_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_599(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_599_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_599_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_599_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_599_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_599_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_599_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_599_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_599_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_599_##choice
#define EPILEPSY_PRIV_EVAL_REC_599_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_600
#define EPILEPSY_PRIV_EVAL_REC_599_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_600(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_600_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_600_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_600_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_600_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_600_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_600_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_600_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_600_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_600_##choice
#define EPILEPSY_PRIV_EVAL_REC_600_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_601
#define EPILEPSY_PRIV_EVAL_REC_600_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_601(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_601_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_601_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_601_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_601_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_601_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_601_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_601_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_601_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_601_##choice
#define EPILEPSY_PRIV_EVAL_REC_601_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_602
#define EPILEPSY_PRIV_EVAL_REC_601_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_602(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_602_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_602_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_602_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_602_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_602_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_602_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_602_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_602_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_602_##choice
#define EPILEPSY_PRIV_EVAL_REC_602_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_603
#define EPILEPSY_PRIV_EVAL_REC_602_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_603(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_603_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_603_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_603_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_603_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_603_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_603_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_603_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_603_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_603_##choice
#define EPILEPSY_PRIV_EVAL_REC_603_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_604
#define EPILEPSY_PRIV_EVAL_REC_603_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_604(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_604_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_604_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_604_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_604_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_604_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_604_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_604_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_604_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_604_##choice
#define EPILEPSY_PRIV_EVAL_REC_604_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_605
#define EPILEPSY_PRIV_EVAL_REC_604_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_605(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_605_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_605_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_605_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_605_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_605_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_605_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_605_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_605_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_605_##choice
#define EPILEPSY_PRIV_EVAL_REC_605_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_606
#define EPILEPSY_PRIV_EVAL_REC_605_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_606(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_606_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_606_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_606_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_606_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_606_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_606_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_606_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_606_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_606_##choice
#define EPILEPSY_PRIV_EVAL_REC_606_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_607
#define EPILEPSY_PRIV_EVAL_REC_606_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_607(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_607_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_607_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_607_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_607_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_607_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_607_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_607_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_607_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_607_##choice
#define EPILEPSY_PRIV_EVAL_REC_607_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_608
#define EPILEPSY_PRIV_EVAL_REC_607_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_608(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_608_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_608_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_608_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_608_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_608_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_608_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_608_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_608_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_608_##choice
#define EPILEPSY_PRIV_EVAL_REC_608_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_609
#define EPILEPSY_PRIV_EVAL_REC_608_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_609(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_609_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_609_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_609_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_609_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_609_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_609_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_609_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_609_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_609_##choice
#define EPILEPSY_PRIV_EVAL_REC_609_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_610
#define EPILEPSY_PRIV_EVAL_REC_609_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_610(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_610_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_610_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_610_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_610_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_610_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_610_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_610_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_610_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_610_##choice
#define EPILEPSY_PRIV_EVAL_REC_610_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_611
#define EPILEPSY_PRIV_EVAL_REC_610_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_611(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_611_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_611_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_611_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_611_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_611_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_611_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_611_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_611_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_611_##choice
#define EPILEPSY_PRIV_EVAL_REC_611_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_612
#define EPILEPSY_PRIV_EVAL_REC_611_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_612(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_612_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_612_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_612_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_612_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_612_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_612_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_612_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_612_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_612_##choice
#define EPILEPSY_PRIV_EVAL_REC_612_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_613
#define EPILEPSY_PRIV_EVAL_REC_612_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_613(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_613_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_613_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_613_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_613_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_613_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_613_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_613_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_613_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_613_##choice
#define EPILEPSY_PRIV_EVAL_REC_613_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_614
#define EPILEPSY_PRIV_EVAL_REC_613_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_614(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_614_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_614_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_614_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_614_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_614_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_614_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_614_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_614_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_614_##choice
#define EPILEPSY_PRIV_EVAL_REC_614_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_615
#define EPILEPSY_PRIV_EVAL_REC_614_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_615(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_615_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_615_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_615_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_615_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_615_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_615_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_615_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_615_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_615_##choice
#define EPILEPSY_PRIV_EVAL_REC_615_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_616
#define EPILEPSY_PRIV_EVAL_REC_615_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_616(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_616_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_616_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_616_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_616_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_616_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_616_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_616_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_616_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_616_##choice
#define EPILEPSY_PRIV_EVAL_REC_616_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_617
#define EPILEPSY_PRIV_EVAL_REC_616_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_617(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_617_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_617_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_617_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_617_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_617_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_617_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_617_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_617_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_617_##choice
#define EPILEPSY_PRIV_EVAL_REC_617_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_618
#define EPILEPSY_PRIV_EVAL_REC_617_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_618(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_618_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_618_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_618_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_618_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_618_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_618_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_618_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_618_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_618_##choice
#define EPILEPSY_PRIV_EVAL_REC_618_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_619
#define EPILEPSY_PRIV_EVAL_REC_618_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_619(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_619_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_619_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_619_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_619_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_619_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_619_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_619_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_619_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_619_##choice
#define EPILEPSY_PRIV_EVAL_REC_619_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_620
#define EPILEPSY_PRIV_EVAL_REC_619_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_620(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_620_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_620_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_620_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_620_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_620_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_620_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_620_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_620_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_620_##choice
#define EPILEPSY_PRIV_EVAL_REC_620_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_621
#define EPILEPSY_PRIV_EVAL_REC_620_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_621(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_621_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_621_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_621_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_621_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_621_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_621_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_621_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_621_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_621_##choice
#define EPILEPSY_PRIV_EVAL_REC_621_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_622
#define EPILEPSY_PRIV_EVAL_REC_621_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_622(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_622_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_622_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_622_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_622_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_622_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_622_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_622_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_622_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_622_##choice
#define EPILEPSY_PRIV_EVAL_REC_622_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_623
#define EPILEPSY_PRIV_EVAL_REC_622_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_623(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_623_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_623_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_623_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_623_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_623_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_623_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_623_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_623_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_623_##choice
#define EPILEPSY_PRIV_EVAL_REC_623_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_624
#define EPILEPSY_PRIV_EVAL_REC_623_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_624(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_624_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_624_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_624_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_624_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_624_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_624_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_624_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_624_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_624_##choice
#define EPILEPSY_PRIV_EVAL_REC_624_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_625
#define EPILEPSY_PRIV_EVAL_REC_624_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_625(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_625_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_625_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_625_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_625_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_625_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_625_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_625_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_625_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_625_##choice
#define EPILEPSY_PRIV_EVAL_REC_625_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_626
#define EPILEPSY_PRIV_EVAL_REC_625_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_626(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_626_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_626_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_626_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_626_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_626_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_626_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_626_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_626_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_626_##choice
#define EPILEPSY_PRIV_EVAL_REC_626_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_627
#define EPILEPSY_PRIV_EVAL_REC_626_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_627(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_627_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_627_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_627_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_627_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_627_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_627_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_627_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_627_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_627_##choice
#define EPILEPSY_PRIV_EVAL_REC_627_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_628
#define EPILEPSY_PRIV_EVAL_REC_627_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_628(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_628_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_628_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_628_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_628_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_628_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_628_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_628_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_628_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_628_##choice
#define EPILEPSY_PRIV_EVAL_REC_628_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_629
#define EPILEPSY_PRIV_EVAL_REC_628_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_629(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_629_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_629_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_629_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_629_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_629_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_629_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_629_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_629_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_629_##choice
#define EPILEPSY_PRIV_EVAL_REC_629_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_630
#define EPILEPSY_PRIV_EVAL_REC_629_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_630(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_630_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_630_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_630_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_630_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_630_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_630_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_630_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_630_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_630_##choice
#define EPILEPSY_PRIV_EVAL_REC_630_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_631
#define EPILEPSY_PRIV_EVAL_REC_630_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_631(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_631_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_631_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_631_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_631_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_631_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_631_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_631_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_631_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_631_##choice
#define EPILEPSY_PRIV_EVAL_REC_631_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_632
#define EPILEPSY_PRIV_EVAL_REC_631_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_632(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_632_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_632_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_632_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_632_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_632_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_632_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_632_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_632_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_632_##choice
#define EPILEPSY_PRIV_EVAL_REC_632_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_633
#define EPILEPSY_PRIV_EVAL_REC_632_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_633(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_633_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_633_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_633_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_633_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_633_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_633_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_633_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_633_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_633_##choice
#define EPILEPSY_PRIV_EVAL_REC_633_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_634
#define EPILEPSY_PRIV_EVAL_REC_633_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_634(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_634_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_634_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_634_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_634_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_634_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_634_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_634_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_634_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_634_##choice
#define EPILEPSY_PRIV_EVAL_REC_634_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_635
#define EPILEPSY_PRIV_EVAL_REC_634_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_635(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_635_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_635_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_635_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_635_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_635_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_635_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_635_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_635_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_635_##choice
#define EPILEPSY_PRIV_EVAL_REC_635_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_636
#define EPILEPSY_PRIV_EVAL_REC_635_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_636(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_636_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_636_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_636_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_636_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_636_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_636_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_636_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_636_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_636_##choice
#define EPILEPSY_PRIV_EVAL_REC_636_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_637
#define EPILEPSY_PRIV_EVAL_REC_636_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_637(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_637_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_637_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_637_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_637_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_637_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_637_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_637_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_637_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_637_##choice
#define EPILEPSY_PRIV_EVAL_REC_637_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_638
#define EPILEPSY_PRIV_EVAL_REC_637_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_638(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_638_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_638_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_638_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_638_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_638_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_638_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_638_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_638_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_638_##choice
#define EPILEPSY_PRIV_EVAL_REC_638_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_639
#define EPILEPSY_PRIV_EVAL_REC_638_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_639(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_639_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_639_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_639_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_639_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_639_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_639_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_639_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_639_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_639_##choice
#define EPILEPSY_PRIV_EVAL_REC_639_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_640
#define EPILEPSY_PRIV_EVAL_REC_639_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_640(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_640_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_640_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_640_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_640_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_640_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_640_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_640_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_640_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_640_##choice
#define EPILEPSY_PRIV_EVAL_REC_640_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_641
#define EPILEPSY_PRIV_EVAL_REC_640_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_641(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_641_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_641_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_641_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_641_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_641_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_641_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_641_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_641_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_641_##choice
#define EPILEPSY_PRIV_EVAL_REC_641_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_642
#define EPILEPSY_PRIV_EVAL_REC_641_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_642(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_642_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_642_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_642_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_642_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_642_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_642_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_642_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_642_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_642_##choice
#define EPILEPSY_PRIV_EVAL_REC_642_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_643
#define EPILEPSY_PRIV_EVAL_REC_642_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_643(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_643_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_643_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_643_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_643_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_643_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_643_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_643_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_643_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_643_##choice
#define EPILEPSY_PRIV_EVAL_REC_643_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_644
#define EPILEPSY_PRIV_EVAL_REC_643_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_644(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_644_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_644_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_644_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_644_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_644_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_644_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_644_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_644_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_644_##choice
#define EPILEPSY_PRIV_EVAL_REC_644_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_645
#define EPILEPSY_PRIV_EVAL_REC_644_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_645(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_645_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_645_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_645_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_645_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_645_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_645_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_645_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_645_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_645_##choice
#define EPILEPSY_PRIV_EVAL_REC_645_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_646
#define EPILEPSY_PRIV_EVAL_REC_645_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_646(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_646_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_646_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_646_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_646_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_646_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_646_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_646_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_646_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_646_##choice
#define EPILEPSY_PRIV_EVAL_REC_646_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_647
#define EPILEPSY_PRIV_EVAL_REC_646_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_647(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_647_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_647_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_647_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_647_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_647_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_647_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_647_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_647_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_647_##choice
#define EPILEPSY_PRIV_EVAL_REC_647_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_648
#define EPILEPSY_PRIV_EVAL_REC_647_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_648(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_648_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_648_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_648_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_648_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_648_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_648_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_648_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_648_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_648_##choice
#define EPILEPSY_PRIV_EVAL_REC_648_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_649
#define EPILEPSY_PRIV_EVAL_REC_648_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_649(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_649_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_649_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_649_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_649_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_649_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_649_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_649_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_649_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_649_##choice
#define EPILEPSY_PRIV_EVAL_REC_649_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_650
#define EPILEPSY_PRIV_EVAL_REC_649_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_650(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_650_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_650_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_650_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_650_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_650_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_650_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_650_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_650_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_650_##choice
#define EPILEPSY_PRIV_EVAL_REC_650_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_651
#define EPILEPSY_PRIV_EVAL_REC_650_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_651(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_651_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_651_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_651_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_651_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_651_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_651_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_651_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_651_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_651_##choice
#define EPILEPSY_PRIV_EVAL_REC_651_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_652
#define EPILEPSY_PRIV_EVAL_REC_651_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_652(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_652_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_652_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_652_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_652_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_652_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_652_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_652_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_652_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_652_##choice
#define EPILEPSY_PRIV_EVAL_REC_652_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_653
#define EPILEPSY_PRIV_EVAL_REC_652_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_653(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_653_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_653_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_653_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_653_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_653_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_653_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_653_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_653_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_653_##choice
#define EPILEPSY_PRIV_EVAL_REC_653_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_654
#define EPILEPSY_PRIV_EVAL_REC_653_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_654(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_654_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_654_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_654_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_654_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_654_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_654_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_654_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_654_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_654_##choice
#define EPILEPSY_PRIV_EVAL_REC_654_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_655
#define EPILEPSY_PRIV_EVAL_REC_654_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_655(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_655_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_655_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_655_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_655_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_655_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_655_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_655_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_655_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_655_##choice
#define EPILEPSY_PRIV_EVAL_REC_655_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_656
#define EPILEPSY_PRIV_EVAL_REC_655_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_656(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_656_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_656_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_656_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_656_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_656_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_656_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_656_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_656_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_656_##choice
#define EPILEPSY_PRIV_EVAL_REC_656_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_657
#define EPILEPSY_PRIV_EVAL_REC_656_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_657(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_657_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_657_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_657_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_657_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_657_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_657_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_657_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_657_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_657_##choice
#define EPILEPSY_PRIV_EVAL_REC_657_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_658
#define EPILEPSY_PRIV_EVAL_REC_657_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_658(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_658_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_658_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_658_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_658_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_658_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_658_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_658_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_658_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_658_##choice
#define EPILEPSY_PRIV_EVAL_REC_658_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_659
#define EPILEPSY_PRIV_EVAL_REC_658_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_659(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_659_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_659_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_659_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_659_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_659_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_659_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_659_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_659_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_659_##choice
#define EPILEPSY_PRIV_EVAL_REC_659_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_660
#define EPILEPSY_PRIV_EVAL_REC_659_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_660(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_660_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_660_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_660_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_660_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_660_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_660_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_660_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_660_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_660_##choice
#define EPILEPSY_PRIV_EVAL_REC_660_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_661
#define EPILEPSY_PRIV_EVAL_REC_660_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_661(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_661_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_661_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_661_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_661_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_661_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_661_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_661_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_661_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_661_##choice
#define EPILEPSY_PRIV_EVAL_REC_661_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_662
#define EPILEPSY_PRIV_EVAL_REC_661_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_662(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_662_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_662_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_662_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_662_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_662_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_662_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_662_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_662_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_662_##choice
#define EPILEPSY_PRIV_EVAL_REC_662_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_663
#define EPILEPSY_PRIV_EVAL_REC_662_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_663(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_663_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_663_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_663_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_663_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_663_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_663_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_663_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_663_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_663_##choice
#define EPILEPSY_PRIV_EVAL_REC_663_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_664
#define EPILEPSY_PRIV_EVAL_REC_663_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_664(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_664_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_664_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_664_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_664_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_664_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_664_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_664_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_664_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_664_##choice
#define EPILEPSY_PRIV_EVAL_REC_664_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_665
#define EPILEPSY_PRIV_EVAL_REC_664_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_665(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_665_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_665_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_665_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_665_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_665_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_665_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_665_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_665_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_665_##choice
#define EPILEPSY_PRIV_EVAL_REC_665_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_666
#define EPILEPSY_PRIV_EVAL_REC_665_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_666(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_666_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_666_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_666_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_666_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_666_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_666_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_666_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_666_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_666_##choice
#define EPILEPSY_PRIV_EVAL_REC_666_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_667
#define EPILEPSY_PRIV_EVAL_REC_666_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_667(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_667_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_667_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_667_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_667_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_667_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_667_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_667_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_667_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_667_##choice
#define EPILEPSY_PRIV_EVAL_REC_667_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_668
#define EPILEPSY_PRIV_EVAL_REC_667_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_668(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_668_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_668_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_668_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_668_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_668_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_668_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_668_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_668_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_668_##choice
#define EPILEPSY_PRIV_EVAL_REC_668_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_669
#define EPILEPSY_PRIV_EVAL_REC_668_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_669(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_669_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_669_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_669_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_669_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_669_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_669_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_669_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_669_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_669_##choice
#define EPILEPSY_PRIV_EVAL_REC_669_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_670
#define EPILEPSY_PRIV_EVAL_REC_669_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_670(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_670_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_670_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_670_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_670_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_670_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_670_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_670_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_670_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_670_##choice
#define EPILEPSY_PRIV_EVAL_REC_670_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_671
#define EPILEPSY_PRIV_EVAL_REC_670_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_671(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_671_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_671_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_671_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_671_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_671_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_671_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_671_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_671_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_671_##choice
#define EPILEPSY_PRIV_EVAL_REC_671_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_672
#define EPILEPSY_PRIV_EVAL_REC_671_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_672(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_672_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_672_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_672_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_672_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_672_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_672_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_672_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_672_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_672_##choice
#define EPILEPSY_PRIV_EVAL_REC_672_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_673
#define EPILEPSY_PRIV_EVAL_REC_672_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_673(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_673_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_673_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_673_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_673_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_673_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_673_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_673_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_673_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_673_##choice
#define EPILEPSY_PRIV_EVAL_REC_673_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_674
#define EPILEPSY_PRIV_EVAL_REC_673_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_674(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_674_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_674_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_674_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_674_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_674_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_674_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_674_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_674_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_674_##choice
#define EPILEPSY_PRIV_EVAL_REC_674_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_675
#define EPILEPSY_PRIV_EVAL_REC_674_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_675(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_675_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_675_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_675_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_675_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_675_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_675_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_675_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_675_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_675_##choice
#define EPILEPSY_PRIV_EVAL_REC_675_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_676
#define EPILEPSY_PRIV_EVAL_REC_675_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_676(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_676_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_676_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_676_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_676_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_676_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_676_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_676_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_676_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_676_##choice
#define EPILEPSY_PRIV_EVAL_REC_676_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_677
#define EPILEPSY_PRIV_EVAL_REC_676_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_677(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_677_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_677_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_677_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_677_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_677_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_677_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_677_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_677_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_677_##choice
#define EPILEPSY_PRIV_EVAL_REC_677_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_678
#define EPILEPSY_PRIV_EVAL_REC_677_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_678(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_678_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_678_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_678_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_678_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_678_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_678_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_678_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_678_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_678_##choice
#define EPILEPSY_PRIV_EVAL_REC_678_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_679
#define EPILEPSY_PRIV_EVAL_REC_678_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_679(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_679_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_679_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_679_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_679_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_679_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_679_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_679_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_679_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_679_##choice
#define EPILEPSY_PRIV_EVAL_REC_679_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_680
#define EPILEPSY_PRIV_EVAL_REC_679_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_680(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_680_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_680_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_680_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_680_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_680_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_680_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_680_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_680_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_680_##choice
#define EPILEPSY_PRIV_EVAL_REC_680_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_681
#define EPILEPSY_PRIV_EVAL_REC_680_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_681(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_681_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_681_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_681_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_681_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_681_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_681_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_681_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_681_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_681_##choice
#define EPILEPSY_PRIV_EVAL_REC_681_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_682
#define EPILEPSY_PRIV_EVAL_REC_681_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_682(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_682_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_682_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_682_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_682_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_682_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_682_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_682_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_682_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_682_##choice
#define EPILEPSY_PRIV_EVAL_REC_682_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_683
#define EPILEPSY_PRIV_EVAL_REC_682_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_683(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_683_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_683_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_683_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_683_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_683_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_683_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_683_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_683_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_683_##choice
#define EPILEPSY_PRIV_EVAL_REC_683_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_684
#define EPILEPSY_PRIV_EVAL_REC_683_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_684(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_684_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_684_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_684_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_684_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_684_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_684_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_684_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_684_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_684_##choice
#define EPILEPSY_PRIV_EVAL_REC_684_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_685
#define EPILEPSY_PRIV_EVAL_REC_684_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_685(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_685_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_685_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_685_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_685_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_685_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_685_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_685_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_685_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_685_##choice
#define EPILEPSY_PRIV_EVAL_REC_685_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_686
#define EPILEPSY_PRIV_EVAL_REC_685_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_686(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_686_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_686_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_686_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_686_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_686_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_686_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_686_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_686_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_686_##choice
#define EPILEPSY_PRIV_EVAL_REC_686_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_687
#define EPILEPSY_PRIV_EVAL_REC_686_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_687(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_687_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_687_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_687_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_687_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_687_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_687_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_687_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_687_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_687_##choice
#define EPILEPSY_PRIV_EVAL_REC_687_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_688
#define EPILEPSY_PRIV_EVAL_REC_687_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_688(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_688_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_688_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_688_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_688_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_688_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_688_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_688_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_688_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_688_##choice
#define EPILEPSY_PRIV_EVAL_REC_688_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_689
#define EPILEPSY_PRIV_EVAL_REC_688_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_689(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_689_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_689_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_689_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_689_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_689_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_689_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_689_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_689_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_689_##choice
#define EPILEPSY_PRIV_EVAL_REC_689_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_690
#define EPILEPSY_PRIV_EVAL_REC_689_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_690(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_690_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_690_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_690_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_690_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_690_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_690_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_690_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_690_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_690_##choice
#define EPILEPSY_PRIV_EVAL_REC_690_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_691
#define EPILEPSY_PRIV_EVAL_REC_690_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_691(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_691_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_691_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_691_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_691_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_691_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_691_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_691_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_691_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_691_##choice
#define EPILEPSY_PRIV_EVAL_REC_691_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_692
#define EPILEPSY_PRIV_EVAL_REC_691_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_692(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_692_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_692_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_692_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_692_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_692_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_692_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_692_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_692_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_692_##choice
#define EPILEPSY_PRIV_EVAL_REC_692_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_693
#define EPILEPSY_PRIV_EVAL_REC_692_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_693(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_693_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_693_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_693_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_693_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_693_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_693_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_693_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_693_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_693_##choice
#define EPILEPSY_PRIV_EVAL_REC_693_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_694
#define EPILEPSY_PRIV_EVAL_REC_693_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_694(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_694_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_694_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_694_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_694_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_694_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_694_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_694_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_694_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_694_##choice
#define EPILEPSY_PRIV_EVAL_REC_694_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_695
#define EPILEPSY_PRIV_EVAL_REC_694_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_695(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_695_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_695_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_695_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_695_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_695_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_695_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_695_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_695_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_695_##choice
#define EPILEPSY_PRIV_EVAL_REC_695_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_696
#define EPILEPSY_PRIV_EVAL_REC_695_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_696(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_696_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_696_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_696_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_696_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_696_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_696_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_696_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_696_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_696_##choice
#define EPILEPSY_PRIV_EVAL_REC_696_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_697
#define EPILEPSY_PRIV_EVAL_REC_696_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_697(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_697_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_697_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_697_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_697_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_697_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_697_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_697_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_697_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_697_##choice
#define EPILEPSY_PRIV_EVAL_REC_697_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_698
#define EPILEPSY_PRIV_EVAL_REC_697_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_698(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_698_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_698_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_698_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_698_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_698_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_698_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_698_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_698_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_698_##choice
#define EPILEPSY_PRIV_EVAL_REC_698_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_699
#define EPILEPSY_PRIV_EVAL_REC_698_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_699(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_699_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_699_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_699_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_699_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_699_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_699_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_699_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_699_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_699_##choice
#define EPILEPSY_PRIV_EVAL_REC_699_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_700
#define EPILEPSY_PRIV_EVAL_REC_699_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_700(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_700_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_700_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_700_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_700_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_700_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_700_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_700_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_700_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_700_##choice
#define EPILEPSY_PRIV_EVAL_REC_700_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_701
#define EPILEPSY_PRIV_EVAL_REC_700_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_701(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_701_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_701_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_701_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_701_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_701_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_701_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_701_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_701_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_701_##choice
#define EPILEPSY_PRIV_EVAL_REC_701_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_702
#define EPILEPSY_PRIV_EVAL_REC_701_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_702(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_702_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_702_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_702_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_702_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_702_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_702_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_702_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_702_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_702_##choice
#define EPILEPSY_PRIV_EVAL_REC_702_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_703
#define EPILEPSY_PRIV_EVAL_REC_702_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_703(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_703_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_703_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_703_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_703_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_703_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_703_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_703_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_703_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_703_##choice
#define EPILEPSY_PRIV_EVAL_REC_703_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_704
#define EPILEPSY_PRIV_EVAL_REC_703_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_704(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_704_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_704_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_704_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_704_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_704_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_704_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_704_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_704_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_704_##choice
#define EPILEPSY_PRIV_EVAL_REC_704_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_705
#define EPILEPSY_PRIV_EVAL_REC_704_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_705(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_705_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_705_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_705_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_705_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_705_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_705_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_705_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_705_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_705_##choice
#define EPILEPSY_PRIV_EVAL_REC_705_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_706
#define EPILEPSY_PRIV_EVAL_REC_705_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_706(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_706_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_706_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_706_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_706_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_706_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_706_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_706_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_706_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_706_##choice
#define EPILEPSY_PRIV_EVAL_REC_706_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_707
#define EPILEPSY_PRIV_EVAL_REC_706_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_707(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_707_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_707_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_707_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_707_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_707_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_707_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_707_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_707_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_707_##choice
#define EPILEPSY_PRIV_EVAL_REC_707_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_708
#define EPILEPSY_PRIV_EVAL_REC_707_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_708(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_708_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_708_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_708_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_708_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_708_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_708_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_708_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_708_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_708_##choice
#define EPILEPSY_PRIV_EVAL_REC_708_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_709
#define EPILEPSY_PRIV_EVAL_REC_708_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_709(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_709_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_709_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_709_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_709_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_709_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_709_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_709_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_709_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_709_##choice
#define EPILEPSY_PRIV_EVAL_REC_709_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_710
#define EPILEPSY_PRIV_EVAL_REC_709_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_710(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_710_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_710_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_710_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_710_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_710_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_710_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_710_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_710_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_710_##choice
#define EPILEPSY_PRIV_EVAL_REC_710_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_711
#define EPILEPSY_PRIV_EVAL_REC_710_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_711(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_711_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_711_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_711_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_711_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_711_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_711_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_711_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_711_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_711_##choice
#define EPILEPSY_PRIV_EVAL_REC_711_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_712
#define EPILEPSY_PRIV_EVAL_REC_711_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_712(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_712_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_712_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_712_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_712_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_712_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_712_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_712_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_712_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_712_##choice
#define EPILEPSY_PRIV_EVAL_REC_712_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_713
#define EPILEPSY_PRIV_EVAL_REC_712_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_713(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_713_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_713_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_713_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_713_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_713_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_713_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_713_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_713_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_713_##choice
#define EPILEPSY_PRIV_EVAL_REC_713_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_714
#define EPILEPSY_PRIV_EVAL_REC_713_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_714(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_714_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_714_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_714_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_714_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_714_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_714_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_714_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_714_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_714_##choice
#define EPILEPSY_PRIV_EVAL_REC_714_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_715
#define EPILEPSY_PRIV_EVAL_REC_714_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_715(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_715_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_715_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_715_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_715_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_715_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_715_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_715_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_715_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_715_##choice
#define EPILEPSY_PRIV_EVAL_REC_715_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_716
#define EPILEPSY_PRIV_EVAL_REC_715_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_716(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_716_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_716_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_716_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_716_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_716_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_716_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_716_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_716_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_716_##choice
#define EPILEPSY_PRIV_EVAL_REC_716_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_717
#define EPILEPSY_PRIV_EVAL_REC_716_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_717(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_717_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_717_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_717_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_717_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_717_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_717_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_717_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_717_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_717_##choice
#define EPILEPSY_PRIV_EVAL_REC_717_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_718
#define EPILEPSY_PRIV_EVAL_REC_717_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_718(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_718_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_718_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_718_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_718_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_718_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_718_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_718_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_718_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_718_##choice
#define EPILEPSY_PRIV_EVAL_REC_718_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_719
#define EPILEPSY_PRIV_EVAL_REC_718_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_719(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_719_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_719_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_719_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_719_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_719_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_719_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_719_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_719_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_719_##choice
#define EPILEPSY_PRIV_EVAL_REC_719_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_720
#define EPILEPSY_PRIV_EVAL_REC_719_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_720(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_720_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_720_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_720_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_720_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_720_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_720_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_720_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_720_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_720_##choice
#define EPILEPSY_PRIV_EVAL_REC_720_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_721
#define EPILEPSY_PRIV_EVAL_REC_720_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_721(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_721_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_721_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_721_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_721_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_721_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_721_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_721_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_721_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_721_##choice
#define EPILEPSY_PRIV_EVAL_REC_721_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_722
#define EPILEPSY_PRIV_EVAL_REC_721_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_722(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_722_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_722_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_722_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_722_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_722_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_722_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_722_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_722_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_722_##choice
#define EPILEPSY_PRIV_EVAL_REC_722_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_723
#define EPILEPSY_PRIV_EVAL_REC_722_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_723(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_723_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_723_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_723_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_723_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_723_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_723_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_723_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_723_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_723_##choice
#define EPILEPSY_PRIV_EVAL_REC_723_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_724
#define EPILEPSY_PRIV_EVAL_REC_723_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_724(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_724_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_724_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_724_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_724_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_724_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_724_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_724_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_724_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_724_##choice
#define EPILEPSY_PRIV_EVAL_REC_724_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_725
#define EPILEPSY_PRIV_EVAL_REC_724_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_725(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_725_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_725_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_725_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_725_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_725_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_725_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_725_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_725_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_725_##choice
#define EPILEPSY_PRIV_EVAL_REC_725_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_726
#define EPILEPSY_PRIV_EVAL_REC_725_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_726(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_726_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_726_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_726_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_726_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_726_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_726_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_726_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_726_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_726_##choice
#define EPILEPSY_PRIV_EVAL_REC_726_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_727
#define EPILEPSY_PRIV_EVAL_REC_726_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_727(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_727_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_727_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_727_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_727_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_727_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_727_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_727_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_727_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_727_##choice
#define EPILEPSY_PRIV_EVAL_REC_727_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_728
#define EPILEPSY_PRIV_EVAL_REC_727_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_728(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_728_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_728_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_728_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_728_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_728_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_728_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_728_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_728_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_728_##choice
#define EPILEPSY_PRIV_EVAL_REC_728_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_729
#define EPILEPSY_PRIV_EVAL_REC_728_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_729(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_729_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_729_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_729_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_729_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_729_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_729_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_729_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_729_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_729_##choice
#define EPILEPSY_PRIV_EVAL_REC_729_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_730
#define EPILEPSY_PRIV_EVAL_REC_729_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_730(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_730_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_730_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_730_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_730_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_730_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_730_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_730_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_730_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_730_##choice
#define EPILEPSY_PRIV_EVAL_REC_730_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_731
#define EPILEPSY_PRIV_EVAL_REC_730_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_731(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_731_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_731_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_731_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_731_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_731_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_731_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_731_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_731_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_731_##choice
#define EPILEPSY_PRIV_EVAL_REC_731_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_732
#define EPILEPSY_PRIV_EVAL_REC_731_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_732(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_732_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_732_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_732_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_732_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_732_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_732_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_732_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_732_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_732_##choice
#define EPILEPSY_PRIV_EVAL_REC_732_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_733
#define EPILEPSY_PRIV_EVAL_REC_732_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_733(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_733_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_733_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_733_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_733_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_733_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_733_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_733_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_733_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_733_##choice
#define EPILEPSY_PRIV_EVAL_REC_733_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_734
#define EPILEPSY_PRIV_EVAL_REC_733_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_734(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_734_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_734_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_734_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_734_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_734_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_734_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_734_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_734_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_734_##choice
#define EPILEPSY_PRIV_EVAL_REC_734_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_735
#define EPILEPSY_PRIV_EVAL_REC_734_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_735(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_735_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_735_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_735_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_735_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_735_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_735_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_735_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_735_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_735_##choice
#define EPILEPSY_PRIV_EVAL_REC_735_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_736
#define EPILEPSY_PRIV_EVAL_REC_735_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_736(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_736_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_736_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_736_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_736_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_736_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_736_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_736_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_736_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_736_##choice
#define EPILEPSY_PRIV_EVAL_REC_736_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_737
#define EPILEPSY_PRIV_EVAL_REC_736_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_737(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_737_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_737_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_737_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_737_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_737_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_737_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_737_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_737_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_737_##choice
#define EPILEPSY_PRIV_EVAL_REC_737_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_738
#define EPILEPSY_PRIV_EVAL_REC_737_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_738(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_738_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_738_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_738_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_738_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_738_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_738_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_738_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_738_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_738_##choice
#define EPILEPSY_PRIV_EVAL_REC_738_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_739
#define EPILEPSY_PRIV_EVAL_REC_738_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_739(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_739_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_739_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_739_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_739_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_739_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_739_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_739_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_739_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_739_##choice
#define EPILEPSY_PRIV_EVAL_REC_739_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_740
#define EPILEPSY_PRIV_EVAL_REC_739_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_740(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_740_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_740_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_740_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_740_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_740_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_740_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_740_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_740_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_740_##choice
#define EPILEPSY_PRIV_EVAL_REC_740_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_741
#define EPILEPSY_PRIV_EVAL_REC_740_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_741(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_741_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_741_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_741_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_741_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_741_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_741_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_741_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_741_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_741_##choice
#define EPILEPSY_PRIV_EVAL_REC_741_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_742
#define EPILEPSY_PRIV_EVAL_REC_741_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_742(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_742_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_742_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_742_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_742_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_742_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_742_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_742_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_742_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_742_##choice
#define EPILEPSY_PRIV_EVAL_REC_742_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_743
#define EPILEPSY_PRIV_EVAL_REC_742_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_743(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_743_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_743_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_743_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_743_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_743_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_743_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_743_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_743_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_743_##choice
#define EPILEPSY_PRIV_EVAL_REC_743_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_744
#define EPILEPSY_PRIV_EVAL_REC_743_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_744(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_744_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_744_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_744_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_744_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_744_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_744_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_744_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_744_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_744_##choice
#define EPILEPSY_PRIV_EVAL_REC_744_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_745
#define EPILEPSY_PRIV_EVAL_REC_744_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_745(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_745_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_745_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_745_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_745_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_745_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_745_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_745_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_745_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_745_##choice
#define EPILEPSY_PRIV_EVAL_REC_745_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_746
#define EPILEPSY_PRIV_EVAL_REC_745_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_746(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_746_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_746_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_746_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_746_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_746_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_746_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_746_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_746_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_746_##choice
#define EPILEPSY_PRIV_EVAL_REC_746_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_747
#define EPILEPSY_PRIV_EVAL_REC_746_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_747(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_747_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_747_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_747_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_747_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_747_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_747_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_747_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_747_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_747_##choice
#define EPILEPSY_PRIV_EVAL_REC_747_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_748
#define EPILEPSY_PRIV_EVAL_REC_747_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_748(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_748_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_748_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_748_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_748_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_748_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_748_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_748_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_748_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_748_##choice
#define EPILEPSY_PRIV_EVAL_REC_748_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_749
#define EPILEPSY_PRIV_EVAL_REC_748_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_749(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_749_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_749_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_749_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_749_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_749_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_749_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_749_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_749_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_749_##choice
#define EPILEPSY_PRIV_EVAL_REC_749_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_750
#define EPILEPSY_PRIV_EVAL_REC_749_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_750(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_750_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_750_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_750_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_750_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_750_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_750_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_750_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_750_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_750_##choice
#define EPILEPSY_PRIV_EVAL_REC_750_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_751
#define EPILEPSY_PRIV_EVAL_REC_750_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_751(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_751_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_751_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_751_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_751_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_751_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_751_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_751_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_751_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_751_##choice
#define EPILEPSY_PRIV_EVAL_REC_751_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_752
#define EPILEPSY_PRIV_EVAL_REC_751_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_752(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_752_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_752_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_752_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_752_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_752_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_752_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_752_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_752_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_752_##choice
#define EPILEPSY_PRIV_EVAL_REC_752_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_753
#define EPILEPSY_PRIV_EVAL_REC_752_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_753(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_753_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_753_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_753_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_753_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_753_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_753_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_753_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_753_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_753_##choice
#define EPILEPSY_PRIV_EVAL_REC_753_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_754
#define EPILEPSY_PRIV_EVAL_REC_753_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_754(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_754_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_754_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_754_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_754_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_754_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_754_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_754_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_754_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_754_##choice
#define EPILEPSY_PRIV_EVAL_REC_754_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_755
#define EPILEPSY_PRIV_EVAL_REC_754_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_755(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_755_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_755_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_755_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_755_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_755_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_755_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_755_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_755_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_755_##choice
#define EPILEPSY_PRIV_EVAL_REC_755_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_756
#define EPILEPSY_PRIV_EVAL_REC_755_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_756(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_756_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_756_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_756_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_756_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_756_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_756_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_756_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_756_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_756_##choice
#define EPILEPSY_PRIV_EVAL_REC_756_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_757
#define EPILEPSY_PRIV_EVAL_REC_756_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_757(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_757_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_757_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_757_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_757_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_757_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_757_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_757_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_757_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_757_##choice
#define EPILEPSY_PRIV_EVAL_REC_757_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_758
#define EPILEPSY_PRIV_EVAL_REC_757_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_758(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_758_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_758_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_758_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_758_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_758_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_758_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_758_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_758_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_758_##choice
#define EPILEPSY_PRIV_EVAL_REC_758_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_759
#define EPILEPSY_PRIV_EVAL_REC_758_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_759(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_759_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_759_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_759_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_759_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_759_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_759_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_759_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_759_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_759_##choice
#define EPILEPSY_PRIV_EVAL_REC_759_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_760
#define EPILEPSY_PRIV_EVAL_REC_759_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_760(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_760_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_760_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_760_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_760_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_760_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_760_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_760_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_760_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_760_##choice
#define EPILEPSY_PRIV_EVAL_REC_760_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_761
#define EPILEPSY_PRIV_EVAL_REC_760_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_761(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_761_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_761_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_761_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_761_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_761_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_761_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_761_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_761_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_761_##choice
#define EPILEPSY_PRIV_EVAL_REC_761_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_762
#define EPILEPSY_PRIV_EVAL_REC_761_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_762(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_762_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_762_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_762_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_762_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_762_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_762_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_762_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_762_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_762_##choice
#define EPILEPSY_PRIV_EVAL_REC_762_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_763
#define EPILEPSY_PRIV_EVAL_REC_762_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_763(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_763_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_763_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_763_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_763_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_763_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_763_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_763_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_763_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_763_##choice
#define EPILEPSY_PRIV_EVAL_REC_763_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_764
#define EPILEPSY_PRIV_EVAL_REC_763_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_764(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_764_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_764_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_764_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_764_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_764_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_764_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_764_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_764_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_764_##choice
#define EPILEPSY_PRIV_EVAL_REC_764_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_765
#define EPILEPSY_PRIV_EVAL_REC_764_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_765(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_765_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_765_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_765_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_765_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_765_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_765_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_765_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_765_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_765_##choice
#define EPILEPSY_PRIV_EVAL_REC_765_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_766
#define EPILEPSY_PRIV_EVAL_REC_765_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_766(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_766_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_766_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_766_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_766_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_766_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_766_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_766_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_766_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_766_##choice
#define EPILEPSY_PRIV_EVAL_REC_766_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_767
#define EPILEPSY_PRIV_EVAL_REC_766_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_767(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_767_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_767_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_767_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_767_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_767_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_767_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_767_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_767_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_767_##choice
#define EPILEPSY_PRIV_EVAL_REC_767_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_768
#define EPILEPSY_PRIV_EVAL_REC_767_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_768(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_768_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_768_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_768_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_768_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_768_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_768_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_768_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_768_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_768_##choice
#define EPILEPSY_PRIV_EVAL_REC_768_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_769
#define EPILEPSY_PRIV_EVAL_REC_768_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_769(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_769_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_769_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_769_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_769_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_769_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_769_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_769_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_769_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_769_##choice
#define EPILEPSY_PRIV_EVAL_REC_769_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_770
#define EPILEPSY_PRIV_EVAL_REC_769_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_770(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_770_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_770_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_770_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_770_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_770_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_770_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_770_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_770_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_770_##choice
#define EPILEPSY_PRIV_EVAL_REC_770_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_771
#define EPILEPSY_PRIV_EVAL_REC_770_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_771(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_771_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_771_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_771_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_771_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_771_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_771_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_771_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_771_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_771_##choice
#define EPILEPSY_PRIV_EVAL_REC_771_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_772
#define EPILEPSY_PRIV_EVAL_REC_771_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_772(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_772_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_772_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_772_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_772_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_772_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_772_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_772_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_772_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_772_##choice
#define EPILEPSY_PRIV_EVAL_REC_772_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_773
#define EPILEPSY_PRIV_EVAL_REC_772_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_773(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_773_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_773_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_773_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_773_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_773_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_773_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_773_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_773_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_773_##choice
#define EPILEPSY_PRIV_EVAL_REC_773_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_774
#define EPILEPSY_PRIV_EVAL_REC_773_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_774(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_774_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_774_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_774_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_774_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_774_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_774_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_774_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_774_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_774_##choice
#define EPILEPSY_PRIV_EVAL_REC_774_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_775
#define EPILEPSY_PRIV_EVAL_REC_774_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_775(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_775_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_775_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_775_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_775_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_775_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_775_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_775_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_775_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_775_##choice
#define EPILEPSY_PRIV_EVAL_REC_775_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_776
#define EPILEPSY_PRIV_EVAL_REC_775_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_776(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_776_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_776_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_776_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_776_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_776_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_776_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_776_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_776_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_776_##choice
#define EPILEPSY_PRIV_EVAL_REC_776_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_777
#define EPILEPSY_PRIV_EVAL_REC_776_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_777(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_777_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_777_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_777_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_777_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_777_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_777_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_777_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_777_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_777_##choice
#define EPILEPSY_PRIV_EVAL_REC_777_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_778
#define EPILEPSY_PRIV_EVAL_REC_777_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_778(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_778_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_778_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_778_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_778_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_778_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_778_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_778_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_778_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_778_##choice
#define EPILEPSY_PRIV_EVAL_REC_778_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_779
#define EPILEPSY_PRIV_EVAL_REC_778_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_779(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_779_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_779_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_779_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_779_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_779_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_779_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_779_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_779_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_779_##choice
#define EPILEPSY_PRIV_EVAL_REC_779_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_780
#define EPILEPSY_PRIV_EVAL_REC_779_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_780(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_780_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_780_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_780_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_780_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_780_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_780_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_780_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_780_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_780_##choice
#define EPILEPSY_PRIV_EVAL_REC_780_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_781
#define EPILEPSY_PRIV_EVAL_REC_780_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_781(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_781_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_781_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_781_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_781_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_781_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_781_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_781_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_781_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_781_##choice
#define EPILEPSY_PRIV_EVAL_REC_781_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_782
#define EPILEPSY_PRIV_EVAL_REC_781_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_782(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_782_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_782_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_782_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_782_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_782_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_782_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_782_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_782_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_782_##choice
#define EPILEPSY_PRIV_EVAL_REC_782_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_783
#define EPILEPSY_PRIV_EVAL_REC_782_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_783(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_783_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_783_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_783_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_783_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_783_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_783_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_783_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_783_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_783_##choice
#define EPILEPSY_PRIV_EVAL_REC_783_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_784
#define EPILEPSY_PRIV_EVAL_REC_783_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_784(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_784_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_784_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_784_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_784_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_784_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_784_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_784_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_784_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_784_##choice
#define EPILEPSY_PRIV_EVAL_REC_784_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_785
#define EPILEPSY_PRIV_EVAL_REC_784_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_785(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_785_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_785_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_785_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_785_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_785_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_785_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_785_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_785_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_785_##choice
#define EPILEPSY_PRIV_EVAL_REC_785_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_786
#define EPILEPSY_PRIV_EVAL_REC_785_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_786(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_786_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_786_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_786_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_786_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_786_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_786_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_786_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_786_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_786_##choice
#define EPILEPSY_PRIV_EVAL_REC_786_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_787
#define EPILEPSY_PRIV_EVAL_REC_786_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_787(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_787_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_787_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_787_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_787_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_787_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_787_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_787_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_787_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_787_##choice
#define EPILEPSY_PRIV_EVAL_REC_787_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_788
#define EPILEPSY_PRIV_EVAL_REC_787_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_788(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_788_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_788_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_788_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_788_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_788_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_788_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_788_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_788_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_788_##choice
#define EPILEPSY_PRIV_EVAL_REC_788_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_789
#define EPILEPSY_PRIV_EVAL_REC_788_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_789(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_789_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_789_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_789_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_789_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_789_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_789_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_789_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_789_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_789_##choice
#define EPILEPSY_PRIV_EVAL_REC_789_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_790
#define EPILEPSY_PRIV_EVAL_REC_789_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_790(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_790_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_790_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_790_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_790_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_790_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_790_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_790_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_790_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_790_##choice
#define EPILEPSY_PRIV_EVAL_REC_790_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_791
#define EPILEPSY_PRIV_EVAL_REC_790_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_791(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_791_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_791_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_791_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_791_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_791_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_791_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_791_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_791_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_791_##choice
#define EPILEPSY_PRIV_EVAL_REC_791_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_792
#define EPILEPSY_PRIV_EVAL_REC_791_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_792(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_792_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_792_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_792_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_792_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_792_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_792_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_792_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_792_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_792_##choice
#define EPILEPSY_PRIV_EVAL_REC_792_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_793
#define EPILEPSY_PRIV_EVAL_REC_792_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_793(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_793_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_793_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_793_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_793_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_793_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_793_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_793_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_793_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_793_##choice
#define EPILEPSY_PRIV_EVAL_REC_793_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_794
#define EPILEPSY_PRIV_EVAL_REC_793_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_794(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_794_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_794_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_794_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_794_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_794_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_794_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_794_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_794_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_794_##choice
#define EPILEPSY_PRIV_EVAL_REC_794_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_795
#define EPILEPSY_PRIV_EVAL_REC_794_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_795(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_795_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_795_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_795_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_795_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_795_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_795_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_795_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_795_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_795_##choice
#define EPILEPSY_PRIV_EVAL_REC_795_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_796
#define EPILEPSY_PRIV_EVAL_REC_795_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_796(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_796_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_796_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_796_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_796_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_796_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_796_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_796_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_796_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_796_##choice
#define EPILEPSY_PRIV_EVAL_REC_796_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_797
#define EPILEPSY_PRIV_EVAL_REC_796_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_797(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_797_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_797_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_797_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_797_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_797_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_797_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_797_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_797_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_797_##choice
#define EPILEPSY_PRIV_EVAL_REC_797_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_798
#define EPILEPSY_PRIV_EVAL_REC_797_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_798(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_798_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_798_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_798_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_798_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_798_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_798_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_798_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_798_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_798_##choice
#define EPILEPSY_PRIV_EVAL_REC_798_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_799
#define EPILEPSY_PRIV_EVAL_REC_798_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_799(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_799_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_799_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_799_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_799_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_799_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_799_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_799_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_799_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_799_##choice
#define EPILEPSY_PRIV_EVAL_REC_799_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_800
#define EPILEPSY_PRIV_EVAL_REC_799_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_800(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_800_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_800_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_800_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_800_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_800_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_800_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_800_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_800_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_800_##choice
#define EPILEPSY_PRIV_EVAL_REC_800_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_801
#define EPILEPSY_PRIV_EVAL_REC_800_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_801(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_801_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_801_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_801_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_801_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_801_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_801_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_801_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_801_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_801_##choice
#define EPILEPSY_PRIV_EVAL_REC_801_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_802
#define EPILEPSY_PRIV_EVAL_REC_801_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_802(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_802_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_802_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_802_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_802_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_802_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_802_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_802_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_802_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_802_##choice
#define EPILEPSY_PRIV_EVAL_REC_802_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_803
#define EPILEPSY_PRIV_EVAL_REC_802_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_803(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_803_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_803_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_803_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_803_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_803_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_803_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_803_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_803_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_803_##choice
#define EPILEPSY_PRIV_EVAL_REC_803_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_804
#define EPILEPSY_PRIV_EVAL_REC_803_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_804(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_804_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_804_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_804_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_804_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_804_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_804_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_804_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_804_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_804_##choice
#define EPILEPSY_PRIV_EVAL_REC_804_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_805
#define EPILEPSY_PRIV_EVAL_REC_804_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_805(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_805_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_805_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_805_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_805_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_805_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_805_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_805_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_805_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_805_##choice
#define EPILEPSY_PRIV_EVAL_REC_805_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_806
#define EPILEPSY_PRIV_EVAL_REC_805_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_806(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_806_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_806_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_806_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_806_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_806_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_806_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_806_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_806_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_806_##choice
#define EPILEPSY_PRIV_EVAL_REC_806_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_807
#define EPILEPSY_PRIV_EVAL_REC_806_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_807(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_807_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_807_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_807_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_807_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_807_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_807_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_807_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_807_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_807_##choice
#define EPILEPSY_PRIV_EVAL_REC_807_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_808
#define EPILEPSY_PRIV_EVAL_REC_807_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_808(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_808_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_808_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_808_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_808_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_808_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_808_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_808_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_808_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_808_##choice
#define EPILEPSY_PRIV_EVAL_REC_808_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_809
#define EPILEPSY_PRIV_EVAL_REC_808_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_809(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_809_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_809_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_809_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_809_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_809_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_809_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_809_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_809_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_809_##choice
#define EPILEPSY_PRIV_EVAL_REC_809_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_810
#define EPILEPSY_PRIV_EVAL_REC_809_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_810(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_810_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_810_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_810_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_810_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_810_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_810_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_810_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_810_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_810_##choice
#define EPILEPSY_PRIV_EVAL_REC_810_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_811
#define EPILEPSY_PRIV_EVAL_REC_810_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_811(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_811_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_811_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_811_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_811_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_811_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_811_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_811_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_811_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_811_##choice
#define EPILEPSY_PRIV_EVAL_REC_811_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_812
#define EPILEPSY_PRIV_EVAL_REC_811_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_812(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_812_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_812_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_812_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_812_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_812_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_812_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_812_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_812_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_812_##choice
#define EPILEPSY_PRIV_EVAL_REC_812_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_813
#define EPILEPSY_PRIV_EVAL_REC_812_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_813(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_813_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_813_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_813_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_813_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_813_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_813_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_813_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_813_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_813_##choice
#define EPILEPSY_PRIV_EVAL_REC_813_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_814
#define EPILEPSY_PRIV_EVAL_REC_813_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_814(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_814_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_814_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_814_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_814_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_814_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_814_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_814_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_814_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_814_##choice
#define EPILEPSY_PRIV_EVAL_REC_814_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_815
#define EPILEPSY_PRIV_EVAL_REC_814_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_815(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_815_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_815_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_815_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_815_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_815_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_815_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_815_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_815_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_815_##choice
#define EPILEPSY_PRIV_EVAL_REC_815_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_816
#define EPILEPSY_PRIV_EVAL_REC_815_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_816(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_816_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_816_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_816_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_816_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_816_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_816_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_816_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_816_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_816_##choice
#define EPILEPSY_PRIV_EVAL_REC_816_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_817
#define EPILEPSY_PRIV_EVAL_REC_816_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_817(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_817_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_817_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_817_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_817_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_817_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_817_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_817_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_817_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_817_##choice
#define EPILEPSY_PRIV_EVAL_REC_817_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_818
#define EPILEPSY_PRIV_EVAL_REC_817_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_818(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_818_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_818_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_818_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_818_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_818_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_818_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_818_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_818_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_818_##choice
#define EPILEPSY_PRIV_EVAL_REC_818_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_819
#define EPILEPSY_PRIV_EVAL_REC_818_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_819(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_819_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_819_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_819_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_819_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_819_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_819_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_819_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_819_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_819_##choice
#define EPILEPSY_PRIV_EVAL_REC_819_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_820
#define EPILEPSY_PRIV_EVAL_REC_819_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_820(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_820_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_820_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_820_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_820_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_820_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_820_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_820_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_820_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_820_##choice
#define EPILEPSY_PRIV_EVAL_REC_820_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_821
#define EPILEPSY_PRIV_EVAL_REC_820_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_821(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_821_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_821_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_821_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_821_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_821_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_821_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_821_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_821_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_821_##choice
#define EPILEPSY_PRIV_EVAL_REC_821_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_822
#define EPILEPSY_PRIV_EVAL_REC_821_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_822(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_822_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_822_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_822_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_822_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_822_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_822_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_822_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_822_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_822_##choice
#define EPILEPSY_PRIV_EVAL_REC_822_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_823
#define EPILEPSY_PRIV_EVAL_REC_822_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_823(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_823_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_823_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_823_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_823_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_823_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_823_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_823_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_823_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_823_##choice
#define EPILEPSY_PRIV_EVAL_REC_823_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_824
#define EPILEPSY_PRIV_EVAL_REC_823_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_824(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_824_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_824_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_824_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_824_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_824_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_824_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_824_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_824_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_824_##choice
#define EPILEPSY_PRIV_EVAL_REC_824_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_825
#define EPILEPSY_PRIV_EVAL_REC_824_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_825(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_825_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_825_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_825_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_825_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_825_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_825_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_825_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_825_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_825_##choice
#define EPILEPSY_PRIV_EVAL_REC_825_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_826
#define EPILEPSY_PRIV_EVAL_REC_825_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_826(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_826_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_826_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_826_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_826_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_826_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_826_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_826_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_826_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_826_##choice
#define EPILEPSY_PRIV_EVAL_REC_826_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_827
#define EPILEPSY_PRIV_EVAL_REC_826_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_827(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_827_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_827_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_827_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_827_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_827_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_827_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_827_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_827_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_827_##choice
#define EPILEPSY_PRIV_EVAL_REC_827_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_828
#define EPILEPSY_PRIV_EVAL_REC_827_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_828(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_828_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_828_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_828_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_828_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_828_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_828_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_828_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_828_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_828_##choice
#define EPILEPSY_PRIV_EVAL_REC_828_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_829
#define EPILEPSY_PRIV_EVAL_REC_828_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_829(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_829_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_829_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_829_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_829_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_829_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_829_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_829_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_829_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_829_##choice
#define EPILEPSY_PRIV_EVAL_REC_829_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_830
#define EPILEPSY_PRIV_EVAL_REC_829_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_830(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_830_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_830_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_830_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_830_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_830_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_830_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_830_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_830_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_830_##choice
#define EPILEPSY_PRIV_EVAL_REC_830_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_831
#define EPILEPSY_PRIV_EVAL_REC_830_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_831(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_831_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_831_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_831_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_831_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_831_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_831_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_831_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_831_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_831_##choice
#define EPILEPSY_PRIV_EVAL_REC_831_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_832
#define EPILEPSY_PRIV_EVAL_REC_831_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_832(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_832_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_832_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_832_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_832_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_832_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_832_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_832_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_832_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_832_##choice
#define EPILEPSY_PRIV_EVAL_REC_832_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_833
#define EPILEPSY_PRIV_EVAL_REC_832_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_833(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_833_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_833_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_833_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_833_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_833_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_833_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_833_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_833_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_833_##choice
#define EPILEPSY_PRIV_EVAL_REC_833_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_834
#define EPILEPSY_PRIV_EVAL_REC_833_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_834(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_834_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_834_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_834_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_834_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_834_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_834_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_834_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_834_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_834_##choice
#define EPILEPSY_PRIV_EVAL_REC_834_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_835
#define EPILEPSY_PRIV_EVAL_REC_834_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_835(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_835_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_835_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_835_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_835_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_835_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_835_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_835_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_835_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_835_##choice
#define EPILEPSY_PRIV_EVAL_REC_835_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_836
#define EPILEPSY_PRIV_EVAL_REC_835_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_836(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_836_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_836_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_836_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_836_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_836_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_836_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_836_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_836_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_836_##choice
#define EPILEPSY_PRIV_EVAL_REC_836_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_837
#define EPILEPSY_PRIV_EVAL_REC_836_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_837(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_837_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_837_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_837_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_837_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_837_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_837_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_837_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_837_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_837_##choice
#define EPILEPSY_PRIV_EVAL_REC_837_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_838
#define EPILEPSY_PRIV_EVAL_REC_837_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_838(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_838_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_838_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_838_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_838_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_838_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_838_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_838_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_838_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_838_##choice
#define EPILEPSY_PRIV_EVAL_REC_838_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_839
#define EPILEPSY_PRIV_EVAL_REC_838_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_839(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_839_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_839_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_839_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_839_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_839_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_839_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_839_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_839_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_839_##choice
#define EPILEPSY_PRIV_EVAL_REC_839_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_840
#define EPILEPSY_PRIV_EVAL_REC_839_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_840(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_840_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_840_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_840_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_840_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_840_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_840_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_840_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_840_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_840_##choice
#define EPILEPSY_PRIV_EVAL_REC_840_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_841
#define EPILEPSY_PRIV_EVAL_REC_840_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_841(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_841_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_841_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_841_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_841_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_841_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_841_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_841_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_841_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_841_##choice
#define EPILEPSY_PRIV_EVAL_REC_841_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_842
#define EPILEPSY_PRIV_EVAL_REC_841_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_842(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_842_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_842_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_842_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_842_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_842_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_842_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_842_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_842_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_842_##choice
#define EPILEPSY_PRIV_EVAL_REC_842_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_843
#define EPILEPSY_PRIV_EVAL_REC_842_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_843(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_843_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_843_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_843_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_843_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_843_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_843_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_843_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_843_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_843_##choice
#define EPILEPSY_PRIV_EVAL_REC_843_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_844
#define EPILEPSY_PRIV_EVAL_REC_843_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_844(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_844_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_844_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_844_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_844_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_844_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_844_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_844_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_844_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_844_##choice
#define EPILEPSY_PRIV_EVAL_REC_844_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_845
#define EPILEPSY_PRIV_EVAL_REC_844_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_845(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_845_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_845_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_845_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_845_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_845_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_845_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_845_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_845_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_845_##choice
#define EPILEPSY_PRIV_EVAL_REC_845_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_846
#define EPILEPSY_PRIV_EVAL_REC_845_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_846(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_846_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_846_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_846_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_846_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_846_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_846_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_846_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_846_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_846_##choice
#define EPILEPSY_PRIV_EVAL_REC_846_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_847
#define EPILEPSY_PRIV_EVAL_REC_846_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_847(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_847_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_847_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_847_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_847_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_847_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_847_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_847_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_847_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_847_##choice
#define EPILEPSY_PRIV_EVAL_REC_847_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_848
#define EPILEPSY_PRIV_EVAL_REC_847_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_848(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_848_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_848_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_848_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_848_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_848_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_848_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_848_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_848_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_848_##choice
#define EPILEPSY_PRIV_EVAL_REC_848_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_849
#define EPILEPSY_PRIV_EVAL_REC_848_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_849(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_849_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_849_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_849_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_849_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_849_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_849_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_849_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_849_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_849_##choice
#define EPILEPSY_PRIV_EVAL_REC_849_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_850
#define EPILEPSY_PRIV_EVAL_REC_849_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_850(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_850_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_850_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_850_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_850_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_850_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_850_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_850_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_850_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_850_##choice
#define EPILEPSY_PRIV_EVAL_REC_850_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_851
#define EPILEPSY_PRIV_EVAL_REC_850_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_851(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_851_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_851_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_851_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_851_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_851_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_851_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_851_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_851_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_851_##choice
#define EPILEPSY_PRIV_EVAL_REC_851_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_852
#define EPILEPSY_PRIV_EVAL_REC_851_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_852(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_852_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_852_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_852_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_852_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_852_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_852_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_852_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_852_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_852_##choice
#define EPILEPSY_PRIV_EVAL_REC_852_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_853
#define EPILEPSY_PRIV_EVAL_REC_852_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_853(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_853_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_853_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_853_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_853_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_853_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_853_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_853_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_853_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_853_##choice
#define EPILEPSY_PRIV_EVAL_REC_853_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_854
#define EPILEPSY_PRIV_EVAL_REC_853_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_854(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_854_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_854_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_854_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_854_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_854_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_854_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_854_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_854_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_854_##choice
#define EPILEPSY_PRIV_EVAL_REC_854_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_855
#define EPILEPSY_PRIV_EVAL_REC_854_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_855(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_855_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_855_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_855_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_855_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_855_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_855_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_855_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_855_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_855_##choice
#define EPILEPSY_PRIV_EVAL_REC_855_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_856
#define EPILEPSY_PRIV_EVAL_REC_855_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_856(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_856_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_856_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_856_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_856_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_856_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_856_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_856_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_856_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_856_##choice
#define EPILEPSY_PRIV_EVAL_REC_856_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_857
#define EPILEPSY_PRIV_EVAL_REC_856_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_857(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_857_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_857_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_857_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_857_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_857_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_857_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_857_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_857_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_857_##choice
#define EPILEPSY_PRIV_EVAL_REC_857_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_858
#define EPILEPSY_PRIV_EVAL_REC_857_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_858(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_858_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_858_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_858_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_858_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_858_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_858_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_858_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_858_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_858_##choice
#define EPILEPSY_PRIV_EVAL_REC_858_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_859
#define EPILEPSY_PRIV_EVAL_REC_858_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_859(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_859_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_859_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_859_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_859_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_859_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_859_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_859_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_859_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_859_##choice
#define EPILEPSY_PRIV_EVAL_REC_859_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_860
#define EPILEPSY_PRIV_EVAL_REC_859_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_860(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_860_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_860_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_860_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_860_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_860_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_860_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_860_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_860_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_860_##choice
#define EPILEPSY_PRIV_EVAL_REC_860_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_861
#define EPILEPSY_PRIV_EVAL_REC_860_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_861(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_861_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_861_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_861_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_861_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_861_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_861_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_861_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_861_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_861_##choice
#define EPILEPSY_PRIV_EVAL_REC_861_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_862
#define EPILEPSY_PRIV_EVAL_REC_861_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_862(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_862_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_862_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_862_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_862_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_862_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_862_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_862_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_862_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_862_##choice
#define EPILEPSY_PRIV_EVAL_REC_862_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_863
#define EPILEPSY_PRIV_EVAL_REC_862_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_863(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_863_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_863_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_863_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_863_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_863_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_863_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_863_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_863_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_863_##choice
#define EPILEPSY_PRIV_EVAL_REC_863_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_864
#define EPILEPSY_PRIV_EVAL_REC_863_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_864(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_864_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_864_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_864_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_864_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_864_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_864_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_864_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_864_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_864_##choice
#define EPILEPSY_PRIV_EVAL_REC_864_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_865
#define EPILEPSY_PRIV_EVAL_REC_864_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_865(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_865_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_865_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_865_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_865_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_865_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_865_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_865_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_865_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_865_##choice
#define EPILEPSY_PRIV_EVAL_REC_865_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_866
#define EPILEPSY_PRIV_EVAL_REC_865_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_866(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_866_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_866_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_866_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_866_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_866_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_866_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_866_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_866_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_866_##choice
#define EPILEPSY_PRIV_EVAL_REC_866_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_867
#define EPILEPSY_PRIV_EVAL_REC_866_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_867(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_867_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_867_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_867_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_867_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_867_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_867_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_867_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_867_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_867_##choice
#define EPILEPSY_PRIV_EVAL_REC_867_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_868
#define EPILEPSY_PRIV_EVAL_REC_867_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_868(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_868_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_868_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_868_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_868_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_868_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_868_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_868_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_868_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_868_##choice
#define EPILEPSY_PRIV_EVAL_REC_868_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_869
#define EPILEPSY_PRIV_EVAL_REC_868_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_869(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_869_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_869_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_869_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_869_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_869_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_869_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_869_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_869_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_869_##choice
#define EPILEPSY_PRIV_EVAL_REC_869_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_870
#define EPILEPSY_PRIV_EVAL_REC_869_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_870(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_870_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_870_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_870_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_870_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_870_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_870_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_870_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_870_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_870_##choice
#define EPILEPSY_PRIV_EVAL_REC_870_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_871
#define EPILEPSY_PRIV_EVAL_REC_870_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_871(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_871_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_871_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_871_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_871_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_871_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_871_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_871_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_871_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_871_##choice
#define EPILEPSY_PRIV_EVAL_REC_871_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_872
#define EPILEPSY_PRIV_EVAL_REC_871_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_872(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_872_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_872_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_872_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_872_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_872_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_872_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_872_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_872_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_872_##choice
#define EPILEPSY_PRIV_EVAL_REC_872_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_873
#define EPILEPSY_PRIV_EVAL_REC_872_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_873(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_873_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_873_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_873_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_873_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_873_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_873_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_873_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_873_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_873_##choice
#define EPILEPSY_PRIV_EVAL_REC_873_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_874
#define EPILEPSY_PRIV_EVAL_REC_873_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_874(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_874_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_874_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_874_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_874_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_874_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_874_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_874_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_874_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_874_##choice
#define EPILEPSY_PRIV_EVAL_REC_874_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_875
#define EPILEPSY_PRIV_EVAL_REC_874_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_875(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_875_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_875_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_875_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_875_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_875_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_875_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_875_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_875_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_875_##choice
#define EPILEPSY_PRIV_EVAL_REC_875_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_876
#define EPILEPSY_PRIV_EVAL_REC_875_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_876(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_876_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_876_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_876_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_876_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_876_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_876_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_876_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_876_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_876_##choice
#define EPILEPSY_PRIV_EVAL_REC_876_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_877
#define EPILEPSY_PRIV_EVAL_REC_876_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_877(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_877_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_877_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_877_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_877_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_877_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_877_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_877_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_877_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_877_##choice
#define EPILEPSY_PRIV_EVAL_REC_877_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_878
#define EPILEPSY_PRIV_EVAL_REC_877_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_878(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_878_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_878_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_878_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_878_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_878_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_878_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_878_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_878_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_878_##choice
#define EPILEPSY_PRIV_EVAL_REC_878_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_879
#define EPILEPSY_PRIV_EVAL_REC_878_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_879(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_879_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_879_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_879_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_879_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_879_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_879_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_879_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_879_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_879_##choice
#define EPILEPSY_PRIV_EVAL_REC_879_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_880
#define EPILEPSY_PRIV_EVAL_REC_879_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_880(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_880_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_880_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_880_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_880_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_880_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_880_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_880_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_880_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_880_##choice
#define EPILEPSY_PRIV_EVAL_REC_880_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_881
#define EPILEPSY_PRIV_EVAL_REC_880_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_881(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_881_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_881_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_881_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_881_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_881_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_881_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_881_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_881_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_881_##choice
#define EPILEPSY_PRIV_EVAL_REC_881_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_882
#define EPILEPSY_PRIV_EVAL_REC_881_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_882(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_882_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_882_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_882_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_882_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_882_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_882_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_882_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_882_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_882_##choice
#define EPILEPSY_PRIV_EVAL_REC_882_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_883
#define EPILEPSY_PRIV_EVAL_REC_882_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_883(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_883_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_883_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_883_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_883_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_883_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_883_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_883_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_883_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_883_##choice
#define EPILEPSY_PRIV_EVAL_REC_883_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_884
#define EPILEPSY_PRIV_EVAL_REC_883_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_884(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_884_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_884_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_884_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_884_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_884_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_884_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_884_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_884_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_884_##choice
#define EPILEPSY_PRIV_EVAL_REC_884_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_885
#define EPILEPSY_PRIV_EVAL_REC_884_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_885(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_885_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_885_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_885_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_885_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_885_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_885_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_885_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_885_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_885_##choice
#define EPILEPSY_PRIV_EVAL_REC_885_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_886
#define EPILEPSY_PRIV_EVAL_REC_885_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_886(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_886_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_886_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_886_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_886_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_886_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_886_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_886_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_886_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_886_##choice
#define EPILEPSY_PRIV_EVAL_REC_886_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_887
#define EPILEPSY_PRIV_EVAL_REC_886_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_887(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_887_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_887_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_887_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_887_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_887_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_887_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_887_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_887_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_887_##choice
#define EPILEPSY_PRIV_EVAL_REC_887_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_888
#define EPILEPSY_PRIV_EVAL_REC_887_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_888(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_888_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_888_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_888_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_888_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_888_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_888_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_888_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_888_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_888_##choice
#define EPILEPSY_PRIV_EVAL_REC_888_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_889
#define EPILEPSY_PRIV_EVAL_REC_888_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_889(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_889_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_889_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_889_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_889_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_889_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_889_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_889_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_889_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_889_##choice
#define EPILEPSY_PRIV_EVAL_REC_889_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_890
#define EPILEPSY_PRIV_EVAL_REC_889_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_890(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_890_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_890_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_890_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_890_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_890_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_890_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_890_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_890_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_890_##choice
#define EPILEPSY_PRIV_EVAL_REC_890_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_891
#define EPILEPSY_PRIV_EVAL_REC_890_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_891(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_891_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_891_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_891_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_891_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_891_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_891_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_891_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_891_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_891_##choice
#define EPILEPSY_PRIV_EVAL_REC_891_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_892
#define EPILEPSY_PRIV_EVAL_REC_891_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_892(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_892_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_892_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_892_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_892_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_892_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_892_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_892_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_892_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_892_##choice
#define EPILEPSY_PRIV_EVAL_REC_892_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_893
#define EPILEPSY_PRIV_EVAL_REC_892_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_893(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_893_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_893_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_893_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_893_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_893_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_893_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_893_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_893_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_893_##choice
#define EPILEPSY_PRIV_EVAL_REC_893_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_894
#define EPILEPSY_PRIV_EVAL_REC_893_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_894(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_894_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_894_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_894_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_894_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_894_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_894_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_894_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_894_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_894_##choice
#define EPILEPSY_PRIV_EVAL_REC_894_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_895
#define EPILEPSY_PRIV_EVAL_REC_894_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_895(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_895_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_895_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_895_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_895_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_895_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_895_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_895_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_895_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_895_##choice
#define EPILEPSY_PRIV_EVAL_REC_895_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_896
#define EPILEPSY_PRIV_EVAL_REC_895_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_896(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_896_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_896_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_896_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_896_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_896_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_896_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_896_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_896_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_896_##choice
#define EPILEPSY_PRIV_EVAL_REC_896_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_897
#define EPILEPSY_PRIV_EVAL_REC_896_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_897(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_897_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_897_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_897_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_897_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_897_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_897_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_897_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_897_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_897_##choice
#define EPILEPSY_PRIV_EVAL_REC_897_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_898
#define EPILEPSY_PRIV_EVAL_REC_897_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_898(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_898_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_898_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_898_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_898_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_898_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_898_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_898_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_898_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_898_##choice
#define EPILEPSY_PRIV_EVAL_REC_898_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_899
#define EPILEPSY_PRIV_EVAL_REC_898_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_899(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_899_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_899_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_899_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_899_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_899_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_899_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_899_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_899_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_899_##choice
#define EPILEPSY_PRIV_EVAL_REC_899_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_900
#define EPILEPSY_PRIV_EVAL_REC_899_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_900(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_900_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_900_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_900_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_900_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_900_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_900_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_900_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_900_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_900_##choice
#define EPILEPSY_PRIV_EVAL_REC_900_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_901
#define EPILEPSY_PRIV_EVAL_REC_900_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_901(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_901_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_901_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_901_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_901_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_901_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_901_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_901_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_901_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_901_##choice
#define EPILEPSY_PRIV_EVAL_REC_901_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_902
#define EPILEPSY_PRIV_EVAL_REC_901_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_902(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_902_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_902_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_902_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_902_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_902_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_902_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_902_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_902_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_902_##choice
#define EPILEPSY_PRIV_EVAL_REC_902_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_903
#define EPILEPSY_PRIV_EVAL_REC_902_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_903(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_903_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_903_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_903_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_903_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_903_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_903_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_903_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_903_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_903_##choice
#define EPILEPSY_PRIV_EVAL_REC_903_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_904
#define EPILEPSY_PRIV_EVAL_REC_903_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_904(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_904_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_904_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_904_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_904_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_904_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_904_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_904_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_904_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_904_##choice
#define EPILEPSY_PRIV_EVAL_REC_904_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_905
#define EPILEPSY_PRIV_EVAL_REC_904_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_905(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_905_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_905_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_905_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_905_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_905_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_905_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_905_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_905_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_905_##choice
#define EPILEPSY_PRIV_EVAL_REC_905_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_906
#define EPILEPSY_PRIV_EVAL_REC_905_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_906(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_906_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_906_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_906_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_906_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_906_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_906_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_906_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_906_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_906_##choice
#define EPILEPSY_PRIV_EVAL_REC_906_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_907
#define EPILEPSY_PRIV_EVAL_REC_906_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_907(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_907_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_907_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_907_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_907_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_907_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_907_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_907_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_907_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_907_##choice
#define EPILEPSY_PRIV_EVAL_REC_907_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_908
#define EPILEPSY_PRIV_EVAL_REC_907_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_908(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_908_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_908_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_908_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_908_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_908_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_908_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_908_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_908_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_908_##choice
#define EPILEPSY_PRIV_EVAL_REC_908_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_909
#define EPILEPSY_PRIV_EVAL_REC_908_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_909(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_909_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_909_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_909_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_909_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_909_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_909_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_909_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_909_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_909_##choice
#define EPILEPSY_PRIV_EVAL_REC_909_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_910
#define EPILEPSY_PRIV_EVAL_REC_909_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_910(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_910_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_910_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_910_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_910_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_910_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_910_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_910_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_910_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_910_##choice
#define EPILEPSY_PRIV_EVAL_REC_910_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_911
#define EPILEPSY_PRIV_EVAL_REC_910_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_911(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_911_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_911_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_911_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_911_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_911_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_911_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_911_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_911_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_911_##choice
#define EPILEPSY_PRIV_EVAL_REC_911_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_912
#define EPILEPSY_PRIV_EVAL_REC_911_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_912(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_912_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_912_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_912_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_912_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_912_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_912_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_912_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_912_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_912_##choice
#define EPILEPSY_PRIV_EVAL_REC_912_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_913
#define EPILEPSY_PRIV_EVAL_REC_912_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_913(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_913_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_913_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_913_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_913_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_913_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_913_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_913_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_913_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_913_##choice
#define EPILEPSY_PRIV_EVAL_REC_913_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_914
#define EPILEPSY_PRIV_EVAL_REC_913_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_914(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_914_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_914_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_914_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_914_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_914_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_914_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_914_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_914_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_914_##choice
#define EPILEPSY_PRIV_EVAL_REC_914_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_915
#define EPILEPSY_PRIV_EVAL_REC_914_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_915(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_915_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_915_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_915_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_915_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_915_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_915_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_915_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_915_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_915_##choice
#define EPILEPSY_PRIV_EVAL_REC_915_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_916
#define EPILEPSY_PRIV_EVAL_REC_915_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_916(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_916_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_916_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_916_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_916_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_916_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_916_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_916_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_916_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_916_##choice
#define EPILEPSY_PRIV_EVAL_REC_916_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_917
#define EPILEPSY_PRIV_EVAL_REC_916_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_917(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_917_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_917_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_917_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_917_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_917_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_917_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_917_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_917_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_917_##choice
#define EPILEPSY_PRIV_EVAL_REC_917_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_918
#define EPILEPSY_PRIV_EVAL_REC_917_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_918(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_918_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_918_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_918_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_918_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_918_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_918_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_918_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_918_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_918_##choice
#define EPILEPSY_PRIV_EVAL_REC_918_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_919
#define EPILEPSY_PRIV_EVAL_REC_918_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_919(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_919_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_919_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_919_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_919_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_919_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_919_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_919_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_919_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_919_##choice
#define EPILEPSY_PRIV_EVAL_REC_919_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_920
#define EPILEPSY_PRIV_EVAL_REC_919_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_920(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_920_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_920_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_920_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_920_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_920_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_920_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_920_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_920_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_920_##choice
#define EPILEPSY_PRIV_EVAL_REC_920_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_921
#define EPILEPSY_PRIV_EVAL_REC_920_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_921(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_921_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_921_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_921_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_921_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_921_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_921_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_921_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_921_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_921_##choice
#define EPILEPSY_PRIV_EVAL_REC_921_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_922
#define EPILEPSY_PRIV_EVAL_REC_921_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_922(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_922_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_922_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_922_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_922_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_922_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_922_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_922_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_922_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_922_##choice
#define EPILEPSY_PRIV_EVAL_REC_922_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_923
#define EPILEPSY_PRIV_EVAL_REC_922_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_923(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_923_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_923_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_923_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_923_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_923_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_923_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_923_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_923_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_923_##choice
#define EPILEPSY_PRIV_EVAL_REC_923_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_924
#define EPILEPSY_PRIV_EVAL_REC_923_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_924(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_924_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_924_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_924_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_924_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_924_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_924_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_924_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_924_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_924_##choice
#define EPILEPSY_PRIV_EVAL_REC_924_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_925
#define EPILEPSY_PRIV_EVAL_REC_924_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_925(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_925_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_925_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_925_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_925_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_925_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_925_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_925_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_925_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_925_##choice
#define EPILEPSY_PRIV_EVAL_REC_925_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_926
#define EPILEPSY_PRIV_EVAL_REC_925_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_926(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_926_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_926_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_926_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_926_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_926_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_926_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_926_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_926_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_926_##choice
#define EPILEPSY_PRIV_EVAL_REC_926_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_927
#define EPILEPSY_PRIV_EVAL_REC_926_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_927(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_927_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_927_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_927_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_927_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_927_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_927_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_927_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_927_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_927_##choice
#define EPILEPSY_PRIV_EVAL_REC_927_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_928
#define EPILEPSY_PRIV_EVAL_REC_927_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_928(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_928_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_928_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_928_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_928_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_928_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_928_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_928_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_928_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_928_##choice
#define EPILEPSY_PRIV_EVAL_REC_928_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_929
#define EPILEPSY_PRIV_EVAL_REC_928_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_929(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_929_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_929_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_929_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_929_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_929_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_929_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_929_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_929_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_929_##choice
#define EPILEPSY_PRIV_EVAL_REC_929_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_930
#define EPILEPSY_PRIV_EVAL_REC_929_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_930(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_930_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_930_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_930_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_930_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_930_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_930_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_930_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_930_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_930_##choice
#define EPILEPSY_PRIV_EVAL_REC_930_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_931
#define EPILEPSY_PRIV_EVAL_REC_930_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_931(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_931_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_931_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_931_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_931_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_931_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_931_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_931_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_931_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_931_##choice
#define EPILEPSY_PRIV_EVAL_REC_931_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_932
#define EPILEPSY_PRIV_EVAL_REC_931_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_932(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_932_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_932_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_932_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_932_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_932_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_932_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_932_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_932_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_932_##choice
#define EPILEPSY_PRIV_EVAL_REC_932_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_933
#define EPILEPSY_PRIV_EVAL_REC_932_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_933(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_933_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_933_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_933_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_933_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_933_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_933_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_933_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_933_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_933_##choice
#define EPILEPSY_PRIV_EVAL_REC_933_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_934
#define EPILEPSY_PRIV_EVAL_REC_933_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_934(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_934_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_934_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_934_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_934_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_934_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_934_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_934_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_934_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_934_##choice
#define EPILEPSY_PRIV_EVAL_REC_934_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_935
#define EPILEPSY_PRIV_EVAL_REC_934_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_935(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_935_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_935_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_935_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_935_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_935_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_935_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_935_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_935_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_935_##choice
#define EPILEPSY_PRIV_EVAL_REC_935_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_936
#define EPILEPSY_PRIV_EVAL_REC_935_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_936(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_936_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_936_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_936_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_936_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_936_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_936_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_936_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_936_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_936_##choice
#define EPILEPSY_PRIV_EVAL_REC_936_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_937
#define EPILEPSY_PRIV_EVAL_REC_936_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_937(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_937_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_937_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_937_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_937_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_937_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_937_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_937_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_937_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_937_##choice
#define EPILEPSY_PRIV_EVAL_REC_937_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_938
#define EPILEPSY_PRIV_EVAL_REC_937_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_938(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_938_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_938_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_938_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_938_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_938_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_938_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_938_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_938_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_938_##choice
#define EPILEPSY_PRIV_EVAL_REC_938_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_939
#define EPILEPSY_PRIV_EVAL_REC_938_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_939(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_939_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_939_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_939_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_939_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_939_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_939_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_939_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_939_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_939_##choice
#define EPILEPSY_PRIV_EVAL_REC_939_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_940
#define EPILEPSY_PRIV_EVAL_REC_939_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_940(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_940_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_940_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_940_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_940_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_940_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_940_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_940_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_940_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_940_##choice
#define EPILEPSY_PRIV_EVAL_REC_940_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_941
#define EPILEPSY_PRIV_EVAL_REC_940_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_941(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_941_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_941_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_941_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_941_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_941_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_941_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_941_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_941_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_941_##choice
#define EPILEPSY_PRIV_EVAL_REC_941_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_942
#define EPILEPSY_PRIV_EVAL_REC_941_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_942(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_942_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_942_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_942_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_942_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_942_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_942_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_942_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_942_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_942_##choice
#define EPILEPSY_PRIV_EVAL_REC_942_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_943
#define EPILEPSY_PRIV_EVAL_REC_942_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_943(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_943_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_943_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_943_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_943_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_943_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_943_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_943_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_943_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_943_##choice
#define EPILEPSY_PRIV_EVAL_REC_943_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_944
#define EPILEPSY_PRIV_EVAL_REC_943_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_944(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_944_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_944_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_944_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_944_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_944_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_944_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_944_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_944_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_944_##choice
#define EPILEPSY_PRIV_EVAL_REC_944_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_945
#define EPILEPSY_PRIV_EVAL_REC_944_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_945(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_945_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_945_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_945_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_945_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_945_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_945_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_945_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_945_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_945_##choice
#define EPILEPSY_PRIV_EVAL_REC_945_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_946
#define EPILEPSY_PRIV_EVAL_REC_945_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_946(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_946_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_946_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_946_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_946_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_946_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_946_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_946_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_946_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_946_##choice
#define EPILEPSY_PRIV_EVAL_REC_946_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_947
#define EPILEPSY_PRIV_EVAL_REC_946_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_947(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_947_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_947_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_947_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_947_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_947_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_947_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_947_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_947_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_947_##choice
#define EPILEPSY_PRIV_EVAL_REC_947_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_948
#define EPILEPSY_PRIV_EVAL_REC_947_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_948(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_948_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_948_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_948_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_948_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_948_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_948_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_948_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_948_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_948_##choice
#define EPILEPSY_PRIV_EVAL_REC_948_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_949
#define EPILEPSY_PRIV_EVAL_REC_948_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_949(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_949_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_949_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_949_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_949_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_949_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_949_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_949_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_949_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_949_##choice
#define EPILEPSY_PRIV_EVAL_REC_949_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_950
#define EPILEPSY_PRIV_EVAL_REC_949_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_950(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_950_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_950_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_950_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_950_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_950_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_950_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_950_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_950_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_950_##choice
#define EPILEPSY_PRIV_EVAL_REC_950_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_951
#define EPILEPSY_PRIV_EVAL_REC_950_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_951(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_951_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_951_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_951_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_951_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_951_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_951_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_951_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_951_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_951_##choice
#define EPILEPSY_PRIV_EVAL_REC_951_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_952
#define EPILEPSY_PRIV_EVAL_REC_951_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_952(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_952_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_952_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_952_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_952_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_952_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_952_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_952_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_952_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_952_##choice
#define EPILEPSY_PRIV_EVAL_REC_952_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_953
#define EPILEPSY_PRIV_EVAL_REC_952_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_953(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_953_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_953_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_953_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_953_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_953_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_953_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_953_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_953_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_953_##choice
#define EPILEPSY_PRIV_EVAL_REC_953_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_954
#define EPILEPSY_PRIV_EVAL_REC_953_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_954(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_954_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_954_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_954_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_954_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_954_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_954_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_954_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_954_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_954_##choice
#define EPILEPSY_PRIV_EVAL_REC_954_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_955
#define EPILEPSY_PRIV_EVAL_REC_954_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_955(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_955_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_955_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_955_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_955_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_955_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_955_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_955_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_955_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_955_##choice
#define EPILEPSY_PRIV_EVAL_REC_955_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_956
#define EPILEPSY_PRIV_EVAL_REC_955_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_956(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_956_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_956_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_956_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_956_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_956_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_956_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_956_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_956_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_956_##choice
#define EPILEPSY_PRIV_EVAL_REC_956_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_957
#define EPILEPSY_PRIV_EVAL_REC_956_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_957(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_957_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_957_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_957_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_957_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_957_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_957_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_957_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_957_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_957_##choice
#define EPILEPSY_PRIV_EVAL_REC_957_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_958
#define EPILEPSY_PRIV_EVAL_REC_957_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_958(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_958_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_958_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_958_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_958_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_958_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_958_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_958_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_958_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_958_##choice
#define EPILEPSY_PRIV_EVAL_REC_958_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_959
#define EPILEPSY_PRIV_EVAL_REC_958_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_959(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_959_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_959_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_959_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_959_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_959_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_959_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_959_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_959_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_959_##choice
#define EPILEPSY_PRIV_EVAL_REC_959_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_960
#define EPILEPSY_PRIV_EVAL_REC_959_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_960(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_960_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_960_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_960_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_960_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_960_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_960_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_960_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_960_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_960_##choice
#define EPILEPSY_PRIV_EVAL_REC_960_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_961
#define EPILEPSY_PRIV_EVAL_REC_960_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_961(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_961_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_961_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_961_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_961_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_961_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_961_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_961_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_961_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_961_##choice
#define EPILEPSY_PRIV_EVAL_REC_961_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_962
#define EPILEPSY_PRIV_EVAL_REC_961_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_962(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_962_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_962_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_962_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_962_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_962_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_962_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_962_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_962_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_962_##choice
#define EPILEPSY_PRIV_EVAL_REC_962_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_963
#define EPILEPSY_PRIV_EVAL_REC_962_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_963(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_963_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_963_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_963_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_963_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_963_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_963_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_963_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_963_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_963_##choice
#define EPILEPSY_PRIV_EVAL_REC_963_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_964
#define EPILEPSY_PRIV_EVAL_REC_963_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_964(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_964_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_964_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_964_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_964_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_964_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_964_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_964_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_964_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_964_##choice
#define EPILEPSY_PRIV_EVAL_REC_964_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_965
#define EPILEPSY_PRIV_EVAL_REC_964_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_965(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_965_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_965_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_965_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_965_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_965_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_965_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_965_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_965_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_965_##choice
#define EPILEPSY_PRIV_EVAL_REC_965_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_966
#define EPILEPSY_PRIV_EVAL_REC_965_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_966(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_966_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_966_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_966_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_966_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_966_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_966_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_966_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_966_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_966_##choice
#define EPILEPSY_PRIV_EVAL_REC_966_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_967
#define EPILEPSY_PRIV_EVAL_REC_966_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_967(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_967_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_967_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_967_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_967_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_967_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_967_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_967_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_967_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_967_##choice
#define EPILEPSY_PRIV_EVAL_REC_967_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_968
#define EPILEPSY_PRIV_EVAL_REC_967_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_968(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_968_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_968_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_968_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_968_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_968_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_968_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_968_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_968_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_968_##choice
#define EPILEPSY_PRIV_EVAL_REC_968_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_969
#define EPILEPSY_PRIV_EVAL_REC_968_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_969(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_969_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_969_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_969_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_969_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_969_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_969_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_969_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_969_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_969_##choice
#define EPILEPSY_PRIV_EVAL_REC_969_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_970
#define EPILEPSY_PRIV_EVAL_REC_969_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_970(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_970_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_970_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_970_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_970_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_970_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_970_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_970_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_970_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_970_##choice
#define EPILEPSY_PRIV_EVAL_REC_970_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_971
#define EPILEPSY_PRIV_EVAL_REC_970_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_971(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_971_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_971_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_971_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_971_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_971_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_971_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_971_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_971_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_971_##choice
#define EPILEPSY_PRIV_EVAL_REC_971_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_972
#define EPILEPSY_PRIV_EVAL_REC_971_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_972(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_972_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_972_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_972_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_972_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_972_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_972_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_972_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_972_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_972_##choice
#define EPILEPSY_PRIV_EVAL_REC_972_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_973
#define EPILEPSY_PRIV_EVAL_REC_972_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_973(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_973_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_973_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_973_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_973_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_973_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_973_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_973_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_973_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_973_##choice
#define EPILEPSY_PRIV_EVAL_REC_973_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_974
#define EPILEPSY_PRIV_EVAL_REC_973_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_974(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_974_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_974_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_974_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_974_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_974_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_974_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_974_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_974_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_974_##choice
#define EPILEPSY_PRIV_EVAL_REC_974_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_975
#define EPILEPSY_PRIV_EVAL_REC_974_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_975(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_975_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_975_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_975_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_975_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_975_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_975_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_975_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_975_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_975_##choice
#define EPILEPSY_PRIV_EVAL_REC_975_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_976
#define EPILEPSY_PRIV_EVAL_REC_975_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_976(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_976_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_976_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_976_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_976_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_976_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_976_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_976_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_976_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_976_##choice
#define EPILEPSY_PRIV_EVAL_REC_976_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_977
#define EPILEPSY_PRIV_EVAL_REC_976_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_977(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_977_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_977_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_977_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_977_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_977_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_977_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_977_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_977_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_977_##choice
#define EPILEPSY_PRIV_EVAL_REC_977_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_978
#define EPILEPSY_PRIV_EVAL_REC_977_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_978(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_978_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_978_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_978_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_978_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_978_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_978_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_978_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_978_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_978_##choice
#define EPILEPSY_PRIV_EVAL_REC_978_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_979
#define EPILEPSY_PRIV_EVAL_REC_978_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_979(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_979_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_979_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_979_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_979_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_979_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_979_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_979_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_979_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_979_##choice
#define EPILEPSY_PRIV_EVAL_REC_979_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_980
#define EPILEPSY_PRIV_EVAL_REC_979_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_980(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_980_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_980_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_980_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_980_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_980_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_980_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_980_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_980_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_980_##choice
#define EPILEPSY_PRIV_EVAL_REC_980_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_981
#define EPILEPSY_PRIV_EVAL_REC_980_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_981(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_981_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_981_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_981_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_981_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_981_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_981_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_981_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_981_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_981_##choice
#define EPILEPSY_PRIV_EVAL_REC_981_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_982
#define EPILEPSY_PRIV_EVAL_REC_981_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_982(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_982_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_982_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_982_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_982_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_982_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_982_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_982_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_982_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_982_##choice
#define EPILEPSY_PRIV_EVAL_REC_982_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_983
#define EPILEPSY_PRIV_EVAL_REC_982_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_983(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_983_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_983_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_983_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_983_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_983_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_983_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_983_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_983_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_983_##choice
#define EPILEPSY_PRIV_EVAL_REC_983_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_984
#define EPILEPSY_PRIV_EVAL_REC_983_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_984(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_984_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_984_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_984_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_984_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_984_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_984_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_984_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_984_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_984_##choice
#define EPILEPSY_PRIV_EVAL_REC_984_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_985
#define EPILEPSY_PRIV_EVAL_REC_984_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_985(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_985_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_985_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_985_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_985_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_985_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_985_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_985_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_985_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_985_##choice
#define EPILEPSY_PRIV_EVAL_REC_985_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_986
#define EPILEPSY_PRIV_EVAL_REC_985_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_986(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_986_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_986_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_986_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_986_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_986_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_986_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_986_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_986_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_986_##choice
#define EPILEPSY_PRIV_EVAL_REC_986_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_987
#define EPILEPSY_PRIV_EVAL_REC_986_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_987(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_987_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_987_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_987_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_987_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_987_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_987_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_987_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_987_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_987_##choice
#define EPILEPSY_PRIV_EVAL_REC_987_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_988
#define EPILEPSY_PRIV_EVAL_REC_987_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_988(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_988_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_988_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_988_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_988_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_988_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_988_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_988_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_988_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_988_##choice
#define EPILEPSY_PRIV_EVAL_REC_988_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_989
#define EPILEPSY_PRIV_EVAL_REC_988_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_989(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_989_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_989_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_989_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_989_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_989_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_989_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_989_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_989_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_989_##choice
#define EPILEPSY_PRIV_EVAL_REC_989_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_990
#define EPILEPSY_PRIV_EVAL_REC_989_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_990(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_990_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_990_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_990_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_990_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_990_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_990_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_990_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_990_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_990_##choice
#define EPILEPSY_PRIV_EVAL_REC_990_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_991
#define EPILEPSY_PRIV_EVAL_REC_990_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_991(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_991_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_991_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_991_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_991_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_991_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_991_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_991_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_991_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_991_##choice
#define EPILEPSY_PRIV_EVAL_REC_991_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_992
#define EPILEPSY_PRIV_EVAL_REC_991_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_992(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_992_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_992_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_992_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_992_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_992_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_992_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_992_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_992_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_992_##choice
#define EPILEPSY_PRIV_EVAL_REC_992_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_993
#define EPILEPSY_PRIV_EVAL_REC_992_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_993(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_993_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_993_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_993_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_993_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_993_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_993_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_993_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_993_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_993_##choice
#define EPILEPSY_PRIV_EVAL_REC_993_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_994
#define EPILEPSY_PRIV_EVAL_REC_993_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_994(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_994_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_994_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_994_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_994_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_994_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_994_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_994_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_994_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_994_##choice
#define EPILEPSY_PRIV_EVAL_REC_994_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_995
#define EPILEPSY_PRIV_EVAL_REC_994_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_995(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_995_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_995_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_995_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_995_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_995_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_995_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_995_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_995_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_995_##choice
#define EPILEPSY_PRIV_EVAL_REC_995_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_996
#define EPILEPSY_PRIV_EVAL_REC_995_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_996(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_996_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_996_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_996_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_996_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_996_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_996_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_996_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_996_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_996_##choice
#define EPILEPSY_PRIV_EVAL_REC_996_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_997
#define EPILEPSY_PRIV_EVAL_REC_996_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_997(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_997_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_997_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_997_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_997_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_997_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_997_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_997_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_997_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_997_##choice
#define EPILEPSY_PRIV_EVAL_REC_997_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_998
#define EPILEPSY_PRIV_EVAL_REC_997_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_998(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_998_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_998_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_998_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_998_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_998_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_998_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_998_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_998_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_998_##choice
#define EPILEPSY_PRIV_EVAL_REC_998_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_999
#define EPILEPSY_PRIV_EVAL_REC_998_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_999(...)                                                            \
    EPILEPSY_PRIV_EVAL_REC_999_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_999_GET_CHOICE(__VA_ARGS__))        \
    (EPILEPSY_PRIV_EVAL_REC_999_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_999_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_999_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_999_OVERLOAD(choice)                                                \
    EPILEPSY_PRIV_EVAL_REC_999_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_999_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_999_##choice
#define EPILEPSY_PRIV_EVAL_REC_999_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_1000
#define EPILEPSY_PRIV_EVAL_REC_999_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_1000(...)                                                           \
    EPILEPSY_PRIV_EVAL_REC_1000_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_1000_GET_CHOICE(__VA_ARGS__))      \
    (EPILEPSY_PRIV_EVAL_REC_1000_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_1000_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_1000_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_1000_OVERLOAD(choice)                                               \
    EPILEPSY_PRIV_EVAL_REC_1000_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_1000_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_1000_##choice
#define EPILEPSY_PRIV_EVAL_REC_1000_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_1001
#define EPILEPSY_PRIV_EVAL_REC_1000_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_1001(...)                                                           \
    EPILEPSY_PRIV_EVAL_REC_1001_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_1001_GET_CHOICE(__VA_ARGS__))      \
    (EPILEPSY_PRIV_EVAL_REC_1001_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_1001_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_1001_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_1001_OVERLOAD(choice)                                               \
    EPILEPSY_PRIV_EVAL_REC_1001_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_1001_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_1001_##choice
#define EPILEPSY_PRIV_EVAL_REC_1001_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_1002
#define EPILEPSY_PRIV_EVAL_REC_1001_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_1002(...)                                                           \
    EPILEPSY_PRIV_EVAL_REC_1002_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_1002_GET_CHOICE(__VA_ARGS__))      \
    (EPILEPSY_PRIV_EVAL_REC_1002_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_1002_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_1002_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_1002_OVERLOAD(choice)                                               \
    EPILEPSY_PRIV_EVAL_REC_1002_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_1002_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_1002_##choice
#define EPILEPSY_PRIV_EVAL_REC_1002_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_1003
#define EPILEPSY_PRIV_EVAL_REC_1002_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_1003(...)                                                           \
    EPILEPSY_PRIV_EVAL_REC_1003_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_1003_GET_CHOICE(__VA_ARGS__))      \
    (EPILEPSY_PRIV_EVAL_REC_1003_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_1003_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_1003_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_1003_OVERLOAD(choice)                                               \
    EPILEPSY_PRIV_EVAL_REC_1003_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_1003_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_1003_##choice
#define EPILEPSY_PRIV_EVAL_REC_1003_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_1004
#define EPILEPSY_PRIV_EVAL_REC_1003_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_1004(...)                                                           \
    EPILEPSY_PRIV_EVAL_REC_1004_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_1004_GET_CHOICE(__VA_ARGS__))      \
    (EPILEPSY_PRIV_EVAL_REC_1004_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_1004_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_1004_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_1004_OVERLOAD(choice)                                               \
    EPILEPSY_PRIV_EVAL_REC_1004_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_1004_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_1004_##choice
#define EPILEPSY_PRIV_EVAL_REC_1004_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_1005
#define EPILEPSY_PRIV_EVAL_REC_1004_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_1005(...)                                                           \
    EPILEPSY_PRIV_EVAL_REC_1005_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_1005_GET_CHOICE(__VA_ARGS__))      \
    (EPILEPSY_PRIV_EVAL_REC_1005_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_1005_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_1005_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_1005_OVERLOAD(choice)                                               \
    EPILEPSY_PRIV_EVAL_REC_1005_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_1005_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_1005_##choice
#define EPILEPSY_PRIV_EVAL_REC_1005_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_1006
#define EPILEPSY_PRIV_EVAL_REC_1005_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_1006(...)                                                           \
    EPILEPSY_PRIV_EVAL_REC_1006_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_1006_GET_CHOICE(__VA_ARGS__))      \
    (EPILEPSY_PRIV_EVAL_REC_1006_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_1006_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_1006_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_1006_OVERLOAD(choice)                                               \
    EPILEPSY_PRIV_EVAL_REC_1006_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_1006_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_1006_##choice
#define EPILEPSY_PRIV_EVAL_REC_1006_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_1007
#define EPILEPSY_PRIV_EVAL_REC_1006_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_1007(...)                                                           \
    EPILEPSY_PRIV_EVAL_REC_1007_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_1007_GET_CHOICE(__VA_ARGS__))      \
    (EPILEPSY_PRIV_EVAL_REC_1007_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_1007_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_1007_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_1007_OVERLOAD(choice)                                               \
    EPILEPSY_PRIV_EVAL_REC_1007_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_1007_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_1007_##choice
#define EPILEPSY_PRIV_EVAL_REC_1007_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_1008
#define EPILEPSY_PRIV_EVAL_REC_1007_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_1008(...)                                                           \
    EPILEPSY_PRIV_EVAL_REC_1008_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_1008_GET_CHOICE(__VA_ARGS__))      \
    (EPILEPSY_PRIV_EVAL_REC_1008_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_1008_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_1008_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_1008_OVERLOAD(choice)                                               \
    EPILEPSY_PRIV_EVAL_REC_1008_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_1008_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_1008_##choice
#define EPILEPSY_PRIV_EVAL_REC_1008_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_1009
#define EPILEPSY_PRIV_EVAL_REC_1008_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_1009(...)                                                           \
    EPILEPSY_PRIV_EVAL_REC_1009_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_1009_GET_CHOICE(__VA_ARGS__))      \
    (EPILEPSY_PRIV_EVAL_REC_1009_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_1009_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_1009_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_1009_OVERLOAD(choice)                                               \
    EPILEPSY_PRIV_EVAL_REC_1009_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_1009_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_1009_##choice
#define EPILEPSY_PRIV_EVAL_REC_1009_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_1010
#define EPILEPSY_PRIV_EVAL_REC_1009_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_1010(...)                                                           \
    EPILEPSY_PRIV_EVAL_REC_1010_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_1010_GET_CHOICE(__VA_ARGS__))      \
    (EPILEPSY_PRIV_EVAL_REC_1010_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_1010_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_1010_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_1010_OVERLOAD(choice)                                               \
    EPILEPSY_PRIV_EVAL_REC_1010_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_1010_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_1010_##choice
#define EPILEPSY_PRIV_EVAL_REC_1010_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_1011
#define EPILEPSY_PRIV_EVAL_REC_1010_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_1011(...)                                                           \
    EPILEPSY_PRIV_EVAL_REC_1011_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_1011_GET_CHOICE(__VA_ARGS__))      \
    (EPILEPSY_PRIV_EVAL_REC_1011_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_1011_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_1011_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_1011_OVERLOAD(choice)                                               \
    EPILEPSY_PRIV_EVAL_REC_1011_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_1011_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_1011_##choice
#define EPILEPSY_PRIV_EVAL_REC_1011_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_1012
#define EPILEPSY_PRIV_EVAL_REC_1011_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_1012(...)                                                           \
    EPILEPSY_PRIV_EVAL_REC_1012_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_1012_GET_CHOICE(__VA_ARGS__))      \
    (EPILEPSY_PRIV_EVAL_REC_1012_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_1012_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_1012_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_1012_OVERLOAD(choice)                                               \
    EPILEPSY_PRIV_EVAL_REC_1012_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_1012_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_1012_##choice
#define EPILEPSY_PRIV_EVAL_REC_1012_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_1013
#define EPILEPSY_PRIV_EVAL_REC_1012_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_1013(...)                                                           \
    EPILEPSY_PRIV_EVAL_REC_1013_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_1013_GET_CHOICE(__VA_ARGS__))      \
    (EPILEPSY_PRIV_EVAL_REC_1013_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_1013_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_1013_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_1013_OVERLOAD(choice)                                               \
    EPILEPSY_PRIV_EVAL_REC_1013_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_1013_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_1013_##choice
#define EPILEPSY_PRIV_EVAL_REC_1013_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_1014
#define EPILEPSY_PRIV_EVAL_REC_1013_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_1014(...)                                                           \
    EPILEPSY_PRIV_EVAL_REC_1014_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_1014_GET_CHOICE(__VA_ARGS__))      \
    (EPILEPSY_PRIV_EVAL_REC_1014_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_1014_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_1014_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_1014_OVERLOAD(choice)                                               \
    EPILEPSY_PRIV_EVAL_REC_1014_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_1014_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_1014_##choice
#define EPILEPSY_PRIV_EVAL_REC_1014_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_1015
#define EPILEPSY_PRIV_EVAL_REC_1014_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_1015(...)                                                           \
    EPILEPSY_PRIV_EVAL_REC_1015_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_1015_GET_CHOICE(__VA_ARGS__))      \
    (EPILEPSY_PRIV_EVAL_REC_1015_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_1015_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_1015_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_1015_OVERLOAD(choice)                                               \
    EPILEPSY_PRIV_EVAL_REC_1015_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_1015_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_1015_##choice
#define EPILEPSY_PRIV_EVAL_REC_1015_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_1016
#define EPILEPSY_PRIV_EVAL_REC_1015_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_1016(...)                                                           \
    EPILEPSY_PRIV_EVAL_REC_1016_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_1016_GET_CHOICE(__VA_ARGS__))      \
    (EPILEPSY_PRIV_EVAL_REC_1016_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_1016_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_1016_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_1016_OVERLOAD(choice)                                               \
    EPILEPSY_PRIV_EVAL_REC_1016_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_1016_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_1016_##choice
#define EPILEPSY_PRIV_EVAL_REC_1016_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_1017
#define EPILEPSY_PRIV_EVAL_REC_1016_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_1017(...)                                                           \
    EPILEPSY_PRIV_EVAL_REC_1017_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_1017_GET_CHOICE(__VA_ARGS__))      \
    (EPILEPSY_PRIV_EVAL_REC_1017_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_1017_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_1017_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_1017_OVERLOAD(choice)                                               \
    EPILEPSY_PRIV_EVAL_REC_1017_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_1017_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_1017_##choice
#define EPILEPSY_PRIV_EVAL_REC_1017_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_1018
#define EPILEPSY_PRIV_EVAL_REC_1017_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_1018(...)                                                           \
    EPILEPSY_PRIV_EVAL_REC_1018_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_1018_GET_CHOICE(__VA_ARGS__))      \
    (EPILEPSY_PRIV_EVAL_REC_1018_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_1018_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_1018_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_1018_OVERLOAD(choice)                                               \
    EPILEPSY_PRIV_EVAL_REC_1018_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_1018_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_1018_##choice
#define EPILEPSY_PRIV_EVAL_REC_1018_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_1019
#define EPILEPSY_PRIV_EVAL_REC_1018_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_1019(...)                                                           \
    EPILEPSY_PRIV_EVAL_REC_1019_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_1019_GET_CHOICE(__VA_ARGS__))      \
    (EPILEPSY_PRIV_EVAL_REC_1019_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_1019_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_1019_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_1019_OVERLOAD(choice)                                               \
    EPILEPSY_PRIV_EVAL_REC_1019_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_1019_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_1019_##choice
#define EPILEPSY_PRIV_EVAL_REC_1019_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_1020
#define EPILEPSY_PRIV_EVAL_REC_1019_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_1020(...)                                                           \
    EPILEPSY_PRIV_EVAL_REC_1020_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_1020_GET_CHOICE(__VA_ARGS__))      \
    (EPILEPSY_PRIV_EVAL_REC_1020_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_1020_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_1020_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_1020_OVERLOAD(choice)                                               \
    EPILEPSY_PRIV_EVAL_REC_1020_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_1020_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_1020_##choice
#define EPILEPSY_PRIV_EVAL_REC_1020_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_1021
#define EPILEPSY_PRIV_EVAL_REC_1020_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_1021(...)                                                           \
    EPILEPSY_PRIV_EVAL_REC_1021_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_1021_GET_CHOICE(__VA_ARGS__))      \
    (EPILEPSY_PRIV_EVAL_REC_1021_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_1021_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_1021_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_1021_OVERLOAD(choice)                                               \
    EPILEPSY_PRIV_EVAL_REC_1021_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_1021_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_1021_##choice
#define EPILEPSY_PRIV_EVAL_REC_1021_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_1022
#define EPILEPSY_PRIV_EVAL_REC_1021_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_1022(...)                                                           \
    EPILEPSY_PRIV_EVAL_REC_1022_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_1022_GET_CHOICE(__VA_ARGS__))      \
    (EPILEPSY_PRIV_EVAL_REC_1022_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_1022_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_1022_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_1022_OVERLOAD(choice)                                               \
    EPILEPSY_PRIV_EVAL_REC_1022_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_1022_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_1022_##choice
#define EPILEPSY_PRIV_EVAL_REC_1022_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_1023
#define EPILEPSY_PRIV_EVAL_REC_1022_STOP(...)                  __VA_ARGS__

#define EPILEPSY_PRIV_EVAL_REC_1023(...)                                                           \
    EPILEPSY_PRIV_EVAL_REC_1023_OVERLOAD(EPILEPSY_PRIV_EVAL_REC_1023_GET_CHOICE(__VA_ARGS__))      \
    (EPILEPSY_PRIV_EVAL_REC_1023_GET_REST(__VA_ARGS__))
#define EPILEPSY_PRIV_EVAL_REC_1023_GET_CHOICE(choice, ...) choice
#define EPILEPSY_PRIV_EVAL_REC_1023_GET_REST(choice, ...)   __VA_ARGS__
#define EPILEPSY_PRIV_EVAL_REC_1023_OVERLOAD(choice)                                               \
    EPILEPSY_PRIV_EVAL_REC_1023_OVERLOAD_PRIMITIVE(choice)
#define EPILEPSY_PRIV_EVAL_REC_1023_OVERLOAD_PRIMITIVE(choice) EPILEPSY_PRIV_EVAL_REC_1023_##choice
#define EPILEPSY_PRIV_EVAL_REC_1023_CONTINUE                   EPILEPSY_PRIV_EVAL_REC_1024
#define EPILEPSY_PRIV_EVAL_REC_1023_STOP(...)                  __VA_ARGS__

#endif // EPILEPSY_EVAL_REC_UNROLL_0_TO_1023_H
