#ifndef MACROLOP_EVAL_REC_UNROLL_5120_TO_6143_H
#define MACROLOP_EVAL_REC_UNROLL_5120_TO_6143_H

#define MACROLOP_PRIVATE_EVAL_REC_5120(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5120_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5120_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5120_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5120_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5120_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5120_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5120_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5120_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5120_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5120_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5121
#define MACROLOP_PRIVATE_EVAL_REC_5120_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5121(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5121_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5121_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5121_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5121_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5121_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5121_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5121_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5121_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5121_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5121_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5122
#define MACROLOP_PRIVATE_EVAL_REC_5121_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5122(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5122_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5122_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5122_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5122_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5122_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5122_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5122_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5122_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5122_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5122_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5123
#define MACROLOP_PRIVATE_EVAL_REC_5122_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5123(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5123_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5123_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5123_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5123_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5123_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5123_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5123_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5123_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5123_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5123_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5124
#define MACROLOP_PRIVATE_EVAL_REC_5123_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5124(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5124_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5124_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5124_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5124_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5124_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5124_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5124_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5124_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5124_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5124_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5125
#define MACROLOP_PRIVATE_EVAL_REC_5124_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5125(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5125_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5125_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5125_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5125_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5125_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5125_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5125_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5125_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5125_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5125_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5126
#define MACROLOP_PRIVATE_EVAL_REC_5125_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5126(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5126_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5126_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5126_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5126_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5126_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5126_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5126_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5126_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5126_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5126_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5127
#define MACROLOP_PRIVATE_EVAL_REC_5126_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5127(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5127_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5127_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5127_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5127_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5127_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5127_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5127_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5127_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5127_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5127_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5128
#define MACROLOP_PRIVATE_EVAL_REC_5127_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5128(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5128_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5128_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5128_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5128_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5128_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5128_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5128_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5128_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5128_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5128_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5129
#define MACROLOP_PRIVATE_EVAL_REC_5128_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5129(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5129_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5129_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5129_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5129_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5129_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5129_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5129_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5129_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5129_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5129_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5130
#define MACROLOP_PRIVATE_EVAL_REC_5129_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5130(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5130_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5130_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5130_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5130_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5130_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5130_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5130_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5130_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5130_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5130_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5131
#define MACROLOP_PRIVATE_EVAL_REC_5130_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5131(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5131_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5131_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5131_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5131_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5131_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5131_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5131_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5131_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5131_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5131_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5132
#define MACROLOP_PRIVATE_EVAL_REC_5131_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5132(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5132_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5132_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5132_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5132_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5132_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5132_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5132_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5132_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5132_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5132_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5133
#define MACROLOP_PRIVATE_EVAL_REC_5132_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5133(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5133_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5133_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5133_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5133_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5133_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5133_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5133_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5133_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5133_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5133_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5134
#define MACROLOP_PRIVATE_EVAL_REC_5133_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5134(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5134_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5134_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5134_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5134_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5134_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5134_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5134_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5134_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5134_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5134_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5135
#define MACROLOP_PRIVATE_EVAL_REC_5134_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5135(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5135_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5135_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5135_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5135_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5135_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5135_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5135_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5135_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5135_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5135_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5136
#define MACROLOP_PRIVATE_EVAL_REC_5135_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5136(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5136_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5136_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5136_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5136_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5136_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5136_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5136_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5136_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5136_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5136_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5137
#define MACROLOP_PRIVATE_EVAL_REC_5136_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5137(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5137_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5137_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5137_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5137_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5137_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5137_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5137_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5137_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5137_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5137_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5138
#define MACROLOP_PRIVATE_EVAL_REC_5137_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5138(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5138_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5138_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5138_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5138_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5138_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5138_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5138_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5138_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5138_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5138_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5139
#define MACROLOP_PRIVATE_EVAL_REC_5138_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5139(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5139_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5139_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5139_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5139_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5139_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5139_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5139_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5139_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5139_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5139_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5140
#define MACROLOP_PRIVATE_EVAL_REC_5139_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5140(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5140_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5140_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5140_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5140_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5140_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5140_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5140_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5140_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5140_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5140_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5141
#define MACROLOP_PRIVATE_EVAL_REC_5140_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5141(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5141_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5141_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5141_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5141_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5141_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5141_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5141_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5141_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5141_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5141_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5142
#define MACROLOP_PRIVATE_EVAL_REC_5141_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5142(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5142_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5142_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5142_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5142_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5142_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5142_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5142_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5142_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5142_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5142_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5143
#define MACROLOP_PRIVATE_EVAL_REC_5142_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5143(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5143_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5143_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5143_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5143_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5143_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5143_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5143_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5143_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5143_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5143_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5144
#define MACROLOP_PRIVATE_EVAL_REC_5143_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5144(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5144_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5144_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5144_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5144_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5144_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5144_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5144_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5144_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5144_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5144_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5145
#define MACROLOP_PRIVATE_EVAL_REC_5144_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5145(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5145_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5145_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5145_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5145_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5145_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5145_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5145_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5145_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5145_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5145_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5146
#define MACROLOP_PRIVATE_EVAL_REC_5145_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5146(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5146_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5146_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5146_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5146_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5146_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5146_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5146_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5146_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5146_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5146_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5147
#define MACROLOP_PRIVATE_EVAL_REC_5146_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5147(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5147_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5147_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5147_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5147_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5147_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5147_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5147_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5147_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5147_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5147_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5148
#define MACROLOP_PRIVATE_EVAL_REC_5147_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5148(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5148_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5148_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5148_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5148_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5148_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5148_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5148_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5148_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5148_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5148_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5149
#define MACROLOP_PRIVATE_EVAL_REC_5148_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5149(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5149_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5149_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5149_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5149_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5149_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5149_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5149_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5149_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5149_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5149_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5150
#define MACROLOP_PRIVATE_EVAL_REC_5149_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5150(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5150_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5150_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5150_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5150_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5150_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5150_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5150_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5150_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5150_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5150_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5151
#define MACROLOP_PRIVATE_EVAL_REC_5150_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5151(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5151_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5151_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5151_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5151_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5151_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5151_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5151_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5151_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5151_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5151_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5152
#define MACROLOP_PRIVATE_EVAL_REC_5151_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5152(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5152_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5152_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5152_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5152_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5152_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5152_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5152_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5152_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5152_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5152_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5153
#define MACROLOP_PRIVATE_EVAL_REC_5152_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5153(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5153_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5153_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5153_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5153_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5153_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5153_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5153_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5153_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5153_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5153_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5154
#define MACROLOP_PRIVATE_EVAL_REC_5153_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5154(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5154_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5154_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5154_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5154_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5154_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5154_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5154_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5154_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5154_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5154_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5155
#define MACROLOP_PRIVATE_EVAL_REC_5154_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5155(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5155_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5155_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5155_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5155_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5155_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5155_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5155_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5155_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5155_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5155_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5156
#define MACROLOP_PRIVATE_EVAL_REC_5155_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5156(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5156_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5156_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5156_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5156_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5156_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5156_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5156_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5156_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5156_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5156_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5157
#define MACROLOP_PRIVATE_EVAL_REC_5156_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5157(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5157_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5157_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5157_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5157_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5157_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5157_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5157_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5157_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5157_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5157_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5158
#define MACROLOP_PRIVATE_EVAL_REC_5157_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5158(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5158_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5158_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5158_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5158_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5158_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5158_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5158_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5158_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5158_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5158_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5159
#define MACROLOP_PRIVATE_EVAL_REC_5158_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5159(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5159_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5159_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5159_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5159_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5159_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5159_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5159_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5159_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5159_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5159_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5160
#define MACROLOP_PRIVATE_EVAL_REC_5159_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5160(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5160_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5160_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5160_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5160_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5160_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5160_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5160_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5160_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5160_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5160_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5161
#define MACROLOP_PRIVATE_EVAL_REC_5160_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5161(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5161_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5161_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5161_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5161_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5161_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5161_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5161_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5161_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5161_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5161_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5162
#define MACROLOP_PRIVATE_EVAL_REC_5161_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5162(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5162_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5162_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5162_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5162_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5162_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5162_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5162_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5162_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5162_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5162_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5163
#define MACROLOP_PRIVATE_EVAL_REC_5162_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5163(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5163_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5163_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5163_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5163_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5163_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5163_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5163_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5163_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5163_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5163_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5164
#define MACROLOP_PRIVATE_EVAL_REC_5163_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5164(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5164_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5164_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5164_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5164_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5164_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5164_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5164_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5164_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5164_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5164_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5165
#define MACROLOP_PRIVATE_EVAL_REC_5164_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5165(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5165_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5165_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5165_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5165_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5165_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5165_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5165_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5165_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5165_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5165_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5166
#define MACROLOP_PRIVATE_EVAL_REC_5165_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5166(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5166_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5166_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5166_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5166_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5166_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5166_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5166_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5166_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5166_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5166_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5167
#define MACROLOP_PRIVATE_EVAL_REC_5166_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5167(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5167_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5167_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5167_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5167_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5167_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5167_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5167_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5167_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5167_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5167_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5168
#define MACROLOP_PRIVATE_EVAL_REC_5167_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5168(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5168_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5168_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5168_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5168_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5168_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5168_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5168_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5168_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5168_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5168_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5169
#define MACROLOP_PRIVATE_EVAL_REC_5168_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5169(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5169_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5169_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5169_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5169_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5169_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5169_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5169_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5169_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5169_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5169_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5170
#define MACROLOP_PRIVATE_EVAL_REC_5169_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5170(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5170_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5170_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5170_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5170_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5170_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5170_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5170_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5170_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5170_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5170_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5171
#define MACROLOP_PRIVATE_EVAL_REC_5170_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5171(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5171_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5171_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5171_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5171_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5171_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5171_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5171_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5171_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5171_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5171_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5172
#define MACROLOP_PRIVATE_EVAL_REC_5171_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5172(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5172_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5172_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5172_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5172_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5172_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5172_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5172_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5172_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5172_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5172_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5173
#define MACROLOP_PRIVATE_EVAL_REC_5172_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5173(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5173_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5173_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5173_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5173_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5173_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5173_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5173_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5173_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5173_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5173_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5174
#define MACROLOP_PRIVATE_EVAL_REC_5173_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5174(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5174_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5174_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5174_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5174_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5174_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5174_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5174_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5174_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5174_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5174_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5175
#define MACROLOP_PRIVATE_EVAL_REC_5174_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5175(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5175_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5175_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5175_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5175_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5175_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5175_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5175_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5175_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5175_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5175_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5176
#define MACROLOP_PRIVATE_EVAL_REC_5175_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5176(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5176_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5176_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5176_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5176_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5176_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5176_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5176_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5176_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5176_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5176_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5177
#define MACROLOP_PRIVATE_EVAL_REC_5176_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5177(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5177_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5177_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5177_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5177_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5177_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5177_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5177_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5177_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5177_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5177_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5178
#define MACROLOP_PRIVATE_EVAL_REC_5177_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5178(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5178_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5178_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5178_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5178_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5178_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5178_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5178_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5178_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5178_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5178_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5179
#define MACROLOP_PRIVATE_EVAL_REC_5178_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5179(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5179_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5179_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5179_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5179_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5179_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5179_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5179_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5179_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5179_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5179_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5180
#define MACROLOP_PRIVATE_EVAL_REC_5179_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5180(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5180_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5180_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5180_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5180_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5180_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5180_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5180_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5180_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5180_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5180_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5181
#define MACROLOP_PRIVATE_EVAL_REC_5180_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5181(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5181_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5181_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5181_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5181_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5181_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5181_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5181_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5181_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5181_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5181_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5182
#define MACROLOP_PRIVATE_EVAL_REC_5181_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5182(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5182_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5182_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5182_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5182_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5182_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5182_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5182_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5182_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5182_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5182_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5183
#define MACROLOP_PRIVATE_EVAL_REC_5182_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5183(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5183_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5183_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5183_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5183_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5183_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5183_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5183_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5183_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5183_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5183_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5184
#define MACROLOP_PRIVATE_EVAL_REC_5183_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5184(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5184_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5184_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5184_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5184_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5184_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5184_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5184_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5184_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5184_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5184_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5185
#define MACROLOP_PRIVATE_EVAL_REC_5184_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5185(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5185_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5185_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5185_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5185_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5185_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5185_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5185_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5185_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5185_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5185_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5186
#define MACROLOP_PRIVATE_EVAL_REC_5185_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5186(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5186_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5186_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5186_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5186_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5186_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5186_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5186_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5186_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5186_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5186_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5187
#define MACROLOP_PRIVATE_EVAL_REC_5186_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5187(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5187_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5187_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5187_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5187_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5187_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5187_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5187_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5187_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5187_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5187_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5188
#define MACROLOP_PRIVATE_EVAL_REC_5187_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5188(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5188_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5188_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5188_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5188_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5188_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5188_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5188_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5188_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5188_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5188_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5189
#define MACROLOP_PRIVATE_EVAL_REC_5188_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5189(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5189_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5189_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5189_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5189_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5189_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5189_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5189_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5189_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5189_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5189_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5190
#define MACROLOP_PRIVATE_EVAL_REC_5189_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5190(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5190_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5190_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5190_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5190_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5190_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5190_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5190_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5190_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5190_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5190_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5191
#define MACROLOP_PRIVATE_EVAL_REC_5190_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5191(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5191_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5191_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5191_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5191_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5191_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5191_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5191_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5191_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5191_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5191_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5192
#define MACROLOP_PRIVATE_EVAL_REC_5191_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5192(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5192_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5192_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5192_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5192_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5192_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5192_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5192_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5192_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5192_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5192_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5193
#define MACROLOP_PRIVATE_EVAL_REC_5192_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5193(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5193_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5193_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5193_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5193_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5193_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5193_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5193_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5193_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5193_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5193_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5194
#define MACROLOP_PRIVATE_EVAL_REC_5193_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5194(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5194_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5194_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5194_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5194_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5194_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5194_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5194_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5194_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5194_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5194_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5195
#define MACROLOP_PRIVATE_EVAL_REC_5194_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5195(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5195_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5195_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5195_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5195_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5195_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5195_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5195_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5195_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5195_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5195_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5196
#define MACROLOP_PRIVATE_EVAL_REC_5195_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5196(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5196_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5196_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5196_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5196_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5196_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5196_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5196_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5196_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5196_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5196_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5197
#define MACROLOP_PRIVATE_EVAL_REC_5196_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5197(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5197_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5197_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5197_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5197_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5197_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5197_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5197_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5197_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5197_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5197_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5198
#define MACROLOP_PRIVATE_EVAL_REC_5197_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5198(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5198_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5198_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5198_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5198_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5198_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5198_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5198_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5198_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5198_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5198_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5199
#define MACROLOP_PRIVATE_EVAL_REC_5198_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5199(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5199_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5199_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5199_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5199_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5199_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5199_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5199_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5199_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5199_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5199_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5200
#define MACROLOP_PRIVATE_EVAL_REC_5199_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5200(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5200_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5200_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5200_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5200_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5200_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5200_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5200_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5200_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5200_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5200_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5201
#define MACROLOP_PRIVATE_EVAL_REC_5200_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5201(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5201_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5201_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5201_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5201_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5201_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5201_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5201_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5201_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5201_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5201_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5202
#define MACROLOP_PRIVATE_EVAL_REC_5201_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5202(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5202_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5202_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5202_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5202_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5202_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5202_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5202_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5202_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5202_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5202_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5203
#define MACROLOP_PRIVATE_EVAL_REC_5202_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5203(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5203_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5203_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5203_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5203_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5203_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5203_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5203_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5203_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5203_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5203_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5204
#define MACROLOP_PRIVATE_EVAL_REC_5203_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5204(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5204_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5204_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5204_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5204_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5204_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5204_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5204_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5204_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5204_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5204_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5205
#define MACROLOP_PRIVATE_EVAL_REC_5204_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5205(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5205_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5205_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5205_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5205_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5205_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5205_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5205_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5205_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5205_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5205_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5206
#define MACROLOP_PRIVATE_EVAL_REC_5205_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5206(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5206_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5206_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5206_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5206_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5206_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5206_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5206_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5206_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5206_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5206_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5207
#define MACROLOP_PRIVATE_EVAL_REC_5206_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5207(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5207_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5207_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5207_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5207_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5207_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5207_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5207_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5207_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5207_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5207_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5208
#define MACROLOP_PRIVATE_EVAL_REC_5207_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5208(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5208_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5208_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5208_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5208_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5208_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5208_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5208_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5208_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5208_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5208_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5209
#define MACROLOP_PRIVATE_EVAL_REC_5208_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5209(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5209_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5209_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5209_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5209_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5209_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5209_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5209_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5209_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5209_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5209_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5210
#define MACROLOP_PRIVATE_EVAL_REC_5209_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5210(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5210_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5210_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5210_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5210_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5210_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5210_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5210_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5210_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5210_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5210_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5211
#define MACROLOP_PRIVATE_EVAL_REC_5210_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5211(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5211_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5211_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5211_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5211_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5211_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5211_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5211_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5211_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5211_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5211_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5212
#define MACROLOP_PRIVATE_EVAL_REC_5211_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5212(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5212_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5212_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5212_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5212_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5212_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5212_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5212_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5212_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5212_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5212_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5213
#define MACROLOP_PRIVATE_EVAL_REC_5212_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5213(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5213_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5213_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5213_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5213_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5213_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5213_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5213_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5213_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5213_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5213_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5214
#define MACROLOP_PRIVATE_EVAL_REC_5213_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5214(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5214_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5214_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5214_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5214_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5214_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5214_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5214_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5214_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5214_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5214_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5215
#define MACROLOP_PRIVATE_EVAL_REC_5214_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5215(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5215_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5215_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5215_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5215_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5215_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5215_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5215_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5215_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5215_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5215_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5216
#define MACROLOP_PRIVATE_EVAL_REC_5215_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5216(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5216_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5216_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5216_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5216_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5216_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5216_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5216_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5216_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5216_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5216_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5217
#define MACROLOP_PRIVATE_EVAL_REC_5216_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5217(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5217_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5217_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5217_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5217_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5217_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5217_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5217_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5217_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5217_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5217_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5218
#define MACROLOP_PRIVATE_EVAL_REC_5217_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5218(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5218_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5218_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5218_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5218_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5218_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5218_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5218_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5218_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5218_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5218_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5219
#define MACROLOP_PRIVATE_EVAL_REC_5218_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5219(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5219_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5219_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5219_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5219_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5219_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5219_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5219_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5219_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5219_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5219_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5220
#define MACROLOP_PRIVATE_EVAL_REC_5219_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5220(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5220_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5220_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5220_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5220_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5220_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5220_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5220_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5220_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5220_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5220_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5221
#define MACROLOP_PRIVATE_EVAL_REC_5220_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5221(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5221_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5221_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5221_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5221_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5221_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5221_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5221_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5221_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5221_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5221_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5222
#define MACROLOP_PRIVATE_EVAL_REC_5221_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5222(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5222_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5222_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5222_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5222_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5222_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5222_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5222_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5222_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5222_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5222_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5223
#define MACROLOP_PRIVATE_EVAL_REC_5222_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5223(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5223_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5223_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5223_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5223_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5223_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5223_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5223_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5223_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5223_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5223_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5224
#define MACROLOP_PRIVATE_EVAL_REC_5223_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5224(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5224_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5224_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5224_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5224_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5224_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5224_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5224_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5224_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5224_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5224_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5225
#define MACROLOP_PRIVATE_EVAL_REC_5224_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5225(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5225_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5225_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5225_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5225_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5225_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5225_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5225_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5225_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5225_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5225_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5226
#define MACROLOP_PRIVATE_EVAL_REC_5225_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5226(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5226_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5226_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5226_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5226_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5226_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5226_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5226_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5226_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5226_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5226_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5227
#define MACROLOP_PRIVATE_EVAL_REC_5226_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5227(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5227_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5227_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5227_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5227_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5227_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5227_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5227_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5227_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5227_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5227_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5228
#define MACROLOP_PRIVATE_EVAL_REC_5227_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5228(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5228_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5228_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5228_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5228_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5228_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5228_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5228_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5228_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5228_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5228_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5229
#define MACROLOP_PRIVATE_EVAL_REC_5228_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5229(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5229_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5229_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5229_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5229_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5229_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5229_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5229_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5229_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5229_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5229_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5230
#define MACROLOP_PRIVATE_EVAL_REC_5229_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5230(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5230_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5230_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5230_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5230_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5230_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5230_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5230_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5230_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5230_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5230_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5231
#define MACROLOP_PRIVATE_EVAL_REC_5230_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5231(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5231_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5231_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5231_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5231_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5231_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5231_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5231_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5231_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5231_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5231_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5232
#define MACROLOP_PRIVATE_EVAL_REC_5231_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5232(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5232_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5232_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5232_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5232_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5232_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5232_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5232_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5232_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5232_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5232_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5233
#define MACROLOP_PRIVATE_EVAL_REC_5232_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5233(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5233_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5233_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5233_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5233_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5233_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5233_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5233_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5233_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5233_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5233_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5234
#define MACROLOP_PRIVATE_EVAL_REC_5233_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5234(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5234_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5234_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5234_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5234_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5234_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5234_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5234_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5234_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5234_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5234_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5235
#define MACROLOP_PRIVATE_EVAL_REC_5234_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5235(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5235_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5235_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5235_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5235_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5235_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5235_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5235_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5235_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5235_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5235_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5236
#define MACROLOP_PRIVATE_EVAL_REC_5235_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5236(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5236_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5236_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5236_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5236_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5236_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5236_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5236_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5236_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5236_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5236_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5237
#define MACROLOP_PRIVATE_EVAL_REC_5236_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5237(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5237_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5237_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5237_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5237_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5237_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5237_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5237_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5237_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5237_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5237_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5238
#define MACROLOP_PRIVATE_EVAL_REC_5237_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5238(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5238_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5238_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5238_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5238_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5238_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5238_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5238_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5238_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5238_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5238_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5239
#define MACROLOP_PRIVATE_EVAL_REC_5238_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5239(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5239_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5239_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5239_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5239_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5239_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5239_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5239_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5239_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5239_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5239_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5240
#define MACROLOP_PRIVATE_EVAL_REC_5239_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5240(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5240_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5240_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5240_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5240_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5240_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5240_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5240_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5240_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5240_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5240_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5241
#define MACROLOP_PRIVATE_EVAL_REC_5240_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5241(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5241_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5241_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5241_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5241_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5241_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5241_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5241_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5241_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5241_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5241_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5242
#define MACROLOP_PRIVATE_EVAL_REC_5241_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5242(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5242_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5242_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5242_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5242_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5242_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5242_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5242_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5242_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5242_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5242_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5243
#define MACROLOP_PRIVATE_EVAL_REC_5242_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5243(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5243_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5243_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5243_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5243_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5243_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5243_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5243_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5243_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5243_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5243_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5244
#define MACROLOP_PRIVATE_EVAL_REC_5243_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5244(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5244_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5244_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5244_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5244_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5244_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5244_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5244_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5244_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5244_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5244_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5245
#define MACROLOP_PRIVATE_EVAL_REC_5244_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5245(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5245_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5245_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5245_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5245_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5245_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5245_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5245_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5245_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5245_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5245_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5246
#define MACROLOP_PRIVATE_EVAL_REC_5245_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5246(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5246_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5246_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5246_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5246_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5246_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5246_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5246_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5246_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5246_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5246_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5247
#define MACROLOP_PRIVATE_EVAL_REC_5246_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5247(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5247_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5247_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5247_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5247_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5247_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5247_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5247_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5247_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5247_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5247_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5248
#define MACROLOP_PRIVATE_EVAL_REC_5247_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5248(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5248_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5248_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5248_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5248_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5248_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5248_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5248_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5248_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5248_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5248_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5249
#define MACROLOP_PRIVATE_EVAL_REC_5248_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5249(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5249_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5249_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5249_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5249_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5249_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5249_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5249_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5249_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5249_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5249_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5250
#define MACROLOP_PRIVATE_EVAL_REC_5249_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5250(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5250_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5250_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5250_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5250_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5250_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5250_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5250_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5250_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5250_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5250_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5251
#define MACROLOP_PRIVATE_EVAL_REC_5250_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5251(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5251_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5251_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5251_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5251_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5251_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5251_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5251_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5251_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5251_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5251_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5252
#define MACROLOP_PRIVATE_EVAL_REC_5251_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5252(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5252_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5252_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5252_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5252_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5252_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5252_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5252_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5252_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5252_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5252_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5253
#define MACROLOP_PRIVATE_EVAL_REC_5252_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5253(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5253_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5253_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5253_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5253_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5253_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5253_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5253_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5253_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5253_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5253_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5254
#define MACROLOP_PRIVATE_EVAL_REC_5253_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5254(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5254_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5254_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5254_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5254_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5254_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5254_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5254_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5254_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5254_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5254_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5255
#define MACROLOP_PRIVATE_EVAL_REC_5254_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5255(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5255_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5255_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5255_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5255_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5255_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5255_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5255_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5255_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5255_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5255_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5256
#define MACROLOP_PRIVATE_EVAL_REC_5255_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5256(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5256_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5256_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5256_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5256_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5256_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5256_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5256_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5256_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5256_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5256_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5257
#define MACROLOP_PRIVATE_EVAL_REC_5256_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5257(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5257_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5257_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5257_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5257_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5257_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5257_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5257_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5257_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5257_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5257_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5258
#define MACROLOP_PRIVATE_EVAL_REC_5257_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5258(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5258_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5258_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5258_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5258_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5258_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5258_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5258_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5258_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5258_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5258_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5259
#define MACROLOP_PRIVATE_EVAL_REC_5258_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5259(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5259_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5259_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5259_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5259_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5259_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5259_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5259_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5259_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5259_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5259_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5260
#define MACROLOP_PRIVATE_EVAL_REC_5259_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5260(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5260_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5260_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5260_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5260_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5260_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5260_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5260_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5260_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5260_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5260_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5261
#define MACROLOP_PRIVATE_EVAL_REC_5260_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5261(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5261_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5261_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5261_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5261_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5261_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5261_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5261_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5261_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5261_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5261_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5262
#define MACROLOP_PRIVATE_EVAL_REC_5261_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5262(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5262_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5262_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5262_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5262_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5262_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5262_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5262_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5262_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5262_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5262_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5263
#define MACROLOP_PRIVATE_EVAL_REC_5262_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5263(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5263_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5263_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5263_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5263_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5263_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5263_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5263_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5263_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5263_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5263_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5264
#define MACROLOP_PRIVATE_EVAL_REC_5263_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5264(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5264_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5264_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5264_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5264_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5264_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5264_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5264_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5264_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5264_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5264_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5265
#define MACROLOP_PRIVATE_EVAL_REC_5264_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5265(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5265_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5265_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5265_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5265_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5265_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5265_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5265_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5265_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5265_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5265_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5266
#define MACROLOP_PRIVATE_EVAL_REC_5265_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5266(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5266_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5266_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5266_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5266_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5266_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5266_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5266_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5266_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5266_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5266_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5267
#define MACROLOP_PRIVATE_EVAL_REC_5266_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5267(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5267_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5267_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5267_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5267_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5267_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5267_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5267_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5267_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5267_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5267_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5268
#define MACROLOP_PRIVATE_EVAL_REC_5267_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5268(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5268_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5268_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5268_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5268_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5268_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5268_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5268_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5268_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5268_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5268_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5269
#define MACROLOP_PRIVATE_EVAL_REC_5268_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5269(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5269_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5269_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5269_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5269_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5269_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5269_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5269_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5269_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5269_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5269_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5270
#define MACROLOP_PRIVATE_EVAL_REC_5269_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5270(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5270_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5270_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5270_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5270_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5270_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5270_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5270_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5270_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5270_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5270_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5271
#define MACROLOP_PRIVATE_EVAL_REC_5270_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5271(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5271_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5271_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5271_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5271_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5271_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5271_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5271_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5271_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5271_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5271_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5272
#define MACROLOP_PRIVATE_EVAL_REC_5271_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5272(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5272_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5272_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5272_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5272_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5272_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5272_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5272_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5272_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5272_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5272_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5273
#define MACROLOP_PRIVATE_EVAL_REC_5272_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5273(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5273_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5273_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5273_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5273_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5273_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5273_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5273_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5273_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5273_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5273_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5274
#define MACROLOP_PRIVATE_EVAL_REC_5273_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5274(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5274_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5274_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5274_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5274_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5274_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5274_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5274_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5274_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5274_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5274_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5275
#define MACROLOP_PRIVATE_EVAL_REC_5274_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5275(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5275_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5275_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5275_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5275_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5275_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5275_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5275_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5275_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5275_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5275_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5276
#define MACROLOP_PRIVATE_EVAL_REC_5275_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5276(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5276_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5276_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5276_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5276_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5276_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5276_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5276_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5276_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5276_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5276_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5277
#define MACROLOP_PRIVATE_EVAL_REC_5276_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5277(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5277_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5277_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5277_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5277_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5277_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5277_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5277_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5277_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5277_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5277_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5278
#define MACROLOP_PRIVATE_EVAL_REC_5277_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5278(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5278_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5278_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5278_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5278_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5278_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5278_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5278_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5278_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5278_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5278_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5279
#define MACROLOP_PRIVATE_EVAL_REC_5278_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5279(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5279_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5279_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5279_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5279_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5279_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5279_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5279_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5279_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5279_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5279_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5280
#define MACROLOP_PRIVATE_EVAL_REC_5279_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5280(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5280_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5280_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5280_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5280_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5280_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5280_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5280_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5280_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5280_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5280_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5281
#define MACROLOP_PRIVATE_EVAL_REC_5280_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5281(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5281_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5281_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5281_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5281_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5281_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5281_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5281_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5281_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5281_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5281_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5282
#define MACROLOP_PRIVATE_EVAL_REC_5281_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5282(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5282_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5282_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5282_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5282_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5282_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5282_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5282_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5282_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5282_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5282_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5283
#define MACROLOP_PRIVATE_EVAL_REC_5282_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5283(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5283_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5283_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5283_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5283_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5283_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5283_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5283_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5283_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5283_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5283_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5284
#define MACROLOP_PRIVATE_EVAL_REC_5283_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5284(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5284_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5284_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5284_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5284_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5284_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5284_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5284_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5284_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5284_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5284_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5285
#define MACROLOP_PRIVATE_EVAL_REC_5284_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5285(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5285_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5285_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5285_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5285_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5285_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5285_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5285_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5285_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5285_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5285_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5286
#define MACROLOP_PRIVATE_EVAL_REC_5285_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5286(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5286_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5286_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5286_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5286_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5286_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5286_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5286_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5286_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5286_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5286_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5287
#define MACROLOP_PRIVATE_EVAL_REC_5286_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5287(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5287_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5287_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5287_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5287_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5287_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5287_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5287_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5287_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5287_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5287_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5288
#define MACROLOP_PRIVATE_EVAL_REC_5287_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5288(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5288_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5288_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5288_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5288_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5288_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5288_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5288_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5288_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5288_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5288_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5289
#define MACROLOP_PRIVATE_EVAL_REC_5288_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5289(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5289_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5289_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5289_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5289_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5289_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5289_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5289_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5289_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5289_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5289_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5290
#define MACROLOP_PRIVATE_EVAL_REC_5289_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5290(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5290_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5290_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5290_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5290_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5290_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5290_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5290_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5290_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5290_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5290_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5291
#define MACROLOP_PRIVATE_EVAL_REC_5290_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5291(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5291_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5291_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5291_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5291_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5291_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5291_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5291_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5291_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5291_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5291_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5292
#define MACROLOP_PRIVATE_EVAL_REC_5291_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5292(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5292_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5292_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5292_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5292_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5292_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5292_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5292_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5292_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5292_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5292_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5293
#define MACROLOP_PRIVATE_EVAL_REC_5292_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5293(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5293_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5293_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5293_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5293_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5293_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5293_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5293_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5293_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5293_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5293_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5294
#define MACROLOP_PRIVATE_EVAL_REC_5293_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5294(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5294_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5294_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5294_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5294_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5294_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5294_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5294_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5294_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5294_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5294_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5295
#define MACROLOP_PRIVATE_EVAL_REC_5294_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5295(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5295_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5295_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5295_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5295_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5295_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5295_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5295_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5295_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5295_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5295_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5296
#define MACROLOP_PRIVATE_EVAL_REC_5295_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5296(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5296_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5296_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5296_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5296_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5296_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5296_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5296_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5296_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5296_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5296_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5297
#define MACROLOP_PRIVATE_EVAL_REC_5296_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5297(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5297_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5297_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5297_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5297_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5297_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5297_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5297_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5297_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5297_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5297_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5298
#define MACROLOP_PRIVATE_EVAL_REC_5297_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5298(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5298_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5298_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5298_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5298_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5298_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5298_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5298_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5298_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5298_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5298_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5299
#define MACROLOP_PRIVATE_EVAL_REC_5298_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5299(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5299_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5299_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5299_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5299_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5299_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5299_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5299_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5299_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5299_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5299_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5300
#define MACROLOP_PRIVATE_EVAL_REC_5299_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5300(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5300_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5300_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5300_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5300_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5300_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5300_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5300_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5300_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5300_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5300_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5301
#define MACROLOP_PRIVATE_EVAL_REC_5300_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5301(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5301_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5301_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5301_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5301_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5301_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5301_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5301_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5301_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5301_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5301_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5302
#define MACROLOP_PRIVATE_EVAL_REC_5301_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5302(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5302_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5302_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5302_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5302_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5302_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5302_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5302_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5302_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5302_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5302_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5303
#define MACROLOP_PRIVATE_EVAL_REC_5302_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5303(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5303_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5303_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5303_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5303_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5303_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5303_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5303_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5303_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5303_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5303_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5304
#define MACROLOP_PRIVATE_EVAL_REC_5303_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5304(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5304_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5304_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5304_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5304_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5304_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5304_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5304_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5304_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5304_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5304_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5305
#define MACROLOP_PRIVATE_EVAL_REC_5304_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5305(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5305_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5305_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5305_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5305_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5305_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5305_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5305_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5305_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5305_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5305_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5306
#define MACROLOP_PRIVATE_EVAL_REC_5305_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5306(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5306_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5306_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5306_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5306_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5306_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5306_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5306_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5306_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5306_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5306_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5307
#define MACROLOP_PRIVATE_EVAL_REC_5306_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5307(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5307_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5307_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5307_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5307_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5307_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5307_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5307_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5307_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5307_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5307_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5308
#define MACROLOP_PRIVATE_EVAL_REC_5307_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5308(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5308_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5308_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5308_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5308_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5308_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5308_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5308_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5308_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5308_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5308_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5309
#define MACROLOP_PRIVATE_EVAL_REC_5308_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5309(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5309_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5309_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5309_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5309_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5309_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5309_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5309_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5309_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5309_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5309_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5310
#define MACROLOP_PRIVATE_EVAL_REC_5309_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5310(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5310_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5310_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5310_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5310_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5310_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5310_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5310_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5310_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5310_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5310_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5311
#define MACROLOP_PRIVATE_EVAL_REC_5310_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5311(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5311_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5311_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5311_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5311_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5311_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5311_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5311_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5311_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5311_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5311_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5312
#define MACROLOP_PRIVATE_EVAL_REC_5311_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5312(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5312_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5312_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5312_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5312_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5312_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5312_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5312_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5312_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5312_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5312_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5313
#define MACROLOP_PRIVATE_EVAL_REC_5312_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5313(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5313_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5313_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5313_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5313_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5313_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5313_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5313_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5313_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5313_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5313_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5314
#define MACROLOP_PRIVATE_EVAL_REC_5313_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5314(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5314_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5314_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5314_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5314_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5314_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5314_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5314_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5314_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5314_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5314_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5315
#define MACROLOP_PRIVATE_EVAL_REC_5314_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5315(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5315_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5315_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5315_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5315_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5315_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5315_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5315_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5315_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5315_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5315_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5316
#define MACROLOP_PRIVATE_EVAL_REC_5315_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5316(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5316_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5316_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5316_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5316_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5316_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5316_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5316_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5316_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5316_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5316_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5317
#define MACROLOP_PRIVATE_EVAL_REC_5316_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5317(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5317_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5317_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5317_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5317_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5317_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5317_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5317_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5317_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5317_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5317_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5318
#define MACROLOP_PRIVATE_EVAL_REC_5317_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5318(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5318_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5318_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5318_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5318_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5318_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5318_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5318_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5318_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5318_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5318_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5319
#define MACROLOP_PRIVATE_EVAL_REC_5318_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5319(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5319_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5319_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5319_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5319_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5319_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5319_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5319_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5319_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5319_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5319_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5320
#define MACROLOP_PRIVATE_EVAL_REC_5319_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5320(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5320_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5320_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5320_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5320_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5320_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5320_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5320_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5320_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5320_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5320_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5321
#define MACROLOP_PRIVATE_EVAL_REC_5320_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5321(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5321_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5321_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5321_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5321_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5321_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5321_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5321_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5321_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5321_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5321_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5322
#define MACROLOP_PRIVATE_EVAL_REC_5321_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5322(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5322_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5322_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5322_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5322_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5322_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5322_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5322_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5322_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5322_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5322_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5323
#define MACROLOP_PRIVATE_EVAL_REC_5322_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5323(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5323_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5323_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5323_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5323_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5323_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5323_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5323_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5323_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5323_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5323_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5324
#define MACROLOP_PRIVATE_EVAL_REC_5323_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5324(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5324_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5324_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5324_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5324_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5324_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5324_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5324_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5324_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5324_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5324_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5325
#define MACROLOP_PRIVATE_EVAL_REC_5324_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5325(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5325_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5325_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5325_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5325_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5325_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5325_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5325_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5325_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5325_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5325_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5326
#define MACROLOP_PRIVATE_EVAL_REC_5325_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5326(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5326_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5326_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5326_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5326_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5326_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5326_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5326_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5326_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5326_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5326_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5327
#define MACROLOP_PRIVATE_EVAL_REC_5326_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5327(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5327_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5327_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5327_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5327_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5327_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5327_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5327_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5327_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5327_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5327_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5328
#define MACROLOP_PRIVATE_EVAL_REC_5327_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5328(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5328_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5328_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5328_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5328_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5328_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5328_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5328_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5328_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5328_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5328_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5329
#define MACROLOP_PRIVATE_EVAL_REC_5328_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5329(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5329_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5329_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5329_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5329_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5329_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5329_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5329_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5329_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5329_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5329_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5330
#define MACROLOP_PRIVATE_EVAL_REC_5329_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5330(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5330_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5330_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5330_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5330_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5330_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5330_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5330_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5330_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5330_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5330_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5331
#define MACROLOP_PRIVATE_EVAL_REC_5330_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5331(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5331_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5331_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5331_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5331_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5331_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5331_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5331_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5331_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5331_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5331_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5332
#define MACROLOP_PRIVATE_EVAL_REC_5331_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5332(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5332_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5332_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5332_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5332_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5332_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5332_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5332_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5332_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5332_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5332_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5333
#define MACROLOP_PRIVATE_EVAL_REC_5332_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5333(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5333_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5333_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5333_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5333_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5333_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5333_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5333_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5333_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5333_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5333_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5334
#define MACROLOP_PRIVATE_EVAL_REC_5333_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5334(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5334_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5334_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5334_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5334_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5334_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5334_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5334_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5334_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5334_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5334_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5335
#define MACROLOP_PRIVATE_EVAL_REC_5334_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5335(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5335_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5335_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5335_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5335_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5335_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5335_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5335_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5335_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5335_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5335_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5336
#define MACROLOP_PRIVATE_EVAL_REC_5335_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5336(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5336_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5336_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5336_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5336_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5336_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5336_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5336_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5336_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5336_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5336_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5337
#define MACROLOP_PRIVATE_EVAL_REC_5336_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5337(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5337_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5337_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5337_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5337_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5337_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5337_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5337_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5337_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5337_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5337_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5338
#define MACROLOP_PRIVATE_EVAL_REC_5337_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5338(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5338_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5338_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5338_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5338_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5338_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5338_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5338_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5338_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5338_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5338_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5339
#define MACROLOP_PRIVATE_EVAL_REC_5338_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5339(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5339_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5339_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5339_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5339_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5339_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5339_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5339_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5339_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5339_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5339_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5340
#define MACROLOP_PRIVATE_EVAL_REC_5339_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5340(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5340_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5340_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5340_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5340_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5340_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5340_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5340_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5340_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5340_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5340_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5341
#define MACROLOP_PRIVATE_EVAL_REC_5340_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5341(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5341_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5341_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5341_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5341_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5341_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5341_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5341_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5341_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5341_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5341_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5342
#define MACROLOP_PRIVATE_EVAL_REC_5341_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5342(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5342_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5342_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5342_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5342_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5342_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5342_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5342_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5342_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5342_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5342_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5343
#define MACROLOP_PRIVATE_EVAL_REC_5342_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5343(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5343_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5343_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5343_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5343_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5343_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5343_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5343_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5343_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5343_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5343_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5344
#define MACROLOP_PRIVATE_EVAL_REC_5343_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5344(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5344_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5344_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5344_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5344_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5344_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5344_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5344_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5344_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5344_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5344_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5345
#define MACROLOP_PRIVATE_EVAL_REC_5344_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5345(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5345_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5345_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5345_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5345_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5345_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5345_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5345_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5345_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5345_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5345_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5346
#define MACROLOP_PRIVATE_EVAL_REC_5345_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5346(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5346_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5346_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5346_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5346_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5346_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5346_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5346_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5346_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5346_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5346_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5347
#define MACROLOP_PRIVATE_EVAL_REC_5346_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5347(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5347_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5347_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5347_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5347_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5347_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5347_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5347_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5347_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5347_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5347_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5348
#define MACROLOP_PRIVATE_EVAL_REC_5347_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5348(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5348_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5348_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5348_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5348_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5348_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5348_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5348_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5348_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5348_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5348_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5349
#define MACROLOP_PRIVATE_EVAL_REC_5348_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5349(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5349_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5349_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5349_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5349_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5349_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5349_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5349_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5349_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5349_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5349_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5350
#define MACROLOP_PRIVATE_EVAL_REC_5349_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5350(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5350_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5350_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5350_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5350_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5350_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5350_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5350_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5350_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5350_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5350_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5351
#define MACROLOP_PRIVATE_EVAL_REC_5350_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5351(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5351_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5351_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5351_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5351_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5351_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5351_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5351_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5351_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5351_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5351_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5352
#define MACROLOP_PRIVATE_EVAL_REC_5351_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5352(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5352_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5352_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5352_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5352_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5352_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5352_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5352_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5352_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5352_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5352_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5353
#define MACROLOP_PRIVATE_EVAL_REC_5352_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5353(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5353_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5353_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5353_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5353_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5353_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5353_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5353_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5353_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5353_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5353_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5354
#define MACROLOP_PRIVATE_EVAL_REC_5353_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5354(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5354_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5354_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5354_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5354_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5354_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5354_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5354_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5354_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5354_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5354_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5355
#define MACROLOP_PRIVATE_EVAL_REC_5354_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5355(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5355_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5355_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5355_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5355_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5355_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5355_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5355_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5355_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5355_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5355_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5356
#define MACROLOP_PRIVATE_EVAL_REC_5355_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5356(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5356_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5356_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5356_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5356_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5356_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5356_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5356_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5356_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5356_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5356_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5357
#define MACROLOP_PRIVATE_EVAL_REC_5356_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5357(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5357_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5357_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5357_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5357_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5357_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5357_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5357_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5357_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5357_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5357_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5358
#define MACROLOP_PRIVATE_EVAL_REC_5357_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5358(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5358_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5358_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5358_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5358_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5358_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5358_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5358_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5358_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5358_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5358_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5359
#define MACROLOP_PRIVATE_EVAL_REC_5358_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5359(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5359_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5359_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5359_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5359_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5359_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5359_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5359_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5359_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5359_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5359_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5360
#define MACROLOP_PRIVATE_EVAL_REC_5359_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5360(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5360_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5360_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5360_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5360_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5360_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5360_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5360_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5360_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5360_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5360_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5361
#define MACROLOP_PRIVATE_EVAL_REC_5360_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5361(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5361_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5361_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5361_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5361_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5361_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5361_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5361_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5361_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5361_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5361_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5362
#define MACROLOP_PRIVATE_EVAL_REC_5361_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5362(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5362_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5362_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5362_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5362_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5362_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5362_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5362_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5362_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5362_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5362_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5363
#define MACROLOP_PRIVATE_EVAL_REC_5362_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5363(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5363_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5363_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5363_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5363_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5363_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5363_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5363_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5363_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5363_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5363_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5364
#define MACROLOP_PRIVATE_EVAL_REC_5363_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5364(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5364_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5364_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5364_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5364_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5364_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5364_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5364_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5364_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5364_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5364_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5365
#define MACROLOP_PRIVATE_EVAL_REC_5364_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5365(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5365_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5365_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5365_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5365_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5365_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5365_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5365_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5365_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5365_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5365_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5366
#define MACROLOP_PRIVATE_EVAL_REC_5365_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5366(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5366_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5366_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5366_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5366_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5366_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5366_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5366_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5366_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5366_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5366_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5367
#define MACROLOP_PRIVATE_EVAL_REC_5366_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5367(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5367_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5367_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5367_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5367_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5367_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5367_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5367_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5367_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5367_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5367_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5368
#define MACROLOP_PRIVATE_EVAL_REC_5367_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5368(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5368_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5368_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5368_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5368_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5368_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5368_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5368_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5368_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5368_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5368_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5369
#define MACROLOP_PRIVATE_EVAL_REC_5368_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5369(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5369_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5369_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5369_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5369_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5369_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5369_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5369_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5369_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5369_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5369_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5370
#define MACROLOP_PRIVATE_EVAL_REC_5369_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5370(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5370_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5370_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5370_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5370_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5370_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5370_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5370_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5370_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5370_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5370_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5371
#define MACROLOP_PRIVATE_EVAL_REC_5370_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5371(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5371_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5371_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5371_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5371_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5371_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5371_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5371_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5371_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5371_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5371_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5372
#define MACROLOP_PRIVATE_EVAL_REC_5371_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5372(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5372_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5372_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5372_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5372_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5372_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5372_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5372_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5372_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5372_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5372_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5373
#define MACROLOP_PRIVATE_EVAL_REC_5372_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5373(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5373_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5373_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5373_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5373_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5373_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5373_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5373_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5373_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5373_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5373_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5374
#define MACROLOP_PRIVATE_EVAL_REC_5373_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5374(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5374_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5374_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5374_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5374_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5374_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5374_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5374_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5374_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5374_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5374_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5375
#define MACROLOP_PRIVATE_EVAL_REC_5374_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5375(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5375_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5375_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5375_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5375_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5375_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5375_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5375_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5375_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5375_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5375_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5376
#define MACROLOP_PRIVATE_EVAL_REC_5375_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5376(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5376_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5376_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5376_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5376_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5376_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5376_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5376_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5376_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5376_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5376_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5377
#define MACROLOP_PRIVATE_EVAL_REC_5376_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5377(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5377_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5377_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5377_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5377_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5377_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5377_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5377_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5377_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5377_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5377_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5378
#define MACROLOP_PRIVATE_EVAL_REC_5377_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5378(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5378_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5378_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5378_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5378_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5378_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5378_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5378_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5378_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5378_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5378_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5379
#define MACROLOP_PRIVATE_EVAL_REC_5378_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5379(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5379_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5379_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5379_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5379_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5379_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5379_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5379_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5379_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5379_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5379_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5380
#define MACROLOP_PRIVATE_EVAL_REC_5379_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5380(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5380_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5380_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5380_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5380_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5380_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5380_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5380_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5380_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5380_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5380_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5381
#define MACROLOP_PRIVATE_EVAL_REC_5380_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5381(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5381_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5381_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5381_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5381_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5381_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5381_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5381_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5381_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5381_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5381_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5382
#define MACROLOP_PRIVATE_EVAL_REC_5381_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5382(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5382_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5382_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5382_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5382_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5382_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5382_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5382_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5382_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5382_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5382_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5383
#define MACROLOP_PRIVATE_EVAL_REC_5382_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5383(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5383_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5383_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5383_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5383_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5383_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5383_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5383_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5383_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5383_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5383_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5384
#define MACROLOP_PRIVATE_EVAL_REC_5383_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5384(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5384_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5384_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5384_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5384_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5384_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5384_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5384_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5384_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5384_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5384_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5385
#define MACROLOP_PRIVATE_EVAL_REC_5384_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5385(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5385_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5385_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5385_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5385_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5385_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5385_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5385_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5385_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5385_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5385_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5386
#define MACROLOP_PRIVATE_EVAL_REC_5385_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5386(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5386_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5386_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5386_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5386_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5386_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5386_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5386_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5386_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5386_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5386_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5387
#define MACROLOP_PRIVATE_EVAL_REC_5386_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5387(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5387_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5387_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5387_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5387_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5387_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5387_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5387_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5387_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5387_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5387_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5388
#define MACROLOP_PRIVATE_EVAL_REC_5387_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5388(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5388_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5388_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5388_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5388_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5388_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5388_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5388_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5388_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5388_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5388_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5389
#define MACROLOP_PRIVATE_EVAL_REC_5388_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5389(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5389_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5389_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5389_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5389_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5389_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5389_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5389_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5389_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5389_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5389_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5390
#define MACROLOP_PRIVATE_EVAL_REC_5389_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5390(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5390_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5390_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5390_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5390_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5390_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5390_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5390_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5390_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5390_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5390_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5391
#define MACROLOP_PRIVATE_EVAL_REC_5390_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5391(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5391_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5391_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5391_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5391_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5391_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5391_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5391_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5391_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5391_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5391_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5392
#define MACROLOP_PRIVATE_EVAL_REC_5391_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5392(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5392_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5392_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5392_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5392_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5392_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5392_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5392_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5392_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5392_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5392_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5393
#define MACROLOP_PRIVATE_EVAL_REC_5392_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5393(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5393_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5393_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5393_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5393_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5393_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5393_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5393_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5393_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5393_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5393_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5394
#define MACROLOP_PRIVATE_EVAL_REC_5393_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5394(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5394_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5394_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5394_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5394_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5394_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5394_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5394_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5394_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5394_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5394_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5395
#define MACROLOP_PRIVATE_EVAL_REC_5394_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5395(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5395_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5395_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5395_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5395_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5395_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5395_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5395_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5395_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5395_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5395_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5396
#define MACROLOP_PRIVATE_EVAL_REC_5395_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5396(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5396_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5396_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5396_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5396_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5396_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5396_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5396_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5396_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5396_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5396_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5397
#define MACROLOP_PRIVATE_EVAL_REC_5396_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5397(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5397_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5397_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5397_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5397_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5397_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5397_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5397_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5397_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5397_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5397_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5398
#define MACROLOP_PRIVATE_EVAL_REC_5397_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5398(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5398_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5398_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5398_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5398_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5398_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5398_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5398_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5398_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5398_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5398_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5399
#define MACROLOP_PRIVATE_EVAL_REC_5398_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5399(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5399_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5399_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5399_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5399_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5399_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5399_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5399_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5399_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5399_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5399_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5400
#define MACROLOP_PRIVATE_EVAL_REC_5399_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5400(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5400_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5400_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5400_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5400_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5400_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5400_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5400_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5400_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5400_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5400_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5401
#define MACROLOP_PRIVATE_EVAL_REC_5400_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5401(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5401_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5401_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5401_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5401_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5401_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5401_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5401_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5401_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5401_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5401_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5402
#define MACROLOP_PRIVATE_EVAL_REC_5401_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5402(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5402_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5402_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5402_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5402_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5402_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5402_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5402_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5402_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5402_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5402_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5403
#define MACROLOP_PRIVATE_EVAL_REC_5402_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5403(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5403_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5403_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5403_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5403_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5403_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5403_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5403_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5403_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5403_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5403_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5404
#define MACROLOP_PRIVATE_EVAL_REC_5403_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5404(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5404_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5404_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5404_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5404_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5404_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5404_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5404_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5404_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5404_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5404_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5405
#define MACROLOP_PRIVATE_EVAL_REC_5404_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5405(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5405_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5405_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5405_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5405_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5405_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5405_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5405_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5405_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5405_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5405_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5406
#define MACROLOP_PRIVATE_EVAL_REC_5405_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5406(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5406_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5406_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5406_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5406_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5406_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5406_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5406_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5406_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5406_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5406_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5407
#define MACROLOP_PRIVATE_EVAL_REC_5406_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5407(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5407_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5407_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5407_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5407_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5407_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5407_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5407_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5407_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5407_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5407_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5408
#define MACROLOP_PRIVATE_EVAL_REC_5407_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5408(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5408_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5408_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5408_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5408_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5408_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5408_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5408_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5408_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5408_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5408_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5409
#define MACROLOP_PRIVATE_EVAL_REC_5408_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5409(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5409_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5409_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5409_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5409_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5409_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5409_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5409_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5409_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5409_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5409_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5410
#define MACROLOP_PRIVATE_EVAL_REC_5409_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5410(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5410_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5410_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5410_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5410_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5410_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5410_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5410_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5410_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5410_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5410_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5411
#define MACROLOP_PRIVATE_EVAL_REC_5410_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5411(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5411_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5411_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5411_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5411_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5411_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5411_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5411_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5411_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5411_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5411_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5412
#define MACROLOP_PRIVATE_EVAL_REC_5411_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5412(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5412_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5412_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5412_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5412_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5412_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5412_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5412_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5412_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5412_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5412_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5413
#define MACROLOP_PRIVATE_EVAL_REC_5412_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5413(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5413_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5413_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5413_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5413_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5413_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5413_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5413_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5413_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5413_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5413_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5414
#define MACROLOP_PRIVATE_EVAL_REC_5413_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5414(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5414_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5414_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5414_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5414_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5414_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5414_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5414_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5414_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5414_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5414_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5415
#define MACROLOP_PRIVATE_EVAL_REC_5414_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5415(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5415_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5415_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5415_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5415_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5415_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5415_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5415_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5415_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5415_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5415_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5416
#define MACROLOP_PRIVATE_EVAL_REC_5415_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5416(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5416_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5416_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5416_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5416_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5416_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5416_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5416_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5416_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5416_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5416_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5417
#define MACROLOP_PRIVATE_EVAL_REC_5416_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5417(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5417_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5417_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5417_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5417_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5417_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5417_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5417_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5417_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5417_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5417_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5418
#define MACROLOP_PRIVATE_EVAL_REC_5417_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5418(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5418_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5418_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5418_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5418_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5418_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5418_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5418_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5418_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5418_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5418_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5419
#define MACROLOP_PRIVATE_EVAL_REC_5418_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5419(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5419_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5419_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5419_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5419_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5419_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5419_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5419_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5419_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5419_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5419_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5420
#define MACROLOP_PRIVATE_EVAL_REC_5419_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5420(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5420_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5420_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5420_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5420_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5420_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5420_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5420_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5420_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5420_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5420_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5421
#define MACROLOP_PRIVATE_EVAL_REC_5420_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5421(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5421_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5421_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5421_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5421_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5421_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5421_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5421_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5421_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5421_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5421_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5422
#define MACROLOP_PRIVATE_EVAL_REC_5421_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5422(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5422_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5422_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5422_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5422_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5422_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5422_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5422_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5422_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5422_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5422_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5423
#define MACROLOP_PRIVATE_EVAL_REC_5422_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5423(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5423_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5423_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5423_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5423_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5423_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5423_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5423_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5423_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5423_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5423_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5424
#define MACROLOP_PRIVATE_EVAL_REC_5423_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5424(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5424_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5424_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5424_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5424_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5424_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5424_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5424_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5424_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5424_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5424_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5425
#define MACROLOP_PRIVATE_EVAL_REC_5424_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5425(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5425_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5425_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5425_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5425_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5425_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5425_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5425_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5425_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5425_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5425_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5426
#define MACROLOP_PRIVATE_EVAL_REC_5425_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5426(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5426_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5426_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5426_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5426_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5426_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5426_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5426_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5426_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5426_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5426_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5427
#define MACROLOP_PRIVATE_EVAL_REC_5426_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5427(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5427_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5427_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5427_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5427_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5427_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5427_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5427_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5427_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5427_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5427_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5428
#define MACROLOP_PRIVATE_EVAL_REC_5427_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5428(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5428_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5428_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5428_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5428_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5428_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5428_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5428_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5428_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5428_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5428_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5429
#define MACROLOP_PRIVATE_EVAL_REC_5428_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5429(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5429_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5429_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5429_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5429_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5429_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5429_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5429_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5429_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5429_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5429_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5430
#define MACROLOP_PRIVATE_EVAL_REC_5429_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5430(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5430_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5430_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5430_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5430_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5430_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5430_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5430_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5430_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5430_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5430_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5431
#define MACROLOP_PRIVATE_EVAL_REC_5430_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5431(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5431_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5431_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5431_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5431_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5431_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5431_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5431_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5431_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5431_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5431_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5432
#define MACROLOP_PRIVATE_EVAL_REC_5431_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5432(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5432_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5432_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5432_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5432_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5432_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5432_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5432_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5432_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5432_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5432_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5433
#define MACROLOP_PRIVATE_EVAL_REC_5432_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5433(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5433_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5433_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5433_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5433_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5433_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5433_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5433_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5433_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5433_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5433_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5434
#define MACROLOP_PRIVATE_EVAL_REC_5433_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5434(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5434_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5434_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5434_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5434_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5434_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5434_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5434_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5434_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5434_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5434_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5435
#define MACROLOP_PRIVATE_EVAL_REC_5434_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5435(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5435_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5435_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5435_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5435_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5435_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5435_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5435_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5435_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5435_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5435_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5436
#define MACROLOP_PRIVATE_EVAL_REC_5435_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5436(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5436_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5436_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5436_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5436_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5436_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5436_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5436_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5436_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5436_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5436_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5437
#define MACROLOP_PRIVATE_EVAL_REC_5436_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5437(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5437_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5437_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5437_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5437_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5437_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5437_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5437_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5437_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5437_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5437_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5438
#define MACROLOP_PRIVATE_EVAL_REC_5437_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5438(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5438_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5438_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5438_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5438_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5438_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5438_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5438_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5438_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5438_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5438_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5439
#define MACROLOP_PRIVATE_EVAL_REC_5438_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5439(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5439_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5439_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5439_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5439_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5439_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5439_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5439_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5439_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5439_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5439_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5440
#define MACROLOP_PRIVATE_EVAL_REC_5439_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5440(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5440_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5440_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5440_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5440_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5440_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5440_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5440_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5440_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5440_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5440_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5441
#define MACROLOP_PRIVATE_EVAL_REC_5440_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5441(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5441_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5441_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5441_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5441_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5441_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5441_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5441_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5441_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5441_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5441_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5442
#define MACROLOP_PRIVATE_EVAL_REC_5441_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5442(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5442_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5442_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5442_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5442_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5442_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5442_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5442_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5442_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5442_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5442_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5443
#define MACROLOP_PRIVATE_EVAL_REC_5442_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5443(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5443_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5443_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5443_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5443_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5443_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5443_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5443_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5443_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5443_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5443_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5444
#define MACROLOP_PRIVATE_EVAL_REC_5443_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5444(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5444_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5444_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5444_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5444_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5444_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5444_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5444_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5444_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5444_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5444_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5445
#define MACROLOP_PRIVATE_EVAL_REC_5444_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5445(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5445_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5445_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5445_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5445_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5445_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5445_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5445_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5445_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5445_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5445_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5446
#define MACROLOP_PRIVATE_EVAL_REC_5445_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5446(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5446_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5446_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5446_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5446_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5446_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5446_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5446_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5446_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5446_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5446_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5447
#define MACROLOP_PRIVATE_EVAL_REC_5446_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5447(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5447_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5447_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5447_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5447_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5447_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5447_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5447_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5447_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5447_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5447_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5448
#define MACROLOP_PRIVATE_EVAL_REC_5447_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5448(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5448_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5448_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5448_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5448_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5448_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5448_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5448_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5448_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5448_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5448_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5449
#define MACROLOP_PRIVATE_EVAL_REC_5448_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5449(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5449_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5449_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5449_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5449_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5449_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5449_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5449_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5449_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5449_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5449_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5450
#define MACROLOP_PRIVATE_EVAL_REC_5449_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5450(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5450_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5450_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5450_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5450_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5450_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5450_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5450_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5450_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5450_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5450_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5451
#define MACROLOP_PRIVATE_EVAL_REC_5450_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5451(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5451_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5451_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5451_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5451_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5451_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5451_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5451_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5451_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5451_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5451_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5452
#define MACROLOP_PRIVATE_EVAL_REC_5451_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5452(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5452_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5452_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5452_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5452_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5452_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5452_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5452_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5452_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5452_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5452_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5453
#define MACROLOP_PRIVATE_EVAL_REC_5452_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5453(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5453_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5453_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5453_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5453_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5453_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5453_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5453_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5453_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5453_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5453_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5454
#define MACROLOP_PRIVATE_EVAL_REC_5453_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5454(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5454_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5454_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5454_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5454_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5454_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5454_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5454_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5454_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5454_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5454_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5455
#define MACROLOP_PRIVATE_EVAL_REC_5454_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5455(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5455_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5455_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5455_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5455_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5455_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5455_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5455_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5455_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5455_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5455_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5456
#define MACROLOP_PRIVATE_EVAL_REC_5455_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5456(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5456_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5456_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5456_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5456_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5456_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5456_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5456_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5456_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5456_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5456_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5457
#define MACROLOP_PRIVATE_EVAL_REC_5456_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5457(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5457_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5457_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5457_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5457_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5457_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5457_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5457_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5457_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5457_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5457_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5458
#define MACROLOP_PRIVATE_EVAL_REC_5457_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5458(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5458_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5458_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5458_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5458_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5458_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5458_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5458_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5458_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5458_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5458_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5459
#define MACROLOP_PRIVATE_EVAL_REC_5458_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5459(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5459_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5459_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5459_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5459_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5459_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5459_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5459_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5459_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5459_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5459_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5460
#define MACROLOP_PRIVATE_EVAL_REC_5459_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5460(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5460_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5460_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5460_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5460_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5460_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5460_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5460_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5460_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5460_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5460_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5461
#define MACROLOP_PRIVATE_EVAL_REC_5460_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5461(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5461_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5461_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5461_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5461_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5461_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5461_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5461_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5461_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5461_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5461_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5462
#define MACROLOP_PRIVATE_EVAL_REC_5461_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5462(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5462_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5462_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5462_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5462_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5462_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5462_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5462_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5462_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5462_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5462_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5463
#define MACROLOP_PRIVATE_EVAL_REC_5462_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5463(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5463_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5463_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5463_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5463_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5463_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5463_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5463_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5463_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5463_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5463_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5464
#define MACROLOP_PRIVATE_EVAL_REC_5463_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5464(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5464_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5464_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5464_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5464_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5464_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5464_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5464_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5464_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5464_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5464_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5465
#define MACROLOP_PRIVATE_EVAL_REC_5464_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5465(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5465_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5465_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5465_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5465_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5465_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5465_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5465_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5465_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5465_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5465_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5466
#define MACROLOP_PRIVATE_EVAL_REC_5465_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5466(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5466_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5466_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5466_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5466_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5466_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5466_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5466_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5466_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5466_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5466_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5467
#define MACROLOP_PRIVATE_EVAL_REC_5466_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5467(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5467_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5467_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5467_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5467_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5467_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5467_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5467_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5467_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5467_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5467_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5468
#define MACROLOP_PRIVATE_EVAL_REC_5467_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5468(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5468_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5468_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5468_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5468_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5468_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5468_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5468_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5468_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5468_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5468_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5469
#define MACROLOP_PRIVATE_EVAL_REC_5468_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5469(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5469_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5469_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5469_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5469_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5469_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5469_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5469_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5469_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5469_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5469_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5470
#define MACROLOP_PRIVATE_EVAL_REC_5469_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5470(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5470_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5470_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5470_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5470_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5470_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5470_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5470_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5470_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5470_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5470_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5471
#define MACROLOP_PRIVATE_EVAL_REC_5470_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5471(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5471_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5471_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5471_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5471_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5471_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5471_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5471_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5471_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5471_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5471_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5472
#define MACROLOP_PRIVATE_EVAL_REC_5471_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5472(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5472_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5472_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5472_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5472_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5472_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5472_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5472_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5472_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5472_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5472_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5473
#define MACROLOP_PRIVATE_EVAL_REC_5472_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5473(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5473_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5473_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5473_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5473_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5473_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5473_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5473_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5473_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5473_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5473_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5474
#define MACROLOP_PRIVATE_EVAL_REC_5473_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5474(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5474_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5474_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5474_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5474_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5474_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5474_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5474_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5474_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5474_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5474_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5475
#define MACROLOP_PRIVATE_EVAL_REC_5474_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5475(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5475_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5475_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5475_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5475_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5475_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5475_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5475_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5475_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5475_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5475_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5476
#define MACROLOP_PRIVATE_EVAL_REC_5475_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5476(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5476_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5476_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5476_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5476_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5476_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5476_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5476_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5476_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5476_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5476_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5477
#define MACROLOP_PRIVATE_EVAL_REC_5476_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5477(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5477_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5477_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5477_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5477_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5477_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5477_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5477_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5477_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5477_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5477_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5478
#define MACROLOP_PRIVATE_EVAL_REC_5477_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5478(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5478_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5478_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5478_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5478_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5478_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5478_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5478_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5478_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5478_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5478_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5479
#define MACROLOP_PRIVATE_EVAL_REC_5478_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5479(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5479_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5479_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5479_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5479_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5479_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5479_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5479_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5479_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5479_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5479_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5480
#define MACROLOP_PRIVATE_EVAL_REC_5479_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5480(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5480_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5480_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5480_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5480_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5480_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5480_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5480_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5480_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5480_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5480_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5481
#define MACROLOP_PRIVATE_EVAL_REC_5480_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5481(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5481_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5481_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5481_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5481_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5481_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5481_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5481_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5481_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5481_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5481_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5482
#define MACROLOP_PRIVATE_EVAL_REC_5481_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5482(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5482_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5482_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5482_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5482_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5482_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5482_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5482_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5482_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5482_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5482_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5483
#define MACROLOP_PRIVATE_EVAL_REC_5482_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5483(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5483_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5483_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5483_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5483_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5483_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5483_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5483_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5483_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5483_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5483_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5484
#define MACROLOP_PRIVATE_EVAL_REC_5483_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5484(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5484_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5484_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5484_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5484_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5484_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5484_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5484_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5484_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5484_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5484_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5485
#define MACROLOP_PRIVATE_EVAL_REC_5484_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5485(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5485_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5485_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5485_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5485_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5485_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5485_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5485_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5485_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5485_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5485_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5486
#define MACROLOP_PRIVATE_EVAL_REC_5485_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5486(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5486_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5486_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5486_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5486_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5486_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5486_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5486_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5486_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5486_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5486_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5487
#define MACROLOP_PRIVATE_EVAL_REC_5486_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5487(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5487_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5487_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5487_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5487_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5487_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5487_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5487_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5487_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5487_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5487_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5488
#define MACROLOP_PRIVATE_EVAL_REC_5487_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5488(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5488_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5488_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5488_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5488_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5488_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5488_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5488_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5488_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5488_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5488_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5489
#define MACROLOP_PRIVATE_EVAL_REC_5488_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5489(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5489_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5489_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5489_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5489_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5489_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5489_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5489_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5489_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5489_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5489_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5490
#define MACROLOP_PRIVATE_EVAL_REC_5489_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5490(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5490_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5490_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5490_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5490_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5490_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5490_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5490_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5490_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5490_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5490_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5491
#define MACROLOP_PRIVATE_EVAL_REC_5490_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5491(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5491_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5491_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5491_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5491_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5491_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5491_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5491_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5491_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5491_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5491_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5492
#define MACROLOP_PRIVATE_EVAL_REC_5491_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5492(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5492_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5492_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5492_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5492_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5492_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5492_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5492_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5492_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5492_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5492_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5493
#define MACROLOP_PRIVATE_EVAL_REC_5492_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5493(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5493_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5493_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5493_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5493_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5493_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5493_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5493_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5493_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5493_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5493_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5494
#define MACROLOP_PRIVATE_EVAL_REC_5493_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5494(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5494_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5494_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5494_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5494_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5494_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5494_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5494_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5494_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5494_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5494_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5495
#define MACROLOP_PRIVATE_EVAL_REC_5494_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5495(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5495_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5495_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5495_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5495_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5495_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5495_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5495_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5495_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5495_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5495_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5496
#define MACROLOP_PRIVATE_EVAL_REC_5495_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5496(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5496_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5496_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5496_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5496_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5496_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5496_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5496_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5496_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5496_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5496_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5497
#define MACROLOP_PRIVATE_EVAL_REC_5496_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5497(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5497_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5497_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5497_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5497_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5497_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5497_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5497_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5497_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5497_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5497_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5498
#define MACROLOP_PRIVATE_EVAL_REC_5497_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5498(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5498_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5498_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5498_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5498_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5498_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5498_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5498_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5498_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5498_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5498_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5499
#define MACROLOP_PRIVATE_EVAL_REC_5498_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5499(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5499_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5499_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5499_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5499_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5499_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5499_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5499_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5499_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5499_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5499_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5500
#define MACROLOP_PRIVATE_EVAL_REC_5499_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5500(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5500_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5500_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5500_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5500_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5500_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5500_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5500_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5500_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5500_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5500_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5501
#define MACROLOP_PRIVATE_EVAL_REC_5500_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5501(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5501_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5501_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5501_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5501_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5501_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5501_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5501_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5501_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5501_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5501_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5502
#define MACROLOP_PRIVATE_EVAL_REC_5501_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5502(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5502_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5502_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5502_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5502_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5502_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5502_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5502_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5502_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5502_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5502_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5503
#define MACROLOP_PRIVATE_EVAL_REC_5502_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5503(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5503_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5503_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5503_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5503_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5503_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5503_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5503_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5503_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5503_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5503_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5504
#define MACROLOP_PRIVATE_EVAL_REC_5503_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5504(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5504_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5504_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5504_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5504_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5504_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5504_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5504_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5504_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5504_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5504_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5505
#define MACROLOP_PRIVATE_EVAL_REC_5504_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5505(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5505_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5505_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5505_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5505_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5505_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5505_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5505_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5505_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5505_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5505_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5506
#define MACROLOP_PRIVATE_EVAL_REC_5505_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5506(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5506_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5506_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5506_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5506_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5506_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5506_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5506_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5506_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5506_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5506_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5507
#define MACROLOP_PRIVATE_EVAL_REC_5506_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5507(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5507_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5507_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5507_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5507_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5507_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5507_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5507_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5507_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5507_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5507_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5508
#define MACROLOP_PRIVATE_EVAL_REC_5507_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5508(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5508_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5508_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5508_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5508_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5508_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5508_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5508_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5508_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5508_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5508_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5509
#define MACROLOP_PRIVATE_EVAL_REC_5508_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5509(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5509_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5509_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5509_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5509_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5509_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5509_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5509_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5509_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5509_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5509_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5510
#define MACROLOP_PRIVATE_EVAL_REC_5509_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5510(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5510_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5510_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5510_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5510_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5510_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5510_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5510_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5510_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5510_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5510_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5511
#define MACROLOP_PRIVATE_EVAL_REC_5510_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5511(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5511_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5511_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5511_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5511_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5511_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5511_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5511_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5511_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5511_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5511_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5512
#define MACROLOP_PRIVATE_EVAL_REC_5511_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5512(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5512_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5512_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5512_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5512_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5512_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5512_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5512_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5512_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5512_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5512_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5513
#define MACROLOP_PRIVATE_EVAL_REC_5512_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5513(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5513_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5513_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5513_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5513_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5513_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5513_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5513_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5513_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5513_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5513_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5514
#define MACROLOP_PRIVATE_EVAL_REC_5513_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5514(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5514_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5514_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5514_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5514_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5514_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5514_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5514_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5514_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5514_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5514_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5515
#define MACROLOP_PRIVATE_EVAL_REC_5514_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5515(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5515_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5515_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5515_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5515_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5515_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5515_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5515_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5515_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5515_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5515_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5516
#define MACROLOP_PRIVATE_EVAL_REC_5515_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5516(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5516_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5516_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5516_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5516_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5516_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5516_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5516_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5516_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5516_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5516_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5517
#define MACROLOP_PRIVATE_EVAL_REC_5516_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5517(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5517_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5517_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5517_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5517_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5517_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5517_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5517_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5517_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5517_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5517_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5518
#define MACROLOP_PRIVATE_EVAL_REC_5517_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5518(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5518_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5518_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5518_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5518_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5518_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5518_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5518_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5518_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5518_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5518_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5519
#define MACROLOP_PRIVATE_EVAL_REC_5518_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5519(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5519_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5519_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5519_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5519_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5519_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5519_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5519_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5519_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5519_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5519_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5520
#define MACROLOP_PRIVATE_EVAL_REC_5519_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5520(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5520_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5520_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5520_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5520_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5520_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5520_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5520_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5520_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5520_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5520_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5521
#define MACROLOP_PRIVATE_EVAL_REC_5520_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5521(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5521_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5521_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5521_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5521_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5521_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5521_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5521_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5521_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5521_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5521_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5522
#define MACROLOP_PRIVATE_EVAL_REC_5521_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5522(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5522_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5522_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5522_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5522_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5522_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5522_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5522_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5522_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5522_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5522_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5523
#define MACROLOP_PRIVATE_EVAL_REC_5522_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5523(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5523_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5523_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5523_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5523_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5523_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5523_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5523_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5523_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5523_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5523_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5524
#define MACROLOP_PRIVATE_EVAL_REC_5523_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5524(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5524_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5524_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5524_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5524_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5524_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5524_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5524_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5524_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5524_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5524_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5525
#define MACROLOP_PRIVATE_EVAL_REC_5524_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5525(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5525_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5525_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5525_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5525_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5525_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5525_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5525_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5525_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5525_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5525_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5526
#define MACROLOP_PRIVATE_EVAL_REC_5525_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5526(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5526_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5526_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5526_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5526_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5526_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5526_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5526_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5526_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5526_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5526_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5527
#define MACROLOP_PRIVATE_EVAL_REC_5526_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5527(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5527_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5527_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5527_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5527_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5527_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5527_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5527_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5527_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5527_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5527_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5528
#define MACROLOP_PRIVATE_EVAL_REC_5527_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5528(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5528_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5528_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5528_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5528_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5528_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5528_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5528_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5528_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5528_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5528_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5529
#define MACROLOP_PRIVATE_EVAL_REC_5528_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5529(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5529_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5529_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5529_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5529_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5529_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5529_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5529_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5529_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5529_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5529_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5530
#define MACROLOP_PRIVATE_EVAL_REC_5529_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5530(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5530_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5530_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5530_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5530_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5530_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5530_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5530_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5530_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5530_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5530_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5531
#define MACROLOP_PRIVATE_EVAL_REC_5530_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5531(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5531_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5531_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5531_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5531_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5531_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5531_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5531_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5531_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5531_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5531_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5532
#define MACROLOP_PRIVATE_EVAL_REC_5531_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5532(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5532_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5532_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5532_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5532_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5532_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5532_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5532_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5532_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5532_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5532_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5533
#define MACROLOP_PRIVATE_EVAL_REC_5532_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5533(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5533_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5533_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5533_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5533_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5533_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5533_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5533_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5533_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5533_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5533_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5534
#define MACROLOP_PRIVATE_EVAL_REC_5533_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5534(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5534_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5534_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5534_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5534_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5534_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5534_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5534_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5534_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5534_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5534_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5535
#define MACROLOP_PRIVATE_EVAL_REC_5534_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5535(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5535_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5535_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5535_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5535_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5535_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5535_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5535_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5535_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5535_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5535_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5536
#define MACROLOP_PRIVATE_EVAL_REC_5535_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5536(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5536_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5536_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5536_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5536_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5536_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5536_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5536_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5536_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5536_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5536_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5537
#define MACROLOP_PRIVATE_EVAL_REC_5536_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5537(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5537_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5537_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5537_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5537_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5537_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5537_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5537_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5537_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5537_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5537_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5538
#define MACROLOP_PRIVATE_EVAL_REC_5537_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5538(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5538_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5538_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5538_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5538_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5538_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5538_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5538_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5538_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5538_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5538_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5539
#define MACROLOP_PRIVATE_EVAL_REC_5538_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5539(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5539_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5539_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5539_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5539_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5539_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5539_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5539_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5539_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5539_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5539_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5540
#define MACROLOP_PRIVATE_EVAL_REC_5539_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5540(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5540_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5540_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5540_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5540_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5540_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5540_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5540_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5540_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5540_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5540_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5541
#define MACROLOP_PRIVATE_EVAL_REC_5540_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5541(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5541_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5541_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5541_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5541_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5541_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5541_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5541_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5541_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5541_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5541_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5542
#define MACROLOP_PRIVATE_EVAL_REC_5541_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5542(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5542_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5542_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5542_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5542_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5542_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5542_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5542_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5542_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5542_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5542_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5543
#define MACROLOP_PRIVATE_EVAL_REC_5542_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5543(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5543_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5543_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5543_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5543_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5543_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5543_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5543_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5543_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5543_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5543_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5544
#define MACROLOP_PRIVATE_EVAL_REC_5543_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5544(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5544_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5544_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5544_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5544_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5544_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5544_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5544_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5544_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5544_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5544_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5545
#define MACROLOP_PRIVATE_EVAL_REC_5544_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5545(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5545_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5545_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5545_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5545_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5545_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5545_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5545_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5545_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5545_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5545_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5546
#define MACROLOP_PRIVATE_EVAL_REC_5545_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5546(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5546_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5546_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5546_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5546_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5546_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5546_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5546_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5546_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5546_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5546_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5547
#define MACROLOP_PRIVATE_EVAL_REC_5546_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5547(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5547_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5547_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5547_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5547_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5547_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5547_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5547_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5547_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5547_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5547_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5548
#define MACROLOP_PRIVATE_EVAL_REC_5547_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5548(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5548_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5548_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5548_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5548_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5548_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5548_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5548_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5548_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5548_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5548_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5549
#define MACROLOP_PRIVATE_EVAL_REC_5548_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5549(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5549_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5549_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5549_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5549_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5549_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5549_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5549_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5549_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5549_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5549_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5550
#define MACROLOP_PRIVATE_EVAL_REC_5549_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5550(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5550_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5550_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5550_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5550_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5550_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5550_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5550_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5550_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5550_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5550_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5551
#define MACROLOP_PRIVATE_EVAL_REC_5550_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5551(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5551_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5551_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5551_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5551_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5551_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5551_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5551_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5551_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5551_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5551_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5552
#define MACROLOP_PRIVATE_EVAL_REC_5551_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5552(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5552_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5552_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5552_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5552_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5552_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5552_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5552_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5552_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5552_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5552_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5553
#define MACROLOP_PRIVATE_EVAL_REC_5552_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5553(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5553_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5553_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5553_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5553_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5553_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5553_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5553_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5553_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5553_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5553_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5554
#define MACROLOP_PRIVATE_EVAL_REC_5553_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5554(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5554_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5554_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5554_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5554_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5554_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5554_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5554_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5554_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5554_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5554_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5555
#define MACROLOP_PRIVATE_EVAL_REC_5554_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5555(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5555_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5555_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5555_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5555_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5555_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5555_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5555_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5555_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5555_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5555_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5556
#define MACROLOP_PRIVATE_EVAL_REC_5555_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5556(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5556_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5556_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5556_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5556_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5556_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5556_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5556_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5556_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5556_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5556_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5557
#define MACROLOP_PRIVATE_EVAL_REC_5556_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5557(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5557_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5557_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5557_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5557_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5557_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5557_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5557_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5557_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5557_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5557_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5558
#define MACROLOP_PRIVATE_EVAL_REC_5557_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5558(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5558_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5558_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5558_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5558_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5558_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5558_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5558_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5558_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5558_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5558_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5559
#define MACROLOP_PRIVATE_EVAL_REC_5558_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5559(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5559_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5559_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5559_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5559_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5559_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5559_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5559_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5559_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5559_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5559_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5560
#define MACROLOP_PRIVATE_EVAL_REC_5559_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5560(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5560_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5560_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5560_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5560_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5560_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5560_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5560_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5560_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5560_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5560_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5561
#define MACROLOP_PRIVATE_EVAL_REC_5560_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5561(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5561_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5561_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5561_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5561_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5561_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5561_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5561_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5561_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5561_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5561_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5562
#define MACROLOP_PRIVATE_EVAL_REC_5561_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5562(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5562_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5562_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5562_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5562_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5562_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5562_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5562_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5562_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5562_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5562_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5563
#define MACROLOP_PRIVATE_EVAL_REC_5562_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5563(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5563_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5563_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5563_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5563_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5563_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5563_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5563_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5563_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5563_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5563_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5564
#define MACROLOP_PRIVATE_EVAL_REC_5563_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5564(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5564_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5564_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5564_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5564_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5564_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5564_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5564_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5564_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5564_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5564_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5565
#define MACROLOP_PRIVATE_EVAL_REC_5564_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5565(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5565_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5565_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5565_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5565_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5565_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5565_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5565_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5565_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5565_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5565_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5566
#define MACROLOP_PRIVATE_EVAL_REC_5565_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5566(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5566_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5566_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5566_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5566_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5566_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5566_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5566_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5566_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5566_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5566_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5567
#define MACROLOP_PRIVATE_EVAL_REC_5566_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5567(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5567_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5567_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5567_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5567_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5567_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5567_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5567_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5567_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5567_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5567_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5568
#define MACROLOP_PRIVATE_EVAL_REC_5567_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5568(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5568_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5568_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5568_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5568_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5568_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5568_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5568_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5568_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5568_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5568_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5569
#define MACROLOP_PRIVATE_EVAL_REC_5568_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5569(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5569_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5569_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5569_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5569_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5569_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5569_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5569_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5569_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5569_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5569_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5570
#define MACROLOP_PRIVATE_EVAL_REC_5569_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5570(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5570_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5570_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5570_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5570_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5570_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5570_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5570_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5570_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5570_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5570_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5571
#define MACROLOP_PRIVATE_EVAL_REC_5570_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5571(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5571_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5571_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5571_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5571_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5571_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5571_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5571_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5571_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5571_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5571_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5572
#define MACROLOP_PRIVATE_EVAL_REC_5571_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5572(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5572_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5572_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5572_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5572_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5572_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5572_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5572_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5572_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5572_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5572_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5573
#define MACROLOP_PRIVATE_EVAL_REC_5572_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5573(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5573_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5573_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5573_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5573_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5573_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5573_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5573_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5573_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5573_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5573_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5574
#define MACROLOP_PRIVATE_EVAL_REC_5573_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5574(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5574_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5574_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5574_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5574_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5574_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5574_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5574_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5574_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5574_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5574_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5575
#define MACROLOP_PRIVATE_EVAL_REC_5574_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5575(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5575_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5575_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5575_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5575_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5575_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5575_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5575_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5575_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5575_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5575_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5576
#define MACROLOP_PRIVATE_EVAL_REC_5575_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5576(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5576_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5576_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5576_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5576_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5576_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5576_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5576_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5576_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5576_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5576_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5577
#define MACROLOP_PRIVATE_EVAL_REC_5576_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5577(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5577_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5577_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5577_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5577_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5577_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5577_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5577_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5577_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5577_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5577_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5578
#define MACROLOP_PRIVATE_EVAL_REC_5577_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5578(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5578_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5578_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5578_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5578_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5578_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5578_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5578_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5578_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5578_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5578_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5579
#define MACROLOP_PRIVATE_EVAL_REC_5578_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5579(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5579_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5579_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5579_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5579_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5579_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5579_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5579_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5579_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5579_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5579_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5580
#define MACROLOP_PRIVATE_EVAL_REC_5579_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5580(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5580_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5580_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5580_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5580_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5580_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5580_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5580_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5580_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5580_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5580_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5581
#define MACROLOP_PRIVATE_EVAL_REC_5580_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5581(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5581_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5581_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5581_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5581_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5581_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5581_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5581_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5581_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5581_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5581_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5582
#define MACROLOP_PRIVATE_EVAL_REC_5581_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5582(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5582_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5582_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5582_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5582_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5582_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5582_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5582_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5582_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5582_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5582_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5583
#define MACROLOP_PRIVATE_EVAL_REC_5582_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5583(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5583_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5583_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5583_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5583_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5583_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5583_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5583_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5583_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5583_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5583_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5584
#define MACROLOP_PRIVATE_EVAL_REC_5583_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5584(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5584_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5584_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5584_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5584_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5584_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5584_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5584_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5584_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5584_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5584_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5585
#define MACROLOP_PRIVATE_EVAL_REC_5584_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5585(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5585_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5585_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5585_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5585_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5585_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5585_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5585_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5585_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5585_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5585_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5586
#define MACROLOP_PRIVATE_EVAL_REC_5585_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5586(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5586_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5586_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5586_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5586_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5586_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5586_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5586_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5586_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5586_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5586_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5587
#define MACROLOP_PRIVATE_EVAL_REC_5586_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5587(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5587_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5587_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5587_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5587_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5587_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5587_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5587_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5587_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5587_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5587_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5588
#define MACROLOP_PRIVATE_EVAL_REC_5587_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5588(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5588_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5588_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5588_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5588_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5588_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5588_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5588_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5588_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5588_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5588_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5589
#define MACROLOP_PRIVATE_EVAL_REC_5588_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5589(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5589_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5589_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5589_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5589_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5589_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5589_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5589_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5589_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5589_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5589_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5590
#define MACROLOP_PRIVATE_EVAL_REC_5589_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5590(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5590_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5590_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5590_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5590_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5590_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5590_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5590_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5590_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5590_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5590_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5591
#define MACROLOP_PRIVATE_EVAL_REC_5590_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5591(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5591_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5591_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5591_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5591_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5591_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5591_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5591_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5591_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5591_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5591_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5592
#define MACROLOP_PRIVATE_EVAL_REC_5591_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5592(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5592_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5592_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5592_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5592_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5592_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5592_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5592_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5592_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5592_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5592_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5593
#define MACROLOP_PRIVATE_EVAL_REC_5592_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5593(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5593_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5593_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5593_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5593_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5593_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5593_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5593_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5593_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5593_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5593_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5594
#define MACROLOP_PRIVATE_EVAL_REC_5593_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5594(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5594_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5594_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5594_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5594_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5594_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5594_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5594_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5594_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5594_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5594_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5595
#define MACROLOP_PRIVATE_EVAL_REC_5594_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5595(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5595_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5595_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5595_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5595_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5595_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5595_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5595_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5595_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5595_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5595_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5596
#define MACROLOP_PRIVATE_EVAL_REC_5595_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5596(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5596_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5596_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5596_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5596_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5596_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5596_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5596_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5596_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5596_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5596_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5597
#define MACROLOP_PRIVATE_EVAL_REC_5596_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5597(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5597_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5597_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5597_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5597_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5597_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5597_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5597_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5597_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5597_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5597_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5598
#define MACROLOP_PRIVATE_EVAL_REC_5597_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5598(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5598_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5598_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5598_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5598_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5598_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5598_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5598_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5598_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5598_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5598_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5599
#define MACROLOP_PRIVATE_EVAL_REC_5598_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5599(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5599_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5599_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5599_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5599_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5599_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5599_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5599_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5599_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5599_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5599_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5600
#define MACROLOP_PRIVATE_EVAL_REC_5599_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5600(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5600_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5600_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5600_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5600_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5600_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5600_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5600_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5600_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5600_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5600_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5601
#define MACROLOP_PRIVATE_EVAL_REC_5600_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5601(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5601_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5601_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5601_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5601_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5601_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5601_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5601_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5601_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5601_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5601_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5602
#define MACROLOP_PRIVATE_EVAL_REC_5601_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5602(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5602_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5602_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5602_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5602_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5602_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5602_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5602_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5602_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5602_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5602_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5603
#define MACROLOP_PRIVATE_EVAL_REC_5602_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5603(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5603_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5603_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5603_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5603_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5603_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5603_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5603_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5603_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5603_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5603_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5604
#define MACROLOP_PRIVATE_EVAL_REC_5603_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5604(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5604_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5604_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5604_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5604_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5604_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5604_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5604_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5604_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5604_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5604_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5605
#define MACROLOP_PRIVATE_EVAL_REC_5604_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5605(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5605_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5605_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5605_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5605_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5605_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5605_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5605_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5605_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5605_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5605_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5606
#define MACROLOP_PRIVATE_EVAL_REC_5605_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5606(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5606_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5606_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5606_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5606_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5606_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5606_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5606_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5606_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5606_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5606_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5607
#define MACROLOP_PRIVATE_EVAL_REC_5606_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5607(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5607_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5607_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5607_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5607_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5607_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5607_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5607_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5607_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5607_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5607_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5608
#define MACROLOP_PRIVATE_EVAL_REC_5607_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5608(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5608_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5608_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5608_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5608_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5608_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5608_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5608_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5608_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5608_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5608_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5609
#define MACROLOP_PRIVATE_EVAL_REC_5608_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5609(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5609_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5609_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5609_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5609_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5609_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5609_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5609_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5609_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5609_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5609_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5610
#define MACROLOP_PRIVATE_EVAL_REC_5609_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5610(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5610_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5610_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5610_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5610_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5610_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5610_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5610_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5610_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5610_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5610_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5611
#define MACROLOP_PRIVATE_EVAL_REC_5610_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5611(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5611_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5611_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5611_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5611_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5611_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5611_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5611_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5611_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5611_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5611_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5612
#define MACROLOP_PRIVATE_EVAL_REC_5611_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5612(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5612_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5612_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5612_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5612_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5612_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5612_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5612_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5612_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5612_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5612_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5613
#define MACROLOP_PRIVATE_EVAL_REC_5612_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5613(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5613_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5613_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5613_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5613_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5613_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5613_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5613_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5613_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5613_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5613_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5614
#define MACROLOP_PRIVATE_EVAL_REC_5613_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5614(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5614_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5614_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5614_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5614_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5614_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5614_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5614_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5614_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5614_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5614_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5615
#define MACROLOP_PRIVATE_EVAL_REC_5614_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5615(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5615_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5615_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5615_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5615_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5615_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5615_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5615_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5615_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5615_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5615_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5616
#define MACROLOP_PRIVATE_EVAL_REC_5615_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5616(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5616_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5616_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5616_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5616_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5616_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5616_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5616_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5616_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5616_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5616_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5617
#define MACROLOP_PRIVATE_EVAL_REC_5616_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5617(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5617_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5617_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5617_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5617_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5617_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5617_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5617_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5617_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5617_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5617_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5618
#define MACROLOP_PRIVATE_EVAL_REC_5617_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5618(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5618_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5618_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5618_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5618_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5618_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5618_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5618_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5618_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5618_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5618_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5619
#define MACROLOP_PRIVATE_EVAL_REC_5618_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5619(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5619_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5619_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5619_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5619_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5619_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5619_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5619_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5619_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5619_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5619_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5620
#define MACROLOP_PRIVATE_EVAL_REC_5619_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5620(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5620_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5620_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5620_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5620_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5620_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5620_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5620_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5620_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5620_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5620_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5621
#define MACROLOP_PRIVATE_EVAL_REC_5620_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5621(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5621_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5621_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5621_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5621_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5621_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5621_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5621_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5621_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5621_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5621_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5622
#define MACROLOP_PRIVATE_EVAL_REC_5621_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5622(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5622_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5622_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5622_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5622_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5622_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5622_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5622_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5622_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5622_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5622_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5623
#define MACROLOP_PRIVATE_EVAL_REC_5622_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5623(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5623_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5623_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5623_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5623_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5623_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5623_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5623_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5623_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5623_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5623_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5624
#define MACROLOP_PRIVATE_EVAL_REC_5623_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5624(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5624_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5624_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5624_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5624_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5624_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5624_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5624_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5624_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5624_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5624_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5625
#define MACROLOP_PRIVATE_EVAL_REC_5624_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5625(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5625_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5625_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5625_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5625_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5625_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5625_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5625_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5625_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5625_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5625_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5626
#define MACROLOP_PRIVATE_EVAL_REC_5625_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5626(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5626_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5626_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5626_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5626_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5626_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5626_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5626_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5626_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5626_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5626_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5627
#define MACROLOP_PRIVATE_EVAL_REC_5626_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5627(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5627_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5627_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5627_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5627_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5627_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5627_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5627_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5627_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5627_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5627_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5628
#define MACROLOP_PRIVATE_EVAL_REC_5627_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5628(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5628_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5628_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5628_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5628_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5628_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5628_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5628_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5628_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5628_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5628_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5629
#define MACROLOP_PRIVATE_EVAL_REC_5628_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5629(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5629_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5629_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5629_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5629_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5629_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5629_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5629_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5629_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5629_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5629_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5630
#define MACROLOP_PRIVATE_EVAL_REC_5629_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5630(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5630_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5630_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5630_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5630_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5630_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5630_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5630_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5630_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5630_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5630_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5631
#define MACROLOP_PRIVATE_EVAL_REC_5630_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5631(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5631_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5631_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5631_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5631_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5631_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5631_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5631_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5631_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5631_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5631_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5632
#define MACROLOP_PRIVATE_EVAL_REC_5631_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5632(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5632_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5632_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5632_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5632_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5632_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5632_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5632_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5632_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5632_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5632_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5633
#define MACROLOP_PRIVATE_EVAL_REC_5632_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5633(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5633_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5633_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5633_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5633_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5633_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5633_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5633_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5633_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5633_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5633_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5634
#define MACROLOP_PRIVATE_EVAL_REC_5633_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5634(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5634_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5634_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5634_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5634_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5634_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5634_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5634_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5634_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5634_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5634_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5635
#define MACROLOP_PRIVATE_EVAL_REC_5634_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5635(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5635_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5635_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5635_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5635_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5635_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5635_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5635_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5635_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5635_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5635_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5636
#define MACROLOP_PRIVATE_EVAL_REC_5635_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5636(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5636_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5636_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5636_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5636_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5636_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5636_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5636_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5636_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5636_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5636_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5637
#define MACROLOP_PRIVATE_EVAL_REC_5636_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5637(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5637_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5637_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5637_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5637_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5637_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5637_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5637_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5637_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5637_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5637_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5638
#define MACROLOP_PRIVATE_EVAL_REC_5637_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5638(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5638_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5638_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5638_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5638_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5638_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5638_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5638_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5638_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5638_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5638_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5639
#define MACROLOP_PRIVATE_EVAL_REC_5638_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5639(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5639_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5639_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5639_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5639_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5639_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5639_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5639_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5639_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5639_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5639_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5640
#define MACROLOP_PRIVATE_EVAL_REC_5639_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5640(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5640_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5640_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5640_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5640_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5640_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5640_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5640_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5640_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5640_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5640_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5641
#define MACROLOP_PRIVATE_EVAL_REC_5640_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5641(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5641_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5641_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5641_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5641_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5641_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5641_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5641_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5641_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5641_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5641_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5642
#define MACROLOP_PRIVATE_EVAL_REC_5641_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5642(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5642_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5642_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5642_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5642_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5642_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5642_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5642_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5642_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5642_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5642_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5643
#define MACROLOP_PRIVATE_EVAL_REC_5642_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5643(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5643_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5643_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5643_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5643_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5643_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5643_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5643_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5643_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5643_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5643_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5644
#define MACROLOP_PRIVATE_EVAL_REC_5643_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5644(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5644_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5644_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5644_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5644_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5644_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5644_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5644_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5644_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5644_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5644_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5645
#define MACROLOP_PRIVATE_EVAL_REC_5644_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5645(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5645_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5645_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5645_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5645_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5645_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5645_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5645_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5645_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5645_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5645_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5646
#define MACROLOP_PRIVATE_EVAL_REC_5645_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5646(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5646_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5646_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5646_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5646_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5646_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5646_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5646_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5646_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5646_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5646_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5647
#define MACROLOP_PRIVATE_EVAL_REC_5646_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5647(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5647_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5647_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5647_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5647_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5647_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5647_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5647_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5647_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5647_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5647_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5648
#define MACROLOP_PRIVATE_EVAL_REC_5647_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5648(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5648_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5648_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5648_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5648_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5648_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5648_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5648_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5648_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5648_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5648_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5649
#define MACROLOP_PRIVATE_EVAL_REC_5648_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5649(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5649_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5649_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5649_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5649_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5649_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5649_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5649_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5649_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5649_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5649_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5650
#define MACROLOP_PRIVATE_EVAL_REC_5649_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5650(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5650_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5650_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5650_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5650_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5650_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5650_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5650_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5650_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5650_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5650_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5651
#define MACROLOP_PRIVATE_EVAL_REC_5650_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5651(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5651_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5651_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5651_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5651_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5651_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5651_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5651_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5651_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5651_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5651_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5652
#define MACROLOP_PRIVATE_EVAL_REC_5651_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5652(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5652_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5652_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5652_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5652_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5652_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5652_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5652_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5652_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5652_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5652_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5653
#define MACROLOP_PRIVATE_EVAL_REC_5652_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5653(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5653_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5653_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5653_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5653_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5653_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5653_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5653_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5653_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5653_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5653_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5654
#define MACROLOP_PRIVATE_EVAL_REC_5653_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5654(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5654_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5654_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5654_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5654_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5654_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5654_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5654_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5654_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5654_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5654_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5655
#define MACROLOP_PRIVATE_EVAL_REC_5654_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5655(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5655_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5655_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5655_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5655_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5655_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5655_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5655_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5655_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5655_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5655_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5656
#define MACROLOP_PRIVATE_EVAL_REC_5655_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5656(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5656_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5656_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5656_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5656_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5656_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5656_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5656_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5656_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5656_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5656_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5657
#define MACROLOP_PRIVATE_EVAL_REC_5656_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5657(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5657_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5657_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5657_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5657_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5657_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5657_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5657_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5657_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5657_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5657_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5658
#define MACROLOP_PRIVATE_EVAL_REC_5657_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5658(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5658_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5658_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5658_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5658_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5658_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5658_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5658_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5658_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5658_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5658_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5659
#define MACROLOP_PRIVATE_EVAL_REC_5658_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5659(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5659_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5659_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5659_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5659_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5659_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5659_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5659_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5659_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5659_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5659_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5660
#define MACROLOP_PRIVATE_EVAL_REC_5659_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5660(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5660_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5660_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5660_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5660_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5660_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5660_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5660_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5660_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5660_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5660_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5661
#define MACROLOP_PRIVATE_EVAL_REC_5660_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5661(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5661_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5661_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5661_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5661_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5661_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5661_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5661_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5661_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5661_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5661_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5662
#define MACROLOP_PRIVATE_EVAL_REC_5661_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5662(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5662_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5662_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5662_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5662_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5662_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5662_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5662_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5662_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5662_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5662_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5663
#define MACROLOP_PRIVATE_EVAL_REC_5662_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5663(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5663_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5663_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5663_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5663_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5663_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5663_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5663_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5663_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5663_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5663_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5664
#define MACROLOP_PRIVATE_EVAL_REC_5663_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5664(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5664_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5664_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5664_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5664_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5664_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5664_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5664_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5664_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5664_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5664_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5665
#define MACROLOP_PRIVATE_EVAL_REC_5664_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5665(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5665_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5665_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5665_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5665_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5665_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5665_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5665_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5665_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5665_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5665_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5666
#define MACROLOP_PRIVATE_EVAL_REC_5665_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5666(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5666_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5666_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5666_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5666_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5666_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5666_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5666_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5666_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5666_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5666_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5667
#define MACROLOP_PRIVATE_EVAL_REC_5666_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5667(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5667_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5667_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5667_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5667_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5667_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5667_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5667_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5667_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5667_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5667_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5668
#define MACROLOP_PRIVATE_EVAL_REC_5667_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5668(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5668_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5668_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5668_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5668_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5668_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5668_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5668_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5668_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5668_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5668_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5669
#define MACROLOP_PRIVATE_EVAL_REC_5668_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5669(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5669_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5669_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5669_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5669_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5669_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5669_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5669_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5669_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5669_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5669_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5670
#define MACROLOP_PRIVATE_EVAL_REC_5669_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5670(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5670_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5670_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5670_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5670_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5670_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5670_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5670_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5670_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5670_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5670_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5671
#define MACROLOP_PRIVATE_EVAL_REC_5670_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5671(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5671_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5671_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5671_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5671_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5671_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5671_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5671_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5671_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5671_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5671_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5672
#define MACROLOP_PRIVATE_EVAL_REC_5671_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5672(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5672_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5672_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5672_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5672_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5672_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5672_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5672_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5672_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5672_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5672_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5673
#define MACROLOP_PRIVATE_EVAL_REC_5672_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5673(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5673_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5673_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5673_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5673_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5673_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5673_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5673_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5673_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5673_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5673_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5674
#define MACROLOP_PRIVATE_EVAL_REC_5673_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5674(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5674_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5674_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5674_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5674_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5674_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5674_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5674_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5674_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5674_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5674_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5675
#define MACROLOP_PRIVATE_EVAL_REC_5674_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5675(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5675_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5675_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5675_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5675_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5675_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5675_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5675_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5675_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5675_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5675_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5676
#define MACROLOP_PRIVATE_EVAL_REC_5675_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5676(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5676_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5676_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5676_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5676_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5676_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5676_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5676_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5676_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5676_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5676_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5677
#define MACROLOP_PRIVATE_EVAL_REC_5676_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5677(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5677_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5677_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5677_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5677_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5677_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5677_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5677_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5677_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5677_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5677_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5678
#define MACROLOP_PRIVATE_EVAL_REC_5677_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5678(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5678_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5678_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5678_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5678_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5678_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5678_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5678_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5678_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5678_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5678_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5679
#define MACROLOP_PRIVATE_EVAL_REC_5678_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5679(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5679_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5679_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5679_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5679_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5679_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5679_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5679_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5679_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5679_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5679_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5680
#define MACROLOP_PRIVATE_EVAL_REC_5679_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5680(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5680_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5680_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5680_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5680_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5680_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5680_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5680_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5680_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5680_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5680_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5681
#define MACROLOP_PRIVATE_EVAL_REC_5680_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5681(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5681_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5681_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5681_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5681_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5681_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5681_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5681_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5681_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5681_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5681_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5682
#define MACROLOP_PRIVATE_EVAL_REC_5681_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5682(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5682_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5682_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5682_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5682_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5682_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5682_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5682_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5682_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5682_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5682_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5683
#define MACROLOP_PRIVATE_EVAL_REC_5682_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5683(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5683_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5683_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5683_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5683_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5683_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5683_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5683_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5683_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5683_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5683_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5684
#define MACROLOP_PRIVATE_EVAL_REC_5683_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5684(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5684_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5684_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5684_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5684_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5684_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5684_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5684_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5684_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5684_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5684_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5685
#define MACROLOP_PRIVATE_EVAL_REC_5684_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5685(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5685_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5685_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5685_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5685_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5685_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5685_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5685_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5685_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5685_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5685_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5686
#define MACROLOP_PRIVATE_EVAL_REC_5685_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5686(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5686_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5686_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5686_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5686_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5686_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5686_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5686_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5686_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5686_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5686_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5687
#define MACROLOP_PRIVATE_EVAL_REC_5686_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5687(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5687_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5687_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5687_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5687_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5687_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5687_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5687_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5687_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5687_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5687_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5688
#define MACROLOP_PRIVATE_EVAL_REC_5687_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5688(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5688_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5688_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5688_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5688_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5688_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5688_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5688_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5688_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5688_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5688_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5689
#define MACROLOP_PRIVATE_EVAL_REC_5688_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5689(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5689_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5689_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5689_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5689_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5689_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5689_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5689_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5689_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5689_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5689_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5690
#define MACROLOP_PRIVATE_EVAL_REC_5689_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5690(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5690_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5690_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5690_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5690_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5690_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5690_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5690_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5690_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5690_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5690_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5691
#define MACROLOP_PRIVATE_EVAL_REC_5690_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5691(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5691_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5691_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5691_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5691_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5691_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5691_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5691_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5691_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5691_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5691_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5692
#define MACROLOP_PRIVATE_EVAL_REC_5691_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5692(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5692_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5692_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5692_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5692_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5692_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5692_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5692_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5692_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5692_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5692_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5693
#define MACROLOP_PRIVATE_EVAL_REC_5692_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5693(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5693_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5693_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5693_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5693_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5693_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5693_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5693_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5693_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5693_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5693_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5694
#define MACROLOP_PRIVATE_EVAL_REC_5693_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5694(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5694_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5694_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5694_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5694_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5694_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5694_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5694_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5694_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5694_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5694_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5695
#define MACROLOP_PRIVATE_EVAL_REC_5694_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5695(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5695_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5695_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5695_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5695_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5695_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5695_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5695_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5695_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5695_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5695_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5696
#define MACROLOP_PRIVATE_EVAL_REC_5695_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5696(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5696_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5696_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5696_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5696_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5696_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5696_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5696_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5696_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5696_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5696_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5697
#define MACROLOP_PRIVATE_EVAL_REC_5696_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5697(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5697_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5697_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5697_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5697_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5697_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5697_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5697_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5697_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5697_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5697_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5698
#define MACROLOP_PRIVATE_EVAL_REC_5697_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5698(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5698_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5698_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5698_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5698_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5698_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5698_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5698_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5698_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5698_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5698_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5699
#define MACROLOP_PRIVATE_EVAL_REC_5698_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5699(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5699_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5699_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5699_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5699_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5699_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5699_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5699_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5699_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5699_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5699_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5700
#define MACROLOP_PRIVATE_EVAL_REC_5699_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5700(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5700_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5700_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5700_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5700_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5700_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5700_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5700_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5700_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5700_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5700_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5701
#define MACROLOP_PRIVATE_EVAL_REC_5700_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5701(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5701_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5701_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5701_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5701_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5701_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5701_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5701_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5701_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5701_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5701_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5702
#define MACROLOP_PRIVATE_EVAL_REC_5701_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5702(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5702_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5702_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5702_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5702_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5702_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5702_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5702_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5702_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5702_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5702_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5703
#define MACROLOP_PRIVATE_EVAL_REC_5702_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5703(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5703_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5703_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5703_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5703_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5703_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5703_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5703_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5703_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5703_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5703_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5704
#define MACROLOP_PRIVATE_EVAL_REC_5703_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5704(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5704_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5704_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5704_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5704_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5704_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5704_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5704_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5704_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5704_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5704_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5705
#define MACROLOP_PRIVATE_EVAL_REC_5704_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5705(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5705_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5705_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5705_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5705_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5705_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5705_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5705_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5705_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5705_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5705_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5706
#define MACROLOP_PRIVATE_EVAL_REC_5705_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5706(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5706_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5706_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5706_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5706_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5706_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5706_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5706_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5706_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5706_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5706_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5707
#define MACROLOP_PRIVATE_EVAL_REC_5706_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5707(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5707_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5707_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5707_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5707_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5707_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5707_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5707_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5707_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5707_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5707_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5708
#define MACROLOP_PRIVATE_EVAL_REC_5707_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5708(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5708_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5708_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5708_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5708_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5708_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5708_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5708_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5708_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5708_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5708_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5709
#define MACROLOP_PRIVATE_EVAL_REC_5708_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5709(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5709_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5709_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5709_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5709_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5709_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5709_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5709_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5709_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5709_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5709_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5710
#define MACROLOP_PRIVATE_EVAL_REC_5709_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5710(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5710_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5710_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5710_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5710_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5710_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5710_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5710_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5710_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5710_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5710_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5711
#define MACROLOP_PRIVATE_EVAL_REC_5710_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5711(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5711_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5711_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5711_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5711_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5711_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5711_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5711_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5711_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5711_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5711_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5712
#define MACROLOP_PRIVATE_EVAL_REC_5711_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5712(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5712_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5712_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5712_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5712_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5712_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5712_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5712_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5712_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5712_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5712_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5713
#define MACROLOP_PRIVATE_EVAL_REC_5712_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5713(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5713_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5713_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5713_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5713_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5713_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5713_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5713_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5713_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5713_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5713_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5714
#define MACROLOP_PRIVATE_EVAL_REC_5713_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5714(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5714_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5714_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5714_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5714_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5714_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5714_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5714_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5714_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5714_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5714_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5715
#define MACROLOP_PRIVATE_EVAL_REC_5714_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5715(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5715_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5715_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5715_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5715_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5715_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5715_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5715_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5715_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5715_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5715_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5716
#define MACROLOP_PRIVATE_EVAL_REC_5715_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5716(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5716_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5716_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5716_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5716_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5716_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5716_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5716_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5716_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5716_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5716_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5717
#define MACROLOP_PRIVATE_EVAL_REC_5716_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5717(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5717_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5717_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5717_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5717_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5717_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5717_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5717_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5717_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5717_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5717_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5718
#define MACROLOP_PRIVATE_EVAL_REC_5717_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5718(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5718_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5718_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5718_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5718_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5718_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5718_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5718_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5718_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5718_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5718_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5719
#define MACROLOP_PRIVATE_EVAL_REC_5718_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5719(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5719_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5719_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5719_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5719_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5719_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5719_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5719_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5719_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5719_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5719_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5720
#define MACROLOP_PRIVATE_EVAL_REC_5719_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5720(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5720_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5720_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5720_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5720_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5720_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5720_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5720_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5720_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5720_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5720_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5721
#define MACROLOP_PRIVATE_EVAL_REC_5720_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5721(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5721_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5721_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5721_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5721_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5721_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5721_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5721_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5721_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5721_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5721_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5722
#define MACROLOP_PRIVATE_EVAL_REC_5721_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5722(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5722_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5722_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5722_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5722_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5722_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5722_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5722_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5722_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5722_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5722_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5723
#define MACROLOP_PRIVATE_EVAL_REC_5722_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5723(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5723_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5723_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5723_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5723_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5723_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5723_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5723_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5723_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5723_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5723_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5724
#define MACROLOP_PRIVATE_EVAL_REC_5723_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5724(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5724_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5724_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5724_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5724_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5724_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5724_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5724_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5724_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5724_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5724_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5725
#define MACROLOP_PRIVATE_EVAL_REC_5724_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5725(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5725_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5725_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5725_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5725_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5725_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5725_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5725_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5725_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5725_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5725_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5726
#define MACROLOP_PRIVATE_EVAL_REC_5725_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5726(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5726_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5726_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5726_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5726_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5726_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5726_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5726_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5726_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5726_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5726_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5727
#define MACROLOP_PRIVATE_EVAL_REC_5726_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5727(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5727_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5727_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5727_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5727_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5727_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5727_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5727_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5727_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5727_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5727_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5728
#define MACROLOP_PRIVATE_EVAL_REC_5727_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5728(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5728_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5728_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5728_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5728_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5728_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5728_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5728_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5728_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5728_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5728_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5729
#define MACROLOP_PRIVATE_EVAL_REC_5728_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5729(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5729_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5729_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5729_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5729_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5729_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5729_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5729_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5729_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5729_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5729_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5730
#define MACROLOP_PRIVATE_EVAL_REC_5729_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5730(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5730_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5730_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5730_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5730_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5730_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5730_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5730_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5730_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5730_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5730_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5731
#define MACROLOP_PRIVATE_EVAL_REC_5730_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5731(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5731_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5731_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5731_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5731_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5731_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5731_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5731_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5731_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5731_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5731_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5732
#define MACROLOP_PRIVATE_EVAL_REC_5731_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5732(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5732_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5732_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5732_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5732_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5732_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5732_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5732_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5732_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5732_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5732_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5733
#define MACROLOP_PRIVATE_EVAL_REC_5732_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5733(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5733_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5733_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5733_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5733_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5733_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5733_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5733_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5733_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5733_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5733_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5734
#define MACROLOP_PRIVATE_EVAL_REC_5733_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5734(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5734_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5734_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5734_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5734_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5734_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5734_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5734_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5734_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5734_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5734_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5735
#define MACROLOP_PRIVATE_EVAL_REC_5734_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5735(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5735_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5735_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5735_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5735_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5735_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5735_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5735_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5735_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5735_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5735_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5736
#define MACROLOP_PRIVATE_EVAL_REC_5735_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5736(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5736_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5736_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5736_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5736_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5736_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5736_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5736_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5736_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5736_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5736_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5737
#define MACROLOP_PRIVATE_EVAL_REC_5736_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5737(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5737_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5737_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5737_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5737_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5737_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5737_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5737_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5737_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5737_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5737_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5738
#define MACROLOP_PRIVATE_EVAL_REC_5737_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5738(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5738_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5738_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5738_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5738_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5738_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5738_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5738_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5738_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5738_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5738_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5739
#define MACROLOP_PRIVATE_EVAL_REC_5738_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5739(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5739_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5739_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5739_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5739_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5739_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5739_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5739_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5739_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5739_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5739_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5740
#define MACROLOP_PRIVATE_EVAL_REC_5739_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5740(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5740_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5740_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5740_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5740_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5740_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5740_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5740_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5740_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5740_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5740_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5741
#define MACROLOP_PRIVATE_EVAL_REC_5740_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5741(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5741_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5741_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5741_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5741_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5741_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5741_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5741_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5741_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5741_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5741_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5742
#define MACROLOP_PRIVATE_EVAL_REC_5741_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5742(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5742_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5742_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5742_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5742_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5742_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5742_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5742_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5742_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5742_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5742_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5743
#define MACROLOP_PRIVATE_EVAL_REC_5742_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5743(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5743_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5743_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5743_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5743_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5743_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5743_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5743_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5743_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5743_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5743_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5744
#define MACROLOP_PRIVATE_EVAL_REC_5743_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5744(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5744_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5744_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5744_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5744_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5744_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5744_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5744_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5744_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5744_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5744_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5745
#define MACROLOP_PRIVATE_EVAL_REC_5744_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5745(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5745_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5745_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5745_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5745_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5745_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5745_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5745_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5745_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5745_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5745_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5746
#define MACROLOP_PRIVATE_EVAL_REC_5745_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5746(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5746_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5746_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5746_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5746_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5746_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5746_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5746_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5746_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5746_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5746_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5747
#define MACROLOP_PRIVATE_EVAL_REC_5746_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5747(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5747_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5747_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5747_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5747_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5747_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5747_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5747_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5747_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5747_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5747_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5748
#define MACROLOP_PRIVATE_EVAL_REC_5747_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5748(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5748_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5748_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5748_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5748_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5748_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5748_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5748_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5748_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5748_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5748_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5749
#define MACROLOP_PRIVATE_EVAL_REC_5748_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5749(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5749_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5749_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5749_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5749_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5749_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5749_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5749_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5749_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5749_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5749_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5750
#define MACROLOP_PRIVATE_EVAL_REC_5749_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5750(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5750_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5750_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5750_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5750_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5750_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5750_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5750_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5750_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5750_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5750_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5751
#define MACROLOP_PRIVATE_EVAL_REC_5750_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5751(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5751_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5751_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5751_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5751_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5751_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5751_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5751_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5751_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5751_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5751_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5752
#define MACROLOP_PRIVATE_EVAL_REC_5751_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5752(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5752_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5752_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5752_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5752_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5752_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5752_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5752_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5752_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5752_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5752_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5753
#define MACROLOP_PRIVATE_EVAL_REC_5752_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5753(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5753_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5753_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5753_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5753_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5753_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5753_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5753_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5753_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5753_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5753_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5754
#define MACROLOP_PRIVATE_EVAL_REC_5753_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5754(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5754_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5754_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5754_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5754_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5754_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5754_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5754_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5754_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5754_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5754_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5755
#define MACROLOP_PRIVATE_EVAL_REC_5754_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5755(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5755_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5755_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5755_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5755_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5755_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5755_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5755_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5755_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5755_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5755_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5756
#define MACROLOP_PRIVATE_EVAL_REC_5755_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5756(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5756_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5756_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5756_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5756_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5756_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5756_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5756_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5756_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5756_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5756_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5757
#define MACROLOP_PRIVATE_EVAL_REC_5756_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5757(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5757_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5757_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5757_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5757_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5757_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5757_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5757_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5757_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5757_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5757_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5758
#define MACROLOP_PRIVATE_EVAL_REC_5757_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5758(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5758_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5758_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5758_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5758_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5758_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5758_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5758_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5758_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5758_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5758_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5759
#define MACROLOP_PRIVATE_EVAL_REC_5758_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5759(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5759_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5759_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5759_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5759_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5759_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5759_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5759_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5759_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5759_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5759_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5760
#define MACROLOP_PRIVATE_EVAL_REC_5759_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5760(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5760_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5760_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5760_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5760_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5760_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5760_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5760_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5760_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5760_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5760_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5761
#define MACROLOP_PRIVATE_EVAL_REC_5760_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5761(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5761_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5761_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5761_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5761_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5761_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5761_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5761_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5761_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5761_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5761_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5762
#define MACROLOP_PRIVATE_EVAL_REC_5761_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5762(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5762_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5762_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5762_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5762_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5762_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5762_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5762_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5762_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5762_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5762_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5763
#define MACROLOP_PRIVATE_EVAL_REC_5762_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5763(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5763_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5763_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5763_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5763_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5763_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5763_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5763_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5763_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5763_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5763_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5764
#define MACROLOP_PRIVATE_EVAL_REC_5763_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5764(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5764_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5764_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5764_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5764_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5764_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5764_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5764_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5764_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5764_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5764_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5765
#define MACROLOP_PRIVATE_EVAL_REC_5764_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5765(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5765_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5765_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5765_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5765_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5765_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5765_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5765_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5765_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5765_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5765_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5766
#define MACROLOP_PRIVATE_EVAL_REC_5765_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5766(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5766_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5766_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5766_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5766_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5766_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5766_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5766_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5766_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5766_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5766_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5767
#define MACROLOP_PRIVATE_EVAL_REC_5766_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5767(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5767_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5767_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5767_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5767_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5767_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5767_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5767_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5767_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5767_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5767_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5768
#define MACROLOP_PRIVATE_EVAL_REC_5767_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5768(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5768_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5768_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5768_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5768_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5768_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5768_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5768_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5768_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5768_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5768_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5769
#define MACROLOP_PRIVATE_EVAL_REC_5768_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5769(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5769_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5769_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5769_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5769_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5769_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5769_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5769_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5769_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5769_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5769_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5770
#define MACROLOP_PRIVATE_EVAL_REC_5769_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5770(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5770_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5770_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5770_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5770_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5770_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5770_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5770_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5770_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5770_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5770_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5771
#define MACROLOP_PRIVATE_EVAL_REC_5770_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5771(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5771_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5771_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5771_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5771_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5771_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5771_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5771_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5771_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5771_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5771_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5772
#define MACROLOP_PRIVATE_EVAL_REC_5771_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5772(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5772_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5772_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5772_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5772_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5772_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5772_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5772_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5772_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5772_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5772_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5773
#define MACROLOP_PRIVATE_EVAL_REC_5772_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5773(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5773_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5773_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5773_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5773_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5773_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5773_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5773_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5773_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5773_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5773_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5774
#define MACROLOP_PRIVATE_EVAL_REC_5773_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5774(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5774_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5774_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5774_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5774_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5774_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5774_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5774_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5774_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5774_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5774_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5775
#define MACROLOP_PRIVATE_EVAL_REC_5774_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5775(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5775_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5775_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5775_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5775_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5775_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5775_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5775_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5775_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5775_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5775_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5776
#define MACROLOP_PRIVATE_EVAL_REC_5775_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5776(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5776_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5776_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5776_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5776_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5776_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5776_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5776_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5776_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5776_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5776_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5777
#define MACROLOP_PRIVATE_EVAL_REC_5776_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5777(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5777_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5777_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5777_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5777_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5777_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5777_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5777_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5777_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5777_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5777_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5778
#define MACROLOP_PRIVATE_EVAL_REC_5777_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5778(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5778_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5778_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5778_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5778_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5778_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5778_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5778_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5778_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5778_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5778_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5779
#define MACROLOP_PRIVATE_EVAL_REC_5778_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5779(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5779_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5779_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5779_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5779_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5779_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5779_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5779_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5779_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5779_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5779_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5780
#define MACROLOP_PRIVATE_EVAL_REC_5779_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5780(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5780_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5780_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5780_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5780_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5780_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5780_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5780_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5780_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5780_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5780_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5781
#define MACROLOP_PRIVATE_EVAL_REC_5780_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5781(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5781_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5781_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5781_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5781_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5781_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5781_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5781_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5781_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5781_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5781_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5782
#define MACROLOP_PRIVATE_EVAL_REC_5781_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5782(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5782_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5782_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5782_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5782_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5782_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5782_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5782_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5782_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5782_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5782_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5783
#define MACROLOP_PRIVATE_EVAL_REC_5782_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5783(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5783_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5783_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5783_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5783_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5783_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5783_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5783_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5783_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5783_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5783_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5784
#define MACROLOP_PRIVATE_EVAL_REC_5783_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5784(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5784_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5784_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5784_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5784_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5784_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5784_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5784_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5784_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5784_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5784_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5785
#define MACROLOP_PRIVATE_EVAL_REC_5784_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5785(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5785_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5785_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5785_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5785_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5785_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5785_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5785_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5785_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5785_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5785_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5786
#define MACROLOP_PRIVATE_EVAL_REC_5785_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5786(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5786_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5786_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5786_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5786_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5786_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5786_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5786_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5786_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5786_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5786_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5787
#define MACROLOP_PRIVATE_EVAL_REC_5786_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5787(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5787_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5787_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5787_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5787_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5787_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5787_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5787_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5787_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5787_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5787_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5788
#define MACROLOP_PRIVATE_EVAL_REC_5787_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5788(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5788_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5788_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5788_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5788_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5788_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5788_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5788_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5788_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5788_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5788_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5789
#define MACROLOP_PRIVATE_EVAL_REC_5788_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5789(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5789_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5789_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5789_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5789_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5789_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5789_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5789_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5789_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5789_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5789_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5790
#define MACROLOP_PRIVATE_EVAL_REC_5789_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5790(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5790_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5790_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5790_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5790_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5790_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5790_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5790_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5790_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5790_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5790_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5791
#define MACROLOP_PRIVATE_EVAL_REC_5790_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5791(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5791_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5791_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5791_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5791_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5791_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5791_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5791_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5791_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5791_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5791_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5792
#define MACROLOP_PRIVATE_EVAL_REC_5791_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5792(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5792_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5792_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5792_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5792_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5792_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5792_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5792_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5792_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5792_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5792_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5793
#define MACROLOP_PRIVATE_EVAL_REC_5792_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5793(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5793_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5793_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5793_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5793_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5793_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5793_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5793_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5793_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5793_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5793_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5794
#define MACROLOP_PRIVATE_EVAL_REC_5793_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5794(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5794_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5794_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5794_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5794_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5794_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5794_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5794_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5794_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5794_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5794_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5795
#define MACROLOP_PRIVATE_EVAL_REC_5794_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5795(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5795_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5795_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5795_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5795_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5795_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5795_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5795_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5795_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5795_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5795_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5796
#define MACROLOP_PRIVATE_EVAL_REC_5795_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5796(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5796_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5796_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5796_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5796_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5796_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5796_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5796_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5796_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5796_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5796_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5797
#define MACROLOP_PRIVATE_EVAL_REC_5796_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5797(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5797_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5797_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5797_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5797_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5797_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5797_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5797_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5797_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5797_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5797_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5798
#define MACROLOP_PRIVATE_EVAL_REC_5797_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5798(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5798_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5798_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5798_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5798_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5798_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5798_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5798_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5798_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5798_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5798_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5799
#define MACROLOP_PRIVATE_EVAL_REC_5798_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5799(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5799_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5799_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5799_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5799_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5799_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5799_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5799_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5799_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5799_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5799_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5800
#define MACROLOP_PRIVATE_EVAL_REC_5799_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5800(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5800_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5800_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5800_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5800_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5800_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5800_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5800_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5800_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5800_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5800_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5801
#define MACROLOP_PRIVATE_EVAL_REC_5800_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5801(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5801_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5801_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5801_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5801_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5801_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5801_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5801_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5801_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5801_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5801_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5802
#define MACROLOP_PRIVATE_EVAL_REC_5801_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5802(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5802_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5802_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5802_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5802_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5802_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5802_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5802_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5802_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5802_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5802_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5803
#define MACROLOP_PRIVATE_EVAL_REC_5802_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5803(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5803_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5803_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5803_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5803_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5803_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5803_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5803_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5803_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5803_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5803_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5804
#define MACROLOP_PRIVATE_EVAL_REC_5803_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5804(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5804_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5804_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5804_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5804_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5804_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5804_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5804_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5804_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5804_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5804_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5805
#define MACROLOP_PRIVATE_EVAL_REC_5804_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5805(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5805_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5805_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5805_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5805_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5805_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5805_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5805_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5805_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5805_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5805_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5806
#define MACROLOP_PRIVATE_EVAL_REC_5805_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5806(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5806_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5806_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5806_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5806_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5806_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5806_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5806_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5806_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5806_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5806_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5807
#define MACROLOP_PRIVATE_EVAL_REC_5806_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5807(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5807_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5807_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5807_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5807_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5807_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5807_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5807_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5807_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5807_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5807_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5808
#define MACROLOP_PRIVATE_EVAL_REC_5807_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5808(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5808_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5808_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5808_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5808_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5808_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5808_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5808_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5808_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5808_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5808_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5809
#define MACROLOP_PRIVATE_EVAL_REC_5808_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5809(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5809_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5809_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5809_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5809_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5809_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5809_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5809_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5809_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5809_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5809_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5810
#define MACROLOP_PRIVATE_EVAL_REC_5809_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5810(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5810_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5810_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5810_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5810_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5810_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5810_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5810_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5810_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5810_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5810_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5811
#define MACROLOP_PRIVATE_EVAL_REC_5810_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5811(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5811_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5811_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5811_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5811_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5811_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5811_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5811_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5811_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5811_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5811_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5812
#define MACROLOP_PRIVATE_EVAL_REC_5811_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5812(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5812_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5812_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5812_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5812_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5812_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5812_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5812_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5812_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5812_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5812_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5813
#define MACROLOP_PRIVATE_EVAL_REC_5812_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5813(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5813_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5813_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5813_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5813_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5813_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5813_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5813_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5813_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5813_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5813_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5814
#define MACROLOP_PRIVATE_EVAL_REC_5813_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5814(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5814_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5814_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5814_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5814_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5814_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5814_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5814_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5814_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5814_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5814_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5815
#define MACROLOP_PRIVATE_EVAL_REC_5814_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5815(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5815_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5815_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5815_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5815_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5815_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5815_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5815_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5815_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5815_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5815_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5816
#define MACROLOP_PRIVATE_EVAL_REC_5815_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5816(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5816_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5816_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5816_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5816_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5816_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5816_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5816_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5816_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5816_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5816_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5817
#define MACROLOP_PRIVATE_EVAL_REC_5816_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5817(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5817_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5817_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5817_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5817_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5817_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5817_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5817_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5817_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5817_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5817_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5818
#define MACROLOP_PRIVATE_EVAL_REC_5817_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5818(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5818_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5818_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5818_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5818_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5818_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5818_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5818_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5818_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5818_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5818_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5819
#define MACROLOP_PRIVATE_EVAL_REC_5818_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5819(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5819_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5819_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5819_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5819_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5819_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5819_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5819_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5819_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5819_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5819_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5820
#define MACROLOP_PRIVATE_EVAL_REC_5819_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5820(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5820_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5820_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5820_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5820_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5820_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5820_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5820_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5820_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5820_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5820_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5821
#define MACROLOP_PRIVATE_EVAL_REC_5820_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5821(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5821_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5821_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5821_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5821_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5821_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5821_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5821_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5821_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5821_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5821_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5822
#define MACROLOP_PRIVATE_EVAL_REC_5821_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5822(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5822_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5822_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5822_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5822_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5822_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5822_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5822_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5822_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5822_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5822_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5823
#define MACROLOP_PRIVATE_EVAL_REC_5822_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5823(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5823_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5823_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5823_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5823_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5823_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5823_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5823_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5823_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5823_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5823_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5824
#define MACROLOP_PRIVATE_EVAL_REC_5823_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5824(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5824_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5824_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5824_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5824_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5824_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5824_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5824_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5824_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5824_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5824_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5825
#define MACROLOP_PRIVATE_EVAL_REC_5824_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5825(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5825_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5825_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5825_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5825_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5825_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5825_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5825_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5825_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5825_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5825_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5826
#define MACROLOP_PRIVATE_EVAL_REC_5825_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5826(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5826_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5826_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5826_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5826_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5826_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5826_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5826_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5826_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5826_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5826_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5827
#define MACROLOP_PRIVATE_EVAL_REC_5826_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5827(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5827_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5827_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5827_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5827_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5827_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5827_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5827_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5827_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5827_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5827_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5828
#define MACROLOP_PRIVATE_EVAL_REC_5827_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5828(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5828_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5828_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5828_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5828_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5828_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5828_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5828_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5828_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5828_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5828_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5829
#define MACROLOP_PRIVATE_EVAL_REC_5828_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5829(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5829_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5829_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5829_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5829_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5829_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5829_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5829_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5829_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5829_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5829_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5830
#define MACROLOP_PRIVATE_EVAL_REC_5829_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5830(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5830_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5830_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5830_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5830_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5830_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5830_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5830_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5830_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5830_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5830_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5831
#define MACROLOP_PRIVATE_EVAL_REC_5830_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5831(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5831_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5831_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5831_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5831_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5831_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5831_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5831_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5831_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5831_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5831_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5832
#define MACROLOP_PRIVATE_EVAL_REC_5831_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5832(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5832_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5832_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5832_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5832_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5832_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5832_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5832_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5832_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5832_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5832_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5833
#define MACROLOP_PRIVATE_EVAL_REC_5832_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5833(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5833_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5833_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5833_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5833_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5833_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5833_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5833_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5833_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5833_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5833_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5834
#define MACROLOP_PRIVATE_EVAL_REC_5833_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5834(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5834_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5834_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5834_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5834_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5834_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5834_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5834_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5834_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5834_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5834_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5835
#define MACROLOP_PRIVATE_EVAL_REC_5834_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5835(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5835_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5835_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5835_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5835_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5835_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5835_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5835_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5835_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5835_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5835_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5836
#define MACROLOP_PRIVATE_EVAL_REC_5835_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5836(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5836_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5836_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5836_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5836_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5836_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5836_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5836_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5836_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5836_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5836_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5837
#define MACROLOP_PRIVATE_EVAL_REC_5836_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5837(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5837_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5837_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5837_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5837_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5837_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5837_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5837_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5837_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5837_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5837_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5838
#define MACROLOP_PRIVATE_EVAL_REC_5837_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5838(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5838_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5838_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5838_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5838_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5838_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5838_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5838_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5838_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5838_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5838_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5839
#define MACROLOP_PRIVATE_EVAL_REC_5838_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5839(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5839_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5839_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5839_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5839_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5839_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5839_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5839_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5839_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5839_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5839_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5840
#define MACROLOP_PRIVATE_EVAL_REC_5839_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5840(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5840_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5840_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5840_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5840_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5840_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5840_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5840_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5840_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5840_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5840_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5841
#define MACROLOP_PRIVATE_EVAL_REC_5840_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5841(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5841_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5841_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5841_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5841_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5841_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5841_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5841_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5841_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5841_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5841_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5842
#define MACROLOP_PRIVATE_EVAL_REC_5841_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5842(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5842_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5842_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5842_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5842_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5842_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5842_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5842_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5842_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5842_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5842_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5843
#define MACROLOP_PRIVATE_EVAL_REC_5842_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5843(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5843_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5843_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5843_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5843_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5843_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5843_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5843_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5843_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5843_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5843_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5844
#define MACROLOP_PRIVATE_EVAL_REC_5843_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5844(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5844_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5844_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5844_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5844_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5844_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5844_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5844_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5844_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5844_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5844_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5845
#define MACROLOP_PRIVATE_EVAL_REC_5844_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5845(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5845_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5845_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5845_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5845_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5845_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5845_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5845_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5845_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5845_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5845_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5846
#define MACROLOP_PRIVATE_EVAL_REC_5845_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5846(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5846_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5846_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5846_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5846_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5846_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5846_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5846_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5846_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5846_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5846_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5847
#define MACROLOP_PRIVATE_EVAL_REC_5846_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5847(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5847_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5847_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5847_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5847_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5847_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5847_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5847_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5847_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5847_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5847_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5848
#define MACROLOP_PRIVATE_EVAL_REC_5847_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5848(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5848_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5848_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5848_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5848_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5848_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5848_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5848_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5848_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5848_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5848_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5849
#define MACROLOP_PRIVATE_EVAL_REC_5848_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5849(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5849_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5849_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5849_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5849_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5849_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5849_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5849_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5849_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5849_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5849_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5850
#define MACROLOP_PRIVATE_EVAL_REC_5849_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5850(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5850_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5850_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5850_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5850_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5850_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5850_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5850_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5850_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5850_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5850_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5851
#define MACROLOP_PRIVATE_EVAL_REC_5850_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5851(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5851_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5851_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5851_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5851_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5851_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5851_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5851_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5851_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5851_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5851_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5852
#define MACROLOP_PRIVATE_EVAL_REC_5851_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5852(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5852_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5852_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5852_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5852_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5852_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5852_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5852_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5852_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5852_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5852_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5853
#define MACROLOP_PRIVATE_EVAL_REC_5852_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5853(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5853_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5853_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5853_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5853_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5853_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5853_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5853_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5853_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5853_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5853_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5854
#define MACROLOP_PRIVATE_EVAL_REC_5853_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5854(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5854_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5854_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5854_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5854_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5854_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5854_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5854_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5854_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5854_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5854_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5855
#define MACROLOP_PRIVATE_EVAL_REC_5854_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5855(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5855_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5855_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5855_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5855_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5855_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5855_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5855_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5855_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5855_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5855_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5856
#define MACROLOP_PRIVATE_EVAL_REC_5855_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5856(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5856_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5856_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5856_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5856_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5856_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5856_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5856_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5856_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5856_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5856_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5857
#define MACROLOP_PRIVATE_EVAL_REC_5856_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5857(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5857_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5857_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5857_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5857_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5857_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5857_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5857_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5857_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5857_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5857_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5858
#define MACROLOP_PRIVATE_EVAL_REC_5857_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5858(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5858_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5858_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5858_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5858_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5858_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5858_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5858_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5858_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5858_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5858_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5859
#define MACROLOP_PRIVATE_EVAL_REC_5858_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5859(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5859_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5859_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5859_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5859_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5859_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5859_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5859_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5859_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5859_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5859_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5860
#define MACROLOP_PRIVATE_EVAL_REC_5859_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5860(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5860_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5860_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5860_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5860_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5860_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5860_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5860_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5860_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5860_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5860_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5861
#define MACROLOP_PRIVATE_EVAL_REC_5860_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5861(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5861_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5861_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5861_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5861_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5861_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5861_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5861_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5861_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5861_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5861_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5862
#define MACROLOP_PRIVATE_EVAL_REC_5861_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5862(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5862_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5862_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5862_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5862_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5862_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5862_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5862_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5862_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5862_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5862_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5863
#define MACROLOP_PRIVATE_EVAL_REC_5862_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5863(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5863_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5863_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5863_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5863_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5863_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5863_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5863_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5863_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5863_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5863_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5864
#define MACROLOP_PRIVATE_EVAL_REC_5863_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5864(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5864_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5864_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5864_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5864_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5864_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5864_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5864_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5864_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5864_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5864_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5865
#define MACROLOP_PRIVATE_EVAL_REC_5864_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5865(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5865_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5865_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5865_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5865_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5865_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5865_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5865_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5865_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5865_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5865_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5866
#define MACROLOP_PRIVATE_EVAL_REC_5865_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5866(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5866_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5866_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5866_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5866_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5866_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5866_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5866_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5866_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5866_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5866_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5867
#define MACROLOP_PRIVATE_EVAL_REC_5866_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5867(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5867_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5867_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5867_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5867_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5867_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5867_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5867_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5867_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5867_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5867_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5868
#define MACROLOP_PRIVATE_EVAL_REC_5867_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5868(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5868_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5868_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5868_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5868_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5868_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5868_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5868_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5868_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5868_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5868_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5869
#define MACROLOP_PRIVATE_EVAL_REC_5868_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5869(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5869_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5869_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5869_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5869_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5869_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5869_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5869_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5869_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5869_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5869_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5870
#define MACROLOP_PRIVATE_EVAL_REC_5869_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5870(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5870_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5870_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5870_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5870_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5870_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5870_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5870_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5870_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5870_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5870_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5871
#define MACROLOP_PRIVATE_EVAL_REC_5870_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5871(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5871_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5871_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5871_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5871_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5871_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5871_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5871_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5871_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5871_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5871_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5872
#define MACROLOP_PRIVATE_EVAL_REC_5871_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5872(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5872_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5872_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5872_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5872_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5872_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5872_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5872_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5872_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5872_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5872_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5873
#define MACROLOP_PRIVATE_EVAL_REC_5872_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5873(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5873_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5873_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5873_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5873_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5873_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5873_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5873_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5873_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5873_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5873_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5874
#define MACROLOP_PRIVATE_EVAL_REC_5873_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5874(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5874_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5874_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5874_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5874_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5874_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5874_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5874_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5874_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5874_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5874_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5875
#define MACROLOP_PRIVATE_EVAL_REC_5874_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5875(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5875_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5875_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5875_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5875_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5875_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5875_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5875_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5875_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5875_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5875_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5876
#define MACROLOP_PRIVATE_EVAL_REC_5875_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5876(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5876_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5876_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5876_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5876_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5876_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5876_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5876_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5876_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5876_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5876_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5877
#define MACROLOP_PRIVATE_EVAL_REC_5876_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5877(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5877_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5877_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5877_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5877_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5877_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5877_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5877_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5877_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5877_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5877_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5878
#define MACROLOP_PRIVATE_EVAL_REC_5877_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5878(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5878_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5878_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5878_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5878_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5878_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5878_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5878_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5878_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5878_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5878_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5879
#define MACROLOP_PRIVATE_EVAL_REC_5878_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5879(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5879_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5879_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5879_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5879_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5879_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5879_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5879_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5879_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5879_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5879_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5880
#define MACROLOP_PRIVATE_EVAL_REC_5879_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5880(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5880_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5880_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5880_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5880_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5880_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5880_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5880_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5880_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5880_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5880_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5881
#define MACROLOP_PRIVATE_EVAL_REC_5880_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5881(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5881_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5881_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5881_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5881_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5881_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5881_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5881_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5881_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5881_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5881_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5882
#define MACROLOP_PRIVATE_EVAL_REC_5881_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5882(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5882_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5882_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5882_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5882_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5882_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5882_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5882_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5882_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5882_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5882_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5883
#define MACROLOP_PRIVATE_EVAL_REC_5882_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5883(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5883_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5883_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5883_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5883_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5883_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5883_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5883_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5883_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5883_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5883_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5884
#define MACROLOP_PRIVATE_EVAL_REC_5883_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5884(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5884_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5884_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5884_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5884_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5884_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5884_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5884_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5884_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5884_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5884_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5885
#define MACROLOP_PRIVATE_EVAL_REC_5884_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5885(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5885_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5885_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5885_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5885_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5885_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5885_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5885_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5885_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5885_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5885_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5886
#define MACROLOP_PRIVATE_EVAL_REC_5885_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5886(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5886_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5886_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5886_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5886_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5886_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5886_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5886_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5886_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5886_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5886_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5887
#define MACROLOP_PRIVATE_EVAL_REC_5886_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5887(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5887_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5887_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5887_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5887_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5887_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5887_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5887_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5887_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5887_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5887_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5888
#define MACROLOP_PRIVATE_EVAL_REC_5887_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5888(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5888_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5888_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5888_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5888_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5888_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5888_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5888_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5888_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5888_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5888_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5889
#define MACROLOP_PRIVATE_EVAL_REC_5888_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5889(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5889_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5889_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5889_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5889_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5889_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5889_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5889_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5889_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5889_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5889_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5890
#define MACROLOP_PRIVATE_EVAL_REC_5889_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5890(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5890_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5890_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5890_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5890_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5890_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5890_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5890_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5890_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5890_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5890_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5891
#define MACROLOP_PRIVATE_EVAL_REC_5890_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5891(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5891_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5891_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5891_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5891_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5891_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5891_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5891_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5891_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5891_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5891_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5892
#define MACROLOP_PRIVATE_EVAL_REC_5891_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5892(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5892_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5892_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5892_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5892_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5892_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5892_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5892_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5892_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5892_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5892_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5893
#define MACROLOP_PRIVATE_EVAL_REC_5892_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5893(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5893_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5893_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5893_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5893_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5893_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5893_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5893_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5893_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5893_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5893_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5894
#define MACROLOP_PRIVATE_EVAL_REC_5893_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5894(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5894_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5894_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5894_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5894_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5894_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5894_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5894_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5894_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5894_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5894_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5895
#define MACROLOP_PRIVATE_EVAL_REC_5894_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5895(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5895_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5895_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5895_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5895_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5895_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5895_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5895_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5895_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5895_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5895_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5896
#define MACROLOP_PRIVATE_EVAL_REC_5895_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5896(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5896_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5896_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5896_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5896_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5896_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5896_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5896_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5896_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5896_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5896_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5897
#define MACROLOP_PRIVATE_EVAL_REC_5896_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5897(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5897_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5897_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5897_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5897_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5897_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5897_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5897_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5897_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5897_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5897_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5898
#define MACROLOP_PRIVATE_EVAL_REC_5897_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5898(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5898_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5898_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5898_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5898_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5898_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5898_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5898_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5898_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5898_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5898_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5899
#define MACROLOP_PRIVATE_EVAL_REC_5898_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5899(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5899_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5899_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5899_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5899_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5899_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5899_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5899_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5899_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5899_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5899_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5900
#define MACROLOP_PRIVATE_EVAL_REC_5899_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5900(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5900_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5900_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5900_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5900_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5900_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5900_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5900_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5900_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5900_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5900_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5901
#define MACROLOP_PRIVATE_EVAL_REC_5900_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5901(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5901_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5901_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5901_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5901_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5901_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5901_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5901_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5901_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5901_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5901_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5902
#define MACROLOP_PRIVATE_EVAL_REC_5901_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5902(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5902_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5902_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5902_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5902_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5902_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5902_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5902_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5902_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5902_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5902_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5903
#define MACROLOP_PRIVATE_EVAL_REC_5902_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5903(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5903_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5903_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5903_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5903_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5903_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5903_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5903_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5903_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5903_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5903_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5904
#define MACROLOP_PRIVATE_EVAL_REC_5903_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5904(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5904_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5904_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5904_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5904_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5904_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5904_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5904_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5904_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5904_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5904_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5905
#define MACROLOP_PRIVATE_EVAL_REC_5904_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5905(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5905_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5905_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5905_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5905_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5905_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5905_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5905_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5905_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5905_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5905_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5906
#define MACROLOP_PRIVATE_EVAL_REC_5905_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5906(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5906_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5906_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5906_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5906_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5906_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5906_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5906_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5906_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5906_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5906_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5907
#define MACROLOP_PRIVATE_EVAL_REC_5906_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5907(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5907_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5907_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5907_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5907_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5907_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5907_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5907_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5907_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5907_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5907_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5908
#define MACROLOP_PRIVATE_EVAL_REC_5907_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5908(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5908_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5908_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5908_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5908_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5908_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5908_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5908_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5908_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5908_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5908_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5909
#define MACROLOP_PRIVATE_EVAL_REC_5908_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5909(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5909_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5909_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5909_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5909_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5909_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5909_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5909_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5909_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5909_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5909_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5910
#define MACROLOP_PRIVATE_EVAL_REC_5909_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5910(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5910_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5910_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5910_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5910_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5910_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5910_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5910_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5910_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5910_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5910_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5911
#define MACROLOP_PRIVATE_EVAL_REC_5910_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5911(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5911_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5911_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5911_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5911_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5911_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5911_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5911_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5911_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5911_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5911_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5912
#define MACROLOP_PRIVATE_EVAL_REC_5911_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5912(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5912_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5912_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5912_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5912_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5912_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5912_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5912_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5912_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5912_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5912_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5913
#define MACROLOP_PRIVATE_EVAL_REC_5912_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5913(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5913_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5913_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5913_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5913_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5913_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5913_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5913_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5913_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5913_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5913_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5914
#define MACROLOP_PRIVATE_EVAL_REC_5913_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5914(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5914_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5914_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5914_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5914_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5914_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5914_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5914_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5914_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5914_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5914_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5915
#define MACROLOP_PRIVATE_EVAL_REC_5914_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5915(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5915_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5915_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5915_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5915_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5915_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5915_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5915_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5915_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5915_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5915_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5916
#define MACROLOP_PRIVATE_EVAL_REC_5915_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5916(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5916_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5916_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5916_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5916_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5916_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5916_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5916_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5916_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5916_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5916_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5917
#define MACROLOP_PRIVATE_EVAL_REC_5916_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5917(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5917_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5917_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5917_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5917_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5917_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5917_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5917_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5917_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5917_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5917_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5918
#define MACROLOP_PRIVATE_EVAL_REC_5917_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5918(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5918_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5918_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5918_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5918_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5918_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5918_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5918_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5918_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5918_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5918_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5919
#define MACROLOP_PRIVATE_EVAL_REC_5918_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5919(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5919_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5919_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5919_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5919_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5919_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5919_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5919_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5919_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5919_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5919_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5920
#define MACROLOP_PRIVATE_EVAL_REC_5919_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5920(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5920_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5920_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5920_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5920_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5920_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5920_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5920_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5920_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5920_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5920_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5921
#define MACROLOP_PRIVATE_EVAL_REC_5920_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5921(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5921_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5921_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5921_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5921_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5921_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5921_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5921_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5921_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5921_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5921_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5922
#define MACROLOP_PRIVATE_EVAL_REC_5921_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5922(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5922_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5922_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5922_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5922_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5922_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5922_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5922_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5922_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5922_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5922_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5923
#define MACROLOP_PRIVATE_EVAL_REC_5922_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5923(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5923_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5923_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5923_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5923_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5923_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5923_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5923_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5923_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5923_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5923_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5924
#define MACROLOP_PRIVATE_EVAL_REC_5923_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5924(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5924_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5924_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5924_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5924_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5924_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5924_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5924_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5924_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5924_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5924_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5925
#define MACROLOP_PRIVATE_EVAL_REC_5924_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5925(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5925_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5925_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5925_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5925_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5925_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5925_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5925_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5925_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5925_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5925_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5926
#define MACROLOP_PRIVATE_EVAL_REC_5925_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5926(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5926_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5926_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5926_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5926_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5926_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5926_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5926_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5926_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5926_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5926_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5927
#define MACROLOP_PRIVATE_EVAL_REC_5926_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5927(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5927_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5927_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5927_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5927_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5927_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5927_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5927_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5927_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5927_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5927_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5928
#define MACROLOP_PRIVATE_EVAL_REC_5927_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5928(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5928_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5928_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5928_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5928_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5928_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5928_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5928_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5928_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5928_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5928_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5929
#define MACROLOP_PRIVATE_EVAL_REC_5928_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5929(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5929_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5929_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5929_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5929_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5929_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5929_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5929_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5929_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5929_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5929_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5930
#define MACROLOP_PRIVATE_EVAL_REC_5929_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5930(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5930_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5930_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5930_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5930_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5930_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5930_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5930_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5930_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5930_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5930_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5931
#define MACROLOP_PRIVATE_EVAL_REC_5930_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5931(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5931_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5931_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5931_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5931_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5931_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5931_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5931_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5931_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5931_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5931_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5932
#define MACROLOP_PRIVATE_EVAL_REC_5931_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5932(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5932_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5932_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5932_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5932_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5932_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5932_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5932_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5932_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5932_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5932_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5933
#define MACROLOP_PRIVATE_EVAL_REC_5932_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5933(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5933_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5933_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5933_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5933_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5933_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5933_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5933_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5933_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5933_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5933_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5934
#define MACROLOP_PRIVATE_EVAL_REC_5933_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5934(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5934_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5934_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5934_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5934_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5934_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5934_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5934_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5934_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5934_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5934_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5935
#define MACROLOP_PRIVATE_EVAL_REC_5934_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5935(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5935_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5935_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5935_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5935_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5935_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5935_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5935_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5935_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5935_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5935_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5936
#define MACROLOP_PRIVATE_EVAL_REC_5935_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5936(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5936_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5936_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5936_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5936_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5936_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5936_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5936_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5936_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5936_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5936_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5937
#define MACROLOP_PRIVATE_EVAL_REC_5936_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5937(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5937_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5937_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5937_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5937_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5937_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5937_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5937_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5937_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5937_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5937_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5938
#define MACROLOP_PRIVATE_EVAL_REC_5937_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5938(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5938_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5938_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5938_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5938_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5938_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5938_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5938_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5938_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5938_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5938_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5939
#define MACROLOP_PRIVATE_EVAL_REC_5938_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5939(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5939_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5939_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5939_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5939_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5939_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5939_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5939_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5939_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5939_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5939_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5940
#define MACROLOP_PRIVATE_EVAL_REC_5939_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5940(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5940_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5940_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5940_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5940_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5940_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5940_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5940_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5940_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5940_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5940_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5941
#define MACROLOP_PRIVATE_EVAL_REC_5940_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5941(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5941_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5941_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5941_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5941_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5941_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5941_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5941_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5941_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5941_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5941_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5942
#define MACROLOP_PRIVATE_EVAL_REC_5941_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5942(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5942_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5942_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5942_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5942_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5942_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5942_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5942_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5942_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5942_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5942_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5943
#define MACROLOP_PRIVATE_EVAL_REC_5942_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5943(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5943_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5943_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5943_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5943_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5943_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5943_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5943_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5943_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5943_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5943_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5944
#define MACROLOP_PRIVATE_EVAL_REC_5943_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5944(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5944_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5944_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5944_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5944_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5944_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5944_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5944_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5944_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5944_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5944_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5945
#define MACROLOP_PRIVATE_EVAL_REC_5944_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5945(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5945_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5945_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5945_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5945_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5945_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5945_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5945_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5945_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5945_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5945_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5946
#define MACROLOP_PRIVATE_EVAL_REC_5945_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5946(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5946_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5946_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5946_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5946_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5946_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5946_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5946_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5946_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5946_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5946_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5947
#define MACROLOP_PRIVATE_EVAL_REC_5946_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5947(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5947_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5947_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5947_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5947_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5947_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5947_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5947_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5947_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5947_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5947_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5948
#define MACROLOP_PRIVATE_EVAL_REC_5947_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5948(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5948_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5948_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5948_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5948_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5948_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5948_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5948_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5948_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5948_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5948_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5949
#define MACROLOP_PRIVATE_EVAL_REC_5948_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5949(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5949_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5949_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5949_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5949_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5949_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5949_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5949_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5949_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5949_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5949_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5950
#define MACROLOP_PRIVATE_EVAL_REC_5949_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5950(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5950_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5950_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5950_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5950_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5950_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5950_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5950_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5950_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5950_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5950_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5951
#define MACROLOP_PRIVATE_EVAL_REC_5950_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5951(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5951_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5951_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5951_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5951_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5951_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5951_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5951_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5951_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5951_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5951_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5952
#define MACROLOP_PRIVATE_EVAL_REC_5951_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5952(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5952_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5952_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5952_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5952_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5952_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5952_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5952_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5952_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5952_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5952_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5953
#define MACROLOP_PRIVATE_EVAL_REC_5952_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5953(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5953_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5953_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5953_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5953_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5953_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5953_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5953_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5953_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5953_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5953_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5954
#define MACROLOP_PRIVATE_EVAL_REC_5953_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5954(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5954_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5954_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5954_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5954_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5954_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5954_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5954_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5954_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5954_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5954_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5955
#define MACROLOP_PRIVATE_EVAL_REC_5954_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5955(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5955_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5955_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5955_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5955_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5955_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5955_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5955_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5955_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5955_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5955_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5956
#define MACROLOP_PRIVATE_EVAL_REC_5955_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5956(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5956_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5956_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5956_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5956_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5956_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5956_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5956_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5956_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5956_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5956_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5957
#define MACROLOP_PRIVATE_EVAL_REC_5956_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5957(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5957_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5957_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5957_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5957_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5957_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5957_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5957_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5957_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5957_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5957_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5958
#define MACROLOP_PRIVATE_EVAL_REC_5957_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5958(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5958_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5958_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5958_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5958_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5958_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5958_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5958_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5958_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5958_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5958_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5959
#define MACROLOP_PRIVATE_EVAL_REC_5958_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5959(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5959_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5959_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5959_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5959_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5959_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5959_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5959_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5959_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5959_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5959_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5960
#define MACROLOP_PRIVATE_EVAL_REC_5959_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5960(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5960_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5960_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5960_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5960_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5960_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5960_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5960_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5960_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5960_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5960_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5961
#define MACROLOP_PRIVATE_EVAL_REC_5960_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5961(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5961_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5961_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5961_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5961_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5961_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5961_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5961_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5961_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5961_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5961_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5962
#define MACROLOP_PRIVATE_EVAL_REC_5961_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5962(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5962_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5962_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5962_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5962_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5962_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5962_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5962_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5962_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5962_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5962_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5963
#define MACROLOP_PRIVATE_EVAL_REC_5962_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5963(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5963_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5963_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5963_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5963_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5963_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5963_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5963_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5963_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5963_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5963_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5964
#define MACROLOP_PRIVATE_EVAL_REC_5963_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5964(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5964_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5964_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5964_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5964_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5964_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5964_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5964_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5964_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5964_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5964_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5965
#define MACROLOP_PRIVATE_EVAL_REC_5964_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5965(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5965_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5965_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5965_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5965_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5965_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5965_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5965_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5965_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5965_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5965_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5966
#define MACROLOP_PRIVATE_EVAL_REC_5965_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5966(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5966_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5966_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5966_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5966_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5966_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5966_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5966_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5966_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5966_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5966_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5967
#define MACROLOP_PRIVATE_EVAL_REC_5966_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5967(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5967_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5967_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5967_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5967_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5967_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5967_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5967_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5967_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5967_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5967_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5968
#define MACROLOP_PRIVATE_EVAL_REC_5967_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5968(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5968_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5968_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5968_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5968_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5968_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5968_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5968_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5968_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5968_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5968_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5969
#define MACROLOP_PRIVATE_EVAL_REC_5968_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5969(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5969_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5969_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5969_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5969_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5969_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5969_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5969_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5969_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5969_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5969_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5970
#define MACROLOP_PRIVATE_EVAL_REC_5969_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5970(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5970_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5970_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5970_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5970_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5970_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5970_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5970_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5970_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5970_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5970_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5971
#define MACROLOP_PRIVATE_EVAL_REC_5970_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5971(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5971_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5971_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5971_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5971_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5971_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5971_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5971_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5971_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5971_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5971_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5972
#define MACROLOP_PRIVATE_EVAL_REC_5971_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5972(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5972_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5972_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5972_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5972_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5972_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5972_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5972_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5972_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5972_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5972_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5973
#define MACROLOP_PRIVATE_EVAL_REC_5972_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5973(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5973_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5973_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5973_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5973_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5973_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5973_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5973_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5973_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5973_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5973_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5974
#define MACROLOP_PRIVATE_EVAL_REC_5973_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5974(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5974_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5974_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5974_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5974_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5974_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5974_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5974_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5974_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5974_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5974_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5975
#define MACROLOP_PRIVATE_EVAL_REC_5974_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5975(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5975_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5975_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5975_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5975_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5975_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5975_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5975_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5975_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5975_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5975_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5976
#define MACROLOP_PRIVATE_EVAL_REC_5975_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5976(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5976_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5976_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5976_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5976_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5976_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5976_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5976_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5976_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5976_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5976_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5977
#define MACROLOP_PRIVATE_EVAL_REC_5976_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5977(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5977_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5977_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5977_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5977_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5977_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5977_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5977_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5977_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5977_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5977_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5978
#define MACROLOP_PRIVATE_EVAL_REC_5977_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5978(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5978_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5978_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5978_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5978_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5978_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5978_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5978_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5978_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5978_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5978_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5979
#define MACROLOP_PRIVATE_EVAL_REC_5978_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5979(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5979_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5979_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5979_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5979_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5979_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5979_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5979_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5979_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5979_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5979_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5980
#define MACROLOP_PRIVATE_EVAL_REC_5979_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5980(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5980_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5980_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5980_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5980_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5980_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5980_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5980_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5980_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5980_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5980_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5981
#define MACROLOP_PRIVATE_EVAL_REC_5980_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5981(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5981_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5981_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5981_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5981_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5981_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5981_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5981_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5981_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5981_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5981_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5982
#define MACROLOP_PRIVATE_EVAL_REC_5981_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5982(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5982_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5982_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5982_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5982_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5982_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5982_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5982_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5982_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5982_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5982_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5983
#define MACROLOP_PRIVATE_EVAL_REC_5982_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5983(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5983_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5983_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5983_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5983_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5983_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5983_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5983_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5983_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5983_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5983_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5984
#define MACROLOP_PRIVATE_EVAL_REC_5983_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5984(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5984_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5984_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5984_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5984_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5984_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5984_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5984_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5984_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5984_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5984_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5985
#define MACROLOP_PRIVATE_EVAL_REC_5984_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5985(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5985_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5985_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5985_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5985_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5985_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5985_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5985_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5985_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5985_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5985_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5986
#define MACROLOP_PRIVATE_EVAL_REC_5985_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5986(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5986_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5986_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5986_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5986_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5986_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5986_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5986_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5986_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5986_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5986_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5987
#define MACROLOP_PRIVATE_EVAL_REC_5986_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5987(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5987_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5987_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5987_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5987_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5987_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5987_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5987_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5987_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5987_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5987_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5988
#define MACROLOP_PRIVATE_EVAL_REC_5987_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5988(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5988_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5988_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5988_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5988_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5988_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5988_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5988_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5988_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5988_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5988_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5989
#define MACROLOP_PRIVATE_EVAL_REC_5988_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5989(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5989_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5989_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5989_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5989_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5989_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5989_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5989_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5989_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5989_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5989_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5990
#define MACROLOP_PRIVATE_EVAL_REC_5989_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5990(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5990_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5990_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5990_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5990_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5990_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5990_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5990_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5990_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5990_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5990_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5991
#define MACROLOP_PRIVATE_EVAL_REC_5990_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5991(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5991_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5991_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5991_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5991_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5991_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5991_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5991_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5991_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5991_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5991_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5992
#define MACROLOP_PRIVATE_EVAL_REC_5991_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5992(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5992_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5992_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5992_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5992_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5992_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5992_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5992_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5992_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5992_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5992_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5993
#define MACROLOP_PRIVATE_EVAL_REC_5992_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5993(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5993_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5993_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5993_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5993_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5993_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5993_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5993_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5993_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5993_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5993_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5994
#define MACROLOP_PRIVATE_EVAL_REC_5993_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5994(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5994_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5994_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5994_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5994_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5994_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5994_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5994_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5994_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5994_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5994_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5995
#define MACROLOP_PRIVATE_EVAL_REC_5994_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5995(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5995_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5995_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5995_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5995_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5995_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5995_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5995_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5995_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5995_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5995_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5996
#define MACROLOP_PRIVATE_EVAL_REC_5995_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5996(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5996_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5996_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5996_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5996_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5996_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5996_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5996_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5996_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5996_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5996_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5997
#define MACROLOP_PRIVATE_EVAL_REC_5996_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5997(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5997_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5997_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5997_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5997_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5997_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5997_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5997_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5997_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5997_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5997_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5998
#define MACROLOP_PRIVATE_EVAL_REC_5997_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5998(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5998_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5998_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5998_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5998_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5998_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5998_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5998_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5998_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5998_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5998_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5999
#define MACROLOP_PRIVATE_EVAL_REC_5998_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5999(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5999_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5999_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5999_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5999_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5999_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5999_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5999_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5999_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5999_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5999_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6000
#define MACROLOP_PRIVATE_EVAL_REC_5999_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6000(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6000_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6000_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6000_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6000_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6000_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6000_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6000_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6000_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6000_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6000_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6001
#define MACROLOP_PRIVATE_EVAL_REC_6000_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6001(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6001_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6001_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6001_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6001_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6001_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6001_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6001_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6001_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6001_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6001_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6002
#define MACROLOP_PRIVATE_EVAL_REC_6001_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6002(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6002_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6002_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6002_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6002_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6002_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6002_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6002_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6002_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6002_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6002_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6003
#define MACROLOP_PRIVATE_EVAL_REC_6002_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6003(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6003_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6003_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6003_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6003_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6003_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6003_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6003_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6003_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6003_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6003_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6004
#define MACROLOP_PRIVATE_EVAL_REC_6003_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6004(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6004_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6004_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6004_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6004_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6004_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6004_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6004_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6004_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6004_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6004_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6005
#define MACROLOP_PRIVATE_EVAL_REC_6004_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6005(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6005_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6005_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6005_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6005_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6005_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6005_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6005_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6005_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6005_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6005_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6006
#define MACROLOP_PRIVATE_EVAL_REC_6005_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6006(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6006_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6006_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6006_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6006_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6006_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6006_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6006_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6006_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6006_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6006_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6007
#define MACROLOP_PRIVATE_EVAL_REC_6006_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6007(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6007_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6007_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6007_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6007_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6007_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6007_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6007_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6007_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6007_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6007_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6008
#define MACROLOP_PRIVATE_EVAL_REC_6007_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6008(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6008_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6008_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6008_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6008_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6008_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6008_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6008_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6008_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6008_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6008_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6009
#define MACROLOP_PRIVATE_EVAL_REC_6008_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6009(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6009_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6009_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6009_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6009_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6009_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6009_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6009_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6009_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6009_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6009_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6010
#define MACROLOP_PRIVATE_EVAL_REC_6009_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6010(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6010_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6010_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6010_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6010_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6010_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6010_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6010_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6010_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6010_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6010_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6011
#define MACROLOP_PRIVATE_EVAL_REC_6010_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6011(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6011_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6011_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6011_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6011_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6011_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6011_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6011_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6011_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6011_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6011_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6012
#define MACROLOP_PRIVATE_EVAL_REC_6011_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6012(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6012_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6012_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6012_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6012_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6012_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6012_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6012_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6012_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6012_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6012_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6013
#define MACROLOP_PRIVATE_EVAL_REC_6012_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6013(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6013_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6013_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6013_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6013_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6013_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6013_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6013_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6013_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6013_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6013_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6014
#define MACROLOP_PRIVATE_EVAL_REC_6013_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6014(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6014_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6014_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6014_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6014_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6014_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6014_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6014_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6014_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6014_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6014_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6015
#define MACROLOP_PRIVATE_EVAL_REC_6014_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6015(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6015_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6015_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6015_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6015_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6015_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6015_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6015_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6015_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6015_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6015_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6016
#define MACROLOP_PRIVATE_EVAL_REC_6015_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6016(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6016_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6016_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6016_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6016_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6016_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6016_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6016_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6016_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6016_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6016_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6017
#define MACROLOP_PRIVATE_EVAL_REC_6016_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6017(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6017_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6017_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6017_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6017_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6017_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6017_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6017_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6017_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6017_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6017_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6018
#define MACROLOP_PRIVATE_EVAL_REC_6017_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6018(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6018_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6018_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6018_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6018_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6018_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6018_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6018_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6018_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6018_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6018_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6019
#define MACROLOP_PRIVATE_EVAL_REC_6018_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6019(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6019_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6019_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6019_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6019_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6019_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6019_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6019_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6019_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6019_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6019_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6020
#define MACROLOP_PRIVATE_EVAL_REC_6019_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6020(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6020_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6020_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6020_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6020_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6020_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6020_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6020_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6020_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6020_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6020_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6021
#define MACROLOP_PRIVATE_EVAL_REC_6020_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6021(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6021_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6021_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6021_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6021_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6021_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6021_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6021_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6021_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6021_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6021_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6022
#define MACROLOP_PRIVATE_EVAL_REC_6021_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6022(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6022_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6022_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6022_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6022_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6022_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6022_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6022_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6022_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6022_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6022_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6023
#define MACROLOP_PRIVATE_EVAL_REC_6022_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6023(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6023_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6023_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6023_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6023_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6023_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6023_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6023_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6023_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6023_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6023_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6024
#define MACROLOP_PRIVATE_EVAL_REC_6023_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6024(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6024_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6024_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6024_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6024_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6024_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6024_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6024_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6024_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6024_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6024_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6025
#define MACROLOP_PRIVATE_EVAL_REC_6024_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6025(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6025_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6025_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6025_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6025_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6025_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6025_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6025_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6025_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6025_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6025_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6026
#define MACROLOP_PRIVATE_EVAL_REC_6025_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6026(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6026_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6026_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6026_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6026_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6026_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6026_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6026_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6026_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6026_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6026_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6027
#define MACROLOP_PRIVATE_EVAL_REC_6026_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6027(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6027_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6027_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6027_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6027_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6027_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6027_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6027_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6027_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6027_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6027_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6028
#define MACROLOP_PRIVATE_EVAL_REC_6027_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6028(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6028_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6028_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6028_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6028_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6028_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6028_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6028_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6028_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6028_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6028_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6029
#define MACROLOP_PRIVATE_EVAL_REC_6028_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6029(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6029_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6029_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6029_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6029_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6029_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6029_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6029_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6029_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6029_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6029_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6030
#define MACROLOP_PRIVATE_EVAL_REC_6029_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6030(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6030_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6030_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6030_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6030_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6030_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6030_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6030_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6030_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6030_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6030_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6031
#define MACROLOP_PRIVATE_EVAL_REC_6030_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6031(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6031_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6031_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6031_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6031_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6031_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6031_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6031_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6031_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6031_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6031_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6032
#define MACROLOP_PRIVATE_EVAL_REC_6031_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6032(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6032_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6032_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6032_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6032_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6032_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6032_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6032_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6032_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6032_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6032_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6033
#define MACROLOP_PRIVATE_EVAL_REC_6032_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6033(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6033_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6033_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6033_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6033_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6033_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6033_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6033_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6033_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6033_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6033_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6034
#define MACROLOP_PRIVATE_EVAL_REC_6033_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6034(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6034_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6034_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6034_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6034_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6034_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6034_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6034_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6034_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6034_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6034_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6035
#define MACROLOP_PRIVATE_EVAL_REC_6034_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6035(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6035_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6035_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6035_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6035_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6035_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6035_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6035_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6035_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6035_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6035_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6036
#define MACROLOP_PRIVATE_EVAL_REC_6035_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6036(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6036_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6036_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6036_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6036_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6036_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6036_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6036_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6036_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6036_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6036_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6037
#define MACROLOP_PRIVATE_EVAL_REC_6036_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6037(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6037_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6037_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6037_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6037_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6037_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6037_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6037_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6037_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6037_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6037_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6038
#define MACROLOP_PRIVATE_EVAL_REC_6037_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6038(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6038_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6038_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6038_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6038_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6038_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6038_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6038_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6038_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6038_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6038_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6039
#define MACROLOP_PRIVATE_EVAL_REC_6038_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6039(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6039_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6039_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6039_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6039_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6039_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6039_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6039_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6039_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6039_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6039_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6040
#define MACROLOP_PRIVATE_EVAL_REC_6039_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6040(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6040_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6040_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6040_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6040_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6040_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6040_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6040_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6040_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6040_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6040_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6041
#define MACROLOP_PRIVATE_EVAL_REC_6040_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6041(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6041_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6041_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6041_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6041_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6041_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6041_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6041_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6041_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6041_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6041_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6042
#define MACROLOP_PRIVATE_EVAL_REC_6041_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6042(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6042_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6042_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6042_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6042_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6042_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6042_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6042_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6042_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6042_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6042_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6043
#define MACROLOP_PRIVATE_EVAL_REC_6042_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6043(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6043_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6043_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6043_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6043_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6043_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6043_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6043_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6043_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6043_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6043_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6044
#define MACROLOP_PRIVATE_EVAL_REC_6043_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6044(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6044_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6044_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6044_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6044_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6044_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6044_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6044_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6044_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6044_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6044_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6045
#define MACROLOP_PRIVATE_EVAL_REC_6044_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6045(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6045_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6045_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6045_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6045_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6045_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6045_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6045_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6045_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6045_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6045_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6046
#define MACROLOP_PRIVATE_EVAL_REC_6045_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6046(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6046_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6046_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6046_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6046_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6046_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6046_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6046_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6046_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6046_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6046_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6047
#define MACROLOP_PRIVATE_EVAL_REC_6046_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6047(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6047_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6047_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6047_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6047_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6047_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6047_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6047_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6047_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6047_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6047_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6048
#define MACROLOP_PRIVATE_EVAL_REC_6047_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6048(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6048_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6048_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6048_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6048_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6048_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6048_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6048_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6048_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6048_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6048_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6049
#define MACROLOP_PRIVATE_EVAL_REC_6048_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6049(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6049_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6049_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6049_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6049_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6049_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6049_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6049_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6049_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6049_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6049_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6050
#define MACROLOP_PRIVATE_EVAL_REC_6049_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6050(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6050_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6050_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6050_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6050_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6050_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6050_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6050_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6050_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6050_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6050_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6051
#define MACROLOP_PRIVATE_EVAL_REC_6050_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6051(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6051_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6051_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6051_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6051_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6051_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6051_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6051_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6051_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6051_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6051_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6052
#define MACROLOP_PRIVATE_EVAL_REC_6051_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6052(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6052_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6052_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6052_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6052_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6052_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6052_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6052_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6052_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6052_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6052_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6053
#define MACROLOP_PRIVATE_EVAL_REC_6052_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6053(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6053_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6053_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6053_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6053_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6053_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6053_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6053_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6053_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6053_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6053_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6054
#define MACROLOP_PRIVATE_EVAL_REC_6053_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6054(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6054_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6054_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6054_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6054_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6054_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6054_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6054_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6054_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6054_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6054_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6055
#define MACROLOP_PRIVATE_EVAL_REC_6054_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6055(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6055_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6055_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6055_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6055_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6055_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6055_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6055_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6055_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6055_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6055_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6056
#define MACROLOP_PRIVATE_EVAL_REC_6055_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6056(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6056_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6056_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6056_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6056_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6056_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6056_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6056_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6056_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6056_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6056_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6057
#define MACROLOP_PRIVATE_EVAL_REC_6056_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6057(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6057_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6057_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6057_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6057_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6057_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6057_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6057_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6057_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6057_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6057_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6058
#define MACROLOP_PRIVATE_EVAL_REC_6057_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6058(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6058_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6058_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6058_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6058_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6058_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6058_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6058_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6058_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6058_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6058_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6059
#define MACROLOP_PRIVATE_EVAL_REC_6058_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6059(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6059_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6059_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6059_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6059_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6059_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6059_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6059_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6059_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6059_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6059_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6060
#define MACROLOP_PRIVATE_EVAL_REC_6059_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6060(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6060_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6060_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6060_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6060_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6060_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6060_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6060_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6060_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6060_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6060_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6061
#define MACROLOP_PRIVATE_EVAL_REC_6060_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6061(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6061_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6061_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6061_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6061_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6061_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6061_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6061_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6061_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6061_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6061_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6062
#define MACROLOP_PRIVATE_EVAL_REC_6061_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6062(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6062_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6062_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6062_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6062_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6062_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6062_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6062_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6062_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6062_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6062_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6063
#define MACROLOP_PRIVATE_EVAL_REC_6062_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6063(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6063_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6063_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6063_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6063_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6063_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6063_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6063_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6063_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6063_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6063_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6064
#define MACROLOP_PRIVATE_EVAL_REC_6063_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6064(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6064_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6064_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6064_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6064_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6064_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6064_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6064_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6064_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6064_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6064_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6065
#define MACROLOP_PRIVATE_EVAL_REC_6064_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6065(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6065_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6065_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6065_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6065_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6065_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6065_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6065_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6065_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6065_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6065_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6066
#define MACROLOP_PRIVATE_EVAL_REC_6065_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6066(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6066_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6066_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6066_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6066_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6066_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6066_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6066_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6066_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6066_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6066_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6067
#define MACROLOP_PRIVATE_EVAL_REC_6066_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6067(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6067_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6067_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6067_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6067_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6067_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6067_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6067_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6067_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6067_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6067_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6068
#define MACROLOP_PRIVATE_EVAL_REC_6067_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6068(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6068_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6068_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6068_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6068_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6068_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6068_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6068_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6068_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6068_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6068_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6069
#define MACROLOP_PRIVATE_EVAL_REC_6068_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6069(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6069_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6069_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6069_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6069_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6069_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6069_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6069_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6069_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6069_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6069_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6070
#define MACROLOP_PRIVATE_EVAL_REC_6069_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6070(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6070_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6070_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6070_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6070_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6070_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6070_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6070_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6070_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6070_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6070_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6071
#define MACROLOP_PRIVATE_EVAL_REC_6070_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6071(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6071_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6071_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6071_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6071_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6071_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6071_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6071_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6071_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6071_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6071_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6072
#define MACROLOP_PRIVATE_EVAL_REC_6071_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6072(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6072_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6072_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6072_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6072_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6072_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6072_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6072_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6072_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6072_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6072_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6073
#define MACROLOP_PRIVATE_EVAL_REC_6072_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6073(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6073_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6073_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6073_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6073_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6073_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6073_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6073_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6073_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6073_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6073_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6074
#define MACROLOP_PRIVATE_EVAL_REC_6073_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6074(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6074_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6074_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6074_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6074_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6074_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6074_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6074_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6074_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6074_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6074_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6075
#define MACROLOP_PRIVATE_EVAL_REC_6074_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6075(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6075_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6075_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6075_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6075_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6075_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6075_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6075_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6075_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6075_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6075_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6076
#define MACROLOP_PRIVATE_EVAL_REC_6075_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6076(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6076_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6076_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6076_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6076_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6076_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6076_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6076_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6076_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6076_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6076_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6077
#define MACROLOP_PRIVATE_EVAL_REC_6076_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6077(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6077_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6077_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6077_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6077_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6077_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6077_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6077_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6077_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6077_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6077_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6078
#define MACROLOP_PRIVATE_EVAL_REC_6077_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6078(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6078_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6078_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6078_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6078_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6078_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6078_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6078_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6078_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6078_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6078_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6079
#define MACROLOP_PRIVATE_EVAL_REC_6078_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6079(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6079_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6079_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6079_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6079_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6079_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6079_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6079_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6079_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6079_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6079_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6080
#define MACROLOP_PRIVATE_EVAL_REC_6079_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6080(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6080_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6080_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6080_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6080_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6080_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6080_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6080_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6080_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6080_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6080_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6081
#define MACROLOP_PRIVATE_EVAL_REC_6080_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6081(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6081_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6081_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6081_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6081_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6081_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6081_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6081_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6081_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6081_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6081_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6082
#define MACROLOP_PRIVATE_EVAL_REC_6081_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6082(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6082_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6082_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6082_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6082_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6082_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6082_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6082_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6082_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6082_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6082_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6083
#define MACROLOP_PRIVATE_EVAL_REC_6082_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6083(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6083_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6083_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6083_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6083_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6083_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6083_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6083_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6083_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6083_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6083_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6084
#define MACROLOP_PRIVATE_EVAL_REC_6083_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6084(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6084_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6084_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6084_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6084_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6084_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6084_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6084_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6084_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6084_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6084_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6085
#define MACROLOP_PRIVATE_EVAL_REC_6084_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6085(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6085_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6085_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6085_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6085_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6085_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6085_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6085_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6085_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6085_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6085_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6086
#define MACROLOP_PRIVATE_EVAL_REC_6085_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6086(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6086_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6086_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6086_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6086_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6086_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6086_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6086_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6086_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6086_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6086_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6087
#define MACROLOP_PRIVATE_EVAL_REC_6086_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6087(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6087_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6087_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6087_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6087_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6087_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6087_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6087_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6087_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6087_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6087_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6088
#define MACROLOP_PRIVATE_EVAL_REC_6087_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6088(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6088_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6088_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6088_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6088_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6088_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6088_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6088_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6088_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6088_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6088_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6089
#define MACROLOP_PRIVATE_EVAL_REC_6088_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6089(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6089_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6089_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6089_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6089_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6089_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6089_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6089_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6089_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6089_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6089_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6090
#define MACROLOP_PRIVATE_EVAL_REC_6089_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6090(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6090_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6090_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6090_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6090_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6090_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6090_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6090_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6090_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6090_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6090_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6091
#define MACROLOP_PRIVATE_EVAL_REC_6090_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6091(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6091_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6091_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6091_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6091_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6091_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6091_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6091_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6091_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6091_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6091_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6092
#define MACROLOP_PRIVATE_EVAL_REC_6091_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6092(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6092_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6092_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6092_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6092_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6092_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6092_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6092_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6092_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6092_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6092_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6093
#define MACROLOP_PRIVATE_EVAL_REC_6092_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6093(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6093_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6093_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6093_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6093_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6093_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6093_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6093_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6093_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6093_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6093_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6094
#define MACROLOP_PRIVATE_EVAL_REC_6093_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6094(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6094_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6094_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6094_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6094_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6094_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6094_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6094_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6094_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6094_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6094_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6095
#define MACROLOP_PRIVATE_EVAL_REC_6094_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6095(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6095_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6095_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6095_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6095_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6095_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6095_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6095_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6095_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6095_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6095_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6096
#define MACROLOP_PRIVATE_EVAL_REC_6095_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6096(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6096_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6096_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6096_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6096_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6096_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6096_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6096_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6096_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6096_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6096_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6097
#define MACROLOP_PRIVATE_EVAL_REC_6096_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6097(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6097_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6097_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6097_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6097_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6097_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6097_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6097_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6097_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6097_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6097_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6098
#define MACROLOP_PRIVATE_EVAL_REC_6097_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6098(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6098_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6098_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6098_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6098_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6098_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6098_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6098_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6098_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6098_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6098_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6099
#define MACROLOP_PRIVATE_EVAL_REC_6098_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6099(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6099_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6099_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6099_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6099_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6099_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6099_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6099_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6099_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6099_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6099_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6100
#define MACROLOP_PRIVATE_EVAL_REC_6099_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6100(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6100_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6100_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6100_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6100_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6100_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6100_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6100_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6100_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6100_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6100_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6101
#define MACROLOP_PRIVATE_EVAL_REC_6100_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6101(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6101_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6101_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6101_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6101_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6101_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6101_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6101_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6101_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6101_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6101_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6102
#define MACROLOP_PRIVATE_EVAL_REC_6101_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6102(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6102_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6102_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6102_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6102_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6102_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6102_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6102_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6102_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6102_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6102_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6103
#define MACROLOP_PRIVATE_EVAL_REC_6102_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6103(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6103_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6103_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6103_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6103_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6103_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6103_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6103_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6103_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6103_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6103_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6104
#define MACROLOP_PRIVATE_EVAL_REC_6103_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6104(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6104_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6104_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6104_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6104_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6104_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6104_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6104_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6104_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6104_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6104_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6105
#define MACROLOP_PRIVATE_EVAL_REC_6104_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6105(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6105_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6105_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6105_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6105_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6105_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6105_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6105_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6105_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6105_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6105_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6106
#define MACROLOP_PRIVATE_EVAL_REC_6105_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6106(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6106_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6106_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6106_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6106_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6106_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6106_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6106_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6106_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6106_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6106_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6107
#define MACROLOP_PRIVATE_EVAL_REC_6106_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6107(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6107_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6107_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6107_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6107_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6107_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6107_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6107_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6107_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6107_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6107_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6108
#define MACROLOP_PRIVATE_EVAL_REC_6107_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6108(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6108_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6108_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6108_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6108_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6108_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6108_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6108_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6108_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6108_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6108_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6109
#define MACROLOP_PRIVATE_EVAL_REC_6108_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6109(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6109_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6109_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6109_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6109_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6109_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6109_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6109_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6109_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6109_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6109_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6110
#define MACROLOP_PRIVATE_EVAL_REC_6109_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6110(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6110_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6110_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6110_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6110_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6110_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6110_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6110_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6110_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6110_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6110_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6111
#define MACROLOP_PRIVATE_EVAL_REC_6110_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6111(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6111_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6111_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6111_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6111_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6111_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6111_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6111_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6111_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6111_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6111_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6112
#define MACROLOP_PRIVATE_EVAL_REC_6111_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6112(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6112_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6112_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6112_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6112_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6112_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6112_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6112_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6112_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6112_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6112_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6113
#define MACROLOP_PRIVATE_EVAL_REC_6112_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6113(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6113_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6113_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6113_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6113_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6113_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6113_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6113_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6113_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6113_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6113_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6114
#define MACROLOP_PRIVATE_EVAL_REC_6113_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6114(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6114_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6114_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6114_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6114_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6114_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6114_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6114_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6114_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6114_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6114_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6115
#define MACROLOP_PRIVATE_EVAL_REC_6114_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6115(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6115_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6115_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6115_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6115_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6115_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6115_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6115_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6115_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6115_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6115_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6116
#define MACROLOP_PRIVATE_EVAL_REC_6115_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6116(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6116_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6116_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6116_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6116_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6116_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6116_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6116_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6116_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6116_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6116_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6117
#define MACROLOP_PRIVATE_EVAL_REC_6116_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6117(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6117_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6117_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6117_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6117_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6117_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6117_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6117_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6117_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6117_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6117_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6118
#define MACROLOP_PRIVATE_EVAL_REC_6117_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6118(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6118_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6118_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6118_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6118_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6118_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6118_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6118_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6118_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6118_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6118_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6119
#define MACROLOP_PRIVATE_EVAL_REC_6118_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6119(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6119_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6119_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6119_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6119_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6119_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6119_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6119_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6119_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6119_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6119_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6120
#define MACROLOP_PRIVATE_EVAL_REC_6119_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6120(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6120_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6120_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6120_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6120_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6120_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6120_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6120_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6120_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6120_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6120_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6121
#define MACROLOP_PRIVATE_EVAL_REC_6120_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6121(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6121_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6121_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6121_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6121_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6121_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6121_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6121_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6121_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6121_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6121_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6122
#define MACROLOP_PRIVATE_EVAL_REC_6121_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6122(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6122_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6122_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6122_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6122_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6122_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6122_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6122_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6122_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6122_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6122_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6123
#define MACROLOP_PRIVATE_EVAL_REC_6122_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6123(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6123_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6123_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6123_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6123_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6123_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6123_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6123_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6123_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6123_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6123_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6124
#define MACROLOP_PRIVATE_EVAL_REC_6123_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6124(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6124_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6124_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6124_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6124_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6124_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6124_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6124_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6124_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6124_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6124_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6125
#define MACROLOP_PRIVATE_EVAL_REC_6124_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6125(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6125_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6125_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6125_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6125_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6125_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6125_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6125_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6125_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6125_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6125_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6126
#define MACROLOP_PRIVATE_EVAL_REC_6125_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6126(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6126_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6126_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6126_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6126_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6126_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6126_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6126_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6126_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6126_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6126_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6127
#define MACROLOP_PRIVATE_EVAL_REC_6126_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6127(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6127_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6127_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6127_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6127_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6127_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6127_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6127_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6127_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6127_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6127_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6128
#define MACROLOP_PRIVATE_EVAL_REC_6127_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6128(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6128_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6128_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6128_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6128_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6128_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6128_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6128_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6128_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6128_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6128_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6129
#define MACROLOP_PRIVATE_EVAL_REC_6128_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6129(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6129_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6129_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6129_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6129_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6129_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6129_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6129_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6129_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6129_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6129_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6130
#define MACROLOP_PRIVATE_EVAL_REC_6129_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6130(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6130_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6130_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6130_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6130_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6130_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6130_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6130_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6130_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6130_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6130_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6131
#define MACROLOP_PRIVATE_EVAL_REC_6130_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6131(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6131_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6131_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6131_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6131_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6131_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6131_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6131_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6131_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6131_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6131_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6132
#define MACROLOP_PRIVATE_EVAL_REC_6131_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6132(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6132_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6132_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6132_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6132_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6132_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6132_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6132_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6132_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6132_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6132_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6133
#define MACROLOP_PRIVATE_EVAL_REC_6132_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6133(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6133_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6133_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6133_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6133_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6133_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6133_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6133_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6133_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6133_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6133_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6134
#define MACROLOP_PRIVATE_EVAL_REC_6133_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6134(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6134_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6134_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6134_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6134_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6134_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6134_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6134_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6134_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6134_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6134_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6135
#define MACROLOP_PRIVATE_EVAL_REC_6134_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6135(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6135_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6135_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6135_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6135_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6135_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6135_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6135_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6135_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6135_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6135_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6136
#define MACROLOP_PRIVATE_EVAL_REC_6135_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6136(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6136_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6136_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6136_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6136_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6136_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6136_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6136_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6136_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6136_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6136_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6137
#define MACROLOP_PRIVATE_EVAL_REC_6136_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6137(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6137_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6137_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6137_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6137_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6137_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6137_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6137_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6137_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6137_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6137_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6138
#define MACROLOP_PRIVATE_EVAL_REC_6137_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6138(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6138_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6138_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6138_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6138_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6138_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6138_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6138_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6138_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6138_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6138_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6139
#define MACROLOP_PRIVATE_EVAL_REC_6138_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6139(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6139_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6139_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6139_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6139_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6139_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6139_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6139_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6139_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6139_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6139_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6140
#define MACROLOP_PRIVATE_EVAL_REC_6139_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6140(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6140_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6140_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6140_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6140_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6140_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6140_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6140_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6140_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6140_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6140_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6141
#define MACROLOP_PRIVATE_EVAL_REC_6140_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6141(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6141_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6141_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6141_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6141_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6141_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6141_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6141_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6141_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6141_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6141_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6142
#define MACROLOP_PRIVATE_EVAL_REC_6141_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6142(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6142_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6142_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6142_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6142_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6142_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6142_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6142_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6142_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6142_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6142_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6143
#define MACROLOP_PRIVATE_EVAL_REC_6142_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_6143(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_6143_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_6143_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_6143_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_6143_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_6143_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_6143_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_6143_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_6143_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_6143_##choice
#define MACROLOP_PRIVATE_EVAL_REC_6143_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_6144
#define MACROLOP_PRIVATE_EVAL_REC_6143_STOP(...) __VA_ARGS__

#endif // MACROLOP_EVAL_REC_UNROLL_5120_TO_6143_H
