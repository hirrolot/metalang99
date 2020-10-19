#ifndef MACROLOP_EVAL_REC_UNROLL_4096_TO_5119_H
#define MACROLOP_EVAL_REC_UNROLL_4096_TO_5119_H

#define MACROLOP_PRIVATE_EVAL_REC_4096(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4096_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4096_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4096_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4096_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4096_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4096_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4096_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4096_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4096_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4096_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4097
#define MACROLOP_PRIVATE_EVAL_REC_4096_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4097(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4097_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4097_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4097_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4097_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4097_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4097_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4097_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4097_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4097_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4097_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4098
#define MACROLOP_PRIVATE_EVAL_REC_4097_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4098(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4098_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4098_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4098_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4098_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4098_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4098_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4098_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4098_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4098_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4098_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4099
#define MACROLOP_PRIVATE_EVAL_REC_4098_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4099(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4099_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4099_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4099_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4099_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4099_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4099_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4099_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4099_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4099_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4099_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4100
#define MACROLOP_PRIVATE_EVAL_REC_4099_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4100(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4100_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4100_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4100_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4100_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4100_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4100_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4100_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4100_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4100_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4100_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4101
#define MACROLOP_PRIVATE_EVAL_REC_4100_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4101(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4101_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4101_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4101_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4101_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4101_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4101_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4101_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4101_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4101_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4101_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4102
#define MACROLOP_PRIVATE_EVAL_REC_4101_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4102(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4102_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4102_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4102_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4102_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4102_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4102_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4102_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4102_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4102_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4102_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4103
#define MACROLOP_PRIVATE_EVAL_REC_4102_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4103(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4103_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4103_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4103_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4103_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4103_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4103_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4103_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4103_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4103_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4103_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4104
#define MACROLOP_PRIVATE_EVAL_REC_4103_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4104(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4104_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4104_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4104_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4104_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4104_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4104_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4104_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4104_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4104_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4104_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4105
#define MACROLOP_PRIVATE_EVAL_REC_4104_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4105(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4105_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4105_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4105_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4105_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4105_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4105_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4105_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4105_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4105_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4105_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4106
#define MACROLOP_PRIVATE_EVAL_REC_4105_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4106(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4106_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4106_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4106_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4106_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4106_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4106_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4106_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4106_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4106_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4106_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4107
#define MACROLOP_PRIVATE_EVAL_REC_4106_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4107(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4107_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4107_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4107_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4107_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4107_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4107_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4107_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4107_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4107_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4107_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4108
#define MACROLOP_PRIVATE_EVAL_REC_4107_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4108(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4108_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4108_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4108_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4108_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4108_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4108_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4108_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4108_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4108_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4108_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4109
#define MACROLOP_PRIVATE_EVAL_REC_4108_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4109(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4109_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4109_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4109_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4109_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4109_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4109_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4109_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4109_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4109_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4109_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4110
#define MACROLOP_PRIVATE_EVAL_REC_4109_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4110(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4110_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4110_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4110_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4110_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4110_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4110_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4110_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4110_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4110_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4110_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4111
#define MACROLOP_PRIVATE_EVAL_REC_4110_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4111(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4111_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4111_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4111_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4111_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4111_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4111_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4111_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4111_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4111_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4111_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4112
#define MACROLOP_PRIVATE_EVAL_REC_4111_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4112(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4112_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4112_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4112_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4112_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4112_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4112_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4112_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4112_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4112_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4112_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4113
#define MACROLOP_PRIVATE_EVAL_REC_4112_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4113(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4113_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4113_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4113_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4113_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4113_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4113_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4113_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4113_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4113_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4113_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4114
#define MACROLOP_PRIVATE_EVAL_REC_4113_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4114(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4114_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4114_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4114_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4114_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4114_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4114_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4114_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4114_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4114_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4114_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4115
#define MACROLOP_PRIVATE_EVAL_REC_4114_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4115(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4115_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4115_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4115_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4115_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4115_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4115_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4115_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4115_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4115_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4115_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4116
#define MACROLOP_PRIVATE_EVAL_REC_4115_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4116(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4116_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4116_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4116_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4116_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4116_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4116_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4116_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4116_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4116_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4116_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4117
#define MACROLOP_PRIVATE_EVAL_REC_4116_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4117(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4117_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4117_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4117_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4117_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4117_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4117_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4117_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4117_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4117_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4117_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4118
#define MACROLOP_PRIVATE_EVAL_REC_4117_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4118(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4118_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4118_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4118_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4118_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4118_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4118_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4118_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4118_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4118_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4118_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4119
#define MACROLOP_PRIVATE_EVAL_REC_4118_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4119(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4119_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4119_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4119_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4119_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4119_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4119_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4119_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4119_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4119_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4119_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4120
#define MACROLOP_PRIVATE_EVAL_REC_4119_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4120(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4120_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4120_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4120_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4120_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4120_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4120_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4120_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4120_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4120_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4120_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4121
#define MACROLOP_PRIVATE_EVAL_REC_4120_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4121(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4121_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4121_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4121_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4121_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4121_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4121_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4121_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4121_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4121_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4121_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4122
#define MACROLOP_PRIVATE_EVAL_REC_4121_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4122(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4122_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4122_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4122_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4122_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4122_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4122_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4122_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4122_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4122_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4122_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4123
#define MACROLOP_PRIVATE_EVAL_REC_4122_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4123(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4123_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4123_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4123_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4123_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4123_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4123_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4123_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4123_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4123_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4123_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4124
#define MACROLOP_PRIVATE_EVAL_REC_4123_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4124(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4124_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4124_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4124_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4124_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4124_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4124_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4124_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4124_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4124_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4124_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4125
#define MACROLOP_PRIVATE_EVAL_REC_4124_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4125(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4125_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4125_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4125_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4125_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4125_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4125_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4125_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4125_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4125_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4125_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4126
#define MACROLOP_PRIVATE_EVAL_REC_4125_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4126(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4126_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4126_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4126_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4126_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4126_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4126_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4126_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4126_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4126_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4126_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4127
#define MACROLOP_PRIVATE_EVAL_REC_4126_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4127(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4127_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4127_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4127_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4127_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4127_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4127_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4127_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4127_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4127_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4127_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4128
#define MACROLOP_PRIVATE_EVAL_REC_4127_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4128(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4128_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4128_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4128_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4128_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4128_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4128_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4128_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4128_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4128_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4128_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4129
#define MACROLOP_PRIVATE_EVAL_REC_4128_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4129(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4129_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4129_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4129_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4129_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4129_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4129_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4129_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4129_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4129_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4129_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4130
#define MACROLOP_PRIVATE_EVAL_REC_4129_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4130(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4130_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4130_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4130_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4130_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4130_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4130_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4130_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4130_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4130_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4130_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4131
#define MACROLOP_PRIVATE_EVAL_REC_4130_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4131(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4131_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4131_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4131_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4131_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4131_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4131_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4131_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4131_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4131_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4131_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4132
#define MACROLOP_PRIVATE_EVAL_REC_4131_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4132(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4132_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4132_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4132_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4132_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4132_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4132_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4132_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4132_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4132_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4132_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4133
#define MACROLOP_PRIVATE_EVAL_REC_4132_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4133(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4133_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4133_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4133_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4133_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4133_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4133_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4133_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4133_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4133_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4133_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4134
#define MACROLOP_PRIVATE_EVAL_REC_4133_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4134(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4134_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4134_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4134_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4134_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4134_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4134_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4134_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4134_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4134_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4134_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4135
#define MACROLOP_PRIVATE_EVAL_REC_4134_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4135(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4135_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4135_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4135_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4135_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4135_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4135_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4135_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4135_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4135_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4135_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4136
#define MACROLOP_PRIVATE_EVAL_REC_4135_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4136(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4136_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4136_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4136_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4136_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4136_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4136_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4136_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4136_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4136_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4136_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4137
#define MACROLOP_PRIVATE_EVAL_REC_4136_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4137(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4137_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4137_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4137_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4137_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4137_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4137_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4137_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4137_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4137_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4137_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4138
#define MACROLOP_PRIVATE_EVAL_REC_4137_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4138(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4138_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4138_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4138_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4138_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4138_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4138_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4138_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4138_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4138_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4138_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4139
#define MACROLOP_PRIVATE_EVAL_REC_4138_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4139(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4139_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4139_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4139_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4139_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4139_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4139_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4139_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4139_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4139_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4139_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4140
#define MACROLOP_PRIVATE_EVAL_REC_4139_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4140(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4140_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4140_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4140_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4140_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4140_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4140_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4140_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4140_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4140_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4140_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4141
#define MACROLOP_PRIVATE_EVAL_REC_4140_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4141(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4141_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4141_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4141_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4141_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4141_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4141_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4141_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4141_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4141_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4141_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4142
#define MACROLOP_PRIVATE_EVAL_REC_4141_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4142(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4142_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4142_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4142_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4142_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4142_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4142_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4142_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4142_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4142_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4142_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4143
#define MACROLOP_PRIVATE_EVAL_REC_4142_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4143(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4143_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4143_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4143_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4143_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4143_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4143_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4143_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4143_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4143_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4143_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4144
#define MACROLOP_PRIVATE_EVAL_REC_4143_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4144(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4144_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4144_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4144_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4144_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4144_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4144_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4144_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4144_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4144_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4144_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4145
#define MACROLOP_PRIVATE_EVAL_REC_4144_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4145(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4145_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4145_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4145_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4145_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4145_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4145_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4145_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4145_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4145_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4145_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4146
#define MACROLOP_PRIVATE_EVAL_REC_4145_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4146(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4146_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4146_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4146_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4146_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4146_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4146_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4146_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4146_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4146_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4146_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4147
#define MACROLOP_PRIVATE_EVAL_REC_4146_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4147(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4147_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4147_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4147_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4147_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4147_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4147_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4147_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4147_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4147_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4147_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4148
#define MACROLOP_PRIVATE_EVAL_REC_4147_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4148(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4148_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4148_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4148_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4148_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4148_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4148_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4148_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4148_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4148_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4148_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4149
#define MACROLOP_PRIVATE_EVAL_REC_4148_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4149(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4149_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4149_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4149_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4149_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4149_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4149_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4149_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4149_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4149_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4149_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4150
#define MACROLOP_PRIVATE_EVAL_REC_4149_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4150(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4150_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4150_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4150_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4150_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4150_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4150_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4150_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4150_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4150_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4150_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4151
#define MACROLOP_PRIVATE_EVAL_REC_4150_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4151(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4151_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4151_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4151_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4151_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4151_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4151_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4151_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4151_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4151_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4151_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4152
#define MACROLOP_PRIVATE_EVAL_REC_4151_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4152(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4152_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4152_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4152_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4152_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4152_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4152_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4152_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4152_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4152_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4152_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4153
#define MACROLOP_PRIVATE_EVAL_REC_4152_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4153(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4153_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4153_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4153_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4153_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4153_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4153_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4153_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4153_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4153_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4153_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4154
#define MACROLOP_PRIVATE_EVAL_REC_4153_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4154(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4154_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4154_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4154_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4154_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4154_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4154_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4154_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4154_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4154_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4154_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4155
#define MACROLOP_PRIVATE_EVAL_REC_4154_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4155(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4155_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4155_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4155_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4155_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4155_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4155_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4155_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4155_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4155_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4155_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4156
#define MACROLOP_PRIVATE_EVAL_REC_4155_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4156(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4156_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4156_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4156_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4156_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4156_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4156_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4156_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4156_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4156_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4156_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4157
#define MACROLOP_PRIVATE_EVAL_REC_4156_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4157(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4157_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4157_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4157_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4157_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4157_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4157_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4157_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4157_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4157_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4157_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4158
#define MACROLOP_PRIVATE_EVAL_REC_4157_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4158(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4158_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4158_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4158_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4158_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4158_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4158_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4158_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4158_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4158_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4158_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4159
#define MACROLOP_PRIVATE_EVAL_REC_4158_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4159(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4159_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4159_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4159_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4159_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4159_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4159_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4159_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4159_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4159_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4159_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4160
#define MACROLOP_PRIVATE_EVAL_REC_4159_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4160(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4160_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4160_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4160_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4160_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4160_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4160_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4160_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4160_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4160_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4160_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4161
#define MACROLOP_PRIVATE_EVAL_REC_4160_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4161(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4161_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4161_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4161_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4161_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4161_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4161_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4161_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4161_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4161_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4161_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4162
#define MACROLOP_PRIVATE_EVAL_REC_4161_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4162(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4162_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4162_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4162_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4162_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4162_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4162_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4162_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4162_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4162_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4162_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4163
#define MACROLOP_PRIVATE_EVAL_REC_4162_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4163(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4163_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4163_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4163_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4163_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4163_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4163_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4163_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4163_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4163_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4163_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4164
#define MACROLOP_PRIVATE_EVAL_REC_4163_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4164(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4164_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4164_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4164_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4164_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4164_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4164_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4164_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4164_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4164_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4164_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4165
#define MACROLOP_PRIVATE_EVAL_REC_4164_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4165(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4165_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4165_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4165_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4165_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4165_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4165_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4165_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4165_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4165_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4165_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4166
#define MACROLOP_PRIVATE_EVAL_REC_4165_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4166(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4166_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4166_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4166_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4166_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4166_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4166_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4166_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4166_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4166_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4166_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4167
#define MACROLOP_PRIVATE_EVAL_REC_4166_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4167(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4167_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4167_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4167_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4167_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4167_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4167_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4167_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4167_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4167_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4167_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4168
#define MACROLOP_PRIVATE_EVAL_REC_4167_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4168(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4168_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4168_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4168_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4168_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4168_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4168_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4168_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4168_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4168_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4168_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4169
#define MACROLOP_PRIVATE_EVAL_REC_4168_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4169(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4169_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4169_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4169_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4169_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4169_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4169_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4169_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4169_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4169_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4169_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4170
#define MACROLOP_PRIVATE_EVAL_REC_4169_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4170(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4170_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4170_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4170_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4170_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4170_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4170_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4170_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4170_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4170_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4170_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4171
#define MACROLOP_PRIVATE_EVAL_REC_4170_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4171(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4171_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4171_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4171_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4171_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4171_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4171_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4171_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4171_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4171_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4171_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4172
#define MACROLOP_PRIVATE_EVAL_REC_4171_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4172(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4172_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4172_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4172_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4172_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4172_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4172_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4172_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4172_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4172_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4172_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4173
#define MACROLOP_PRIVATE_EVAL_REC_4172_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4173(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4173_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4173_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4173_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4173_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4173_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4173_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4173_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4173_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4173_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4173_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4174
#define MACROLOP_PRIVATE_EVAL_REC_4173_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4174(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4174_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4174_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4174_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4174_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4174_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4174_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4174_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4174_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4174_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4174_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4175
#define MACROLOP_PRIVATE_EVAL_REC_4174_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4175(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4175_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4175_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4175_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4175_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4175_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4175_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4175_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4175_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4175_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4175_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4176
#define MACROLOP_PRIVATE_EVAL_REC_4175_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4176(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4176_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4176_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4176_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4176_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4176_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4176_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4176_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4176_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4176_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4176_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4177
#define MACROLOP_PRIVATE_EVAL_REC_4176_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4177(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4177_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4177_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4177_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4177_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4177_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4177_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4177_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4177_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4177_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4177_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4178
#define MACROLOP_PRIVATE_EVAL_REC_4177_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4178(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4178_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4178_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4178_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4178_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4178_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4178_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4178_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4178_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4178_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4178_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4179
#define MACROLOP_PRIVATE_EVAL_REC_4178_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4179(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4179_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4179_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4179_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4179_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4179_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4179_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4179_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4179_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4179_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4179_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4180
#define MACROLOP_PRIVATE_EVAL_REC_4179_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4180(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4180_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4180_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4180_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4180_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4180_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4180_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4180_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4180_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4180_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4180_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4181
#define MACROLOP_PRIVATE_EVAL_REC_4180_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4181(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4181_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4181_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4181_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4181_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4181_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4181_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4181_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4181_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4181_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4181_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4182
#define MACROLOP_PRIVATE_EVAL_REC_4181_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4182(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4182_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4182_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4182_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4182_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4182_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4182_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4182_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4182_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4182_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4182_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4183
#define MACROLOP_PRIVATE_EVAL_REC_4182_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4183(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4183_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4183_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4183_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4183_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4183_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4183_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4183_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4183_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4183_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4183_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4184
#define MACROLOP_PRIVATE_EVAL_REC_4183_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4184(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4184_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4184_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4184_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4184_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4184_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4184_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4184_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4184_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4184_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4184_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4185
#define MACROLOP_PRIVATE_EVAL_REC_4184_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4185(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4185_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4185_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4185_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4185_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4185_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4185_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4185_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4185_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4185_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4185_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4186
#define MACROLOP_PRIVATE_EVAL_REC_4185_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4186(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4186_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4186_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4186_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4186_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4186_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4186_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4186_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4186_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4186_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4186_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4187
#define MACROLOP_PRIVATE_EVAL_REC_4186_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4187(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4187_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4187_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4187_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4187_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4187_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4187_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4187_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4187_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4187_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4187_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4188
#define MACROLOP_PRIVATE_EVAL_REC_4187_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4188(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4188_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4188_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4188_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4188_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4188_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4188_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4188_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4188_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4188_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4188_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4189
#define MACROLOP_PRIVATE_EVAL_REC_4188_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4189(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4189_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4189_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4189_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4189_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4189_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4189_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4189_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4189_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4189_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4189_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4190
#define MACROLOP_PRIVATE_EVAL_REC_4189_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4190(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4190_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4190_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4190_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4190_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4190_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4190_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4190_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4190_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4190_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4190_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4191
#define MACROLOP_PRIVATE_EVAL_REC_4190_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4191(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4191_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4191_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4191_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4191_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4191_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4191_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4191_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4191_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4191_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4191_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4192
#define MACROLOP_PRIVATE_EVAL_REC_4191_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4192(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4192_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4192_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4192_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4192_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4192_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4192_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4192_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4192_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4192_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4192_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4193
#define MACROLOP_PRIVATE_EVAL_REC_4192_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4193(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4193_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4193_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4193_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4193_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4193_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4193_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4193_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4193_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4193_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4193_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4194
#define MACROLOP_PRIVATE_EVAL_REC_4193_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4194(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4194_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4194_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4194_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4194_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4194_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4194_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4194_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4194_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4194_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4194_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4195
#define MACROLOP_PRIVATE_EVAL_REC_4194_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4195(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4195_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4195_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4195_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4195_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4195_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4195_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4195_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4195_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4195_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4195_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4196
#define MACROLOP_PRIVATE_EVAL_REC_4195_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4196(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4196_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4196_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4196_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4196_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4196_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4196_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4196_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4196_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4196_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4196_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4197
#define MACROLOP_PRIVATE_EVAL_REC_4196_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4197(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4197_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4197_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4197_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4197_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4197_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4197_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4197_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4197_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4197_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4197_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4198
#define MACROLOP_PRIVATE_EVAL_REC_4197_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4198(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4198_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4198_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4198_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4198_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4198_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4198_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4198_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4198_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4198_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4198_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4199
#define MACROLOP_PRIVATE_EVAL_REC_4198_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4199(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4199_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4199_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4199_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4199_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4199_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4199_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4199_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4199_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4199_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4199_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4200
#define MACROLOP_PRIVATE_EVAL_REC_4199_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4200(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4200_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4200_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4200_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4200_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4200_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4200_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4200_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4200_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4200_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4200_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4201
#define MACROLOP_PRIVATE_EVAL_REC_4200_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4201(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4201_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4201_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4201_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4201_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4201_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4201_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4201_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4201_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4201_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4201_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4202
#define MACROLOP_PRIVATE_EVAL_REC_4201_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4202(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4202_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4202_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4202_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4202_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4202_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4202_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4202_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4202_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4202_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4202_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4203
#define MACROLOP_PRIVATE_EVAL_REC_4202_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4203(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4203_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4203_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4203_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4203_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4203_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4203_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4203_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4203_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4203_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4203_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4204
#define MACROLOP_PRIVATE_EVAL_REC_4203_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4204(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4204_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4204_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4204_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4204_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4204_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4204_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4204_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4204_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4204_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4204_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4205
#define MACROLOP_PRIVATE_EVAL_REC_4204_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4205(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4205_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4205_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4205_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4205_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4205_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4205_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4205_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4205_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4205_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4205_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4206
#define MACROLOP_PRIVATE_EVAL_REC_4205_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4206(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4206_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4206_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4206_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4206_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4206_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4206_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4206_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4206_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4206_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4206_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4207
#define MACROLOP_PRIVATE_EVAL_REC_4206_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4207(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4207_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4207_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4207_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4207_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4207_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4207_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4207_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4207_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4207_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4207_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4208
#define MACROLOP_PRIVATE_EVAL_REC_4207_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4208(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4208_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4208_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4208_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4208_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4208_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4208_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4208_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4208_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4208_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4208_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4209
#define MACROLOP_PRIVATE_EVAL_REC_4208_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4209(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4209_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4209_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4209_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4209_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4209_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4209_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4209_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4209_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4209_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4209_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4210
#define MACROLOP_PRIVATE_EVAL_REC_4209_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4210(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4210_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4210_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4210_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4210_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4210_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4210_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4210_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4210_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4210_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4210_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4211
#define MACROLOP_PRIVATE_EVAL_REC_4210_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4211(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4211_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4211_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4211_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4211_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4211_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4211_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4211_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4211_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4211_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4211_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4212
#define MACROLOP_PRIVATE_EVAL_REC_4211_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4212(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4212_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4212_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4212_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4212_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4212_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4212_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4212_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4212_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4212_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4212_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4213
#define MACROLOP_PRIVATE_EVAL_REC_4212_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4213(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4213_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4213_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4213_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4213_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4213_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4213_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4213_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4213_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4213_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4213_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4214
#define MACROLOP_PRIVATE_EVAL_REC_4213_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4214(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4214_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4214_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4214_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4214_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4214_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4214_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4214_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4214_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4214_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4214_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4215
#define MACROLOP_PRIVATE_EVAL_REC_4214_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4215(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4215_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4215_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4215_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4215_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4215_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4215_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4215_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4215_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4215_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4215_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4216
#define MACROLOP_PRIVATE_EVAL_REC_4215_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4216(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4216_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4216_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4216_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4216_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4216_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4216_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4216_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4216_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4216_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4216_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4217
#define MACROLOP_PRIVATE_EVAL_REC_4216_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4217(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4217_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4217_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4217_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4217_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4217_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4217_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4217_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4217_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4217_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4217_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4218
#define MACROLOP_PRIVATE_EVAL_REC_4217_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4218(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4218_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4218_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4218_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4218_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4218_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4218_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4218_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4218_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4218_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4218_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4219
#define MACROLOP_PRIVATE_EVAL_REC_4218_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4219(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4219_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4219_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4219_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4219_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4219_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4219_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4219_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4219_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4219_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4219_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4220
#define MACROLOP_PRIVATE_EVAL_REC_4219_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4220(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4220_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4220_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4220_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4220_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4220_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4220_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4220_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4220_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4220_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4220_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4221
#define MACROLOP_PRIVATE_EVAL_REC_4220_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4221(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4221_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4221_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4221_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4221_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4221_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4221_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4221_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4221_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4221_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4221_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4222
#define MACROLOP_PRIVATE_EVAL_REC_4221_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4222(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4222_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4222_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4222_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4222_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4222_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4222_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4222_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4222_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4222_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4222_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4223
#define MACROLOP_PRIVATE_EVAL_REC_4222_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4223(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4223_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4223_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4223_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4223_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4223_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4223_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4223_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4223_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4223_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4223_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4224
#define MACROLOP_PRIVATE_EVAL_REC_4223_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4224(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4224_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4224_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4224_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4224_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4224_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4224_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4224_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4224_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4224_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4224_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4225
#define MACROLOP_PRIVATE_EVAL_REC_4224_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4225(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4225_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4225_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4225_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4225_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4225_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4225_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4225_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4225_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4225_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4225_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4226
#define MACROLOP_PRIVATE_EVAL_REC_4225_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4226(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4226_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4226_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4226_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4226_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4226_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4226_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4226_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4226_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4226_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4226_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4227
#define MACROLOP_PRIVATE_EVAL_REC_4226_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4227(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4227_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4227_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4227_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4227_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4227_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4227_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4227_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4227_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4227_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4227_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4228
#define MACROLOP_PRIVATE_EVAL_REC_4227_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4228(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4228_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4228_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4228_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4228_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4228_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4228_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4228_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4228_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4228_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4228_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4229
#define MACROLOP_PRIVATE_EVAL_REC_4228_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4229(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4229_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4229_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4229_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4229_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4229_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4229_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4229_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4229_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4229_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4229_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4230
#define MACROLOP_PRIVATE_EVAL_REC_4229_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4230(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4230_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4230_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4230_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4230_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4230_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4230_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4230_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4230_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4230_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4230_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4231
#define MACROLOP_PRIVATE_EVAL_REC_4230_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4231(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4231_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4231_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4231_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4231_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4231_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4231_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4231_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4231_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4231_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4231_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4232
#define MACROLOP_PRIVATE_EVAL_REC_4231_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4232(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4232_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4232_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4232_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4232_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4232_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4232_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4232_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4232_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4232_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4232_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4233
#define MACROLOP_PRIVATE_EVAL_REC_4232_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4233(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4233_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4233_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4233_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4233_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4233_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4233_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4233_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4233_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4233_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4233_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4234
#define MACROLOP_PRIVATE_EVAL_REC_4233_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4234(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4234_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4234_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4234_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4234_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4234_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4234_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4234_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4234_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4234_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4234_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4235
#define MACROLOP_PRIVATE_EVAL_REC_4234_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4235(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4235_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4235_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4235_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4235_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4235_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4235_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4235_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4235_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4235_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4235_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4236
#define MACROLOP_PRIVATE_EVAL_REC_4235_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4236(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4236_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4236_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4236_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4236_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4236_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4236_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4236_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4236_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4236_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4236_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4237
#define MACROLOP_PRIVATE_EVAL_REC_4236_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4237(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4237_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4237_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4237_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4237_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4237_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4237_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4237_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4237_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4237_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4237_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4238
#define MACROLOP_PRIVATE_EVAL_REC_4237_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4238(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4238_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4238_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4238_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4238_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4238_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4238_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4238_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4238_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4238_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4238_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4239
#define MACROLOP_PRIVATE_EVAL_REC_4238_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4239(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4239_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4239_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4239_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4239_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4239_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4239_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4239_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4239_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4239_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4239_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4240
#define MACROLOP_PRIVATE_EVAL_REC_4239_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4240(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4240_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4240_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4240_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4240_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4240_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4240_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4240_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4240_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4240_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4240_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4241
#define MACROLOP_PRIVATE_EVAL_REC_4240_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4241(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4241_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4241_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4241_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4241_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4241_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4241_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4241_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4241_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4241_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4241_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4242
#define MACROLOP_PRIVATE_EVAL_REC_4241_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4242(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4242_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4242_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4242_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4242_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4242_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4242_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4242_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4242_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4242_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4242_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4243
#define MACROLOP_PRIVATE_EVAL_REC_4242_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4243(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4243_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4243_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4243_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4243_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4243_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4243_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4243_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4243_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4243_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4243_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4244
#define MACROLOP_PRIVATE_EVAL_REC_4243_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4244(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4244_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4244_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4244_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4244_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4244_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4244_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4244_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4244_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4244_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4244_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4245
#define MACROLOP_PRIVATE_EVAL_REC_4244_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4245(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4245_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4245_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4245_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4245_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4245_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4245_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4245_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4245_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4245_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4245_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4246
#define MACROLOP_PRIVATE_EVAL_REC_4245_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4246(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4246_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4246_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4246_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4246_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4246_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4246_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4246_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4246_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4246_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4246_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4247
#define MACROLOP_PRIVATE_EVAL_REC_4246_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4247(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4247_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4247_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4247_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4247_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4247_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4247_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4247_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4247_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4247_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4247_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4248
#define MACROLOP_PRIVATE_EVAL_REC_4247_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4248(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4248_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4248_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4248_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4248_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4248_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4248_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4248_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4248_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4248_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4248_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4249
#define MACROLOP_PRIVATE_EVAL_REC_4248_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4249(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4249_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4249_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4249_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4249_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4249_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4249_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4249_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4249_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4249_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4249_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4250
#define MACROLOP_PRIVATE_EVAL_REC_4249_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4250(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4250_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4250_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4250_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4250_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4250_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4250_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4250_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4250_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4250_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4250_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4251
#define MACROLOP_PRIVATE_EVAL_REC_4250_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4251(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4251_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4251_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4251_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4251_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4251_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4251_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4251_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4251_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4251_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4251_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4252
#define MACROLOP_PRIVATE_EVAL_REC_4251_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4252(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4252_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4252_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4252_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4252_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4252_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4252_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4252_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4252_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4252_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4252_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4253
#define MACROLOP_PRIVATE_EVAL_REC_4252_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4253(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4253_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4253_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4253_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4253_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4253_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4253_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4253_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4253_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4253_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4253_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4254
#define MACROLOP_PRIVATE_EVAL_REC_4253_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4254(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4254_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4254_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4254_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4254_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4254_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4254_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4254_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4254_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4254_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4254_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4255
#define MACROLOP_PRIVATE_EVAL_REC_4254_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4255(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4255_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4255_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4255_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4255_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4255_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4255_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4255_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4255_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4255_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4255_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4256
#define MACROLOP_PRIVATE_EVAL_REC_4255_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4256(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4256_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4256_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4256_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4256_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4256_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4256_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4256_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4256_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4256_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4256_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4257
#define MACROLOP_PRIVATE_EVAL_REC_4256_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4257(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4257_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4257_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4257_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4257_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4257_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4257_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4257_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4257_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4257_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4257_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4258
#define MACROLOP_PRIVATE_EVAL_REC_4257_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4258(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4258_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4258_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4258_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4258_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4258_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4258_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4258_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4258_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4258_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4258_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4259
#define MACROLOP_PRIVATE_EVAL_REC_4258_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4259(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4259_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4259_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4259_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4259_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4259_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4259_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4259_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4259_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4259_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4259_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4260
#define MACROLOP_PRIVATE_EVAL_REC_4259_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4260(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4260_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4260_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4260_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4260_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4260_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4260_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4260_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4260_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4260_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4260_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4261
#define MACROLOP_PRIVATE_EVAL_REC_4260_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4261(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4261_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4261_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4261_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4261_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4261_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4261_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4261_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4261_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4261_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4261_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4262
#define MACROLOP_PRIVATE_EVAL_REC_4261_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4262(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4262_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4262_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4262_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4262_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4262_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4262_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4262_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4262_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4262_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4262_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4263
#define MACROLOP_PRIVATE_EVAL_REC_4262_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4263(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4263_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4263_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4263_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4263_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4263_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4263_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4263_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4263_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4263_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4263_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4264
#define MACROLOP_PRIVATE_EVAL_REC_4263_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4264(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4264_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4264_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4264_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4264_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4264_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4264_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4264_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4264_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4264_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4264_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4265
#define MACROLOP_PRIVATE_EVAL_REC_4264_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4265(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4265_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4265_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4265_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4265_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4265_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4265_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4265_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4265_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4265_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4265_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4266
#define MACROLOP_PRIVATE_EVAL_REC_4265_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4266(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4266_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4266_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4266_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4266_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4266_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4266_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4266_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4266_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4266_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4266_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4267
#define MACROLOP_PRIVATE_EVAL_REC_4266_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4267(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4267_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4267_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4267_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4267_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4267_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4267_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4267_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4267_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4267_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4267_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4268
#define MACROLOP_PRIVATE_EVAL_REC_4267_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4268(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4268_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4268_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4268_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4268_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4268_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4268_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4268_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4268_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4268_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4268_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4269
#define MACROLOP_PRIVATE_EVAL_REC_4268_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4269(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4269_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4269_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4269_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4269_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4269_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4269_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4269_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4269_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4269_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4269_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4270
#define MACROLOP_PRIVATE_EVAL_REC_4269_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4270(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4270_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4270_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4270_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4270_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4270_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4270_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4270_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4270_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4270_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4270_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4271
#define MACROLOP_PRIVATE_EVAL_REC_4270_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4271(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4271_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4271_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4271_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4271_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4271_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4271_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4271_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4271_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4271_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4271_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4272
#define MACROLOP_PRIVATE_EVAL_REC_4271_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4272(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4272_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4272_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4272_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4272_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4272_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4272_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4272_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4272_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4272_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4272_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4273
#define MACROLOP_PRIVATE_EVAL_REC_4272_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4273(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4273_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4273_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4273_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4273_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4273_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4273_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4273_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4273_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4273_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4273_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4274
#define MACROLOP_PRIVATE_EVAL_REC_4273_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4274(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4274_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4274_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4274_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4274_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4274_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4274_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4274_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4274_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4274_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4274_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4275
#define MACROLOP_PRIVATE_EVAL_REC_4274_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4275(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4275_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4275_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4275_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4275_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4275_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4275_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4275_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4275_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4275_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4275_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4276
#define MACROLOP_PRIVATE_EVAL_REC_4275_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4276(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4276_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4276_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4276_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4276_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4276_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4276_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4276_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4276_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4276_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4276_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4277
#define MACROLOP_PRIVATE_EVAL_REC_4276_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4277(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4277_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4277_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4277_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4277_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4277_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4277_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4277_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4277_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4277_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4277_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4278
#define MACROLOP_PRIVATE_EVAL_REC_4277_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4278(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4278_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4278_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4278_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4278_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4278_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4278_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4278_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4278_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4278_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4278_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4279
#define MACROLOP_PRIVATE_EVAL_REC_4278_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4279(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4279_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4279_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4279_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4279_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4279_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4279_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4279_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4279_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4279_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4279_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4280
#define MACROLOP_PRIVATE_EVAL_REC_4279_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4280(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4280_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4280_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4280_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4280_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4280_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4280_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4280_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4280_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4280_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4280_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4281
#define MACROLOP_PRIVATE_EVAL_REC_4280_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4281(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4281_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4281_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4281_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4281_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4281_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4281_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4281_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4281_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4281_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4281_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4282
#define MACROLOP_PRIVATE_EVAL_REC_4281_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4282(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4282_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4282_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4282_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4282_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4282_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4282_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4282_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4282_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4282_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4282_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4283
#define MACROLOP_PRIVATE_EVAL_REC_4282_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4283(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4283_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4283_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4283_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4283_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4283_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4283_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4283_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4283_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4283_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4283_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4284
#define MACROLOP_PRIVATE_EVAL_REC_4283_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4284(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4284_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4284_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4284_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4284_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4284_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4284_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4284_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4284_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4284_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4284_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4285
#define MACROLOP_PRIVATE_EVAL_REC_4284_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4285(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4285_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4285_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4285_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4285_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4285_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4285_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4285_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4285_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4285_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4285_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4286
#define MACROLOP_PRIVATE_EVAL_REC_4285_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4286(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4286_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4286_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4286_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4286_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4286_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4286_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4286_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4286_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4286_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4286_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4287
#define MACROLOP_PRIVATE_EVAL_REC_4286_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4287(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4287_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4287_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4287_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4287_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4287_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4287_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4287_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4287_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4287_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4287_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4288
#define MACROLOP_PRIVATE_EVAL_REC_4287_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4288(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4288_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4288_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4288_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4288_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4288_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4288_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4288_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4288_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4288_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4288_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4289
#define MACROLOP_PRIVATE_EVAL_REC_4288_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4289(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4289_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4289_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4289_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4289_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4289_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4289_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4289_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4289_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4289_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4289_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4290
#define MACROLOP_PRIVATE_EVAL_REC_4289_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4290(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4290_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4290_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4290_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4290_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4290_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4290_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4290_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4290_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4290_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4290_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4291
#define MACROLOP_PRIVATE_EVAL_REC_4290_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4291(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4291_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4291_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4291_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4291_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4291_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4291_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4291_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4291_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4291_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4291_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4292
#define MACROLOP_PRIVATE_EVAL_REC_4291_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4292(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4292_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4292_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4292_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4292_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4292_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4292_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4292_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4292_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4292_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4292_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4293
#define MACROLOP_PRIVATE_EVAL_REC_4292_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4293(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4293_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4293_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4293_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4293_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4293_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4293_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4293_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4293_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4293_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4293_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4294
#define MACROLOP_PRIVATE_EVAL_REC_4293_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4294(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4294_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4294_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4294_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4294_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4294_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4294_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4294_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4294_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4294_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4294_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4295
#define MACROLOP_PRIVATE_EVAL_REC_4294_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4295(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4295_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4295_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4295_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4295_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4295_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4295_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4295_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4295_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4295_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4295_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4296
#define MACROLOP_PRIVATE_EVAL_REC_4295_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4296(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4296_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4296_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4296_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4296_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4296_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4296_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4296_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4296_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4296_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4296_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4297
#define MACROLOP_PRIVATE_EVAL_REC_4296_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4297(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4297_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4297_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4297_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4297_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4297_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4297_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4297_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4297_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4297_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4297_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4298
#define MACROLOP_PRIVATE_EVAL_REC_4297_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4298(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4298_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4298_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4298_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4298_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4298_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4298_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4298_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4298_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4298_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4298_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4299
#define MACROLOP_PRIVATE_EVAL_REC_4298_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4299(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4299_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4299_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4299_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4299_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4299_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4299_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4299_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4299_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4299_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4299_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4300
#define MACROLOP_PRIVATE_EVAL_REC_4299_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4300(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4300_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4300_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4300_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4300_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4300_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4300_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4300_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4300_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4300_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4300_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4301
#define MACROLOP_PRIVATE_EVAL_REC_4300_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4301(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4301_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4301_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4301_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4301_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4301_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4301_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4301_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4301_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4301_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4301_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4302
#define MACROLOP_PRIVATE_EVAL_REC_4301_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4302(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4302_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4302_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4302_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4302_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4302_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4302_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4302_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4302_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4302_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4302_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4303
#define MACROLOP_PRIVATE_EVAL_REC_4302_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4303(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4303_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4303_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4303_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4303_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4303_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4303_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4303_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4303_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4303_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4303_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4304
#define MACROLOP_PRIVATE_EVAL_REC_4303_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4304(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4304_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4304_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4304_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4304_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4304_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4304_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4304_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4304_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4304_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4304_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4305
#define MACROLOP_PRIVATE_EVAL_REC_4304_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4305(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4305_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4305_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4305_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4305_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4305_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4305_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4305_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4305_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4305_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4305_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4306
#define MACROLOP_PRIVATE_EVAL_REC_4305_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4306(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4306_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4306_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4306_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4306_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4306_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4306_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4306_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4306_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4306_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4306_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4307
#define MACROLOP_PRIVATE_EVAL_REC_4306_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4307(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4307_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4307_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4307_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4307_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4307_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4307_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4307_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4307_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4307_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4307_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4308
#define MACROLOP_PRIVATE_EVAL_REC_4307_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4308(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4308_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4308_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4308_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4308_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4308_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4308_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4308_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4308_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4308_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4308_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4309
#define MACROLOP_PRIVATE_EVAL_REC_4308_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4309(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4309_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4309_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4309_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4309_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4309_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4309_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4309_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4309_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4309_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4309_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4310
#define MACROLOP_PRIVATE_EVAL_REC_4309_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4310(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4310_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4310_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4310_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4310_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4310_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4310_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4310_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4310_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4310_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4310_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4311
#define MACROLOP_PRIVATE_EVAL_REC_4310_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4311(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4311_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4311_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4311_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4311_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4311_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4311_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4311_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4311_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4311_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4311_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4312
#define MACROLOP_PRIVATE_EVAL_REC_4311_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4312(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4312_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4312_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4312_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4312_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4312_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4312_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4312_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4312_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4312_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4312_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4313
#define MACROLOP_PRIVATE_EVAL_REC_4312_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4313(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4313_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4313_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4313_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4313_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4313_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4313_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4313_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4313_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4313_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4313_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4314
#define MACROLOP_PRIVATE_EVAL_REC_4313_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4314(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4314_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4314_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4314_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4314_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4314_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4314_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4314_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4314_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4314_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4314_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4315
#define MACROLOP_PRIVATE_EVAL_REC_4314_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4315(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4315_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4315_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4315_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4315_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4315_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4315_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4315_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4315_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4315_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4315_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4316
#define MACROLOP_PRIVATE_EVAL_REC_4315_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4316(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4316_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4316_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4316_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4316_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4316_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4316_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4316_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4316_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4316_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4316_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4317
#define MACROLOP_PRIVATE_EVAL_REC_4316_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4317(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4317_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4317_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4317_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4317_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4317_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4317_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4317_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4317_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4317_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4317_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4318
#define MACROLOP_PRIVATE_EVAL_REC_4317_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4318(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4318_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4318_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4318_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4318_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4318_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4318_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4318_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4318_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4318_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4318_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4319
#define MACROLOP_PRIVATE_EVAL_REC_4318_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4319(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4319_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4319_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4319_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4319_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4319_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4319_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4319_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4319_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4319_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4319_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4320
#define MACROLOP_PRIVATE_EVAL_REC_4319_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4320(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4320_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4320_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4320_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4320_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4320_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4320_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4320_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4320_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4320_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4320_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4321
#define MACROLOP_PRIVATE_EVAL_REC_4320_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4321(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4321_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4321_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4321_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4321_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4321_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4321_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4321_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4321_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4321_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4321_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4322
#define MACROLOP_PRIVATE_EVAL_REC_4321_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4322(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4322_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4322_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4322_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4322_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4322_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4322_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4322_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4322_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4322_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4322_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4323
#define MACROLOP_PRIVATE_EVAL_REC_4322_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4323(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4323_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4323_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4323_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4323_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4323_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4323_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4323_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4323_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4323_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4323_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4324
#define MACROLOP_PRIVATE_EVAL_REC_4323_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4324(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4324_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4324_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4324_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4324_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4324_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4324_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4324_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4324_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4324_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4324_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4325
#define MACROLOP_PRIVATE_EVAL_REC_4324_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4325(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4325_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4325_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4325_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4325_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4325_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4325_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4325_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4325_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4325_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4325_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4326
#define MACROLOP_PRIVATE_EVAL_REC_4325_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4326(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4326_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4326_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4326_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4326_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4326_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4326_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4326_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4326_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4326_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4326_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4327
#define MACROLOP_PRIVATE_EVAL_REC_4326_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4327(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4327_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4327_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4327_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4327_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4327_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4327_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4327_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4327_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4327_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4327_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4328
#define MACROLOP_PRIVATE_EVAL_REC_4327_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4328(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4328_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4328_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4328_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4328_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4328_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4328_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4328_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4328_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4328_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4328_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4329
#define MACROLOP_PRIVATE_EVAL_REC_4328_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4329(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4329_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4329_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4329_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4329_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4329_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4329_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4329_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4329_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4329_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4329_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4330
#define MACROLOP_PRIVATE_EVAL_REC_4329_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4330(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4330_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4330_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4330_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4330_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4330_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4330_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4330_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4330_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4330_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4330_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4331
#define MACROLOP_PRIVATE_EVAL_REC_4330_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4331(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4331_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4331_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4331_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4331_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4331_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4331_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4331_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4331_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4331_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4331_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4332
#define MACROLOP_PRIVATE_EVAL_REC_4331_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4332(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4332_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4332_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4332_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4332_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4332_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4332_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4332_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4332_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4332_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4332_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4333
#define MACROLOP_PRIVATE_EVAL_REC_4332_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4333(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4333_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4333_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4333_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4333_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4333_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4333_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4333_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4333_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4333_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4333_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4334
#define MACROLOP_PRIVATE_EVAL_REC_4333_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4334(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4334_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4334_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4334_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4334_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4334_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4334_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4334_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4334_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4334_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4334_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4335
#define MACROLOP_PRIVATE_EVAL_REC_4334_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4335(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4335_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4335_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4335_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4335_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4335_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4335_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4335_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4335_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4335_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4335_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4336
#define MACROLOP_PRIVATE_EVAL_REC_4335_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4336(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4336_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4336_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4336_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4336_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4336_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4336_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4336_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4336_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4336_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4336_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4337
#define MACROLOP_PRIVATE_EVAL_REC_4336_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4337(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4337_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4337_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4337_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4337_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4337_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4337_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4337_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4337_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4337_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4337_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4338
#define MACROLOP_PRIVATE_EVAL_REC_4337_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4338(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4338_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4338_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4338_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4338_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4338_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4338_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4338_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4338_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4338_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4338_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4339
#define MACROLOP_PRIVATE_EVAL_REC_4338_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4339(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4339_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4339_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4339_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4339_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4339_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4339_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4339_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4339_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4339_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4339_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4340
#define MACROLOP_PRIVATE_EVAL_REC_4339_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4340(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4340_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4340_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4340_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4340_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4340_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4340_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4340_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4340_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4340_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4340_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4341
#define MACROLOP_PRIVATE_EVAL_REC_4340_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4341(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4341_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4341_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4341_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4341_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4341_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4341_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4341_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4341_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4341_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4341_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4342
#define MACROLOP_PRIVATE_EVAL_REC_4341_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4342(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4342_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4342_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4342_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4342_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4342_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4342_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4342_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4342_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4342_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4342_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4343
#define MACROLOP_PRIVATE_EVAL_REC_4342_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4343(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4343_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4343_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4343_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4343_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4343_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4343_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4343_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4343_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4343_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4343_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4344
#define MACROLOP_PRIVATE_EVAL_REC_4343_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4344(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4344_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4344_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4344_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4344_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4344_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4344_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4344_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4344_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4344_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4344_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4345
#define MACROLOP_PRIVATE_EVAL_REC_4344_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4345(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4345_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4345_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4345_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4345_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4345_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4345_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4345_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4345_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4345_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4345_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4346
#define MACROLOP_PRIVATE_EVAL_REC_4345_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4346(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4346_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4346_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4346_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4346_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4346_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4346_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4346_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4346_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4346_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4346_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4347
#define MACROLOP_PRIVATE_EVAL_REC_4346_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4347(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4347_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4347_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4347_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4347_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4347_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4347_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4347_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4347_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4347_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4347_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4348
#define MACROLOP_PRIVATE_EVAL_REC_4347_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4348(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4348_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4348_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4348_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4348_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4348_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4348_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4348_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4348_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4348_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4348_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4349
#define MACROLOP_PRIVATE_EVAL_REC_4348_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4349(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4349_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4349_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4349_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4349_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4349_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4349_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4349_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4349_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4349_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4349_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4350
#define MACROLOP_PRIVATE_EVAL_REC_4349_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4350(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4350_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4350_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4350_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4350_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4350_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4350_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4350_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4350_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4350_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4350_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4351
#define MACROLOP_PRIVATE_EVAL_REC_4350_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4351(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4351_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4351_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4351_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4351_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4351_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4351_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4351_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4351_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4351_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4351_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4352
#define MACROLOP_PRIVATE_EVAL_REC_4351_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4352(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4352_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4352_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4352_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4352_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4352_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4352_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4352_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4352_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4352_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4352_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4353
#define MACROLOP_PRIVATE_EVAL_REC_4352_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4353(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4353_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4353_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4353_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4353_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4353_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4353_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4353_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4353_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4353_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4353_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4354
#define MACROLOP_PRIVATE_EVAL_REC_4353_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4354(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4354_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4354_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4354_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4354_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4354_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4354_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4354_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4354_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4354_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4354_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4355
#define MACROLOP_PRIVATE_EVAL_REC_4354_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4355(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4355_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4355_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4355_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4355_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4355_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4355_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4355_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4355_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4355_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4355_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4356
#define MACROLOP_PRIVATE_EVAL_REC_4355_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4356(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4356_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4356_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4356_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4356_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4356_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4356_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4356_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4356_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4356_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4356_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4357
#define MACROLOP_PRIVATE_EVAL_REC_4356_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4357(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4357_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4357_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4357_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4357_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4357_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4357_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4357_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4357_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4357_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4357_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4358
#define MACROLOP_PRIVATE_EVAL_REC_4357_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4358(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4358_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4358_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4358_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4358_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4358_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4358_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4358_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4358_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4358_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4358_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4359
#define MACROLOP_PRIVATE_EVAL_REC_4358_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4359(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4359_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4359_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4359_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4359_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4359_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4359_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4359_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4359_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4359_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4359_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4360
#define MACROLOP_PRIVATE_EVAL_REC_4359_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4360(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4360_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4360_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4360_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4360_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4360_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4360_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4360_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4360_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4360_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4360_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4361
#define MACROLOP_PRIVATE_EVAL_REC_4360_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4361(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4361_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4361_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4361_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4361_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4361_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4361_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4361_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4361_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4361_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4361_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4362
#define MACROLOP_PRIVATE_EVAL_REC_4361_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4362(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4362_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4362_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4362_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4362_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4362_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4362_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4362_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4362_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4362_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4362_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4363
#define MACROLOP_PRIVATE_EVAL_REC_4362_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4363(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4363_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4363_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4363_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4363_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4363_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4363_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4363_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4363_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4363_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4363_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4364
#define MACROLOP_PRIVATE_EVAL_REC_4363_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4364(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4364_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4364_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4364_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4364_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4364_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4364_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4364_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4364_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4364_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4364_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4365
#define MACROLOP_PRIVATE_EVAL_REC_4364_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4365(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4365_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4365_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4365_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4365_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4365_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4365_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4365_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4365_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4365_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4365_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4366
#define MACROLOP_PRIVATE_EVAL_REC_4365_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4366(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4366_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4366_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4366_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4366_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4366_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4366_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4366_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4366_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4366_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4366_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4367
#define MACROLOP_PRIVATE_EVAL_REC_4366_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4367(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4367_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4367_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4367_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4367_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4367_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4367_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4367_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4367_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4367_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4367_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4368
#define MACROLOP_PRIVATE_EVAL_REC_4367_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4368(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4368_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4368_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4368_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4368_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4368_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4368_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4368_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4368_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4368_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4368_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4369
#define MACROLOP_PRIVATE_EVAL_REC_4368_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4369(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4369_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4369_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4369_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4369_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4369_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4369_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4369_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4369_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4369_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4369_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4370
#define MACROLOP_PRIVATE_EVAL_REC_4369_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4370(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4370_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4370_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4370_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4370_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4370_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4370_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4370_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4370_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4370_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4370_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4371
#define MACROLOP_PRIVATE_EVAL_REC_4370_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4371(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4371_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4371_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4371_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4371_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4371_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4371_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4371_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4371_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4371_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4371_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4372
#define MACROLOP_PRIVATE_EVAL_REC_4371_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4372(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4372_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4372_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4372_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4372_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4372_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4372_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4372_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4372_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4372_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4372_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4373
#define MACROLOP_PRIVATE_EVAL_REC_4372_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4373(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4373_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4373_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4373_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4373_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4373_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4373_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4373_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4373_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4373_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4373_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4374
#define MACROLOP_PRIVATE_EVAL_REC_4373_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4374(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4374_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4374_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4374_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4374_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4374_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4374_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4374_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4374_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4374_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4374_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4375
#define MACROLOP_PRIVATE_EVAL_REC_4374_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4375(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4375_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4375_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4375_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4375_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4375_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4375_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4375_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4375_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4375_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4375_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4376
#define MACROLOP_PRIVATE_EVAL_REC_4375_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4376(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4376_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4376_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4376_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4376_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4376_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4376_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4376_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4376_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4376_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4376_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4377
#define MACROLOP_PRIVATE_EVAL_REC_4376_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4377(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4377_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4377_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4377_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4377_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4377_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4377_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4377_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4377_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4377_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4377_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4378
#define MACROLOP_PRIVATE_EVAL_REC_4377_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4378(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4378_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4378_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4378_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4378_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4378_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4378_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4378_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4378_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4378_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4378_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4379
#define MACROLOP_PRIVATE_EVAL_REC_4378_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4379(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4379_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4379_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4379_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4379_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4379_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4379_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4379_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4379_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4379_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4379_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4380
#define MACROLOP_PRIVATE_EVAL_REC_4379_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4380(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4380_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4380_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4380_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4380_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4380_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4380_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4380_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4380_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4380_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4380_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4381
#define MACROLOP_PRIVATE_EVAL_REC_4380_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4381(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4381_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4381_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4381_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4381_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4381_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4381_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4381_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4381_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4381_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4381_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4382
#define MACROLOP_PRIVATE_EVAL_REC_4381_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4382(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4382_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4382_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4382_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4382_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4382_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4382_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4382_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4382_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4382_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4382_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4383
#define MACROLOP_PRIVATE_EVAL_REC_4382_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4383(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4383_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4383_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4383_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4383_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4383_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4383_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4383_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4383_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4383_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4383_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4384
#define MACROLOP_PRIVATE_EVAL_REC_4383_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4384(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4384_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4384_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4384_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4384_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4384_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4384_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4384_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4384_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4384_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4384_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4385
#define MACROLOP_PRIVATE_EVAL_REC_4384_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4385(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4385_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4385_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4385_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4385_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4385_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4385_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4385_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4385_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4385_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4385_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4386
#define MACROLOP_PRIVATE_EVAL_REC_4385_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4386(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4386_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4386_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4386_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4386_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4386_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4386_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4386_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4386_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4386_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4386_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4387
#define MACROLOP_PRIVATE_EVAL_REC_4386_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4387(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4387_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4387_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4387_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4387_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4387_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4387_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4387_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4387_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4387_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4387_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4388
#define MACROLOP_PRIVATE_EVAL_REC_4387_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4388(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4388_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4388_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4388_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4388_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4388_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4388_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4388_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4388_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4388_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4388_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4389
#define MACROLOP_PRIVATE_EVAL_REC_4388_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4389(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4389_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4389_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4389_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4389_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4389_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4389_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4389_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4389_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4389_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4389_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4390
#define MACROLOP_PRIVATE_EVAL_REC_4389_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4390(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4390_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4390_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4390_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4390_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4390_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4390_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4390_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4390_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4390_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4390_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4391
#define MACROLOP_PRIVATE_EVAL_REC_4390_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4391(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4391_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4391_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4391_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4391_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4391_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4391_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4391_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4391_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4391_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4391_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4392
#define MACROLOP_PRIVATE_EVAL_REC_4391_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4392(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4392_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4392_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4392_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4392_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4392_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4392_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4392_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4392_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4392_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4392_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4393
#define MACROLOP_PRIVATE_EVAL_REC_4392_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4393(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4393_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4393_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4393_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4393_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4393_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4393_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4393_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4393_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4393_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4393_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4394
#define MACROLOP_PRIVATE_EVAL_REC_4393_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4394(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4394_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4394_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4394_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4394_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4394_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4394_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4394_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4394_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4394_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4394_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4395
#define MACROLOP_PRIVATE_EVAL_REC_4394_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4395(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4395_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4395_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4395_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4395_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4395_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4395_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4395_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4395_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4395_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4395_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4396
#define MACROLOP_PRIVATE_EVAL_REC_4395_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4396(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4396_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4396_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4396_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4396_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4396_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4396_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4396_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4396_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4396_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4396_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4397
#define MACROLOP_PRIVATE_EVAL_REC_4396_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4397(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4397_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4397_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4397_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4397_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4397_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4397_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4397_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4397_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4397_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4397_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4398
#define MACROLOP_PRIVATE_EVAL_REC_4397_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4398(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4398_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4398_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4398_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4398_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4398_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4398_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4398_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4398_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4398_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4398_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4399
#define MACROLOP_PRIVATE_EVAL_REC_4398_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4399(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4399_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4399_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4399_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4399_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4399_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4399_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4399_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4399_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4399_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4399_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4400
#define MACROLOP_PRIVATE_EVAL_REC_4399_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4400(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4400_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4400_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4400_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4400_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4400_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4400_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4400_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4400_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4400_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4400_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4401
#define MACROLOP_PRIVATE_EVAL_REC_4400_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4401(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4401_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4401_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4401_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4401_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4401_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4401_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4401_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4401_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4401_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4401_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4402
#define MACROLOP_PRIVATE_EVAL_REC_4401_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4402(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4402_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4402_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4402_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4402_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4402_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4402_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4402_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4402_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4402_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4402_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4403
#define MACROLOP_PRIVATE_EVAL_REC_4402_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4403(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4403_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4403_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4403_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4403_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4403_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4403_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4403_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4403_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4403_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4403_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4404
#define MACROLOP_PRIVATE_EVAL_REC_4403_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4404(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4404_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4404_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4404_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4404_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4404_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4404_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4404_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4404_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4404_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4404_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4405
#define MACROLOP_PRIVATE_EVAL_REC_4404_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4405(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4405_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4405_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4405_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4405_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4405_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4405_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4405_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4405_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4405_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4405_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4406
#define MACROLOP_PRIVATE_EVAL_REC_4405_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4406(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4406_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4406_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4406_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4406_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4406_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4406_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4406_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4406_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4406_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4406_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4407
#define MACROLOP_PRIVATE_EVAL_REC_4406_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4407(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4407_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4407_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4407_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4407_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4407_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4407_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4407_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4407_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4407_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4407_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4408
#define MACROLOP_PRIVATE_EVAL_REC_4407_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4408(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4408_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4408_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4408_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4408_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4408_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4408_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4408_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4408_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4408_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4408_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4409
#define MACROLOP_PRIVATE_EVAL_REC_4408_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4409(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4409_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4409_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4409_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4409_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4409_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4409_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4409_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4409_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4409_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4409_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4410
#define MACROLOP_PRIVATE_EVAL_REC_4409_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4410(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4410_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4410_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4410_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4410_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4410_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4410_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4410_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4410_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4410_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4410_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4411
#define MACROLOP_PRIVATE_EVAL_REC_4410_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4411(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4411_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4411_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4411_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4411_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4411_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4411_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4411_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4411_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4411_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4411_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4412
#define MACROLOP_PRIVATE_EVAL_REC_4411_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4412(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4412_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4412_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4412_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4412_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4412_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4412_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4412_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4412_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4412_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4412_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4413
#define MACROLOP_PRIVATE_EVAL_REC_4412_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4413(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4413_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4413_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4413_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4413_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4413_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4413_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4413_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4413_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4413_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4413_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4414
#define MACROLOP_PRIVATE_EVAL_REC_4413_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4414(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4414_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4414_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4414_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4414_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4414_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4414_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4414_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4414_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4414_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4414_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4415
#define MACROLOP_PRIVATE_EVAL_REC_4414_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4415(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4415_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4415_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4415_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4415_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4415_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4415_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4415_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4415_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4415_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4415_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4416
#define MACROLOP_PRIVATE_EVAL_REC_4415_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4416(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4416_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4416_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4416_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4416_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4416_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4416_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4416_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4416_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4416_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4416_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4417
#define MACROLOP_PRIVATE_EVAL_REC_4416_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4417(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4417_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4417_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4417_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4417_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4417_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4417_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4417_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4417_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4417_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4417_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4418
#define MACROLOP_PRIVATE_EVAL_REC_4417_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4418(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4418_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4418_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4418_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4418_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4418_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4418_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4418_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4418_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4418_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4418_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4419
#define MACROLOP_PRIVATE_EVAL_REC_4418_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4419(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4419_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4419_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4419_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4419_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4419_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4419_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4419_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4419_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4419_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4419_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4420
#define MACROLOP_PRIVATE_EVAL_REC_4419_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4420(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4420_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4420_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4420_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4420_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4420_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4420_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4420_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4420_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4420_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4420_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4421
#define MACROLOP_PRIVATE_EVAL_REC_4420_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4421(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4421_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4421_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4421_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4421_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4421_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4421_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4421_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4421_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4421_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4421_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4422
#define MACROLOP_PRIVATE_EVAL_REC_4421_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4422(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4422_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4422_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4422_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4422_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4422_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4422_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4422_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4422_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4422_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4422_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4423
#define MACROLOP_PRIVATE_EVAL_REC_4422_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4423(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4423_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4423_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4423_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4423_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4423_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4423_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4423_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4423_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4423_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4423_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4424
#define MACROLOP_PRIVATE_EVAL_REC_4423_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4424(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4424_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4424_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4424_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4424_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4424_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4424_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4424_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4424_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4424_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4424_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4425
#define MACROLOP_PRIVATE_EVAL_REC_4424_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4425(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4425_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4425_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4425_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4425_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4425_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4425_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4425_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4425_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4425_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4425_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4426
#define MACROLOP_PRIVATE_EVAL_REC_4425_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4426(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4426_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4426_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4426_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4426_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4426_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4426_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4426_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4426_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4426_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4426_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4427
#define MACROLOP_PRIVATE_EVAL_REC_4426_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4427(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4427_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4427_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4427_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4427_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4427_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4427_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4427_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4427_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4427_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4427_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4428
#define MACROLOP_PRIVATE_EVAL_REC_4427_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4428(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4428_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4428_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4428_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4428_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4428_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4428_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4428_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4428_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4428_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4428_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4429
#define MACROLOP_PRIVATE_EVAL_REC_4428_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4429(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4429_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4429_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4429_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4429_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4429_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4429_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4429_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4429_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4429_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4429_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4430
#define MACROLOP_PRIVATE_EVAL_REC_4429_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4430(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4430_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4430_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4430_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4430_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4430_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4430_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4430_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4430_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4430_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4430_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4431
#define MACROLOP_PRIVATE_EVAL_REC_4430_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4431(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4431_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4431_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4431_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4431_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4431_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4431_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4431_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4431_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4431_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4431_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4432
#define MACROLOP_PRIVATE_EVAL_REC_4431_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4432(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4432_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4432_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4432_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4432_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4432_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4432_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4432_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4432_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4432_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4432_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4433
#define MACROLOP_PRIVATE_EVAL_REC_4432_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4433(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4433_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4433_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4433_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4433_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4433_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4433_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4433_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4433_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4433_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4433_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4434
#define MACROLOP_PRIVATE_EVAL_REC_4433_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4434(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4434_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4434_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4434_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4434_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4434_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4434_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4434_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4434_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4434_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4434_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4435
#define MACROLOP_PRIVATE_EVAL_REC_4434_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4435(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4435_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4435_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4435_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4435_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4435_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4435_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4435_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4435_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4435_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4435_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4436
#define MACROLOP_PRIVATE_EVAL_REC_4435_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4436(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4436_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4436_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4436_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4436_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4436_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4436_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4436_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4436_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4436_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4436_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4437
#define MACROLOP_PRIVATE_EVAL_REC_4436_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4437(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4437_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4437_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4437_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4437_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4437_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4437_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4437_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4437_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4437_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4437_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4438
#define MACROLOP_PRIVATE_EVAL_REC_4437_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4438(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4438_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4438_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4438_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4438_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4438_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4438_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4438_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4438_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4438_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4438_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4439
#define MACROLOP_PRIVATE_EVAL_REC_4438_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4439(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4439_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4439_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4439_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4439_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4439_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4439_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4439_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4439_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4439_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4439_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4440
#define MACROLOP_PRIVATE_EVAL_REC_4439_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4440(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4440_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4440_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4440_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4440_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4440_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4440_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4440_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4440_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4440_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4440_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4441
#define MACROLOP_PRIVATE_EVAL_REC_4440_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4441(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4441_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4441_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4441_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4441_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4441_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4441_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4441_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4441_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4441_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4441_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4442
#define MACROLOP_PRIVATE_EVAL_REC_4441_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4442(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4442_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4442_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4442_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4442_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4442_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4442_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4442_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4442_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4442_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4442_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4443
#define MACROLOP_PRIVATE_EVAL_REC_4442_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4443(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4443_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4443_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4443_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4443_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4443_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4443_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4443_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4443_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4443_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4443_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4444
#define MACROLOP_PRIVATE_EVAL_REC_4443_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4444(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4444_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4444_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4444_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4444_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4444_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4444_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4444_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4444_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4444_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4444_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4445
#define MACROLOP_PRIVATE_EVAL_REC_4444_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4445(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4445_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4445_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4445_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4445_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4445_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4445_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4445_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4445_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4445_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4445_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4446
#define MACROLOP_PRIVATE_EVAL_REC_4445_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4446(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4446_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4446_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4446_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4446_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4446_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4446_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4446_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4446_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4446_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4446_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4447
#define MACROLOP_PRIVATE_EVAL_REC_4446_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4447(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4447_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4447_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4447_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4447_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4447_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4447_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4447_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4447_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4447_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4447_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4448
#define MACROLOP_PRIVATE_EVAL_REC_4447_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4448(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4448_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4448_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4448_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4448_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4448_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4448_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4448_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4448_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4448_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4448_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4449
#define MACROLOP_PRIVATE_EVAL_REC_4448_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4449(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4449_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4449_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4449_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4449_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4449_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4449_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4449_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4449_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4449_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4449_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4450
#define MACROLOP_PRIVATE_EVAL_REC_4449_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4450(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4450_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4450_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4450_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4450_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4450_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4450_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4450_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4450_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4450_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4450_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4451
#define MACROLOP_PRIVATE_EVAL_REC_4450_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4451(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4451_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4451_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4451_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4451_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4451_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4451_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4451_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4451_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4451_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4451_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4452
#define MACROLOP_PRIVATE_EVAL_REC_4451_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4452(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4452_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4452_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4452_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4452_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4452_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4452_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4452_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4452_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4452_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4452_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4453
#define MACROLOP_PRIVATE_EVAL_REC_4452_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4453(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4453_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4453_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4453_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4453_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4453_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4453_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4453_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4453_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4453_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4453_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4454
#define MACROLOP_PRIVATE_EVAL_REC_4453_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4454(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4454_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4454_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4454_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4454_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4454_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4454_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4454_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4454_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4454_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4454_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4455
#define MACROLOP_PRIVATE_EVAL_REC_4454_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4455(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4455_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4455_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4455_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4455_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4455_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4455_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4455_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4455_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4455_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4455_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4456
#define MACROLOP_PRIVATE_EVAL_REC_4455_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4456(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4456_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4456_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4456_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4456_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4456_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4456_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4456_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4456_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4456_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4456_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4457
#define MACROLOP_PRIVATE_EVAL_REC_4456_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4457(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4457_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4457_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4457_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4457_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4457_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4457_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4457_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4457_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4457_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4457_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4458
#define MACROLOP_PRIVATE_EVAL_REC_4457_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4458(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4458_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4458_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4458_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4458_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4458_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4458_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4458_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4458_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4458_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4458_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4459
#define MACROLOP_PRIVATE_EVAL_REC_4458_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4459(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4459_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4459_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4459_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4459_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4459_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4459_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4459_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4459_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4459_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4459_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4460
#define MACROLOP_PRIVATE_EVAL_REC_4459_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4460(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4460_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4460_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4460_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4460_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4460_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4460_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4460_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4460_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4460_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4460_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4461
#define MACROLOP_PRIVATE_EVAL_REC_4460_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4461(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4461_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4461_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4461_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4461_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4461_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4461_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4461_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4461_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4461_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4461_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4462
#define MACROLOP_PRIVATE_EVAL_REC_4461_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4462(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4462_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4462_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4462_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4462_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4462_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4462_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4462_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4462_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4462_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4462_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4463
#define MACROLOP_PRIVATE_EVAL_REC_4462_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4463(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4463_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4463_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4463_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4463_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4463_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4463_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4463_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4463_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4463_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4463_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4464
#define MACROLOP_PRIVATE_EVAL_REC_4463_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4464(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4464_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4464_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4464_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4464_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4464_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4464_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4464_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4464_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4464_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4464_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4465
#define MACROLOP_PRIVATE_EVAL_REC_4464_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4465(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4465_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4465_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4465_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4465_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4465_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4465_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4465_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4465_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4465_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4465_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4466
#define MACROLOP_PRIVATE_EVAL_REC_4465_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4466(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4466_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4466_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4466_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4466_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4466_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4466_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4466_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4466_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4466_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4466_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4467
#define MACROLOP_PRIVATE_EVAL_REC_4466_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4467(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4467_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4467_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4467_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4467_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4467_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4467_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4467_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4467_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4467_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4467_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4468
#define MACROLOP_PRIVATE_EVAL_REC_4467_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4468(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4468_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4468_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4468_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4468_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4468_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4468_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4468_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4468_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4468_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4468_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4469
#define MACROLOP_PRIVATE_EVAL_REC_4468_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4469(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4469_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4469_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4469_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4469_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4469_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4469_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4469_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4469_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4469_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4469_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4470
#define MACROLOP_PRIVATE_EVAL_REC_4469_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4470(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4470_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4470_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4470_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4470_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4470_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4470_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4470_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4470_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4470_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4470_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4471
#define MACROLOP_PRIVATE_EVAL_REC_4470_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4471(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4471_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4471_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4471_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4471_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4471_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4471_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4471_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4471_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4471_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4471_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4472
#define MACROLOP_PRIVATE_EVAL_REC_4471_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4472(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4472_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4472_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4472_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4472_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4472_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4472_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4472_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4472_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4472_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4472_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4473
#define MACROLOP_PRIVATE_EVAL_REC_4472_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4473(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4473_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4473_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4473_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4473_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4473_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4473_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4473_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4473_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4473_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4473_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4474
#define MACROLOP_PRIVATE_EVAL_REC_4473_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4474(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4474_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4474_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4474_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4474_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4474_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4474_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4474_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4474_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4474_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4474_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4475
#define MACROLOP_PRIVATE_EVAL_REC_4474_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4475(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4475_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4475_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4475_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4475_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4475_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4475_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4475_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4475_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4475_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4475_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4476
#define MACROLOP_PRIVATE_EVAL_REC_4475_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4476(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4476_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4476_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4476_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4476_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4476_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4476_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4476_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4476_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4476_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4476_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4477
#define MACROLOP_PRIVATE_EVAL_REC_4476_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4477(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4477_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4477_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4477_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4477_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4477_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4477_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4477_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4477_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4477_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4477_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4478
#define MACROLOP_PRIVATE_EVAL_REC_4477_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4478(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4478_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4478_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4478_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4478_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4478_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4478_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4478_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4478_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4478_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4478_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4479
#define MACROLOP_PRIVATE_EVAL_REC_4478_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4479(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4479_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4479_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4479_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4479_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4479_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4479_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4479_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4479_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4479_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4479_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4480
#define MACROLOP_PRIVATE_EVAL_REC_4479_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4480(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4480_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4480_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4480_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4480_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4480_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4480_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4480_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4480_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4480_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4480_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4481
#define MACROLOP_PRIVATE_EVAL_REC_4480_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4481(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4481_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4481_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4481_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4481_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4481_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4481_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4481_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4481_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4481_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4481_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4482
#define MACROLOP_PRIVATE_EVAL_REC_4481_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4482(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4482_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4482_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4482_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4482_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4482_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4482_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4482_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4482_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4482_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4482_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4483
#define MACROLOP_PRIVATE_EVAL_REC_4482_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4483(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4483_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4483_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4483_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4483_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4483_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4483_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4483_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4483_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4483_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4483_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4484
#define MACROLOP_PRIVATE_EVAL_REC_4483_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4484(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4484_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4484_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4484_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4484_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4484_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4484_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4484_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4484_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4484_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4484_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4485
#define MACROLOP_PRIVATE_EVAL_REC_4484_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4485(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4485_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4485_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4485_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4485_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4485_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4485_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4485_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4485_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4485_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4485_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4486
#define MACROLOP_PRIVATE_EVAL_REC_4485_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4486(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4486_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4486_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4486_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4486_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4486_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4486_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4486_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4486_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4486_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4486_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4487
#define MACROLOP_PRIVATE_EVAL_REC_4486_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4487(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4487_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4487_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4487_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4487_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4487_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4487_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4487_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4487_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4487_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4487_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4488
#define MACROLOP_PRIVATE_EVAL_REC_4487_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4488(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4488_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4488_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4488_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4488_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4488_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4488_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4488_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4488_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4488_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4488_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4489
#define MACROLOP_PRIVATE_EVAL_REC_4488_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4489(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4489_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4489_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4489_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4489_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4489_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4489_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4489_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4489_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4489_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4489_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4490
#define MACROLOP_PRIVATE_EVAL_REC_4489_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4490(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4490_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4490_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4490_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4490_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4490_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4490_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4490_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4490_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4490_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4490_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4491
#define MACROLOP_PRIVATE_EVAL_REC_4490_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4491(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4491_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4491_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4491_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4491_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4491_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4491_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4491_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4491_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4491_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4491_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4492
#define MACROLOP_PRIVATE_EVAL_REC_4491_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4492(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4492_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4492_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4492_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4492_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4492_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4492_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4492_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4492_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4492_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4492_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4493
#define MACROLOP_PRIVATE_EVAL_REC_4492_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4493(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4493_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4493_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4493_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4493_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4493_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4493_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4493_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4493_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4493_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4493_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4494
#define MACROLOP_PRIVATE_EVAL_REC_4493_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4494(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4494_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4494_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4494_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4494_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4494_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4494_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4494_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4494_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4494_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4494_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4495
#define MACROLOP_PRIVATE_EVAL_REC_4494_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4495(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4495_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4495_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4495_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4495_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4495_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4495_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4495_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4495_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4495_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4495_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4496
#define MACROLOP_PRIVATE_EVAL_REC_4495_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4496(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4496_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4496_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4496_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4496_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4496_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4496_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4496_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4496_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4496_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4496_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4497
#define MACROLOP_PRIVATE_EVAL_REC_4496_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4497(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4497_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4497_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4497_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4497_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4497_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4497_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4497_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4497_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4497_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4497_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4498
#define MACROLOP_PRIVATE_EVAL_REC_4497_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4498(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4498_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4498_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4498_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4498_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4498_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4498_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4498_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4498_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4498_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4498_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4499
#define MACROLOP_PRIVATE_EVAL_REC_4498_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4499(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4499_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4499_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4499_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4499_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4499_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4499_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4499_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4499_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4499_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4499_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4500
#define MACROLOP_PRIVATE_EVAL_REC_4499_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4500(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4500_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4500_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4500_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4500_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4500_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4500_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4500_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4500_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4500_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4500_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4501
#define MACROLOP_PRIVATE_EVAL_REC_4500_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4501(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4501_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4501_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4501_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4501_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4501_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4501_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4501_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4501_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4501_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4501_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4502
#define MACROLOP_PRIVATE_EVAL_REC_4501_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4502(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4502_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4502_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4502_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4502_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4502_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4502_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4502_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4502_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4502_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4502_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4503
#define MACROLOP_PRIVATE_EVAL_REC_4502_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4503(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4503_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4503_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4503_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4503_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4503_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4503_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4503_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4503_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4503_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4503_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4504
#define MACROLOP_PRIVATE_EVAL_REC_4503_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4504(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4504_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4504_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4504_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4504_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4504_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4504_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4504_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4504_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4504_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4504_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4505
#define MACROLOP_PRIVATE_EVAL_REC_4504_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4505(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4505_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4505_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4505_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4505_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4505_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4505_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4505_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4505_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4505_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4505_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4506
#define MACROLOP_PRIVATE_EVAL_REC_4505_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4506(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4506_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4506_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4506_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4506_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4506_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4506_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4506_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4506_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4506_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4506_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4507
#define MACROLOP_PRIVATE_EVAL_REC_4506_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4507(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4507_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4507_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4507_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4507_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4507_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4507_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4507_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4507_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4507_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4507_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4508
#define MACROLOP_PRIVATE_EVAL_REC_4507_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4508(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4508_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4508_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4508_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4508_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4508_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4508_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4508_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4508_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4508_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4508_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4509
#define MACROLOP_PRIVATE_EVAL_REC_4508_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4509(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4509_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4509_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4509_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4509_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4509_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4509_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4509_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4509_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4509_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4509_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4510
#define MACROLOP_PRIVATE_EVAL_REC_4509_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4510(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4510_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4510_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4510_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4510_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4510_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4510_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4510_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4510_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4510_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4510_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4511
#define MACROLOP_PRIVATE_EVAL_REC_4510_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4511(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4511_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4511_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4511_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4511_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4511_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4511_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4511_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4511_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4511_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4511_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4512
#define MACROLOP_PRIVATE_EVAL_REC_4511_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4512(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4512_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4512_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4512_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4512_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4512_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4512_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4512_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4512_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4512_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4512_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4513
#define MACROLOP_PRIVATE_EVAL_REC_4512_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4513(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4513_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4513_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4513_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4513_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4513_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4513_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4513_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4513_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4513_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4513_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4514
#define MACROLOP_PRIVATE_EVAL_REC_4513_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4514(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4514_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4514_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4514_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4514_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4514_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4514_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4514_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4514_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4514_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4514_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4515
#define MACROLOP_PRIVATE_EVAL_REC_4514_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4515(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4515_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4515_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4515_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4515_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4515_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4515_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4515_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4515_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4515_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4515_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4516
#define MACROLOP_PRIVATE_EVAL_REC_4515_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4516(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4516_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4516_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4516_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4516_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4516_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4516_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4516_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4516_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4516_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4516_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4517
#define MACROLOP_PRIVATE_EVAL_REC_4516_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4517(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4517_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4517_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4517_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4517_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4517_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4517_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4517_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4517_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4517_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4517_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4518
#define MACROLOP_PRIVATE_EVAL_REC_4517_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4518(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4518_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4518_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4518_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4518_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4518_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4518_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4518_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4518_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4518_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4518_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4519
#define MACROLOP_PRIVATE_EVAL_REC_4518_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4519(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4519_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4519_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4519_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4519_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4519_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4519_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4519_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4519_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4519_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4519_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4520
#define MACROLOP_PRIVATE_EVAL_REC_4519_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4520(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4520_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4520_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4520_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4520_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4520_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4520_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4520_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4520_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4520_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4520_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4521
#define MACROLOP_PRIVATE_EVAL_REC_4520_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4521(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4521_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4521_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4521_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4521_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4521_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4521_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4521_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4521_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4521_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4521_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4522
#define MACROLOP_PRIVATE_EVAL_REC_4521_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4522(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4522_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4522_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4522_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4522_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4522_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4522_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4522_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4522_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4522_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4522_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4523
#define MACROLOP_PRIVATE_EVAL_REC_4522_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4523(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4523_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4523_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4523_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4523_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4523_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4523_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4523_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4523_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4523_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4523_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4524
#define MACROLOP_PRIVATE_EVAL_REC_4523_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4524(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4524_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4524_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4524_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4524_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4524_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4524_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4524_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4524_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4524_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4524_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4525
#define MACROLOP_PRIVATE_EVAL_REC_4524_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4525(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4525_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4525_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4525_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4525_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4525_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4525_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4525_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4525_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4525_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4525_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4526
#define MACROLOP_PRIVATE_EVAL_REC_4525_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4526(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4526_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4526_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4526_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4526_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4526_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4526_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4526_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4526_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4526_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4526_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4527
#define MACROLOP_PRIVATE_EVAL_REC_4526_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4527(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4527_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4527_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4527_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4527_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4527_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4527_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4527_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4527_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4527_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4527_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4528
#define MACROLOP_PRIVATE_EVAL_REC_4527_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4528(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4528_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4528_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4528_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4528_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4528_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4528_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4528_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4528_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4528_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4528_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4529
#define MACROLOP_PRIVATE_EVAL_REC_4528_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4529(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4529_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4529_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4529_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4529_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4529_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4529_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4529_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4529_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4529_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4529_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4530
#define MACROLOP_PRIVATE_EVAL_REC_4529_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4530(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4530_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4530_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4530_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4530_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4530_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4530_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4530_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4530_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4530_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4530_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4531
#define MACROLOP_PRIVATE_EVAL_REC_4530_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4531(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4531_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4531_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4531_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4531_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4531_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4531_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4531_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4531_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4531_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4531_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4532
#define MACROLOP_PRIVATE_EVAL_REC_4531_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4532(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4532_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4532_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4532_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4532_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4532_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4532_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4532_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4532_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4532_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4532_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4533
#define MACROLOP_PRIVATE_EVAL_REC_4532_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4533(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4533_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4533_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4533_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4533_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4533_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4533_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4533_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4533_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4533_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4533_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4534
#define MACROLOP_PRIVATE_EVAL_REC_4533_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4534(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4534_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4534_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4534_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4534_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4534_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4534_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4534_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4534_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4534_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4534_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4535
#define MACROLOP_PRIVATE_EVAL_REC_4534_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4535(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4535_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4535_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4535_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4535_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4535_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4535_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4535_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4535_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4535_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4535_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4536
#define MACROLOP_PRIVATE_EVAL_REC_4535_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4536(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4536_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4536_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4536_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4536_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4536_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4536_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4536_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4536_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4536_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4536_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4537
#define MACROLOP_PRIVATE_EVAL_REC_4536_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4537(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4537_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4537_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4537_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4537_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4537_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4537_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4537_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4537_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4537_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4537_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4538
#define MACROLOP_PRIVATE_EVAL_REC_4537_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4538(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4538_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4538_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4538_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4538_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4538_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4538_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4538_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4538_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4538_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4538_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4539
#define MACROLOP_PRIVATE_EVAL_REC_4538_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4539(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4539_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4539_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4539_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4539_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4539_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4539_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4539_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4539_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4539_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4539_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4540
#define MACROLOP_PRIVATE_EVAL_REC_4539_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4540(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4540_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4540_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4540_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4540_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4540_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4540_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4540_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4540_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4540_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4540_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4541
#define MACROLOP_PRIVATE_EVAL_REC_4540_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4541(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4541_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4541_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4541_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4541_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4541_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4541_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4541_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4541_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4541_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4541_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4542
#define MACROLOP_PRIVATE_EVAL_REC_4541_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4542(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4542_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4542_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4542_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4542_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4542_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4542_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4542_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4542_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4542_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4542_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4543
#define MACROLOP_PRIVATE_EVAL_REC_4542_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4543(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4543_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4543_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4543_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4543_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4543_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4543_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4543_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4543_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4543_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4543_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4544
#define MACROLOP_PRIVATE_EVAL_REC_4543_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4544(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4544_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4544_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4544_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4544_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4544_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4544_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4544_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4544_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4544_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4544_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4545
#define MACROLOP_PRIVATE_EVAL_REC_4544_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4545(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4545_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4545_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4545_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4545_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4545_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4545_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4545_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4545_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4545_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4545_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4546
#define MACROLOP_PRIVATE_EVAL_REC_4545_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4546(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4546_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4546_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4546_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4546_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4546_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4546_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4546_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4546_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4546_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4546_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4547
#define MACROLOP_PRIVATE_EVAL_REC_4546_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4547(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4547_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4547_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4547_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4547_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4547_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4547_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4547_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4547_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4547_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4547_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4548
#define MACROLOP_PRIVATE_EVAL_REC_4547_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4548(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4548_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4548_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4548_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4548_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4548_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4548_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4548_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4548_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4548_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4548_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4549
#define MACROLOP_PRIVATE_EVAL_REC_4548_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4549(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4549_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4549_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4549_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4549_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4549_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4549_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4549_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4549_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4549_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4549_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4550
#define MACROLOP_PRIVATE_EVAL_REC_4549_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4550(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4550_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4550_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4550_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4550_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4550_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4550_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4550_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4550_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4550_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4550_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4551
#define MACROLOP_PRIVATE_EVAL_REC_4550_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4551(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4551_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4551_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4551_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4551_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4551_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4551_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4551_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4551_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4551_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4551_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4552
#define MACROLOP_PRIVATE_EVAL_REC_4551_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4552(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4552_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4552_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4552_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4552_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4552_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4552_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4552_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4552_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4552_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4552_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4553
#define MACROLOP_PRIVATE_EVAL_REC_4552_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4553(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4553_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4553_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4553_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4553_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4553_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4553_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4553_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4553_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4553_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4553_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4554
#define MACROLOP_PRIVATE_EVAL_REC_4553_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4554(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4554_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4554_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4554_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4554_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4554_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4554_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4554_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4554_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4554_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4554_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4555
#define MACROLOP_PRIVATE_EVAL_REC_4554_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4555(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4555_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4555_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4555_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4555_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4555_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4555_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4555_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4555_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4555_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4555_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4556
#define MACROLOP_PRIVATE_EVAL_REC_4555_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4556(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4556_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4556_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4556_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4556_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4556_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4556_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4556_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4556_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4556_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4556_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4557
#define MACROLOP_PRIVATE_EVAL_REC_4556_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4557(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4557_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4557_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4557_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4557_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4557_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4557_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4557_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4557_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4557_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4557_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4558
#define MACROLOP_PRIVATE_EVAL_REC_4557_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4558(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4558_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4558_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4558_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4558_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4558_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4558_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4558_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4558_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4558_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4558_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4559
#define MACROLOP_PRIVATE_EVAL_REC_4558_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4559(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4559_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4559_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4559_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4559_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4559_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4559_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4559_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4559_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4559_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4559_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4560
#define MACROLOP_PRIVATE_EVAL_REC_4559_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4560(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4560_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4560_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4560_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4560_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4560_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4560_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4560_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4560_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4560_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4560_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4561
#define MACROLOP_PRIVATE_EVAL_REC_4560_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4561(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4561_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4561_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4561_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4561_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4561_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4561_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4561_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4561_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4561_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4561_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4562
#define MACROLOP_PRIVATE_EVAL_REC_4561_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4562(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4562_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4562_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4562_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4562_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4562_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4562_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4562_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4562_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4562_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4562_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4563
#define MACROLOP_PRIVATE_EVAL_REC_4562_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4563(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4563_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4563_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4563_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4563_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4563_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4563_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4563_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4563_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4563_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4563_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4564
#define MACROLOP_PRIVATE_EVAL_REC_4563_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4564(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4564_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4564_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4564_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4564_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4564_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4564_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4564_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4564_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4564_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4564_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4565
#define MACROLOP_PRIVATE_EVAL_REC_4564_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4565(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4565_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4565_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4565_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4565_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4565_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4565_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4565_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4565_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4565_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4565_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4566
#define MACROLOP_PRIVATE_EVAL_REC_4565_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4566(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4566_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4566_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4566_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4566_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4566_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4566_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4566_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4566_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4566_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4566_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4567
#define MACROLOP_PRIVATE_EVAL_REC_4566_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4567(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4567_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4567_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4567_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4567_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4567_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4567_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4567_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4567_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4567_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4567_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4568
#define MACROLOP_PRIVATE_EVAL_REC_4567_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4568(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4568_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4568_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4568_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4568_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4568_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4568_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4568_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4568_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4568_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4568_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4569
#define MACROLOP_PRIVATE_EVAL_REC_4568_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4569(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4569_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4569_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4569_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4569_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4569_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4569_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4569_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4569_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4569_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4569_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4570
#define MACROLOP_PRIVATE_EVAL_REC_4569_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4570(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4570_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4570_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4570_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4570_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4570_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4570_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4570_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4570_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4570_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4570_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4571
#define MACROLOP_PRIVATE_EVAL_REC_4570_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4571(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4571_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4571_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4571_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4571_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4571_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4571_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4571_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4571_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4571_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4571_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4572
#define MACROLOP_PRIVATE_EVAL_REC_4571_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4572(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4572_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4572_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4572_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4572_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4572_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4572_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4572_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4572_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4572_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4572_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4573
#define MACROLOP_PRIVATE_EVAL_REC_4572_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4573(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4573_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4573_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4573_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4573_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4573_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4573_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4573_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4573_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4573_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4573_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4574
#define MACROLOP_PRIVATE_EVAL_REC_4573_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4574(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4574_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4574_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4574_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4574_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4574_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4574_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4574_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4574_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4574_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4574_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4575
#define MACROLOP_PRIVATE_EVAL_REC_4574_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4575(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4575_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4575_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4575_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4575_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4575_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4575_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4575_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4575_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4575_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4575_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4576
#define MACROLOP_PRIVATE_EVAL_REC_4575_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4576(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4576_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4576_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4576_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4576_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4576_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4576_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4576_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4576_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4576_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4576_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4577
#define MACROLOP_PRIVATE_EVAL_REC_4576_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4577(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4577_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4577_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4577_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4577_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4577_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4577_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4577_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4577_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4577_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4577_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4578
#define MACROLOP_PRIVATE_EVAL_REC_4577_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4578(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4578_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4578_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4578_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4578_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4578_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4578_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4578_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4578_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4578_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4578_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4579
#define MACROLOP_PRIVATE_EVAL_REC_4578_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4579(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4579_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4579_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4579_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4579_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4579_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4579_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4579_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4579_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4579_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4579_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4580
#define MACROLOP_PRIVATE_EVAL_REC_4579_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4580(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4580_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4580_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4580_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4580_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4580_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4580_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4580_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4580_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4580_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4580_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4581
#define MACROLOP_PRIVATE_EVAL_REC_4580_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4581(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4581_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4581_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4581_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4581_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4581_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4581_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4581_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4581_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4581_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4581_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4582
#define MACROLOP_PRIVATE_EVAL_REC_4581_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4582(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4582_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4582_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4582_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4582_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4582_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4582_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4582_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4582_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4582_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4582_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4583
#define MACROLOP_PRIVATE_EVAL_REC_4582_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4583(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4583_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4583_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4583_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4583_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4583_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4583_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4583_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4583_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4583_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4583_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4584
#define MACROLOP_PRIVATE_EVAL_REC_4583_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4584(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4584_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4584_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4584_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4584_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4584_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4584_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4584_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4584_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4584_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4584_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4585
#define MACROLOP_PRIVATE_EVAL_REC_4584_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4585(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4585_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4585_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4585_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4585_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4585_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4585_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4585_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4585_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4585_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4585_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4586
#define MACROLOP_PRIVATE_EVAL_REC_4585_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4586(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4586_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4586_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4586_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4586_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4586_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4586_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4586_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4586_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4586_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4586_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4587
#define MACROLOP_PRIVATE_EVAL_REC_4586_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4587(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4587_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4587_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4587_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4587_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4587_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4587_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4587_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4587_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4587_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4587_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4588
#define MACROLOP_PRIVATE_EVAL_REC_4587_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4588(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4588_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4588_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4588_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4588_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4588_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4588_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4588_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4588_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4588_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4588_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4589
#define MACROLOP_PRIVATE_EVAL_REC_4588_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4589(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4589_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4589_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4589_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4589_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4589_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4589_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4589_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4589_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4589_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4589_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4590
#define MACROLOP_PRIVATE_EVAL_REC_4589_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4590(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4590_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4590_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4590_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4590_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4590_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4590_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4590_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4590_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4590_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4590_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4591
#define MACROLOP_PRIVATE_EVAL_REC_4590_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4591(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4591_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4591_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4591_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4591_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4591_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4591_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4591_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4591_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4591_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4591_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4592
#define MACROLOP_PRIVATE_EVAL_REC_4591_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4592(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4592_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4592_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4592_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4592_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4592_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4592_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4592_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4592_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4592_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4592_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4593
#define MACROLOP_PRIVATE_EVAL_REC_4592_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4593(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4593_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4593_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4593_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4593_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4593_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4593_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4593_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4593_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4593_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4593_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4594
#define MACROLOP_PRIVATE_EVAL_REC_4593_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4594(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4594_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4594_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4594_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4594_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4594_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4594_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4594_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4594_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4594_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4594_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4595
#define MACROLOP_PRIVATE_EVAL_REC_4594_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4595(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4595_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4595_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4595_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4595_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4595_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4595_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4595_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4595_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4595_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4595_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4596
#define MACROLOP_PRIVATE_EVAL_REC_4595_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4596(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4596_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4596_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4596_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4596_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4596_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4596_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4596_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4596_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4596_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4596_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4597
#define MACROLOP_PRIVATE_EVAL_REC_4596_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4597(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4597_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4597_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4597_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4597_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4597_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4597_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4597_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4597_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4597_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4597_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4598
#define MACROLOP_PRIVATE_EVAL_REC_4597_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4598(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4598_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4598_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4598_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4598_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4598_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4598_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4598_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4598_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4598_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4598_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4599
#define MACROLOP_PRIVATE_EVAL_REC_4598_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4599(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4599_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4599_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4599_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4599_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4599_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4599_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4599_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4599_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4599_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4599_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4600
#define MACROLOP_PRIVATE_EVAL_REC_4599_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4600(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4600_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4600_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4600_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4600_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4600_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4600_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4600_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4600_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4600_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4600_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4601
#define MACROLOP_PRIVATE_EVAL_REC_4600_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4601(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4601_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4601_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4601_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4601_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4601_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4601_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4601_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4601_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4601_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4601_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4602
#define MACROLOP_PRIVATE_EVAL_REC_4601_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4602(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4602_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4602_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4602_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4602_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4602_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4602_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4602_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4602_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4602_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4602_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4603
#define MACROLOP_PRIVATE_EVAL_REC_4602_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4603(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4603_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4603_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4603_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4603_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4603_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4603_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4603_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4603_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4603_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4603_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4604
#define MACROLOP_PRIVATE_EVAL_REC_4603_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4604(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4604_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4604_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4604_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4604_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4604_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4604_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4604_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4604_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4604_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4604_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4605
#define MACROLOP_PRIVATE_EVAL_REC_4604_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4605(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4605_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4605_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4605_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4605_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4605_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4605_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4605_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4605_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4605_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4605_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4606
#define MACROLOP_PRIVATE_EVAL_REC_4605_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4606(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4606_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4606_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4606_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4606_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4606_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4606_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4606_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4606_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4606_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4606_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4607
#define MACROLOP_PRIVATE_EVAL_REC_4606_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4607(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4607_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4607_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4607_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4607_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4607_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4607_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4607_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4607_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4607_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4607_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4608
#define MACROLOP_PRIVATE_EVAL_REC_4607_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4608(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4608_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4608_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4608_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4608_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4608_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4608_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4608_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4608_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4608_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4608_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4609
#define MACROLOP_PRIVATE_EVAL_REC_4608_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4609(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4609_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4609_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4609_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4609_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4609_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4609_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4609_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4609_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4609_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4609_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4610
#define MACROLOP_PRIVATE_EVAL_REC_4609_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4610(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4610_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4610_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4610_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4610_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4610_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4610_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4610_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4610_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4610_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4610_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4611
#define MACROLOP_PRIVATE_EVAL_REC_4610_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4611(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4611_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4611_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4611_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4611_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4611_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4611_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4611_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4611_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4611_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4611_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4612
#define MACROLOP_PRIVATE_EVAL_REC_4611_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4612(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4612_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4612_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4612_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4612_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4612_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4612_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4612_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4612_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4612_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4612_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4613
#define MACROLOP_PRIVATE_EVAL_REC_4612_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4613(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4613_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4613_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4613_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4613_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4613_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4613_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4613_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4613_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4613_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4613_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4614
#define MACROLOP_PRIVATE_EVAL_REC_4613_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4614(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4614_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4614_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4614_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4614_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4614_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4614_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4614_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4614_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4614_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4614_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4615
#define MACROLOP_PRIVATE_EVAL_REC_4614_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4615(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4615_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4615_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4615_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4615_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4615_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4615_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4615_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4615_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4615_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4615_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4616
#define MACROLOP_PRIVATE_EVAL_REC_4615_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4616(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4616_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4616_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4616_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4616_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4616_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4616_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4616_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4616_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4616_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4616_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4617
#define MACROLOP_PRIVATE_EVAL_REC_4616_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4617(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4617_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4617_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4617_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4617_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4617_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4617_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4617_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4617_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4617_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4617_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4618
#define MACROLOP_PRIVATE_EVAL_REC_4617_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4618(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4618_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4618_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4618_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4618_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4618_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4618_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4618_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4618_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4618_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4618_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4619
#define MACROLOP_PRIVATE_EVAL_REC_4618_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4619(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4619_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4619_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4619_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4619_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4619_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4619_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4619_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4619_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4619_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4619_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4620
#define MACROLOP_PRIVATE_EVAL_REC_4619_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4620(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4620_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4620_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4620_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4620_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4620_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4620_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4620_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4620_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4620_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4620_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4621
#define MACROLOP_PRIVATE_EVAL_REC_4620_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4621(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4621_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4621_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4621_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4621_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4621_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4621_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4621_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4621_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4621_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4621_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4622
#define MACROLOP_PRIVATE_EVAL_REC_4621_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4622(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4622_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4622_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4622_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4622_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4622_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4622_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4622_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4622_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4622_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4622_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4623
#define MACROLOP_PRIVATE_EVAL_REC_4622_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4623(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4623_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4623_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4623_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4623_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4623_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4623_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4623_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4623_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4623_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4623_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4624
#define MACROLOP_PRIVATE_EVAL_REC_4623_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4624(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4624_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4624_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4624_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4624_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4624_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4624_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4624_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4624_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4624_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4624_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4625
#define MACROLOP_PRIVATE_EVAL_REC_4624_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4625(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4625_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4625_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4625_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4625_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4625_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4625_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4625_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4625_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4625_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4625_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4626
#define MACROLOP_PRIVATE_EVAL_REC_4625_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4626(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4626_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4626_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4626_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4626_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4626_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4626_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4626_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4626_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4626_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4626_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4627
#define MACROLOP_PRIVATE_EVAL_REC_4626_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4627(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4627_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4627_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4627_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4627_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4627_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4627_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4627_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4627_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4627_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4627_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4628
#define MACROLOP_PRIVATE_EVAL_REC_4627_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4628(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4628_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4628_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4628_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4628_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4628_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4628_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4628_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4628_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4628_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4628_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4629
#define MACROLOP_PRIVATE_EVAL_REC_4628_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4629(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4629_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4629_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4629_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4629_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4629_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4629_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4629_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4629_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4629_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4629_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4630
#define MACROLOP_PRIVATE_EVAL_REC_4629_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4630(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4630_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4630_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4630_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4630_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4630_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4630_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4630_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4630_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4630_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4630_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4631
#define MACROLOP_PRIVATE_EVAL_REC_4630_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4631(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4631_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4631_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4631_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4631_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4631_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4631_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4631_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4631_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4631_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4631_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4632
#define MACROLOP_PRIVATE_EVAL_REC_4631_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4632(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4632_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4632_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4632_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4632_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4632_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4632_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4632_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4632_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4632_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4632_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4633
#define MACROLOP_PRIVATE_EVAL_REC_4632_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4633(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4633_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4633_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4633_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4633_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4633_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4633_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4633_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4633_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4633_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4633_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4634
#define MACROLOP_PRIVATE_EVAL_REC_4633_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4634(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4634_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4634_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4634_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4634_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4634_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4634_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4634_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4634_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4634_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4634_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4635
#define MACROLOP_PRIVATE_EVAL_REC_4634_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4635(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4635_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4635_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4635_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4635_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4635_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4635_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4635_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4635_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4635_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4635_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4636
#define MACROLOP_PRIVATE_EVAL_REC_4635_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4636(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4636_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4636_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4636_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4636_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4636_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4636_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4636_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4636_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4636_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4636_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4637
#define MACROLOP_PRIVATE_EVAL_REC_4636_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4637(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4637_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4637_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4637_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4637_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4637_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4637_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4637_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4637_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4637_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4637_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4638
#define MACROLOP_PRIVATE_EVAL_REC_4637_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4638(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4638_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4638_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4638_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4638_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4638_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4638_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4638_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4638_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4638_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4638_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4639
#define MACROLOP_PRIVATE_EVAL_REC_4638_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4639(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4639_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4639_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4639_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4639_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4639_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4639_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4639_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4639_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4639_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4639_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4640
#define MACROLOP_PRIVATE_EVAL_REC_4639_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4640(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4640_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4640_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4640_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4640_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4640_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4640_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4640_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4640_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4640_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4640_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4641
#define MACROLOP_PRIVATE_EVAL_REC_4640_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4641(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4641_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4641_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4641_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4641_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4641_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4641_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4641_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4641_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4641_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4641_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4642
#define MACROLOP_PRIVATE_EVAL_REC_4641_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4642(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4642_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4642_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4642_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4642_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4642_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4642_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4642_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4642_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4642_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4642_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4643
#define MACROLOP_PRIVATE_EVAL_REC_4642_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4643(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4643_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4643_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4643_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4643_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4643_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4643_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4643_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4643_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4643_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4643_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4644
#define MACROLOP_PRIVATE_EVAL_REC_4643_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4644(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4644_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4644_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4644_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4644_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4644_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4644_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4644_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4644_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4644_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4644_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4645
#define MACROLOP_PRIVATE_EVAL_REC_4644_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4645(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4645_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4645_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4645_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4645_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4645_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4645_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4645_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4645_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4645_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4645_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4646
#define MACROLOP_PRIVATE_EVAL_REC_4645_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4646(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4646_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4646_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4646_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4646_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4646_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4646_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4646_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4646_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4646_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4646_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4647
#define MACROLOP_PRIVATE_EVAL_REC_4646_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4647(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4647_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4647_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4647_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4647_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4647_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4647_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4647_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4647_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4647_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4647_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4648
#define MACROLOP_PRIVATE_EVAL_REC_4647_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4648(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4648_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4648_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4648_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4648_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4648_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4648_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4648_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4648_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4648_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4648_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4649
#define MACROLOP_PRIVATE_EVAL_REC_4648_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4649(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4649_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4649_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4649_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4649_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4649_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4649_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4649_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4649_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4649_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4649_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4650
#define MACROLOP_PRIVATE_EVAL_REC_4649_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4650(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4650_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4650_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4650_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4650_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4650_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4650_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4650_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4650_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4650_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4650_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4651
#define MACROLOP_PRIVATE_EVAL_REC_4650_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4651(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4651_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4651_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4651_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4651_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4651_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4651_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4651_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4651_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4651_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4651_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4652
#define MACROLOP_PRIVATE_EVAL_REC_4651_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4652(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4652_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4652_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4652_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4652_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4652_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4652_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4652_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4652_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4652_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4652_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4653
#define MACROLOP_PRIVATE_EVAL_REC_4652_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4653(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4653_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4653_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4653_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4653_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4653_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4653_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4653_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4653_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4653_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4653_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4654
#define MACROLOP_PRIVATE_EVAL_REC_4653_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4654(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4654_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4654_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4654_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4654_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4654_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4654_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4654_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4654_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4654_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4654_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4655
#define MACROLOP_PRIVATE_EVAL_REC_4654_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4655(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4655_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4655_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4655_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4655_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4655_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4655_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4655_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4655_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4655_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4655_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4656
#define MACROLOP_PRIVATE_EVAL_REC_4655_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4656(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4656_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4656_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4656_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4656_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4656_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4656_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4656_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4656_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4656_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4656_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4657
#define MACROLOP_PRIVATE_EVAL_REC_4656_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4657(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4657_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4657_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4657_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4657_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4657_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4657_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4657_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4657_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4657_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4657_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4658
#define MACROLOP_PRIVATE_EVAL_REC_4657_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4658(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4658_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4658_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4658_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4658_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4658_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4658_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4658_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4658_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4658_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4658_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4659
#define MACROLOP_PRIVATE_EVAL_REC_4658_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4659(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4659_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4659_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4659_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4659_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4659_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4659_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4659_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4659_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4659_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4659_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4660
#define MACROLOP_PRIVATE_EVAL_REC_4659_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4660(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4660_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4660_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4660_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4660_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4660_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4660_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4660_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4660_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4660_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4660_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4661
#define MACROLOP_PRIVATE_EVAL_REC_4660_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4661(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4661_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4661_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4661_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4661_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4661_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4661_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4661_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4661_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4661_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4661_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4662
#define MACROLOP_PRIVATE_EVAL_REC_4661_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4662(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4662_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4662_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4662_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4662_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4662_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4662_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4662_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4662_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4662_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4662_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4663
#define MACROLOP_PRIVATE_EVAL_REC_4662_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4663(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4663_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4663_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4663_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4663_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4663_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4663_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4663_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4663_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4663_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4663_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4664
#define MACROLOP_PRIVATE_EVAL_REC_4663_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4664(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4664_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4664_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4664_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4664_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4664_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4664_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4664_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4664_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4664_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4664_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4665
#define MACROLOP_PRIVATE_EVAL_REC_4664_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4665(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4665_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4665_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4665_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4665_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4665_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4665_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4665_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4665_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4665_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4665_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4666
#define MACROLOP_PRIVATE_EVAL_REC_4665_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4666(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4666_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4666_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4666_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4666_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4666_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4666_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4666_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4666_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4666_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4666_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4667
#define MACROLOP_PRIVATE_EVAL_REC_4666_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4667(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4667_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4667_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4667_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4667_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4667_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4667_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4667_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4667_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4667_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4667_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4668
#define MACROLOP_PRIVATE_EVAL_REC_4667_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4668(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4668_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4668_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4668_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4668_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4668_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4668_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4668_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4668_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4668_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4668_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4669
#define MACROLOP_PRIVATE_EVAL_REC_4668_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4669(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4669_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4669_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4669_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4669_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4669_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4669_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4669_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4669_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4669_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4669_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4670
#define MACROLOP_PRIVATE_EVAL_REC_4669_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4670(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4670_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4670_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4670_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4670_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4670_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4670_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4670_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4670_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4670_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4670_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4671
#define MACROLOP_PRIVATE_EVAL_REC_4670_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4671(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4671_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4671_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4671_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4671_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4671_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4671_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4671_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4671_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4671_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4671_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4672
#define MACROLOP_PRIVATE_EVAL_REC_4671_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4672(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4672_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4672_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4672_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4672_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4672_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4672_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4672_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4672_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4672_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4672_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4673
#define MACROLOP_PRIVATE_EVAL_REC_4672_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4673(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4673_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4673_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4673_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4673_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4673_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4673_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4673_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4673_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4673_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4673_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4674
#define MACROLOP_PRIVATE_EVAL_REC_4673_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4674(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4674_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4674_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4674_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4674_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4674_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4674_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4674_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4674_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4674_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4674_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4675
#define MACROLOP_PRIVATE_EVAL_REC_4674_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4675(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4675_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4675_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4675_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4675_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4675_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4675_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4675_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4675_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4675_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4675_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4676
#define MACROLOP_PRIVATE_EVAL_REC_4675_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4676(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4676_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4676_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4676_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4676_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4676_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4676_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4676_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4676_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4676_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4676_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4677
#define MACROLOP_PRIVATE_EVAL_REC_4676_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4677(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4677_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4677_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4677_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4677_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4677_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4677_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4677_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4677_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4677_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4677_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4678
#define MACROLOP_PRIVATE_EVAL_REC_4677_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4678(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4678_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4678_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4678_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4678_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4678_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4678_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4678_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4678_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4678_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4678_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4679
#define MACROLOP_PRIVATE_EVAL_REC_4678_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4679(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4679_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4679_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4679_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4679_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4679_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4679_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4679_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4679_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4679_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4679_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4680
#define MACROLOP_PRIVATE_EVAL_REC_4679_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4680(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4680_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4680_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4680_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4680_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4680_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4680_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4680_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4680_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4680_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4680_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4681
#define MACROLOP_PRIVATE_EVAL_REC_4680_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4681(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4681_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4681_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4681_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4681_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4681_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4681_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4681_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4681_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4681_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4681_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4682
#define MACROLOP_PRIVATE_EVAL_REC_4681_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4682(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4682_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4682_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4682_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4682_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4682_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4682_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4682_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4682_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4682_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4682_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4683
#define MACROLOP_PRIVATE_EVAL_REC_4682_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4683(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4683_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4683_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4683_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4683_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4683_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4683_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4683_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4683_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4683_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4683_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4684
#define MACROLOP_PRIVATE_EVAL_REC_4683_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4684(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4684_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4684_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4684_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4684_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4684_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4684_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4684_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4684_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4684_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4684_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4685
#define MACROLOP_PRIVATE_EVAL_REC_4684_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4685(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4685_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4685_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4685_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4685_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4685_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4685_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4685_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4685_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4685_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4685_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4686
#define MACROLOP_PRIVATE_EVAL_REC_4685_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4686(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4686_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4686_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4686_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4686_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4686_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4686_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4686_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4686_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4686_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4686_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4687
#define MACROLOP_PRIVATE_EVAL_REC_4686_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4687(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4687_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4687_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4687_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4687_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4687_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4687_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4687_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4687_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4687_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4687_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4688
#define MACROLOP_PRIVATE_EVAL_REC_4687_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4688(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4688_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4688_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4688_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4688_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4688_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4688_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4688_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4688_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4688_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4688_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4689
#define MACROLOP_PRIVATE_EVAL_REC_4688_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4689(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4689_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4689_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4689_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4689_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4689_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4689_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4689_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4689_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4689_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4689_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4690
#define MACROLOP_PRIVATE_EVAL_REC_4689_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4690(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4690_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4690_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4690_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4690_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4690_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4690_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4690_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4690_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4690_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4690_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4691
#define MACROLOP_PRIVATE_EVAL_REC_4690_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4691(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4691_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4691_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4691_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4691_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4691_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4691_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4691_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4691_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4691_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4691_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4692
#define MACROLOP_PRIVATE_EVAL_REC_4691_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4692(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4692_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4692_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4692_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4692_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4692_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4692_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4692_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4692_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4692_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4692_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4693
#define MACROLOP_PRIVATE_EVAL_REC_4692_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4693(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4693_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4693_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4693_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4693_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4693_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4693_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4693_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4693_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4693_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4693_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4694
#define MACROLOP_PRIVATE_EVAL_REC_4693_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4694(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4694_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4694_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4694_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4694_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4694_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4694_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4694_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4694_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4694_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4694_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4695
#define MACROLOP_PRIVATE_EVAL_REC_4694_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4695(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4695_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4695_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4695_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4695_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4695_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4695_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4695_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4695_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4695_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4695_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4696
#define MACROLOP_PRIVATE_EVAL_REC_4695_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4696(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4696_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4696_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4696_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4696_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4696_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4696_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4696_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4696_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4696_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4696_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4697
#define MACROLOP_PRIVATE_EVAL_REC_4696_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4697(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4697_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4697_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4697_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4697_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4697_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4697_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4697_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4697_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4697_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4697_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4698
#define MACROLOP_PRIVATE_EVAL_REC_4697_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4698(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4698_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4698_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4698_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4698_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4698_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4698_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4698_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4698_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4698_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4698_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4699
#define MACROLOP_PRIVATE_EVAL_REC_4698_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4699(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4699_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4699_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4699_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4699_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4699_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4699_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4699_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4699_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4699_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4699_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4700
#define MACROLOP_PRIVATE_EVAL_REC_4699_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4700(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4700_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4700_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4700_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4700_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4700_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4700_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4700_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4700_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4700_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4700_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4701
#define MACROLOP_PRIVATE_EVAL_REC_4700_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4701(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4701_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4701_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4701_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4701_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4701_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4701_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4701_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4701_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4701_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4701_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4702
#define MACROLOP_PRIVATE_EVAL_REC_4701_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4702(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4702_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4702_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4702_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4702_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4702_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4702_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4702_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4702_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4702_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4702_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4703
#define MACROLOP_PRIVATE_EVAL_REC_4702_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4703(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4703_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4703_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4703_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4703_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4703_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4703_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4703_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4703_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4703_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4703_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4704
#define MACROLOP_PRIVATE_EVAL_REC_4703_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4704(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4704_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4704_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4704_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4704_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4704_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4704_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4704_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4704_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4704_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4704_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4705
#define MACROLOP_PRIVATE_EVAL_REC_4704_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4705(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4705_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4705_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4705_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4705_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4705_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4705_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4705_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4705_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4705_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4705_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4706
#define MACROLOP_PRIVATE_EVAL_REC_4705_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4706(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4706_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4706_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4706_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4706_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4706_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4706_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4706_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4706_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4706_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4706_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4707
#define MACROLOP_PRIVATE_EVAL_REC_4706_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4707(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4707_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4707_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4707_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4707_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4707_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4707_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4707_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4707_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4707_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4707_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4708
#define MACROLOP_PRIVATE_EVAL_REC_4707_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4708(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4708_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4708_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4708_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4708_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4708_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4708_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4708_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4708_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4708_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4708_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4709
#define MACROLOP_PRIVATE_EVAL_REC_4708_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4709(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4709_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4709_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4709_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4709_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4709_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4709_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4709_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4709_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4709_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4709_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4710
#define MACROLOP_PRIVATE_EVAL_REC_4709_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4710(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4710_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4710_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4710_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4710_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4710_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4710_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4710_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4710_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4710_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4710_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4711
#define MACROLOP_PRIVATE_EVAL_REC_4710_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4711(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4711_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4711_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4711_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4711_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4711_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4711_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4711_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4711_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4711_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4711_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4712
#define MACROLOP_PRIVATE_EVAL_REC_4711_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4712(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4712_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4712_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4712_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4712_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4712_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4712_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4712_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4712_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4712_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4712_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4713
#define MACROLOP_PRIVATE_EVAL_REC_4712_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4713(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4713_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4713_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4713_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4713_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4713_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4713_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4713_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4713_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4713_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4713_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4714
#define MACROLOP_PRIVATE_EVAL_REC_4713_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4714(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4714_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4714_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4714_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4714_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4714_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4714_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4714_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4714_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4714_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4714_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4715
#define MACROLOP_PRIVATE_EVAL_REC_4714_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4715(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4715_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4715_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4715_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4715_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4715_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4715_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4715_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4715_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4715_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4715_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4716
#define MACROLOP_PRIVATE_EVAL_REC_4715_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4716(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4716_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4716_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4716_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4716_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4716_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4716_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4716_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4716_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4716_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4716_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4717
#define MACROLOP_PRIVATE_EVAL_REC_4716_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4717(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4717_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4717_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4717_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4717_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4717_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4717_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4717_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4717_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4717_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4717_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4718
#define MACROLOP_PRIVATE_EVAL_REC_4717_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4718(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4718_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4718_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4718_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4718_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4718_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4718_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4718_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4718_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4718_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4718_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4719
#define MACROLOP_PRIVATE_EVAL_REC_4718_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4719(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4719_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4719_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4719_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4719_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4719_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4719_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4719_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4719_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4719_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4719_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4720
#define MACROLOP_PRIVATE_EVAL_REC_4719_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4720(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4720_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4720_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4720_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4720_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4720_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4720_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4720_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4720_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4720_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4720_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4721
#define MACROLOP_PRIVATE_EVAL_REC_4720_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4721(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4721_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4721_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4721_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4721_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4721_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4721_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4721_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4721_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4721_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4721_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4722
#define MACROLOP_PRIVATE_EVAL_REC_4721_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4722(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4722_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4722_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4722_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4722_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4722_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4722_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4722_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4722_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4722_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4722_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4723
#define MACROLOP_PRIVATE_EVAL_REC_4722_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4723(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4723_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4723_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4723_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4723_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4723_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4723_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4723_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4723_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4723_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4723_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4724
#define MACROLOP_PRIVATE_EVAL_REC_4723_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4724(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4724_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4724_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4724_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4724_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4724_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4724_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4724_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4724_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4724_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4724_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4725
#define MACROLOP_PRIVATE_EVAL_REC_4724_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4725(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4725_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4725_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4725_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4725_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4725_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4725_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4725_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4725_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4725_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4725_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4726
#define MACROLOP_PRIVATE_EVAL_REC_4725_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4726(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4726_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4726_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4726_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4726_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4726_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4726_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4726_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4726_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4726_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4726_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4727
#define MACROLOP_PRIVATE_EVAL_REC_4726_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4727(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4727_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4727_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4727_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4727_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4727_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4727_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4727_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4727_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4727_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4727_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4728
#define MACROLOP_PRIVATE_EVAL_REC_4727_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4728(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4728_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4728_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4728_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4728_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4728_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4728_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4728_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4728_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4728_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4728_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4729
#define MACROLOP_PRIVATE_EVAL_REC_4728_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4729(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4729_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4729_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4729_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4729_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4729_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4729_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4729_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4729_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4729_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4729_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4730
#define MACROLOP_PRIVATE_EVAL_REC_4729_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4730(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4730_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4730_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4730_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4730_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4730_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4730_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4730_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4730_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4730_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4730_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4731
#define MACROLOP_PRIVATE_EVAL_REC_4730_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4731(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4731_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4731_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4731_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4731_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4731_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4731_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4731_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4731_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4731_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4731_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4732
#define MACROLOP_PRIVATE_EVAL_REC_4731_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4732(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4732_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4732_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4732_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4732_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4732_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4732_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4732_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4732_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4732_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4732_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4733
#define MACROLOP_PRIVATE_EVAL_REC_4732_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4733(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4733_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4733_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4733_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4733_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4733_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4733_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4733_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4733_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4733_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4733_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4734
#define MACROLOP_PRIVATE_EVAL_REC_4733_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4734(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4734_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4734_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4734_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4734_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4734_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4734_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4734_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4734_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4734_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4734_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4735
#define MACROLOP_PRIVATE_EVAL_REC_4734_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4735(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4735_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4735_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4735_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4735_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4735_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4735_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4735_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4735_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4735_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4735_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4736
#define MACROLOP_PRIVATE_EVAL_REC_4735_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4736(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4736_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4736_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4736_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4736_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4736_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4736_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4736_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4736_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4736_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4736_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4737
#define MACROLOP_PRIVATE_EVAL_REC_4736_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4737(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4737_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4737_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4737_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4737_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4737_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4737_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4737_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4737_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4737_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4737_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4738
#define MACROLOP_PRIVATE_EVAL_REC_4737_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4738(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4738_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4738_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4738_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4738_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4738_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4738_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4738_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4738_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4738_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4738_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4739
#define MACROLOP_PRIVATE_EVAL_REC_4738_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4739(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4739_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4739_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4739_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4739_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4739_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4739_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4739_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4739_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4739_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4739_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4740
#define MACROLOP_PRIVATE_EVAL_REC_4739_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4740(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4740_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4740_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4740_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4740_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4740_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4740_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4740_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4740_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4740_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4740_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4741
#define MACROLOP_PRIVATE_EVAL_REC_4740_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4741(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4741_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4741_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4741_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4741_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4741_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4741_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4741_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4741_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4741_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4741_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4742
#define MACROLOP_PRIVATE_EVAL_REC_4741_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4742(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4742_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4742_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4742_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4742_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4742_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4742_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4742_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4742_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4742_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4742_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4743
#define MACROLOP_PRIVATE_EVAL_REC_4742_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4743(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4743_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4743_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4743_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4743_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4743_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4743_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4743_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4743_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4743_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4743_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4744
#define MACROLOP_PRIVATE_EVAL_REC_4743_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4744(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4744_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4744_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4744_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4744_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4744_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4744_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4744_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4744_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4744_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4744_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4745
#define MACROLOP_PRIVATE_EVAL_REC_4744_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4745(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4745_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4745_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4745_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4745_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4745_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4745_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4745_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4745_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4745_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4745_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4746
#define MACROLOP_PRIVATE_EVAL_REC_4745_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4746(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4746_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4746_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4746_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4746_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4746_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4746_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4746_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4746_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4746_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4746_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4747
#define MACROLOP_PRIVATE_EVAL_REC_4746_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4747(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4747_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4747_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4747_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4747_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4747_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4747_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4747_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4747_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4747_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4747_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4748
#define MACROLOP_PRIVATE_EVAL_REC_4747_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4748(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4748_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4748_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4748_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4748_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4748_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4748_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4748_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4748_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4748_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4748_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4749
#define MACROLOP_PRIVATE_EVAL_REC_4748_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4749(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4749_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4749_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4749_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4749_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4749_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4749_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4749_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4749_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4749_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4749_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4750
#define MACROLOP_PRIVATE_EVAL_REC_4749_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4750(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4750_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4750_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4750_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4750_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4750_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4750_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4750_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4750_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4750_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4750_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4751
#define MACROLOP_PRIVATE_EVAL_REC_4750_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4751(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4751_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4751_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4751_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4751_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4751_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4751_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4751_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4751_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4751_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4751_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4752
#define MACROLOP_PRIVATE_EVAL_REC_4751_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4752(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4752_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4752_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4752_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4752_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4752_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4752_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4752_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4752_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4752_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4752_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4753
#define MACROLOP_PRIVATE_EVAL_REC_4752_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4753(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4753_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4753_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4753_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4753_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4753_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4753_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4753_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4753_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4753_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4753_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4754
#define MACROLOP_PRIVATE_EVAL_REC_4753_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4754(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4754_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4754_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4754_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4754_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4754_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4754_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4754_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4754_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4754_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4754_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4755
#define MACROLOP_PRIVATE_EVAL_REC_4754_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4755(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4755_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4755_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4755_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4755_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4755_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4755_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4755_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4755_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4755_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4755_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4756
#define MACROLOP_PRIVATE_EVAL_REC_4755_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4756(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4756_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4756_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4756_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4756_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4756_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4756_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4756_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4756_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4756_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4756_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4757
#define MACROLOP_PRIVATE_EVAL_REC_4756_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4757(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4757_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4757_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4757_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4757_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4757_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4757_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4757_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4757_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4757_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4757_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4758
#define MACROLOP_PRIVATE_EVAL_REC_4757_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4758(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4758_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4758_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4758_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4758_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4758_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4758_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4758_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4758_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4758_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4758_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4759
#define MACROLOP_PRIVATE_EVAL_REC_4758_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4759(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4759_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4759_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4759_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4759_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4759_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4759_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4759_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4759_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4759_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4759_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4760
#define MACROLOP_PRIVATE_EVAL_REC_4759_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4760(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4760_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4760_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4760_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4760_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4760_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4760_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4760_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4760_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4760_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4760_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4761
#define MACROLOP_PRIVATE_EVAL_REC_4760_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4761(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4761_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4761_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4761_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4761_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4761_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4761_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4761_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4761_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4761_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4761_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4762
#define MACROLOP_PRIVATE_EVAL_REC_4761_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4762(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4762_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4762_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4762_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4762_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4762_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4762_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4762_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4762_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4762_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4762_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4763
#define MACROLOP_PRIVATE_EVAL_REC_4762_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4763(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4763_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4763_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4763_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4763_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4763_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4763_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4763_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4763_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4763_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4763_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4764
#define MACROLOP_PRIVATE_EVAL_REC_4763_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4764(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4764_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4764_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4764_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4764_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4764_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4764_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4764_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4764_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4764_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4764_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4765
#define MACROLOP_PRIVATE_EVAL_REC_4764_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4765(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4765_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4765_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4765_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4765_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4765_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4765_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4765_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4765_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4765_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4765_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4766
#define MACROLOP_PRIVATE_EVAL_REC_4765_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4766(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4766_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4766_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4766_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4766_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4766_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4766_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4766_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4766_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4766_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4766_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4767
#define MACROLOP_PRIVATE_EVAL_REC_4766_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4767(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4767_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4767_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4767_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4767_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4767_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4767_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4767_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4767_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4767_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4767_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4768
#define MACROLOP_PRIVATE_EVAL_REC_4767_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4768(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4768_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4768_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4768_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4768_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4768_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4768_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4768_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4768_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4768_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4768_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4769
#define MACROLOP_PRIVATE_EVAL_REC_4768_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4769(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4769_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4769_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4769_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4769_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4769_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4769_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4769_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4769_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4769_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4769_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4770
#define MACROLOP_PRIVATE_EVAL_REC_4769_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4770(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4770_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4770_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4770_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4770_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4770_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4770_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4770_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4770_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4770_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4770_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4771
#define MACROLOP_PRIVATE_EVAL_REC_4770_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4771(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4771_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4771_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4771_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4771_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4771_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4771_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4771_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4771_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4771_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4771_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4772
#define MACROLOP_PRIVATE_EVAL_REC_4771_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4772(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4772_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4772_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4772_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4772_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4772_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4772_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4772_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4772_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4772_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4772_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4773
#define MACROLOP_PRIVATE_EVAL_REC_4772_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4773(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4773_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4773_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4773_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4773_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4773_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4773_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4773_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4773_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4773_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4773_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4774
#define MACROLOP_PRIVATE_EVAL_REC_4773_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4774(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4774_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4774_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4774_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4774_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4774_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4774_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4774_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4774_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4774_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4774_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4775
#define MACROLOP_PRIVATE_EVAL_REC_4774_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4775(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4775_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4775_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4775_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4775_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4775_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4775_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4775_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4775_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4775_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4775_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4776
#define MACROLOP_PRIVATE_EVAL_REC_4775_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4776(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4776_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4776_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4776_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4776_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4776_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4776_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4776_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4776_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4776_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4776_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4777
#define MACROLOP_PRIVATE_EVAL_REC_4776_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4777(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4777_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4777_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4777_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4777_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4777_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4777_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4777_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4777_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4777_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4777_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4778
#define MACROLOP_PRIVATE_EVAL_REC_4777_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4778(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4778_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4778_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4778_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4778_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4778_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4778_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4778_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4778_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4778_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4778_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4779
#define MACROLOP_PRIVATE_EVAL_REC_4778_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4779(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4779_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4779_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4779_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4779_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4779_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4779_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4779_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4779_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4779_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4779_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4780
#define MACROLOP_PRIVATE_EVAL_REC_4779_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4780(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4780_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4780_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4780_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4780_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4780_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4780_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4780_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4780_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4780_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4780_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4781
#define MACROLOP_PRIVATE_EVAL_REC_4780_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4781(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4781_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4781_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4781_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4781_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4781_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4781_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4781_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4781_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4781_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4781_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4782
#define MACROLOP_PRIVATE_EVAL_REC_4781_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4782(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4782_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4782_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4782_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4782_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4782_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4782_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4782_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4782_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4782_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4782_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4783
#define MACROLOP_PRIVATE_EVAL_REC_4782_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4783(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4783_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4783_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4783_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4783_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4783_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4783_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4783_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4783_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4783_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4783_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4784
#define MACROLOP_PRIVATE_EVAL_REC_4783_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4784(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4784_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4784_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4784_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4784_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4784_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4784_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4784_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4784_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4784_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4784_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4785
#define MACROLOP_PRIVATE_EVAL_REC_4784_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4785(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4785_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4785_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4785_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4785_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4785_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4785_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4785_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4785_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4785_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4785_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4786
#define MACROLOP_PRIVATE_EVAL_REC_4785_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4786(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4786_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4786_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4786_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4786_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4786_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4786_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4786_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4786_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4786_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4786_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4787
#define MACROLOP_PRIVATE_EVAL_REC_4786_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4787(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4787_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4787_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4787_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4787_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4787_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4787_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4787_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4787_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4787_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4787_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4788
#define MACROLOP_PRIVATE_EVAL_REC_4787_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4788(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4788_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4788_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4788_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4788_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4788_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4788_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4788_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4788_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4788_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4788_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4789
#define MACROLOP_PRIVATE_EVAL_REC_4788_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4789(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4789_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4789_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4789_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4789_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4789_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4789_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4789_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4789_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4789_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4789_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4790
#define MACROLOP_PRIVATE_EVAL_REC_4789_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4790(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4790_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4790_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4790_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4790_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4790_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4790_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4790_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4790_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4790_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4790_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4791
#define MACROLOP_PRIVATE_EVAL_REC_4790_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4791(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4791_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4791_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4791_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4791_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4791_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4791_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4791_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4791_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4791_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4791_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4792
#define MACROLOP_PRIVATE_EVAL_REC_4791_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4792(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4792_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4792_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4792_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4792_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4792_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4792_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4792_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4792_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4792_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4792_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4793
#define MACROLOP_PRIVATE_EVAL_REC_4792_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4793(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4793_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4793_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4793_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4793_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4793_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4793_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4793_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4793_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4793_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4793_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4794
#define MACROLOP_PRIVATE_EVAL_REC_4793_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4794(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4794_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4794_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4794_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4794_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4794_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4794_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4794_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4794_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4794_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4794_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4795
#define MACROLOP_PRIVATE_EVAL_REC_4794_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4795(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4795_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4795_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4795_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4795_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4795_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4795_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4795_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4795_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4795_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4795_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4796
#define MACROLOP_PRIVATE_EVAL_REC_4795_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4796(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4796_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4796_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4796_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4796_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4796_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4796_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4796_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4796_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4796_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4796_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4797
#define MACROLOP_PRIVATE_EVAL_REC_4796_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4797(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4797_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4797_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4797_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4797_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4797_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4797_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4797_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4797_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4797_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4797_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4798
#define MACROLOP_PRIVATE_EVAL_REC_4797_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4798(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4798_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4798_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4798_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4798_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4798_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4798_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4798_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4798_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4798_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4798_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4799
#define MACROLOP_PRIVATE_EVAL_REC_4798_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4799(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4799_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4799_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4799_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4799_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4799_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4799_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4799_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4799_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4799_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4799_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4800
#define MACROLOP_PRIVATE_EVAL_REC_4799_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4800(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4800_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4800_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4800_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4800_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4800_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4800_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4800_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4800_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4800_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4800_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4801
#define MACROLOP_PRIVATE_EVAL_REC_4800_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4801(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4801_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4801_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4801_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4801_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4801_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4801_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4801_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4801_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4801_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4801_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4802
#define MACROLOP_PRIVATE_EVAL_REC_4801_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4802(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4802_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4802_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4802_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4802_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4802_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4802_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4802_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4802_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4802_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4802_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4803
#define MACROLOP_PRIVATE_EVAL_REC_4802_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4803(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4803_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4803_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4803_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4803_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4803_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4803_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4803_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4803_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4803_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4803_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4804
#define MACROLOP_PRIVATE_EVAL_REC_4803_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4804(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4804_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4804_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4804_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4804_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4804_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4804_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4804_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4804_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4804_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4804_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4805
#define MACROLOP_PRIVATE_EVAL_REC_4804_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4805(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4805_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4805_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4805_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4805_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4805_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4805_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4805_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4805_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4805_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4805_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4806
#define MACROLOP_PRIVATE_EVAL_REC_4805_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4806(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4806_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4806_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4806_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4806_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4806_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4806_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4806_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4806_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4806_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4806_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4807
#define MACROLOP_PRIVATE_EVAL_REC_4806_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4807(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4807_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4807_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4807_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4807_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4807_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4807_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4807_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4807_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4807_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4807_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4808
#define MACROLOP_PRIVATE_EVAL_REC_4807_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4808(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4808_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4808_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4808_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4808_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4808_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4808_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4808_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4808_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4808_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4808_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4809
#define MACROLOP_PRIVATE_EVAL_REC_4808_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4809(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4809_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4809_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4809_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4809_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4809_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4809_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4809_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4809_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4809_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4809_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4810
#define MACROLOP_PRIVATE_EVAL_REC_4809_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4810(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4810_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4810_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4810_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4810_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4810_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4810_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4810_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4810_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4810_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4810_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4811
#define MACROLOP_PRIVATE_EVAL_REC_4810_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4811(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4811_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4811_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4811_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4811_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4811_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4811_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4811_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4811_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4811_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4811_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4812
#define MACROLOP_PRIVATE_EVAL_REC_4811_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4812(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4812_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4812_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4812_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4812_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4812_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4812_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4812_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4812_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4812_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4812_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4813
#define MACROLOP_PRIVATE_EVAL_REC_4812_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4813(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4813_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4813_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4813_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4813_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4813_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4813_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4813_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4813_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4813_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4813_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4814
#define MACROLOP_PRIVATE_EVAL_REC_4813_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4814(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4814_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4814_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4814_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4814_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4814_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4814_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4814_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4814_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4814_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4814_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4815
#define MACROLOP_PRIVATE_EVAL_REC_4814_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4815(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4815_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4815_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4815_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4815_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4815_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4815_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4815_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4815_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4815_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4815_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4816
#define MACROLOP_PRIVATE_EVAL_REC_4815_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4816(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4816_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4816_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4816_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4816_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4816_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4816_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4816_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4816_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4816_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4816_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4817
#define MACROLOP_PRIVATE_EVAL_REC_4816_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4817(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4817_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4817_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4817_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4817_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4817_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4817_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4817_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4817_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4817_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4817_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4818
#define MACROLOP_PRIVATE_EVAL_REC_4817_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4818(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4818_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4818_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4818_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4818_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4818_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4818_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4818_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4818_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4818_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4818_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4819
#define MACROLOP_PRIVATE_EVAL_REC_4818_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4819(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4819_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4819_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4819_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4819_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4819_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4819_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4819_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4819_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4819_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4819_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4820
#define MACROLOP_PRIVATE_EVAL_REC_4819_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4820(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4820_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4820_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4820_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4820_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4820_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4820_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4820_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4820_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4820_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4820_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4821
#define MACROLOP_PRIVATE_EVAL_REC_4820_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4821(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4821_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4821_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4821_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4821_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4821_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4821_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4821_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4821_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4821_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4821_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4822
#define MACROLOP_PRIVATE_EVAL_REC_4821_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4822(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4822_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4822_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4822_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4822_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4822_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4822_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4822_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4822_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4822_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4822_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4823
#define MACROLOP_PRIVATE_EVAL_REC_4822_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4823(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4823_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4823_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4823_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4823_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4823_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4823_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4823_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4823_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4823_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4823_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4824
#define MACROLOP_PRIVATE_EVAL_REC_4823_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4824(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4824_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4824_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4824_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4824_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4824_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4824_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4824_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4824_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4824_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4824_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4825
#define MACROLOP_PRIVATE_EVAL_REC_4824_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4825(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4825_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4825_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4825_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4825_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4825_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4825_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4825_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4825_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4825_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4825_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4826
#define MACROLOP_PRIVATE_EVAL_REC_4825_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4826(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4826_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4826_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4826_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4826_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4826_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4826_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4826_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4826_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4826_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4826_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4827
#define MACROLOP_PRIVATE_EVAL_REC_4826_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4827(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4827_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4827_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4827_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4827_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4827_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4827_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4827_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4827_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4827_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4827_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4828
#define MACROLOP_PRIVATE_EVAL_REC_4827_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4828(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4828_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4828_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4828_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4828_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4828_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4828_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4828_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4828_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4828_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4828_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4829
#define MACROLOP_PRIVATE_EVAL_REC_4828_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4829(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4829_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4829_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4829_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4829_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4829_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4829_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4829_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4829_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4829_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4829_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4830
#define MACROLOP_PRIVATE_EVAL_REC_4829_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4830(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4830_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4830_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4830_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4830_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4830_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4830_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4830_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4830_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4830_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4830_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4831
#define MACROLOP_PRIVATE_EVAL_REC_4830_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4831(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4831_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4831_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4831_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4831_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4831_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4831_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4831_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4831_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4831_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4831_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4832
#define MACROLOP_PRIVATE_EVAL_REC_4831_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4832(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4832_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4832_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4832_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4832_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4832_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4832_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4832_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4832_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4832_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4832_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4833
#define MACROLOP_PRIVATE_EVAL_REC_4832_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4833(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4833_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4833_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4833_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4833_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4833_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4833_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4833_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4833_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4833_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4833_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4834
#define MACROLOP_PRIVATE_EVAL_REC_4833_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4834(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4834_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4834_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4834_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4834_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4834_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4834_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4834_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4834_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4834_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4834_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4835
#define MACROLOP_PRIVATE_EVAL_REC_4834_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4835(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4835_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4835_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4835_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4835_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4835_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4835_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4835_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4835_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4835_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4835_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4836
#define MACROLOP_PRIVATE_EVAL_REC_4835_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4836(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4836_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4836_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4836_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4836_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4836_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4836_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4836_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4836_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4836_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4836_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4837
#define MACROLOP_PRIVATE_EVAL_REC_4836_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4837(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4837_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4837_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4837_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4837_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4837_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4837_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4837_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4837_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4837_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4837_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4838
#define MACROLOP_PRIVATE_EVAL_REC_4837_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4838(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4838_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4838_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4838_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4838_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4838_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4838_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4838_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4838_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4838_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4838_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4839
#define MACROLOP_PRIVATE_EVAL_REC_4838_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4839(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4839_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4839_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4839_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4839_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4839_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4839_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4839_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4839_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4839_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4839_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4840
#define MACROLOP_PRIVATE_EVAL_REC_4839_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4840(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4840_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4840_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4840_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4840_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4840_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4840_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4840_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4840_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4840_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4840_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4841
#define MACROLOP_PRIVATE_EVAL_REC_4840_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4841(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4841_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4841_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4841_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4841_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4841_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4841_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4841_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4841_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4841_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4841_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4842
#define MACROLOP_PRIVATE_EVAL_REC_4841_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4842(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4842_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4842_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4842_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4842_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4842_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4842_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4842_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4842_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4842_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4842_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4843
#define MACROLOP_PRIVATE_EVAL_REC_4842_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4843(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4843_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4843_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4843_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4843_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4843_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4843_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4843_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4843_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4843_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4843_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4844
#define MACROLOP_PRIVATE_EVAL_REC_4843_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4844(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4844_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4844_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4844_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4844_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4844_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4844_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4844_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4844_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4844_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4844_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4845
#define MACROLOP_PRIVATE_EVAL_REC_4844_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4845(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4845_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4845_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4845_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4845_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4845_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4845_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4845_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4845_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4845_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4845_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4846
#define MACROLOP_PRIVATE_EVAL_REC_4845_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4846(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4846_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4846_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4846_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4846_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4846_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4846_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4846_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4846_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4846_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4846_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4847
#define MACROLOP_PRIVATE_EVAL_REC_4846_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4847(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4847_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4847_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4847_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4847_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4847_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4847_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4847_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4847_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4847_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4847_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4848
#define MACROLOP_PRIVATE_EVAL_REC_4847_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4848(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4848_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4848_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4848_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4848_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4848_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4848_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4848_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4848_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4848_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4848_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4849
#define MACROLOP_PRIVATE_EVAL_REC_4848_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4849(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4849_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4849_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4849_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4849_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4849_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4849_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4849_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4849_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4849_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4849_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4850
#define MACROLOP_PRIVATE_EVAL_REC_4849_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4850(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4850_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4850_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4850_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4850_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4850_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4850_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4850_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4850_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4850_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4850_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4851
#define MACROLOP_PRIVATE_EVAL_REC_4850_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4851(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4851_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4851_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4851_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4851_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4851_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4851_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4851_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4851_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4851_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4851_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4852
#define MACROLOP_PRIVATE_EVAL_REC_4851_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4852(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4852_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4852_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4852_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4852_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4852_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4852_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4852_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4852_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4852_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4852_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4853
#define MACROLOP_PRIVATE_EVAL_REC_4852_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4853(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4853_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4853_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4853_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4853_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4853_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4853_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4853_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4853_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4853_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4853_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4854
#define MACROLOP_PRIVATE_EVAL_REC_4853_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4854(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4854_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4854_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4854_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4854_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4854_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4854_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4854_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4854_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4854_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4854_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4855
#define MACROLOP_PRIVATE_EVAL_REC_4854_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4855(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4855_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4855_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4855_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4855_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4855_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4855_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4855_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4855_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4855_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4855_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4856
#define MACROLOP_PRIVATE_EVAL_REC_4855_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4856(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4856_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4856_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4856_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4856_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4856_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4856_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4856_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4856_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4856_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4856_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4857
#define MACROLOP_PRIVATE_EVAL_REC_4856_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4857(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4857_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4857_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4857_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4857_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4857_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4857_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4857_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4857_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4857_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4857_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4858
#define MACROLOP_PRIVATE_EVAL_REC_4857_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4858(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4858_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4858_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4858_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4858_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4858_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4858_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4858_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4858_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4858_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4858_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4859
#define MACROLOP_PRIVATE_EVAL_REC_4858_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4859(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4859_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4859_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4859_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4859_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4859_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4859_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4859_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4859_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4859_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4859_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4860
#define MACROLOP_PRIVATE_EVAL_REC_4859_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4860(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4860_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4860_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4860_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4860_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4860_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4860_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4860_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4860_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4860_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4860_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4861
#define MACROLOP_PRIVATE_EVAL_REC_4860_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4861(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4861_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4861_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4861_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4861_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4861_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4861_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4861_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4861_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4861_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4861_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4862
#define MACROLOP_PRIVATE_EVAL_REC_4861_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4862(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4862_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4862_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4862_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4862_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4862_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4862_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4862_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4862_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4862_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4862_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4863
#define MACROLOP_PRIVATE_EVAL_REC_4862_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4863(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4863_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4863_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4863_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4863_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4863_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4863_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4863_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4863_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4863_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4863_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4864
#define MACROLOP_PRIVATE_EVAL_REC_4863_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4864(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4864_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4864_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4864_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4864_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4864_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4864_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4864_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4864_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4864_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4864_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4865
#define MACROLOP_PRIVATE_EVAL_REC_4864_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4865(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4865_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4865_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4865_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4865_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4865_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4865_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4865_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4865_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4865_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4865_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4866
#define MACROLOP_PRIVATE_EVAL_REC_4865_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4866(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4866_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4866_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4866_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4866_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4866_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4866_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4866_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4866_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4866_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4866_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4867
#define MACROLOP_PRIVATE_EVAL_REC_4866_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4867(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4867_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4867_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4867_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4867_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4867_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4867_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4867_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4867_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4867_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4867_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4868
#define MACROLOP_PRIVATE_EVAL_REC_4867_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4868(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4868_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4868_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4868_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4868_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4868_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4868_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4868_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4868_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4868_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4868_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4869
#define MACROLOP_PRIVATE_EVAL_REC_4868_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4869(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4869_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4869_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4869_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4869_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4869_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4869_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4869_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4869_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4869_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4869_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4870
#define MACROLOP_PRIVATE_EVAL_REC_4869_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4870(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4870_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4870_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4870_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4870_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4870_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4870_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4870_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4870_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4870_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4870_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4871
#define MACROLOP_PRIVATE_EVAL_REC_4870_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4871(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4871_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4871_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4871_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4871_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4871_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4871_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4871_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4871_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4871_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4871_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4872
#define MACROLOP_PRIVATE_EVAL_REC_4871_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4872(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4872_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4872_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4872_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4872_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4872_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4872_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4872_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4872_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4872_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4872_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4873
#define MACROLOP_PRIVATE_EVAL_REC_4872_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4873(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4873_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4873_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4873_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4873_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4873_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4873_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4873_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4873_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4873_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4873_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4874
#define MACROLOP_PRIVATE_EVAL_REC_4873_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4874(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4874_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4874_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4874_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4874_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4874_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4874_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4874_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4874_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4874_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4874_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4875
#define MACROLOP_PRIVATE_EVAL_REC_4874_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4875(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4875_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4875_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4875_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4875_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4875_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4875_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4875_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4875_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4875_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4875_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4876
#define MACROLOP_PRIVATE_EVAL_REC_4875_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4876(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4876_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4876_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4876_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4876_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4876_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4876_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4876_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4876_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4876_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4876_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4877
#define MACROLOP_PRIVATE_EVAL_REC_4876_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4877(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4877_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4877_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4877_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4877_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4877_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4877_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4877_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4877_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4877_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4877_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4878
#define MACROLOP_PRIVATE_EVAL_REC_4877_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4878(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4878_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4878_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4878_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4878_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4878_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4878_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4878_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4878_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4878_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4878_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4879
#define MACROLOP_PRIVATE_EVAL_REC_4878_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4879(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4879_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4879_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4879_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4879_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4879_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4879_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4879_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4879_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4879_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4879_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4880
#define MACROLOP_PRIVATE_EVAL_REC_4879_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4880(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4880_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4880_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4880_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4880_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4880_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4880_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4880_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4880_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4880_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4880_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4881
#define MACROLOP_PRIVATE_EVAL_REC_4880_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4881(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4881_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4881_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4881_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4881_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4881_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4881_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4881_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4881_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4881_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4881_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4882
#define MACROLOP_PRIVATE_EVAL_REC_4881_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4882(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4882_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4882_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4882_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4882_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4882_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4882_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4882_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4882_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4882_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4882_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4883
#define MACROLOP_PRIVATE_EVAL_REC_4882_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4883(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4883_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4883_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4883_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4883_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4883_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4883_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4883_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4883_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4883_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4883_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4884
#define MACROLOP_PRIVATE_EVAL_REC_4883_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4884(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4884_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4884_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4884_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4884_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4884_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4884_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4884_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4884_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4884_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4884_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4885
#define MACROLOP_PRIVATE_EVAL_REC_4884_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4885(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4885_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4885_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4885_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4885_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4885_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4885_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4885_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4885_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4885_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4885_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4886
#define MACROLOP_PRIVATE_EVAL_REC_4885_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4886(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4886_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4886_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4886_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4886_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4886_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4886_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4886_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4886_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4886_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4886_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4887
#define MACROLOP_PRIVATE_EVAL_REC_4886_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4887(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4887_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4887_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4887_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4887_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4887_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4887_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4887_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4887_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4887_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4887_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4888
#define MACROLOP_PRIVATE_EVAL_REC_4887_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4888(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4888_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4888_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4888_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4888_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4888_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4888_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4888_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4888_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4888_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4888_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4889
#define MACROLOP_PRIVATE_EVAL_REC_4888_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4889(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4889_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4889_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4889_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4889_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4889_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4889_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4889_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4889_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4889_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4889_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4890
#define MACROLOP_PRIVATE_EVAL_REC_4889_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4890(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4890_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4890_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4890_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4890_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4890_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4890_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4890_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4890_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4890_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4890_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4891
#define MACROLOP_PRIVATE_EVAL_REC_4890_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4891(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4891_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4891_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4891_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4891_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4891_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4891_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4891_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4891_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4891_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4891_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4892
#define MACROLOP_PRIVATE_EVAL_REC_4891_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4892(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4892_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4892_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4892_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4892_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4892_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4892_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4892_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4892_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4892_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4892_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4893
#define MACROLOP_PRIVATE_EVAL_REC_4892_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4893(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4893_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4893_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4893_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4893_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4893_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4893_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4893_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4893_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4893_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4893_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4894
#define MACROLOP_PRIVATE_EVAL_REC_4893_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4894(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4894_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4894_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4894_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4894_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4894_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4894_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4894_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4894_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4894_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4894_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4895
#define MACROLOP_PRIVATE_EVAL_REC_4894_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4895(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4895_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4895_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4895_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4895_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4895_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4895_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4895_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4895_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4895_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4895_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4896
#define MACROLOP_PRIVATE_EVAL_REC_4895_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4896(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4896_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4896_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4896_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4896_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4896_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4896_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4896_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4896_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4896_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4896_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4897
#define MACROLOP_PRIVATE_EVAL_REC_4896_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4897(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4897_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4897_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4897_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4897_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4897_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4897_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4897_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4897_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4897_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4897_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4898
#define MACROLOP_PRIVATE_EVAL_REC_4897_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4898(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4898_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4898_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4898_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4898_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4898_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4898_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4898_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4898_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4898_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4898_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4899
#define MACROLOP_PRIVATE_EVAL_REC_4898_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4899(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4899_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4899_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4899_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4899_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4899_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4899_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4899_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4899_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4899_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4899_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4900
#define MACROLOP_PRIVATE_EVAL_REC_4899_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4900(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4900_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4900_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4900_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4900_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4900_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4900_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4900_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4900_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4900_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4900_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4901
#define MACROLOP_PRIVATE_EVAL_REC_4900_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4901(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4901_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4901_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4901_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4901_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4901_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4901_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4901_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4901_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4901_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4901_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4902
#define MACROLOP_PRIVATE_EVAL_REC_4901_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4902(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4902_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4902_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4902_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4902_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4902_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4902_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4902_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4902_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4902_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4902_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4903
#define MACROLOP_PRIVATE_EVAL_REC_4902_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4903(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4903_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4903_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4903_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4903_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4903_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4903_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4903_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4903_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4903_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4903_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4904
#define MACROLOP_PRIVATE_EVAL_REC_4903_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4904(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4904_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4904_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4904_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4904_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4904_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4904_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4904_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4904_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4904_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4904_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4905
#define MACROLOP_PRIVATE_EVAL_REC_4904_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4905(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4905_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4905_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4905_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4905_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4905_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4905_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4905_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4905_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4905_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4905_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4906
#define MACROLOP_PRIVATE_EVAL_REC_4905_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4906(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4906_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4906_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4906_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4906_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4906_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4906_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4906_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4906_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4906_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4906_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4907
#define MACROLOP_PRIVATE_EVAL_REC_4906_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4907(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4907_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4907_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4907_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4907_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4907_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4907_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4907_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4907_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4907_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4907_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4908
#define MACROLOP_PRIVATE_EVAL_REC_4907_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4908(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4908_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4908_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4908_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4908_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4908_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4908_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4908_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4908_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4908_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4908_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4909
#define MACROLOP_PRIVATE_EVAL_REC_4908_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4909(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4909_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4909_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4909_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4909_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4909_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4909_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4909_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4909_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4909_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4909_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4910
#define MACROLOP_PRIVATE_EVAL_REC_4909_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4910(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4910_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4910_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4910_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4910_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4910_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4910_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4910_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4910_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4910_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4910_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4911
#define MACROLOP_PRIVATE_EVAL_REC_4910_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4911(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4911_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4911_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4911_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4911_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4911_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4911_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4911_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4911_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4911_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4911_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4912
#define MACROLOP_PRIVATE_EVAL_REC_4911_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4912(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4912_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4912_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4912_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4912_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4912_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4912_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4912_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4912_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4912_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4912_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4913
#define MACROLOP_PRIVATE_EVAL_REC_4912_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4913(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4913_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4913_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4913_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4913_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4913_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4913_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4913_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4913_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4913_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4913_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4914
#define MACROLOP_PRIVATE_EVAL_REC_4913_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4914(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4914_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4914_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4914_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4914_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4914_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4914_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4914_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4914_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4914_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4914_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4915
#define MACROLOP_PRIVATE_EVAL_REC_4914_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4915(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4915_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4915_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4915_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4915_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4915_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4915_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4915_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4915_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4915_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4915_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4916
#define MACROLOP_PRIVATE_EVAL_REC_4915_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4916(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4916_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4916_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4916_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4916_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4916_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4916_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4916_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4916_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4916_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4916_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4917
#define MACROLOP_PRIVATE_EVAL_REC_4916_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4917(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4917_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4917_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4917_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4917_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4917_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4917_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4917_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4917_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4917_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4917_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4918
#define MACROLOP_PRIVATE_EVAL_REC_4917_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4918(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4918_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4918_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4918_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4918_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4918_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4918_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4918_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4918_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4918_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4918_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4919
#define MACROLOP_PRIVATE_EVAL_REC_4918_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4919(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4919_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4919_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4919_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4919_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4919_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4919_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4919_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4919_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4919_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4919_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4920
#define MACROLOP_PRIVATE_EVAL_REC_4919_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4920(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4920_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4920_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4920_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4920_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4920_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4920_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4920_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4920_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4920_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4920_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4921
#define MACROLOP_PRIVATE_EVAL_REC_4920_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4921(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4921_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4921_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4921_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4921_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4921_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4921_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4921_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4921_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4921_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4921_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4922
#define MACROLOP_PRIVATE_EVAL_REC_4921_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4922(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4922_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4922_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4922_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4922_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4922_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4922_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4922_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4922_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4922_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4922_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4923
#define MACROLOP_PRIVATE_EVAL_REC_4922_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4923(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4923_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4923_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4923_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4923_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4923_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4923_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4923_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4923_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4923_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4923_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4924
#define MACROLOP_PRIVATE_EVAL_REC_4923_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4924(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4924_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4924_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4924_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4924_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4924_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4924_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4924_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4924_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4924_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4924_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4925
#define MACROLOP_PRIVATE_EVAL_REC_4924_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4925(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4925_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4925_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4925_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4925_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4925_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4925_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4925_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4925_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4925_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4925_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4926
#define MACROLOP_PRIVATE_EVAL_REC_4925_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4926(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4926_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4926_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4926_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4926_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4926_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4926_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4926_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4926_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4926_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4926_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4927
#define MACROLOP_PRIVATE_EVAL_REC_4926_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4927(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4927_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4927_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4927_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4927_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4927_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4927_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4927_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4927_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4927_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4927_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4928
#define MACROLOP_PRIVATE_EVAL_REC_4927_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4928(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4928_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4928_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4928_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4928_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4928_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4928_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4928_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4928_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4928_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4928_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4929
#define MACROLOP_PRIVATE_EVAL_REC_4928_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4929(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4929_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4929_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4929_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4929_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4929_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4929_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4929_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4929_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4929_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4929_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4930
#define MACROLOP_PRIVATE_EVAL_REC_4929_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4930(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4930_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4930_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4930_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4930_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4930_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4930_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4930_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4930_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4930_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4930_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4931
#define MACROLOP_PRIVATE_EVAL_REC_4930_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4931(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4931_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4931_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4931_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4931_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4931_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4931_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4931_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4931_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4931_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4931_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4932
#define MACROLOP_PRIVATE_EVAL_REC_4931_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4932(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4932_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4932_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4932_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4932_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4932_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4932_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4932_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4932_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4932_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4932_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4933
#define MACROLOP_PRIVATE_EVAL_REC_4932_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4933(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4933_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4933_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4933_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4933_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4933_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4933_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4933_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4933_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4933_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4933_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4934
#define MACROLOP_PRIVATE_EVAL_REC_4933_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4934(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4934_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4934_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4934_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4934_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4934_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4934_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4934_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4934_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4934_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4934_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4935
#define MACROLOP_PRIVATE_EVAL_REC_4934_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4935(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4935_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4935_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4935_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4935_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4935_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4935_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4935_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4935_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4935_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4935_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4936
#define MACROLOP_PRIVATE_EVAL_REC_4935_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4936(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4936_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4936_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4936_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4936_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4936_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4936_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4936_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4936_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4936_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4936_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4937
#define MACROLOP_PRIVATE_EVAL_REC_4936_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4937(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4937_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4937_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4937_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4937_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4937_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4937_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4937_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4937_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4937_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4937_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4938
#define MACROLOP_PRIVATE_EVAL_REC_4937_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4938(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4938_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4938_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4938_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4938_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4938_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4938_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4938_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4938_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4938_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4938_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4939
#define MACROLOP_PRIVATE_EVAL_REC_4938_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4939(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4939_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4939_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4939_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4939_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4939_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4939_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4939_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4939_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4939_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4939_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4940
#define MACROLOP_PRIVATE_EVAL_REC_4939_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4940(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4940_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4940_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4940_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4940_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4940_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4940_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4940_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4940_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4940_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4940_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4941
#define MACROLOP_PRIVATE_EVAL_REC_4940_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4941(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4941_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4941_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4941_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4941_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4941_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4941_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4941_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4941_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4941_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4941_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4942
#define MACROLOP_PRIVATE_EVAL_REC_4941_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4942(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4942_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4942_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4942_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4942_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4942_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4942_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4942_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4942_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4942_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4942_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4943
#define MACROLOP_PRIVATE_EVAL_REC_4942_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4943(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4943_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4943_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4943_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4943_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4943_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4943_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4943_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4943_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4943_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4943_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4944
#define MACROLOP_PRIVATE_EVAL_REC_4943_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4944(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4944_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4944_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4944_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4944_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4944_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4944_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4944_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4944_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4944_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4944_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4945
#define MACROLOP_PRIVATE_EVAL_REC_4944_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4945(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4945_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4945_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4945_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4945_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4945_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4945_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4945_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4945_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4945_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4945_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4946
#define MACROLOP_PRIVATE_EVAL_REC_4945_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4946(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4946_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4946_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4946_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4946_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4946_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4946_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4946_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4946_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4946_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4946_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4947
#define MACROLOP_PRIVATE_EVAL_REC_4946_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4947(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4947_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4947_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4947_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4947_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4947_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4947_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4947_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4947_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4947_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4947_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4948
#define MACROLOP_PRIVATE_EVAL_REC_4947_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4948(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4948_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4948_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4948_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4948_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4948_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4948_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4948_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4948_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4948_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4948_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4949
#define MACROLOP_PRIVATE_EVAL_REC_4948_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4949(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4949_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4949_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4949_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4949_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4949_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4949_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4949_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4949_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4949_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4949_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4950
#define MACROLOP_PRIVATE_EVAL_REC_4949_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4950(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4950_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4950_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4950_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4950_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4950_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4950_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4950_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4950_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4950_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4950_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4951
#define MACROLOP_PRIVATE_EVAL_REC_4950_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4951(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4951_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4951_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4951_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4951_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4951_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4951_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4951_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4951_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4951_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4951_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4952
#define MACROLOP_PRIVATE_EVAL_REC_4951_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4952(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4952_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4952_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4952_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4952_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4952_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4952_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4952_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4952_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4952_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4952_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4953
#define MACROLOP_PRIVATE_EVAL_REC_4952_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4953(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4953_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4953_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4953_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4953_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4953_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4953_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4953_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4953_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4953_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4953_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4954
#define MACROLOP_PRIVATE_EVAL_REC_4953_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4954(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4954_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4954_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4954_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4954_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4954_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4954_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4954_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4954_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4954_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4954_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4955
#define MACROLOP_PRIVATE_EVAL_REC_4954_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4955(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4955_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4955_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4955_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4955_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4955_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4955_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4955_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4955_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4955_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4955_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4956
#define MACROLOP_PRIVATE_EVAL_REC_4955_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4956(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4956_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4956_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4956_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4956_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4956_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4956_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4956_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4956_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4956_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4956_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4957
#define MACROLOP_PRIVATE_EVAL_REC_4956_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4957(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4957_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4957_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4957_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4957_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4957_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4957_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4957_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4957_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4957_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4957_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4958
#define MACROLOP_PRIVATE_EVAL_REC_4957_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4958(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4958_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4958_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4958_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4958_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4958_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4958_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4958_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4958_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4958_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4958_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4959
#define MACROLOP_PRIVATE_EVAL_REC_4958_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4959(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4959_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4959_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4959_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4959_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4959_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4959_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4959_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4959_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4959_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4959_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4960
#define MACROLOP_PRIVATE_EVAL_REC_4959_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4960(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4960_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4960_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4960_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4960_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4960_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4960_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4960_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4960_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4960_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4960_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4961
#define MACROLOP_PRIVATE_EVAL_REC_4960_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4961(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4961_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4961_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4961_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4961_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4961_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4961_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4961_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4961_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4961_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4961_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4962
#define MACROLOP_PRIVATE_EVAL_REC_4961_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4962(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4962_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4962_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4962_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4962_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4962_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4962_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4962_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4962_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4962_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4962_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4963
#define MACROLOP_PRIVATE_EVAL_REC_4962_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4963(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4963_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4963_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4963_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4963_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4963_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4963_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4963_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4963_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4963_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4963_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4964
#define MACROLOP_PRIVATE_EVAL_REC_4963_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4964(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4964_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4964_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4964_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4964_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4964_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4964_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4964_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4964_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4964_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4964_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4965
#define MACROLOP_PRIVATE_EVAL_REC_4964_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4965(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4965_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4965_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4965_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4965_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4965_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4965_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4965_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4965_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4965_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4965_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4966
#define MACROLOP_PRIVATE_EVAL_REC_4965_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4966(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4966_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4966_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4966_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4966_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4966_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4966_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4966_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4966_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4966_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4966_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4967
#define MACROLOP_PRIVATE_EVAL_REC_4966_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4967(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4967_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4967_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4967_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4967_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4967_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4967_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4967_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4967_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4967_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4967_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4968
#define MACROLOP_PRIVATE_EVAL_REC_4967_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4968(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4968_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4968_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4968_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4968_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4968_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4968_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4968_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4968_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4968_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4968_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4969
#define MACROLOP_PRIVATE_EVAL_REC_4968_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4969(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4969_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4969_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4969_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4969_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4969_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4969_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4969_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4969_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4969_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4969_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4970
#define MACROLOP_PRIVATE_EVAL_REC_4969_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4970(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4970_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4970_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4970_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4970_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4970_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4970_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4970_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4970_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4970_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4970_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4971
#define MACROLOP_PRIVATE_EVAL_REC_4970_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4971(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4971_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4971_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4971_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4971_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4971_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4971_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4971_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4971_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4971_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4971_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4972
#define MACROLOP_PRIVATE_EVAL_REC_4971_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4972(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4972_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4972_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4972_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4972_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4972_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4972_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4972_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4972_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4972_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4972_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4973
#define MACROLOP_PRIVATE_EVAL_REC_4972_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4973(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4973_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4973_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4973_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4973_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4973_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4973_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4973_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4973_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4973_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4973_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4974
#define MACROLOP_PRIVATE_EVAL_REC_4973_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4974(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4974_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4974_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4974_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4974_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4974_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4974_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4974_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4974_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4974_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4974_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4975
#define MACROLOP_PRIVATE_EVAL_REC_4974_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4975(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4975_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4975_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4975_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4975_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4975_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4975_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4975_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4975_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4975_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4975_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4976
#define MACROLOP_PRIVATE_EVAL_REC_4975_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4976(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4976_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4976_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4976_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4976_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4976_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4976_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4976_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4976_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4976_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4976_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4977
#define MACROLOP_PRIVATE_EVAL_REC_4976_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4977(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4977_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4977_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4977_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4977_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4977_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4977_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4977_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4977_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4977_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4977_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4978
#define MACROLOP_PRIVATE_EVAL_REC_4977_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4978(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4978_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4978_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4978_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4978_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4978_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4978_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4978_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4978_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4978_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4978_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4979
#define MACROLOP_PRIVATE_EVAL_REC_4978_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4979(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4979_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4979_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4979_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4979_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4979_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4979_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4979_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4979_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4979_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4979_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4980
#define MACROLOP_PRIVATE_EVAL_REC_4979_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4980(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4980_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4980_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4980_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4980_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4980_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4980_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4980_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4980_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4980_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4980_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4981
#define MACROLOP_PRIVATE_EVAL_REC_4980_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4981(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4981_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4981_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4981_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4981_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4981_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4981_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4981_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4981_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4981_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4981_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4982
#define MACROLOP_PRIVATE_EVAL_REC_4981_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4982(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4982_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4982_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4982_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4982_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4982_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4982_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4982_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4982_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4982_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4982_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4983
#define MACROLOP_PRIVATE_EVAL_REC_4982_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4983(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4983_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4983_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4983_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4983_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4983_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4983_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4983_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4983_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4983_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4983_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4984
#define MACROLOP_PRIVATE_EVAL_REC_4983_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4984(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4984_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4984_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4984_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4984_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4984_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4984_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4984_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4984_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4984_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4984_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4985
#define MACROLOP_PRIVATE_EVAL_REC_4984_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4985(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4985_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4985_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4985_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4985_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4985_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4985_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4985_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4985_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4985_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4985_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4986
#define MACROLOP_PRIVATE_EVAL_REC_4985_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4986(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4986_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4986_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4986_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4986_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4986_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4986_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4986_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4986_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4986_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4986_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4987
#define MACROLOP_PRIVATE_EVAL_REC_4986_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4987(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4987_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4987_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4987_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4987_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4987_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4987_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4987_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4987_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4987_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4987_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4988
#define MACROLOP_PRIVATE_EVAL_REC_4987_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4988(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4988_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4988_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4988_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4988_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4988_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4988_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4988_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4988_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4988_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4988_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4989
#define MACROLOP_PRIVATE_EVAL_REC_4988_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4989(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4989_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4989_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4989_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4989_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4989_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4989_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4989_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4989_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4989_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4989_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4990
#define MACROLOP_PRIVATE_EVAL_REC_4989_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4990(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4990_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4990_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4990_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4990_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4990_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4990_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4990_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4990_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4990_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4990_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4991
#define MACROLOP_PRIVATE_EVAL_REC_4990_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4991(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4991_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4991_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4991_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4991_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4991_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4991_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4991_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4991_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4991_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4991_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4992
#define MACROLOP_PRIVATE_EVAL_REC_4991_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4992(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4992_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4992_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4992_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4992_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4992_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4992_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4992_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4992_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4992_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4992_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4993
#define MACROLOP_PRIVATE_EVAL_REC_4992_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4993(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4993_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4993_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4993_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4993_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4993_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4993_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4993_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4993_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4993_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4993_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4994
#define MACROLOP_PRIVATE_EVAL_REC_4993_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4994(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4994_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4994_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4994_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4994_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4994_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4994_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4994_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4994_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4994_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4994_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4995
#define MACROLOP_PRIVATE_EVAL_REC_4994_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4995(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4995_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4995_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4995_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4995_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4995_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4995_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4995_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4995_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4995_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4995_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4996
#define MACROLOP_PRIVATE_EVAL_REC_4995_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4996(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4996_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4996_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4996_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4996_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4996_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4996_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4996_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4996_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4996_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4996_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4997
#define MACROLOP_PRIVATE_EVAL_REC_4996_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4997(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4997_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4997_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4997_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4997_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4997_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4997_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4997_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4997_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4997_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4997_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4998
#define MACROLOP_PRIVATE_EVAL_REC_4997_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4998(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4998_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4998_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4998_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4998_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4998_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4998_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4998_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4998_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4998_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4998_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_4999
#define MACROLOP_PRIVATE_EVAL_REC_4998_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_4999(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_4999_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_4999_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_4999_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_4999_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_4999_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_4999_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_4999_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_4999_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_4999_##choice
#define MACROLOP_PRIVATE_EVAL_REC_4999_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5000
#define MACROLOP_PRIVATE_EVAL_REC_4999_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5000(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5000_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5000_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5000_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5000_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5000_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5000_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5000_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5000_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5000_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5000_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5001
#define MACROLOP_PRIVATE_EVAL_REC_5000_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5001(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5001_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5001_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5001_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5001_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5001_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5001_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5001_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5001_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5001_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5001_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5002
#define MACROLOP_PRIVATE_EVAL_REC_5001_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5002(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5002_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5002_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5002_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5002_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5002_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5002_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5002_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5002_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5002_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5002_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5003
#define MACROLOP_PRIVATE_EVAL_REC_5002_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5003(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5003_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5003_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5003_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5003_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5003_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5003_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5003_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5003_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5003_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5003_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5004
#define MACROLOP_PRIVATE_EVAL_REC_5003_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5004(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5004_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5004_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5004_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5004_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5004_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5004_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5004_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5004_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5004_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5004_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5005
#define MACROLOP_PRIVATE_EVAL_REC_5004_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5005(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5005_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5005_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5005_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5005_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5005_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5005_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5005_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5005_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5005_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5005_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5006
#define MACROLOP_PRIVATE_EVAL_REC_5005_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5006(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5006_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5006_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5006_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5006_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5006_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5006_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5006_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5006_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5006_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5006_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5007
#define MACROLOP_PRIVATE_EVAL_REC_5006_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5007(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5007_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5007_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5007_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5007_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5007_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5007_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5007_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5007_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5007_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5007_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5008
#define MACROLOP_PRIVATE_EVAL_REC_5007_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5008(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5008_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5008_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5008_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5008_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5008_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5008_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5008_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5008_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5008_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5008_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5009
#define MACROLOP_PRIVATE_EVAL_REC_5008_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5009(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5009_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5009_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5009_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5009_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5009_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5009_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5009_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5009_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5009_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5009_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5010
#define MACROLOP_PRIVATE_EVAL_REC_5009_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5010(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5010_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5010_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5010_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5010_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5010_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5010_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5010_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5010_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5010_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5010_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5011
#define MACROLOP_PRIVATE_EVAL_REC_5010_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5011(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5011_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5011_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5011_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5011_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5011_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5011_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5011_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5011_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5011_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5011_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5012
#define MACROLOP_PRIVATE_EVAL_REC_5011_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5012(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5012_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5012_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5012_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5012_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5012_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5012_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5012_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5012_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5012_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5012_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5013
#define MACROLOP_PRIVATE_EVAL_REC_5012_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5013(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5013_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5013_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5013_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5013_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5013_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5013_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5013_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5013_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5013_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5013_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5014
#define MACROLOP_PRIVATE_EVAL_REC_5013_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5014(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5014_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5014_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5014_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5014_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5014_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5014_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5014_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5014_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5014_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5014_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5015
#define MACROLOP_PRIVATE_EVAL_REC_5014_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5015(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5015_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5015_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5015_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5015_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5015_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5015_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5015_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5015_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5015_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5015_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5016
#define MACROLOP_PRIVATE_EVAL_REC_5015_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5016(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5016_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5016_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5016_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5016_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5016_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5016_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5016_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5016_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5016_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5016_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5017
#define MACROLOP_PRIVATE_EVAL_REC_5016_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5017(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5017_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5017_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5017_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5017_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5017_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5017_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5017_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5017_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5017_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5017_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5018
#define MACROLOP_PRIVATE_EVAL_REC_5017_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5018(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5018_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5018_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5018_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5018_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5018_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5018_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5018_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5018_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5018_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5018_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5019
#define MACROLOP_PRIVATE_EVAL_REC_5018_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5019(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5019_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5019_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5019_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5019_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5019_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5019_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5019_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5019_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5019_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5019_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5020
#define MACROLOP_PRIVATE_EVAL_REC_5019_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5020(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5020_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5020_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5020_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5020_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5020_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5020_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5020_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5020_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5020_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5020_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5021
#define MACROLOP_PRIVATE_EVAL_REC_5020_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5021(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5021_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5021_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5021_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5021_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5021_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5021_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5021_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5021_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5021_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5021_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5022
#define MACROLOP_PRIVATE_EVAL_REC_5021_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5022(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5022_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5022_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5022_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5022_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5022_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5022_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5022_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5022_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5022_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5022_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5023
#define MACROLOP_PRIVATE_EVAL_REC_5022_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5023(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5023_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5023_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5023_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5023_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5023_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5023_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5023_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5023_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5023_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5023_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5024
#define MACROLOP_PRIVATE_EVAL_REC_5023_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5024(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5024_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5024_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5024_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5024_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5024_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5024_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5024_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5024_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5024_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5024_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5025
#define MACROLOP_PRIVATE_EVAL_REC_5024_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5025(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5025_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5025_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5025_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5025_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5025_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5025_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5025_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5025_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5025_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5025_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5026
#define MACROLOP_PRIVATE_EVAL_REC_5025_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5026(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5026_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5026_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5026_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5026_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5026_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5026_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5026_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5026_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5026_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5026_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5027
#define MACROLOP_PRIVATE_EVAL_REC_5026_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5027(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5027_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5027_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5027_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5027_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5027_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5027_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5027_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5027_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5027_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5027_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5028
#define MACROLOP_PRIVATE_EVAL_REC_5027_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5028(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5028_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5028_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5028_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5028_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5028_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5028_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5028_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5028_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5028_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5028_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5029
#define MACROLOP_PRIVATE_EVAL_REC_5028_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5029(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5029_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5029_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5029_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5029_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5029_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5029_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5029_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5029_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5029_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5029_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5030
#define MACROLOP_PRIVATE_EVAL_REC_5029_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5030(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5030_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5030_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5030_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5030_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5030_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5030_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5030_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5030_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5030_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5030_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5031
#define MACROLOP_PRIVATE_EVAL_REC_5030_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5031(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5031_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5031_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5031_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5031_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5031_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5031_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5031_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5031_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5031_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5031_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5032
#define MACROLOP_PRIVATE_EVAL_REC_5031_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5032(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5032_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5032_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5032_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5032_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5032_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5032_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5032_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5032_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5032_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5032_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5033
#define MACROLOP_PRIVATE_EVAL_REC_5032_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5033(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5033_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5033_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5033_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5033_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5033_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5033_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5033_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5033_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5033_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5033_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5034
#define MACROLOP_PRIVATE_EVAL_REC_5033_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5034(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5034_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5034_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5034_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5034_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5034_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5034_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5034_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5034_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5034_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5034_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5035
#define MACROLOP_PRIVATE_EVAL_REC_5034_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5035(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5035_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5035_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5035_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5035_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5035_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5035_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5035_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5035_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5035_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5035_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5036
#define MACROLOP_PRIVATE_EVAL_REC_5035_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5036(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5036_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5036_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5036_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5036_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5036_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5036_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5036_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5036_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5036_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5036_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5037
#define MACROLOP_PRIVATE_EVAL_REC_5036_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5037(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5037_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5037_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5037_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5037_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5037_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5037_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5037_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5037_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5037_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5037_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5038
#define MACROLOP_PRIVATE_EVAL_REC_5037_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5038(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5038_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5038_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5038_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5038_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5038_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5038_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5038_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5038_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5038_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5038_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5039
#define MACROLOP_PRIVATE_EVAL_REC_5038_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5039(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5039_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5039_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5039_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5039_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5039_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5039_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5039_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5039_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5039_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5039_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5040
#define MACROLOP_PRIVATE_EVAL_REC_5039_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5040(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5040_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5040_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5040_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5040_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5040_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5040_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5040_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5040_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5040_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5040_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5041
#define MACROLOP_PRIVATE_EVAL_REC_5040_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5041(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5041_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5041_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5041_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5041_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5041_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5041_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5041_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5041_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5041_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5041_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5042
#define MACROLOP_PRIVATE_EVAL_REC_5041_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5042(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5042_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5042_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5042_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5042_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5042_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5042_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5042_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5042_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5042_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5042_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5043
#define MACROLOP_PRIVATE_EVAL_REC_5042_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5043(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5043_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5043_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5043_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5043_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5043_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5043_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5043_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5043_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5043_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5043_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5044
#define MACROLOP_PRIVATE_EVAL_REC_5043_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5044(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5044_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5044_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5044_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5044_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5044_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5044_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5044_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5044_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5044_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5044_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5045
#define MACROLOP_PRIVATE_EVAL_REC_5044_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5045(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5045_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5045_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5045_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5045_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5045_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5045_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5045_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5045_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5045_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5045_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5046
#define MACROLOP_PRIVATE_EVAL_REC_5045_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5046(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5046_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5046_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5046_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5046_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5046_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5046_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5046_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5046_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5046_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5046_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5047
#define MACROLOP_PRIVATE_EVAL_REC_5046_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5047(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5047_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5047_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5047_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5047_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5047_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5047_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5047_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5047_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5047_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5047_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5048
#define MACROLOP_PRIVATE_EVAL_REC_5047_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5048(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5048_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5048_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5048_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5048_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5048_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5048_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5048_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5048_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5048_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5048_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5049
#define MACROLOP_PRIVATE_EVAL_REC_5048_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5049(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5049_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5049_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5049_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5049_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5049_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5049_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5049_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5049_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5049_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5049_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5050
#define MACROLOP_PRIVATE_EVAL_REC_5049_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5050(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5050_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5050_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5050_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5050_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5050_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5050_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5050_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5050_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5050_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5050_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5051
#define MACROLOP_PRIVATE_EVAL_REC_5050_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5051(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5051_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5051_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5051_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5051_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5051_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5051_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5051_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5051_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5051_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5051_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5052
#define MACROLOP_PRIVATE_EVAL_REC_5051_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5052(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5052_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5052_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5052_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5052_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5052_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5052_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5052_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5052_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5052_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5052_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5053
#define MACROLOP_PRIVATE_EVAL_REC_5052_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5053(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5053_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5053_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5053_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5053_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5053_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5053_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5053_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5053_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5053_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5053_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5054
#define MACROLOP_PRIVATE_EVAL_REC_5053_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5054(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5054_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5054_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5054_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5054_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5054_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5054_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5054_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5054_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5054_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5054_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5055
#define MACROLOP_PRIVATE_EVAL_REC_5054_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5055(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5055_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5055_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5055_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5055_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5055_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5055_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5055_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5055_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5055_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5055_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5056
#define MACROLOP_PRIVATE_EVAL_REC_5055_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5056(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5056_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5056_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5056_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5056_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5056_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5056_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5056_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5056_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5056_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5056_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5057
#define MACROLOP_PRIVATE_EVAL_REC_5056_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5057(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5057_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5057_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5057_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5057_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5057_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5057_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5057_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5057_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5057_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5057_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5058
#define MACROLOP_PRIVATE_EVAL_REC_5057_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5058(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5058_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5058_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5058_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5058_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5058_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5058_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5058_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5058_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5058_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5058_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5059
#define MACROLOP_PRIVATE_EVAL_REC_5058_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5059(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5059_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5059_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5059_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5059_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5059_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5059_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5059_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5059_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5059_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5059_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5060
#define MACROLOP_PRIVATE_EVAL_REC_5059_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5060(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5060_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5060_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5060_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5060_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5060_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5060_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5060_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5060_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5060_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5060_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5061
#define MACROLOP_PRIVATE_EVAL_REC_5060_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5061(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5061_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5061_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5061_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5061_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5061_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5061_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5061_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5061_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5061_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5061_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5062
#define MACROLOP_PRIVATE_EVAL_REC_5061_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5062(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5062_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5062_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5062_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5062_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5062_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5062_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5062_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5062_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5062_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5062_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5063
#define MACROLOP_PRIVATE_EVAL_REC_5062_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5063(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5063_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5063_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5063_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5063_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5063_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5063_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5063_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5063_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5063_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5063_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5064
#define MACROLOP_PRIVATE_EVAL_REC_5063_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5064(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5064_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5064_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5064_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5064_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5064_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5064_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5064_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5064_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5064_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5064_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5065
#define MACROLOP_PRIVATE_EVAL_REC_5064_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5065(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5065_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5065_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5065_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5065_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5065_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5065_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5065_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5065_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5065_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5065_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5066
#define MACROLOP_PRIVATE_EVAL_REC_5065_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5066(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5066_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5066_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5066_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5066_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5066_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5066_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5066_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5066_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5066_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5066_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5067
#define MACROLOP_PRIVATE_EVAL_REC_5066_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5067(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5067_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5067_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5067_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5067_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5067_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5067_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5067_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5067_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5067_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5067_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5068
#define MACROLOP_PRIVATE_EVAL_REC_5067_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5068(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5068_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5068_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5068_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5068_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5068_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5068_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5068_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5068_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5068_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5068_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5069
#define MACROLOP_PRIVATE_EVAL_REC_5068_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5069(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5069_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5069_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5069_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5069_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5069_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5069_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5069_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5069_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5069_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5069_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5070
#define MACROLOP_PRIVATE_EVAL_REC_5069_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5070(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5070_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5070_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5070_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5070_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5070_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5070_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5070_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5070_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5070_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5070_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5071
#define MACROLOP_PRIVATE_EVAL_REC_5070_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5071(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5071_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5071_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5071_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5071_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5071_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5071_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5071_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5071_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5071_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5071_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5072
#define MACROLOP_PRIVATE_EVAL_REC_5071_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5072(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5072_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5072_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5072_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5072_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5072_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5072_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5072_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5072_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5072_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5072_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5073
#define MACROLOP_PRIVATE_EVAL_REC_5072_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5073(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5073_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5073_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5073_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5073_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5073_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5073_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5073_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5073_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5073_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5073_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5074
#define MACROLOP_PRIVATE_EVAL_REC_5073_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5074(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5074_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5074_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5074_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5074_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5074_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5074_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5074_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5074_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5074_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5074_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5075
#define MACROLOP_PRIVATE_EVAL_REC_5074_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5075(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5075_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5075_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5075_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5075_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5075_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5075_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5075_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5075_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5075_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5075_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5076
#define MACROLOP_PRIVATE_EVAL_REC_5075_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5076(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5076_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5076_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5076_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5076_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5076_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5076_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5076_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5076_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5076_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5076_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5077
#define MACROLOP_PRIVATE_EVAL_REC_5076_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5077(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5077_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5077_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5077_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5077_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5077_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5077_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5077_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5077_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5077_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5077_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5078
#define MACROLOP_PRIVATE_EVAL_REC_5077_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5078(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5078_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5078_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5078_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5078_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5078_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5078_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5078_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5078_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5078_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5078_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5079
#define MACROLOP_PRIVATE_EVAL_REC_5078_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5079(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5079_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5079_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5079_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5079_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5079_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5079_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5079_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5079_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5079_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5079_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5080
#define MACROLOP_PRIVATE_EVAL_REC_5079_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5080(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5080_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5080_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5080_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5080_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5080_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5080_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5080_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5080_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5080_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5080_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5081
#define MACROLOP_PRIVATE_EVAL_REC_5080_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5081(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5081_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5081_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5081_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5081_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5081_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5081_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5081_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5081_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5081_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5081_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5082
#define MACROLOP_PRIVATE_EVAL_REC_5081_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5082(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5082_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5082_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5082_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5082_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5082_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5082_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5082_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5082_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5082_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5082_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5083
#define MACROLOP_PRIVATE_EVAL_REC_5082_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5083(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5083_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5083_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5083_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5083_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5083_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5083_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5083_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5083_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5083_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5083_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5084
#define MACROLOP_PRIVATE_EVAL_REC_5083_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5084(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5084_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5084_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5084_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5084_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5084_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5084_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5084_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5084_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5084_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5084_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5085
#define MACROLOP_PRIVATE_EVAL_REC_5084_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5085(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5085_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5085_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5085_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5085_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5085_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5085_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5085_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5085_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5085_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5085_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5086
#define MACROLOP_PRIVATE_EVAL_REC_5085_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5086(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5086_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5086_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5086_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5086_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5086_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5086_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5086_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5086_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5086_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5086_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5087
#define MACROLOP_PRIVATE_EVAL_REC_5086_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5087(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5087_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5087_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5087_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5087_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5087_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5087_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5087_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5087_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5087_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5087_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5088
#define MACROLOP_PRIVATE_EVAL_REC_5087_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5088(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5088_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5088_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5088_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5088_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5088_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5088_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5088_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5088_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5088_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5088_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5089
#define MACROLOP_PRIVATE_EVAL_REC_5088_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5089(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5089_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5089_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5089_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5089_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5089_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5089_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5089_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5089_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5089_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5089_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5090
#define MACROLOP_PRIVATE_EVAL_REC_5089_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5090(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5090_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5090_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5090_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5090_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5090_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5090_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5090_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5090_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5090_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5090_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5091
#define MACROLOP_PRIVATE_EVAL_REC_5090_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5091(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5091_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5091_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5091_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5091_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5091_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5091_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5091_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5091_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5091_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5091_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5092
#define MACROLOP_PRIVATE_EVAL_REC_5091_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5092(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5092_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5092_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5092_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5092_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5092_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5092_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5092_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5092_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5092_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5092_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5093
#define MACROLOP_PRIVATE_EVAL_REC_5092_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5093(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5093_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5093_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5093_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5093_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5093_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5093_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5093_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5093_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5093_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5093_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5094
#define MACROLOP_PRIVATE_EVAL_REC_5093_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5094(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5094_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5094_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5094_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5094_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5094_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5094_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5094_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5094_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5094_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5094_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5095
#define MACROLOP_PRIVATE_EVAL_REC_5094_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5095(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5095_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5095_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5095_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5095_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5095_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5095_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5095_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5095_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5095_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5095_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5096
#define MACROLOP_PRIVATE_EVAL_REC_5095_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5096(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5096_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5096_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5096_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5096_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5096_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5096_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5096_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5096_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5096_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5096_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5097
#define MACROLOP_PRIVATE_EVAL_REC_5096_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5097(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5097_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5097_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5097_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5097_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5097_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5097_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5097_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5097_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5097_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5097_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5098
#define MACROLOP_PRIVATE_EVAL_REC_5097_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5098(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5098_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5098_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5098_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5098_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5098_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5098_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5098_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5098_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5098_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5098_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5099
#define MACROLOP_PRIVATE_EVAL_REC_5098_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5099(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5099_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5099_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5099_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5099_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5099_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5099_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5099_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5099_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5099_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5099_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5100
#define MACROLOP_PRIVATE_EVAL_REC_5099_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5100(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5100_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5100_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5100_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5100_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5100_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5100_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5100_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5100_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5100_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5100_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5101
#define MACROLOP_PRIVATE_EVAL_REC_5100_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5101(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5101_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5101_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5101_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5101_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5101_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5101_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5101_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5101_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5101_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5101_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5102
#define MACROLOP_PRIVATE_EVAL_REC_5101_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5102(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5102_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5102_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5102_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5102_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5102_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5102_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5102_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5102_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5102_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5102_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5103
#define MACROLOP_PRIVATE_EVAL_REC_5102_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5103(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5103_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5103_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5103_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5103_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5103_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5103_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5103_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5103_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5103_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5103_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5104
#define MACROLOP_PRIVATE_EVAL_REC_5103_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5104(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5104_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5104_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5104_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5104_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5104_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5104_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5104_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5104_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5104_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5104_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5105
#define MACROLOP_PRIVATE_EVAL_REC_5104_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5105(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5105_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5105_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5105_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5105_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5105_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5105_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5105_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5105_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5105_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5105_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5106
#define MACROLOP_PRIVATE_EVAL_REC_5105_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5106(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5106_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5106_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5106_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5106_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5106_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5106_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5106_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5106_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5106_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5106_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5107
#define MACROLOP_PRIVATE_EVAL_REC_5106_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5107(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5107_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5107_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5107_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5107_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5107_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5107_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5107_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5107_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5107_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5107_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5108
#define MACROLOP_PRIVATE_EVAL_REC_5107_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5108(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5108_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5108_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5108_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5108_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5108_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5108_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5108_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5108_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5108_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5108_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5109
#define MACROLOP_PRIVATE_EVAL_REC_5108_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5109(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5109_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5109_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5109_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5109_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5109_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5109_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5109_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5109_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5109_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5109_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5110
#define MACROLOP_PRIVATE_EVAL_REC_5109_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5110(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5110_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5110_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5110_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5110_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5110_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5110_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5110_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5110_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5110_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5110_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5111
#define MACROLOP_PRIVATE_EVAL_REC_5110_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5111(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5111_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5111_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5111_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5111_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5111_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5111_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5111_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5111_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5111_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5111_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5112
#define MACROLOP_PRIVATE_EVAL_REC_5111_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5112(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5112_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5112_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5112_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5112_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5112_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5112_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5112_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5112_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5112_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5112_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5113
#define MACROLOP_PRIVATE_EVAL_REC_5112_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5113(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5113_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5113_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5113_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5113_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5113_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5113_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5113_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5113_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5113_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5113_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5114
#define MACROLOP_PRIVATE_EVAL_REC_5113_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5114(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5114_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5114_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5114_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5114_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5114_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5114_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5114_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5114_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5114_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5114_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5115
#define MACROLOP_PRIVATE_EVAL_REC_5114_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5115(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5115_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5115_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5115_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5115_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5115_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5115_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5115_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5115_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5115_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5115_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5116
#define MACROLOP_PRIVATE_EVAL_REC_5115_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5116(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5116_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5116_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5116_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5116_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5116_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5116_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5116_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5116_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5116_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5116_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5117
#define MACROLOP_PRIVATE_EVAL_REC_5116_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5117(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5117_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5117_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5117_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5117_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5117_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5117_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5117_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5117_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5117_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5117_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5118
#define MACROLOP_PRIVATE_EVAL_REC_5117_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5118(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5118_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5118_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5118_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5118_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5118_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5118_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5118_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5118_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5118_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5118_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5119
#define MACROLOP_PRIVATE_EVAL_REC_5118_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_5119(...)                                                        \
    MACROLOP_PRIVATE_EVAL_REC_5119_OVERLOAD(                                                       \
        MACROLOP_PRIVATE_EVAL_REC_5119_GET_CHOICE(__VA_ARGS__))                                    \
    (MACROLOP_PRIVATE_EVAL_REC_5119_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_5119_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_5119_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_5119_OVERLOAD(choice)                                            \
    MACROLOP_PRIVATE_EVAL_REC_5119_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_5119_OVERLOAD_PRIMITIVE(choice)                                  \
    MACROLOP_PRIVATE_EVAL_REC_5119_##choice
#define MACROLOP_PRIVATE_EVAL_REC_5119_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_5120
#define MACROLOP_PRIVATE_EVAL_REC_5119_STOP(...) __VA_ARGS__

#endif // MACROLOP_EVAL_REC_UNROLL_4096_TO_5119_H
