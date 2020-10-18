#ifndef MACROLOP_EVAL_REC_UNROLL_11264_TO_12287_H
#define MACROLOP_EVAL_REC_UNROLL_11264_TO_12287_H

#define MACROLOP_PRIVATE_EVAL_REC_11264(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11264_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11264_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11264_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11264_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11264_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11264_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11264_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11264_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11264_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11264_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11265
#define MACROLOP_PRIVATE_EVAL_REC_11264_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11265(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11265_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11265_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11265_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11265_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11265_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11265_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11265_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11265_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11265_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11265_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11266
#define MACROLOP_PRIVATE_EVAL_REC_11265_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11266(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11266_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11266_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11266_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11266_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11266_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11266_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11266_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11266_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11266_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11266_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11267
#define MACROLOP_PRIVATE_EVAL_REC_11266_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11267(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11267_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11267_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11267_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11267_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11267_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11267_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11267_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11267_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11267_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11267_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11268
#define MACROLOP_PRIVATE_EVAL_REC_11267_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11268(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11268_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11268_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11268_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11268_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11268_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11268_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11268_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11268_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11268_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11268_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11269
#define MACROLOP_PRIVATE_EVAL_REC_11268_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11269(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11269_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11269_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11269_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11269_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11269_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11269_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11269_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11269_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11269_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11269_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11270
#define MACROLOP_PRIVATE_EVAL_REC_11269_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11270(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11270_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11270_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11270_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11270_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11270_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11270_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11270_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11270_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11270_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11270_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11271
#define MACROLOP_PRIVATE_EVAL_REC_11270_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11271(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11271_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11271_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11271_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11271_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11271_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11271_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11271_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11271_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11271_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11271_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11272
#define MACROLOP_PRIVATE_EVAL_REC_11271_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11272(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11272_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11272_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11272_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11272_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11272_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11272_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11272_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11272_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11272_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11272_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11273
#define MACROLOP_PRIVATE_EVAL_REC_11272_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11273(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11273_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11273_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11273_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11273_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11273_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11273_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11273_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11273_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11273_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11273_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11274
#define MACROLOP_PRIVATE_EVAL_REC_11273_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11274(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11274_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11274_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11274_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11274_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11274_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11274_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11274_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11274_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11274_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11274_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11275
#define MACROLOP_PRIVATE_EVAL_REC_11274_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11275(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11275_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11275_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11275_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11275_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11275_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11275_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11275_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11275_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11275_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11275_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11276
#define MACROLOP_PRIVATE_EVAL_REC_11275_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11276(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11276_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11276_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11276_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11276_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11276_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11276_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11276_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11276_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11276_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11276_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11277
#define MACROLOP_PRIVATE_EVAL_REC_11276_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11277(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11277_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11277_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11277_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11277_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11277_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11277_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11277_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11277_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11277_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11277_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11278
#define MACROLOP_PRIVATE_EVAL_REC_11277_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11278(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11278_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11278_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11278_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11278_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11278_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11278_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11278_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11278_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11278_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11278_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11279
#define MACROLOP_PRIVATE_EVAL_REC_11278_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11279(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11279_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11279_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11279_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11279_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11279_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11279_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11279_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11279_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11279_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11279_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11280
#define MACROLOP_PRIVATE_EVAL_REC_11279_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11280(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11280_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11280_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11280_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11280_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11280_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11280_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11280_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11280_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11280_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11280_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11281
#define MACROLOP_PRIVATE_EVAL_REC_11280_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11281(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11281_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11281_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11281_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11281_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11281_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11281_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11281_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11281_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11281_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11281_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11282
#define MACROLOP_PRIVATE_EVAL_REC_11281_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11282(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11282_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11282_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11282_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11282_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11282_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11282_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11282_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11282_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11282_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11282_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11283
#define MACROLOP_PRIVATE_EVAL_REC_11282_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11283(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11283_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11283_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11283_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11283_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11283_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11283_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11283_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11283_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11283_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11283_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11284
#define MACROLOP_PRIVATE_EVAL_REC_11283_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11284(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11284_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11284_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11284_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11284_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11284_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11284_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11284_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11284_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11284_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11284_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11285
#define MACROLOP_PRIVATE_EVAL_REC_11284_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11285(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11285_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11285_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11285_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11285_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11285_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11285_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11285_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11285_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11285_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11285_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11286
#define MACROLOP_PRIVATE_EVAL_REC_11285_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11286(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11286_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11286_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11286_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11286_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11286_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11286_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11286_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11286_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11286_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11286_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11287
#define MACROLOP_PRIVATE_EVAL_REC_11286_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11287(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11287_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11287_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11287_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11287_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11287_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11287_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11287_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11287_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11287_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11287_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11288
#define MACROLOP_PRIVATE_EVAL_REC_11287_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11288(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11288_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11288_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11288_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11288_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11288_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11288_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11288_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11288_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11288_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11288_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11289
#define MACROLOP_PRIVATE_EVAL_REC_11288_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11289(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11289_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11289_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11289_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11289_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11289_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11289_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11289_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11289_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11289_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11289_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11290
#define MACROLOP_PRIVATE_EVAL_REC_11289_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11290(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11290_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11290_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11290_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11290_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11290_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11290_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11290_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11290_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11290_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11290_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11291
#define MACROLOP_PRIVATE_EVAL_REC_11290_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11291(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11291_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11291_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11291_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11291_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11291_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11291_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11291_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11291_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11291_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11291_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11292
#define MACROLOP_PRIVATE_EVAL_REC_11291_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11292(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11292_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11292_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11292_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11292_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11292_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11292_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11292_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11292_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11292_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11292_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11293
#define MACROLOP_PRIVATE_EVAL_REC_11292_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11293(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11293_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11293_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11293_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11293_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11293_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11293_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11293_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11293_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11293_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11293_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11294
#define MACROLOP_PRIVATE_EVAL_REC_11293_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11294(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11294_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11294_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11294_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11294_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11294_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11294_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11294_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11294_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11294_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11294_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11295
#define MACROLOP_PRIVATE_EVAL_REC_11294_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11295(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11295_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11295_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11295_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11295_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11295_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11295_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11295_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11295_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11295_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11295_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11296
#define MACROLOP_PRIVATE_EVAL_REC_11295_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11296(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11296_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11296_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11296_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11296_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11296_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11296_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11296_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11296_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11296_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11296_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11297
#define MACROLOP_PRIVATE_EVAL_REC_11296_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11297(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11297_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11297_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11297_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11297_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11297_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11297_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11297_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11297_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11297_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11297_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11298
#define MACROLOP_PRIVATE_EVAL_REC_11297_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11298(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11298_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11298_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11298_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11298_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11298_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11298_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11298_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11298_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11298_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11298_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11299
#define MACROLOP_PRIVATE_EVAL_REC_11298_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11299(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11299_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11299_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11299_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11299_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11299_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11299_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11299_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11299_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11299_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11299_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11300
#define MACROLOP_PRIVATE_EVAL_REC_11299_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11300(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11300_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11300_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11300_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11300_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11300_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11300_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11300_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11300_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11300_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11300_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11301
#define MACROLOP_PRIVATE_EVAL_REC_11300_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11301(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11301_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11301_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11301_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11301_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11301_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11301_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11301_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11301_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11301_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11301_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11302
#define MACROLOP_PRIVATE_EVAL_REC_11301_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11302(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11302_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11302_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11302_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11302_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11302_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11302_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11302_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11302_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11302_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11302_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11303
#define MACROLOP_PRIVATE_EVAL_REC_11302_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11303(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11303_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11303_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11303_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11303_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11303_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11303_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11303_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11303_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11303_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11303_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11304
#define MACROLOP_PRIVATE_EVAL_REC_11303_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11304(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11304_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11304_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11304_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11304_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11304_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11304_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11304_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11304_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11304_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11304_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11305
#define MACROLOP_PRIVATE_EVAL_REC_11304_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11305(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11305_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11305_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11305_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11305_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11305_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11305_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11305_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11305_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11305_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11305_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11306
#define MACROLOP_PRIVATE_EVAL_REC_11305_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11306(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11306_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11306_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11306_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11306_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11306_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11306_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11306_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11306_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11306_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11306_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11307
#define MACROLOP_PRIVATE_EVAL_REC_11306_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11307(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11307_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11307_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11307_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11307_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11307_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11307_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11307_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11307_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11307_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11307_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11308
#define MACROLOP_PRIVATE_EVAL_REC_11307_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11308(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11308_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11308_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11308_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11308_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11308_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11308_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11308_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11308_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11308_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11308_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11309
#define MACROLOP_PRIVATE_EVAL_REC_11308_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11309(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11309_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11309_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11309_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11309_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11309_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11309_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11309_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11309_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11309_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11309_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11310
#define MACROLOP_PRIVATE_EVAL_REC_11309_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11310(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11310_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11310_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11310_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11310_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11310_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11310_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11310_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11310_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11310_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11310_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11311
#define MACROLOP_PRIVATE_EVAL_REC_11310_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11311(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11311_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11311_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11311_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11311_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11311_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11311_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11311_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11311_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11311_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11311_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11312
#define MACROLOP_PRIVATE_EVAL_REC_11311_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11312(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11312_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11312_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11312_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11312_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11312_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11312_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11312_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11312_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11312_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11312_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11313
#define MACROLOP_PRIVATE_EVAL_REC_11312_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11313(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11313_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11313_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11313_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11313_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11313_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11313_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11313_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11313_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11313_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11313_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11314
#define MACROLOP_PRIVATE_EVAL_REC_11313_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11314(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11314_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11314_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11314_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11314_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11314_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11314_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11314_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11314_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11314_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11314_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11315
#define MACROLOP_PRIVATE_EVAL_REC_11314_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11315(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11315_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11315_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11315_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11315_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11315_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11315_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11315_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11315_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11315_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11315_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11316
#define MACROLOP_PRIVATE_EVAL_REC_11315_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11316(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11316_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11316_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11316_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11316_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11316_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11316_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11316_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11316_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11316_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11316_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11317
#define MACROLOP_PRIVATE_EVAL_REC_11316_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11317(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11317_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11317_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11317_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11317_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11317_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11317_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11317_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11317_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11317_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11317_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11318
#define MACROLOP_PRIVATE_EVAL_REC_11317_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11318(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11318_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11318_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11318_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11318_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11318_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11318_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11318_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11318_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11318_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11318_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11319
#define MACROLOP_PRIVATE_EVAL_REC_11318_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11319(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11319_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11319_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11319_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11319_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11319_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11319_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11319_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11319_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11319_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11319_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11320
#define MACROLOP_PRIVATE_EVAL_REC_11319_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11320(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11320_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11320_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11320_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11320_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11320_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11320_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11320_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11320_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11320_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11320_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11321
#define MACROLOP_PRIVATE_EVAL_REC_11320_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11321(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11321_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11321_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11321_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11321_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11321_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11321_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11321_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11321_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11321_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11321_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11322
#define MACROLOP_PRIVATE_EVAL_REC_11321_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11322(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11322_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11322_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11322_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11322_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11322_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11322_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11322_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11322_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11322_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11322_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11323
#define MACROLOP_PRIVATE_EVAL_REC_11322_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11323(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11323_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11323_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11323_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11323_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11323_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11323_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11323_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11323_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11323_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11323_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11324
#define MACROLOP_PRIVATE_EVAL_REC_11323_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11324(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11324_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11324_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11324_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11324_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11324_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11324_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11324_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11324_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11324_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11324_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11325
#define MACROLOP_PRIVATE_EVAL_REC_11324_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11325(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11325_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11325_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11325_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11325_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11325_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11325_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11325_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11325_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11325_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11325_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11326
#define MACROLOP_PRIVATE_EVAL_REC_11325_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11326(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11326_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11326_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11326_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11326_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11326_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11326_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11326_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11326_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11326_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11326_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11327
#define MACROLOP_PRIVATE_EVAL_REC_11326_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11327(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11327_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11327_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11327_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11327_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11327_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11327_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11327_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11327_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11327_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11327_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11328
#define MACROLOP_PRIVATE_EVAL_REC_11327_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11328(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11328_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11328_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11328_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11328_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11328_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11328_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11328_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11328_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11328_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11328_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11329
#define MACROLOP_PRIVATE_EVAL_REC_11328_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11329(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11329_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11329_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11329_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11329_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11329_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11329_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11329_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11329_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11329_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11329_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11330
#define MACROLOP_PRIVATE_EVAL_REC_11329_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11330(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11330_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11330_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11330_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11330_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11330_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11330_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11330_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11330_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11330_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11330_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11331
#define MACROLOP_PRIVATE_EVAL_REC_11330_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11331(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11331_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11331_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11331_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11331_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11331_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11331_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11331_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11331_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11331_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11331_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11332
#define MACROLOP_PRIVATE_EVAL_REC_11331_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11332(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11332_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11332_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11332_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11332_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11332_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11332_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11332_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11332_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11332_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11332_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11333
#define MACROLOP_PRIVATE_EVAL_REC_11332_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11333(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11333_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11333_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11333_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11333_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11333_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11333_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11333_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11333_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11333_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11333_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11334
#define MACROLOP_PRIVATE_EVAL_REC_11333_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11334(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11334_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11334_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11334_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11334_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11334_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11334_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11334_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11334_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11334_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11334_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11335
#define MACROLOP_PRIVATE_EVAL_REC_11334_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11335(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11335_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11335_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11335_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11335_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11335_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11335_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11335_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11335_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11335_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11335_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11336
#define MACROLOP_PRIVATE_EVAL_REC_11335_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11336(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11336_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11336_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11336_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11336_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11336_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11336_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11336_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11336_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11336_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11336_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11337
#define MACROLOP_PRIVATE_EVAL_REC_11336_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11337(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11337_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11337_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11337_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11337_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11337_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11337_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11337_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11337_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11337_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11337_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11338
#define MACROLOP_PRIVATE_EVAL_REC_11337_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11338(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11338_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11338_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11338_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11338_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11338_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11338_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11338_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11338_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11338_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11338_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11339
#define MACROLOP_PRIVATE_EVAL_REC_11338_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11339(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11339_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11339_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11339_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11339_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11339_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11339_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11339_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11339_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11339_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11339_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11340
#define MACROLOP_PRIVATE_EVAL_REC_11339_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11340(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11340_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11340_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11340_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11340_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11340_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11340_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11340_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11340_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11340_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11340_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11341
#define MACROLOP_PRIVATE_EVAL_REC_11340_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11341(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11341_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11341_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11341_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11341_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11341_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11341_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11341_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11341_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11341_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11341_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11342
#define MACROLOP_PRIVATE_EVAL_REC_11341_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11342(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11342_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11342_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11342_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11342_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11342_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11342_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11342_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11342_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11342_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11342_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11343
#define MACROLOP_PRIVATE_EVAL_REC_11342_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11343(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11343_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11343_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11343_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11343_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11343_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11343_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11343_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11343_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11343_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11343_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11344
#define MACROLOP_PRIVATE_EVAL_REC_11343_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11344(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11344_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11344_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11344_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11344_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11344_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11344_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11344_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11344_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11344_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11344_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11345
#define MACROLOP_PRIVATE_EVAL_REC_11344_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11345(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11345_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11345_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11345_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11345_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11345_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11345_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11345_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11345_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11345_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11345_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11346
#define MACROLOP_PRIVATE_EVAL_REC_11345_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11346(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11346_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11346_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11346_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11346_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11346_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11346_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11346_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11346_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11346_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11346_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11347
#define MACROLOP_PRIVATE_EVAL_REC_11346_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11347(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11347_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11347_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11347_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11347_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11347_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11347_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11347_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11347_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11347_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11347_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11348
#define MACROLOP_PRIVATE_EVAL_REC_11347_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11348(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11348_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11348_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11348_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11348_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11348_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11348_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11348_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11348_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11348_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11348_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11349
#define MACROLOP_PRIVATE_EVAL_REC_11348_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11349(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11349_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11349_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11349_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11349_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11349_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11349_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11349_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11349_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11349_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11349_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11350
#define MACROLOP_PRIVATE_EVAL_REC_11349_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11350(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11350_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11350_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11350_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11350_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11350_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11350_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11350_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11350_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11350_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11350_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11351
#define MACROLOP_PRIVATE_EVAL_REC_11350_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11351(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11351_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11351_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11351_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11351_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11351_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11351_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11351_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11351_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11351_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11351_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11352
#define MACROLOP_PRIVATE_EVAL_REC_11351_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11352(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11352_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11352_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11352_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11352_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11352_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11352_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11352_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11352_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11352_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11352_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11353
#define MACROLOP_PRIVATE_EVAL_REC_11352_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11353(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11353_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11353_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11353_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11353_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11353_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11353_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11353_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11353_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11353_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11353_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11354
#define MACROLOP_PRIVATE_EVAL_REC_11353_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11354(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11354_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11354_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11354_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11354_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11354_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11354_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11354_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11354_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11354_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11354_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11355
#define MACROLOP_PRIVATE_EVAL_REC_11354_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11355(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11355_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11355_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11355_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11355_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11355_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11355_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11355_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11355_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11355_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11355_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11356
#define MACROLOP_PRIVATE_EVAL_REC_11355_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11356(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11356_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11356_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11356_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11356_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11356_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11356_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11356_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11356_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11356_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11356_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11357
#define MACROLOP_PRIVATE_EVAL_REC_11356_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11357(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11357_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11357_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11357_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11357_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11357_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11357_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11357_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11357_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11357_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11357_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11358
#define MACROLOP_PRIVATE_EVAL_REC_11357_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11358(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11358_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11358_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11358_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11358_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11358_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11358_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11358_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11358_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11358_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11358_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11359
#define MACROLOP_PRIVATE_EVAL_REC_11358_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11359(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11359_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11359_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11359_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11359_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11359_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11359_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11359_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11359_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11359_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11359_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11360
#define MACROLOP_PRIVATE_EVAL_REC_11359_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11360(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11360_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11360_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11360_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11360_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11360_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11360_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11360_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11360_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11360_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11360_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11361
#define MACROLOP_PRIVATE_EVAL_REC_11360_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11361(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11361_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11361_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11361_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11361_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11361_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11361_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11361_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11361_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11361_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11361_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11362
#define MACROLOP_PRIVATE_EVAL_REC_11361_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11362(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11362_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11362_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11362_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11362_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11362_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11362_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11362_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11362_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11362_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11362_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11363
#define MACROLOP_PRIVATE_EVAL_REC_11362_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11363(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11363_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11363_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11363_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11363_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11363_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11363_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11363_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11363_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11363_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11363_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11364
#define MACROLOP_PRIVATE_EVAL_REC_11363_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11364(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11364_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11364_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11364_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11364_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11364_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11364_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11364_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11364_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11364_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11364_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11365
#define MACROLOP_PRIVATE_EVAL_REC_11364_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11365(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11365_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11365_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11365_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11365_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11365_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11365_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11365_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11365_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11365_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11365_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11366
#define MACROLOP_PRIVATE_EVAL_REC_11365_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11366(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11366_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11366_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11366_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11366_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11366_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11366_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11366_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11366_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11366_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11366_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11367
#define MACROLOP_PRIVATE_EVAL_REC_11366_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11367(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11367_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11367_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11367_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11367_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11367_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11367_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11367_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11367_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11367_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11367_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11368
#define MACROLOP_PRIVATE_EVAL_REC_11367_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11368(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11368_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11368_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11368_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11368_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11368_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11368_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11368_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11368_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11368_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11368_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11369
#define MACROLOP_PRIVATE_EVAL_REC_11368_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11369(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11369_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11369_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11369_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11369_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11369_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11369_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11369_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11369_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11369_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11369_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11370
#define MACROLOP_PRIVATE_EVAL_REC_11369_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11370(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11370_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11370_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11370_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11370_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11370_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11370_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11370_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11370_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11370_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11370_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11371
#define MACROLOP_PRIVATE_EVAL_REC_11370_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11371(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11371_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11371_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11371_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11371_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11371_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11371_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11371_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11371_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11371_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11371_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11372
#define MACROLOP_PRIVATE_EVAL_REC_11371_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11372(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11372_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11372_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11372_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11372_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11372_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11372_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11372_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11372_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11372_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11372_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11373
#define MACROLOP_PRIVATE_EVAL_REC_11372_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11373(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11373_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11373_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11373_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11373_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11373_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11373_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11373_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11373_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11373_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11373_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11374
#define MACROLOP_PRIVATE_EVAL_REC_11373_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11374(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11374_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11374_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11374_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11374_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11374_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11374_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11374_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11374_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11374_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11374_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11375
#define MACROLOP_PRIVATE_EVAL_REC_11374_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11375(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11375_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11375_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11375_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11375_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11375_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11375_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11375_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11375_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11375_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11375_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11376
#define MACROLOP_PRIVATE_EVAL_REC_11375_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11376(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11376_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11376_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11376_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11376_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11376_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11376_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11376_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11376_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11376_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11376_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11377
#define MACROLOP_PRIVATE_EVAL_REC_11376_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11377(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11377_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11377_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11377_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11377_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11377_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11377_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11377_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11377_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11377_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11377_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11378
#define MACROLOP_PRIVATE_EVAL_REC_11377_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11378(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11378_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11378_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11378_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11378_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11378_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11378_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11378_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11378_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11378_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11378_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11379
#define MACROLOP_PRIVATE_EVAL_REC_11378_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11379(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11379_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11379_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11379_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11379_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11379_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11379_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11379_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11379_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11379_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11379_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11380
#define MACROLOP_PRIVATE_EVAL_REC_11379_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11380(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11380_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11380_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11380_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11380_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11380_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11380_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11380_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11380_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11380_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11380_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11381
#define MACROLOP_PRIVATE_EVAL_REC_11380_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11381(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11381_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11381_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11381_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11381_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11381_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11381_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11381_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11381_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11381_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11381_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11382
#define MACROLOP_PRIVATE_EVAL_REC_11381_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11382(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11382_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11382_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11382_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11382_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11382_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11382_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11382_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11382_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11382_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11382_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11383
#define MACROLOP_PRIVATE_EVAL_REC_11382_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11383(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11383_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11383_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11383_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11383_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11383_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11383_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11383_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11383_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11383_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11383_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11384
#define MACROLOP_PRIVATE_EVAL_REC_11383_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11384(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11384_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11384_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11384_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11384_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11384_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11384_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11384_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11384_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11384_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11384_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11385
#define MACROLOP_PRIVATE_EVAL_REC_11384_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11385(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11385_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11385_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11385_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11385_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11385_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11385_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11385_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11385_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11385_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11385_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11386
#define MACROLOP_PRIVATE_EVAL_REC_11385_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11386(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11386_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11386_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11386_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11386_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11386_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11386_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11386_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11386_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11386_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11386_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11387
#define MACROLOP_PRIVATE_EVAL_REC_11386_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11387(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11387_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11387_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11387_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11387_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11387_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11387_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11387_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11387_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11387_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11387_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11388
#define MACROLOP_PRIVATE_EVAL_REC_11387_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11388(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11388_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11388_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11388_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11388_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11388_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11388_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11388_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11388_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11388_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11388_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11389
#define MACROLOP_PRIVATE_EVAL_REC_11388_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11389(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11389_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11389_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11389_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11389_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11389_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11389_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11389_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11389_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11389_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11389_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11390
#define MACROLOP_PRIVATE_EVAL_REC_11389_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11390(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11390_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11390_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11390_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11390_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11390_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11390_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11390_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11390_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11390_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11390_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11391
#define MACROLOP_PRIVATE_EVAL_REC_11390_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11391(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11391_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11391_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11391_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11391_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11391_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11391_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11391_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11391_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11391_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11391_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11392
#define MACROLOP_PRIVATE_EVAL_REC_11391_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11392(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11392_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11392_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11392_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11392_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11392_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11392_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11392_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11392_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11392_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11392_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11393
#define MACROLOP_PRIVATE_EVAL_REC_11392_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11393(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11393_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11393_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11393_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11393_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11393_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11393_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11393_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11393_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11393_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11393_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11394
#define MACROLOP_PRIVATE_EVAL_REC_11393_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11394(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11394_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11394_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11394_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11394_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11394_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11394_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11394_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11394_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11394_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11394_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11395
#define MACROLOP_PRIVATE_EVAL_REC_11394_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11395(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11395_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11395_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11395_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11395_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11395_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11395_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11395_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11395_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11395_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11395_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11396
#define MACROLOP_PRIVATE_EVAL_REC_11395_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11396(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11396_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11396_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11396_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11396_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11396_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11396_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11396_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11396_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11396_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11396_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11397
#define MACROLOP_PRIVATE_EVAL_REC_11396_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11397(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11397_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11397_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11397_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11397_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11397_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11397_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11397_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11397_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11397_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11397_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11398
#define MACROLOP_PRIVATE_EVAL_REC_11397_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11398(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11398_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11398_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11398_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11398_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11398_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11398_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11398_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11398_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11398_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11398_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11399
#define MACROLOP_PRIVATE_EVAL_REC_11398_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11399(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11399_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11399_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11399_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11399_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11399_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11399_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11399_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11399_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11399_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11399_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11400
#define MACROLOP_PRIVATE_EVAL_REC_11399_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11400(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11400_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11400_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11400_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11400_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11400_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11400_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11400_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11400_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11400_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11400_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11401
#define MACROLOP_PRIVATE_EVAL_REC_11400_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11401(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11401_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11401_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11401_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11401_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11401_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11401_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11401_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11401_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11401_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11401_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11402
#define MACROLOP_PRIVATE_EVAL_REC_11401_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11402(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11402_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11402_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11402_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11402_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11402_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11402_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11402_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11402_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11402_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11402_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11403
#define MACROLOP_PRIVATE_EVAL_REC_11402_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11403(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11403_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11403_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11403_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11403_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11403_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11403_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11403_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11403_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11403_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11403_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11404
#define MACROLOP_PRIVATE_EVAL_REC_11403_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11404(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11404_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11404_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11404_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11404_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11404_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11404_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11404_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11404_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11404_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11404_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11405
#define MACROLOP_PRIVATE_EVAL_REC_11404_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11405(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11405_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11405_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11405_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11405_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11405_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11405_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11405_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11405_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11405_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11405_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11406
#define MACROLOP_PRIVATE_EVAL_REC_11405_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11406(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11406_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11406_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11406_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11406_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11406_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11406_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11406_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11406_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11406_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11406_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11407
#define MACROLOP_PRIVATE_EVAL_REC_11406_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11407(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11407_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11407_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11407_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11407_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11407_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11407_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11407_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11407_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11407_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11407_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11408
#define MACROLOP_PRIVATE_EVAL_REC_11407_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11408(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11408_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11408_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11408_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11408_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11408_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11408_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11408_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11408_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11408_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11408_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11409
#define MACROLOP_PRIVATE_EVAL_REC_11408_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11409(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11409_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11409_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11409_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11409_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11409_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11409_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11409_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11409_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11409_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11409_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11410
#define MACROLOP_PRIVATE_EVAL_REC_11409_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11410(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11410_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11410_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11410_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11410_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11410_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11410_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11410_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11410_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11410_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11410_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11411
#define MACROLOP_PRIVATE_EVAL_REC_11410_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11411(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11411_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11411_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11411_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11411_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11411_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11411_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11411_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11411_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11411_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11411_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11412
#define MACROLOP_PRIVATE_EVAL_REC_11411_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11412(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11412_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11412_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11412_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11412_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11412_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11412_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11412_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11412_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11412_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11412_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11413
#define MACROLOP_PRIVATE_EVAL_REC_11412_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11413(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11413_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11413_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11413_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11413_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11413_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11413_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11413_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11413_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11413_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11413_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11414
#define MACROLOP_PRIVATE_EVAL_REC_11413_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11414(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11414_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11414_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11414_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11414_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11414_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11414_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11414_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11414_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11414_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11414_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11415
#define MACROLOP_PRIVATE_EVAL_REC_11414_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11415(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11415_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11415_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11415_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11415_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11415_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11415_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11415_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11415_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11415_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11415_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11416
#define MACROLOP_PRIVATE_EVAL_REC_11415_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11416(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11416_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11416_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11416_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11416_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11416_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11416_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11416_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11416_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11416_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11416_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11417
#define MACROLOP_PRIVATE_EVAL_REC_11416_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11417(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11417_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11417_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11417_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11417_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11417_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11417_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11417_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11417_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11417_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11417_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11418
#define MACROLOP_PRIVATE_EVAL_REC_11417_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11418(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11418_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11418_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11418_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11418_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11418_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11418_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11418_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11418_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11418_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11418_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11419
#define MACROLOP_PRIVATE_EVAL_REC_11418_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11419(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11419_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11419_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11419_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11419_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11419_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11419_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11419_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11419_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11419_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11419_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11420
#define MACROLOP_PRIVATE_EVAL_REC_11419_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11420(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11420_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11420_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11420_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11420_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11420_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11420_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11420_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11420_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11420_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11420_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11421
#define MACROLOP_PRIVATE_EVAL_REC_11420_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11421(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11421_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11421_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11421_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11421_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11421_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11421_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11421_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11421_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11421_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11421_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11422
#define MACROLOP_PRIVATE_EVAL_REC_11421_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11422(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11422_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11422_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11422_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11422_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11422_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11422_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11422_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11422_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11422_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11422_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11423
#define MACROLOP_PRIVATE_EVAL_REC_11422_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11423(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11423_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11423_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11423_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11423_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11423_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11423_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11423_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11423_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11423_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11423_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11424
#define MACROLOP_PRIVATE_EVAL_REC_11423_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11424(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11424_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11424_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11424_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11424_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11424_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11424_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11424_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11424_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11424_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11424_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11425
#define MACROLOP_PRIVATE_EVAL_REC_11424_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11425(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11425_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11425_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11425_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11425_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11425_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11425_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11425_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11425_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11425_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11425_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11426
#define MACROLOP_PRIVATE_EVAL_REC_11425_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11426(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11426_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11426_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11426_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11426_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11426_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11426_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11426_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11426_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11426_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11426_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11427
#define MACROLOP_PRIVATE_EVAL_REC_11426_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11427(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11427_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11427_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11427_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11427_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11427_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11427_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11427_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11427_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11427_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11427_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11428
#define MACROLOP_PRIVATE_EVAL_REC_11427_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11428(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11428_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11428_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11428_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11428_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11428_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11428_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11428_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11428_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11428_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11428_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11429
#define MACROLOP_PRIVATE_EVAL_REC_11428_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11429(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11429_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11429_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11429_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11429_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11429_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11429_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11429_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11429_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11429_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11429_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11430
#define MACROLOP_PRIVATE_EVAL_REC_11429_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11430(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11430_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11430_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11430_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11430_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11430_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11430_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11430_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11430_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11430_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11430_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11431
#define MACROLOP_PRIVATE_EVAL_REC_11430_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11431(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11431_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11431_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11431_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11431_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11431_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11431_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11431_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11431_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11431_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11431_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11432
#define MACROLOP_PRIVATE_EVAL_REC_11431_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11432(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11432_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11432_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11432_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11432_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11432_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11432_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11432_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11432_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11432_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11432_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11433
#define MACROLOP_PRIVATE_EVAL_REC_11432_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11433(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11433_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11433_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11433_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11433_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11433_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11433_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11433_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11433_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11433_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11433_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11434
#define MACROLOP_PRIVATE_EVAL_REC_11433_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11434(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11434_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11434_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11434_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11434_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11434_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11434_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11434_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11434_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11434_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11434_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11435
#define MACROLOP_PRIVATE_EVAL_REC_11434_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11435(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11435_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11435_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11435_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11435_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11435_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11435_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11435_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11435_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11435_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11435_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11436
#define MACROLOP_PRIVATE_EVAL_REC_11435_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11436(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11436_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11436_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11436_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11436_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11436_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11436_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11436_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11436_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11436_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11436_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11437
#define MACROLOP_PRIVATE_EVAL_REC_11436_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11437(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11437_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11437_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11437_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11437_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11437_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11437_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11437_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11437_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11437_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11437_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11438
#define MACROLOP_PRIVATE_EVAL_REC_11437_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11438(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11438_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11438_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11438_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11438_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11438_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11438_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11438_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11438_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11438_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11438_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11439
#define MACROLOP_PRIVATE_EVAL_REC_11438_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11439(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11439_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11439_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11439_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11439_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11439_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11439_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11439_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11439_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11439_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11439_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11440
#define MACROLOP_PRIVATE_EVAL_REC_11439_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11440(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11440_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11440_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11440_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11440_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11440_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11440_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11440_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11440_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11440_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11440_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11441
#define MACROLOP_PRIVATE_EVAL_REC_11440_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11441(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11441_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11441_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11441_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11441_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11441_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11441_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11441_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11441_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11441_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11441_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11442
#define MACROLOP_PRIVATE_EVAL_REC_11441_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11442(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11442_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11442_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11442_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11442_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11442_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11442_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11442_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11442_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11442_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11442_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11443
#define MACROLOP_PRIVATE_EVAL_REC_11442_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11443(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11443_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11443_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11443_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11443_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11443_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11443_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11443_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11443_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11443_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11443_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11444
#define MACROLOP_PRIVATE_EVAL_REC_11443_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11444(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11444_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11444_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11444_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11444_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11444_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11444_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11444_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11444_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11444_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11444_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11445
#define MACROLOP_PRIVATE_EVAL_REC_11444_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11445(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11445_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11445_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11445_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11445_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11445_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11445_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11445_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11445_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11445_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11445_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11446
#define MACROLOP_PRIVATE_EVAL_REC_11445_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11446(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11446_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11446_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11446_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11446_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11446_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11446_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11446_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11446_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11446_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11446_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11447
#define MACROLOP_PRIVATE_EVAL_REC_11446_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11447(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11447_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11447_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11447_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11447_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11447_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11447_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11447_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11447_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11447_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11447_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11448
#define MACROLOP_PRIVATE_EVAL_REC_11447_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11448(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11448_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11448_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11448_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11448_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11448_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11448_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11448_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11448_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11448_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11448_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11449
#define MACROLOP_PRIVATE_EVAL_REC_11448_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11449(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11449_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11449_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11449_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11449_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11449_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11449_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11449_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11449_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11449_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11449_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11450
#define MACROLOP_PRIVATE_EVAL_REC_11449_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11450(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11450_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11450_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11450_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11450_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11450_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11450_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11450_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11450_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11450_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11450_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11451
#define MACROLOP_PRIVATE_EVAL_REC_11450_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11451(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11451_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11451_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11451_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11451_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11451_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11451_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11451_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11451_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11451_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11451_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11452
#define MACROLOP_PRIVATE_EVAL_REC_11451_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11452(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11452_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11452_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11452_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11452_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11452_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11452_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11452_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11452_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11452_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11452_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11453
#define MACROLOP_PRIVATE_EVAL_REC_11452_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11453(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11453_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11453_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11453_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11453_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11453_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11453_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11453_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11453_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11453_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11453_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11454
#define MACROLOP_PRIVATE_EVAL_REC_11453_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11454(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11454_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11454_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11454_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11454_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11454_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11454_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11454_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11454_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11454_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11454_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11455
#define MACROLOP_PRIVATE_EVAL_REC_11454_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11455(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11455_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11455_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11455_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11455_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11455_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11455_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11455_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11455_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11455_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11455_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11456
#define MACROLOP_PRIVATE_EVAL_REC_11455_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11456(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11456_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11456_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11456_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11456_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11456_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11456_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11456_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11456_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11456_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11456_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11457
#define MACROLOP_PRIVATE_EVAL_REC_11456_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11457(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11457_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11457_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11457_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11457_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11457_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11457_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11457_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11457_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11457_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11457_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11458
#define MACROLOP_PRIVATE_EVAL_REC_11457_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11458(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11458_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11458_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11458_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11458_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11458_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11458_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11458_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11458_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11458_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11458_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11459
#define MACROLOP_PRIVATE_EVAL_REC_11458_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11459(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11459_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11459_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11459_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11459_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11459_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11459_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11459_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11459_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11459_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11459_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11460
#define MACROLOP_PRIVATE_EVAL_REC_11459_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11460(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11460_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11460_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11460_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11460_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11460_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11460_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11460_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11460_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11460_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11460_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11461
#define MACROLOP_PRIVATE_EVAL_REC_11460_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11461(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11461_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11461_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11461_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11461_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11461_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11461_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11461_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11461_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11461_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11461_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11462
#define MACROLOP_PRIVATE_EVAL_REC_11461_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11462(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11462_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11462_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11462_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11462_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11462_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11462_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11462_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11462_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11462_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11462_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11463
#define MACROLOP_PRIVATE_EVAL_REC_11462_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11463(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11463_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11463_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11463_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11463_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11463_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11463_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11463_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11463_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11463_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11463_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11464
#define MACROLOP_PRIVATE_EVAL_REC_11463_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11464(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11464_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11464_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11464_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11464_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11464_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11464_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11464_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11464_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11464_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11464_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11465
#define MACROLOP_PRIVATE_EVAL_REC_11464_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11465(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11465_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11465_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11465_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11465_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11465_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11465_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11465_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11465_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11465_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11465_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11466
#define MACROLOP_PRIVATE_EVAL_REC_11465_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11466(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11466_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11466_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11466_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11466_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11466_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11466_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11466_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11466_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11466_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11466_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11467
#define MACROLOP_PRIVATE_EVAL_REC_11466_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11467(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11467_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11467_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11467_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11467_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11467_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11467_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11467_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11467_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11467_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11467_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11468
#define MACROLOP_PRIVATE_EVAL_REC_11467_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11468(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11468_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11468_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11468_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11468_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11468_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11468_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11468_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11468_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11468_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11468_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11469
#define MACROLOP_PRIVATE_EVAL_REC_11468_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11469(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11469_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11469_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11469_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11469_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11469_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11469_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11469_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11469_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11469_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11469_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11470
#define MACROLOP_PRIVATE_EVAL_REC_11469_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11470(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11470_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11470_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11470_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11470_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11470_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11470_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11470_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11470_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11470_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11470_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11471
#define MACROLOP_PRIVATE_EVAL_REC_11470_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11471(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11471_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11471_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11471_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11471_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11471_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11471_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11471_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11471_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11471_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11471_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11472
#define MACROLOP_PRIVATE_EVAL_REC_11471_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11472(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11472_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11472_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11472_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11472_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11472_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11472_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11472_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11472_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11472_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11472_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11473
#define MACROLOP_PRIVATE_EVAL_REC_11472_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11473(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11473_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11473_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11473_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11473_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11473_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11473_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11473_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11473_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11473_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11473_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11474
#define MACROLOP_PRIVATE_EVAL_REC_11473_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11474(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11474_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11474_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11474_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11474_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11474_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11474_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11474_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11474_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11474_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11474_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11475
#define MACROLOP_PRIVATE_EVAL_REC_11474_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11475(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11475_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11475_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11475_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11475_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11475_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11475_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11475_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11475_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11475_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11475_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11476
#define MACROLOP_PRIVATE_EVAL_REC_11475_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11476(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11476_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11476_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11476_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11476_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11476_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11476_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11476_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11476_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11476_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11476_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11477
#define MACROLOP_PRIVATE_EVAL_REC_11476_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11477(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11477_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11477_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11477_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11477_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11477_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11477_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11477_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11477_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11477_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11477_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11478
#define MACROLOP_PRIVATE_EVAL_REC_11477_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11478(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11478_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11478_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11478_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11478_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11478_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11478_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11478_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11478_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11478_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11478_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11479
#define MACROLOP_PRIVATE_EVAL_REC_11478_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11479(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11479_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11479_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11479_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11479_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11479_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11479_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11479_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11479_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11479_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11479_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11480
#define MACROLOP_PRIVATE_EVAL_REC_11479_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11480(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11480_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11480_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11480_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11480_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11480_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11480_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11480_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11480_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11480_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11480_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11481
#define MACROLOP_PRIVATE_EVAL_REC_11480_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11481(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11481_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11481_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11481_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11481_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11481_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11481_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11481_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11481_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11481_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11481_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11482
#define MACROLOP_PRIVATE_EVAL_REC_11481_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11482(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11482_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11482_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11482_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11482_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11482_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11482_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11482_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11482_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11482_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11482_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11483
#define MACROLOP_PRIVATE_EVAL_REC_11482_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11483(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11483_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11483_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11483_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11483_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11483_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11483_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11483_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11483_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11483_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11483_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11484
#define MACROLOP_PRIVATE_EVAL_REC_11483_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11484(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11484_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11484_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11484_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11484_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11484_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11484_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11484_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11484_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11484_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11484_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11485
#define MACROLOP_PRIVATE_EVAL_REC_11484_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11485(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11485_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11485_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11485_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11485_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11485_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11485_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11485_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11485_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11485_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11485_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11486
#define MACROLOP_PRIVATE_EVAL_REC_11485_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11486(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11486_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11486_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11486_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11486_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11486_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11486_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11486_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11486_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11486_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11486_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11487
#define MACROLOP_PRIVATE_EVAL_REC_11486_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11487(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11487_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11487_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11487_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11487_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11487_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11487_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11487_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11487_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11487_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11487_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11488
#define MACROLOP_PRIVATE_EVAL_REC_11487_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11488(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11488_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11488_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11488_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11488_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11488_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11488_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11488_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11488_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11488_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11488_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11489
#define MACROLOP_PRIVATE_EVAL_REC_11488_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11489(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11489_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11489_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11489_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11489_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11489_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11489_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11489_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11489_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11489_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11489_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11490
#define MACROLOP_PRIVATE_EVAL_REC_11489_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11490(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11490_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11490_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11490_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11490_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11490_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11490_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11490_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11490_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11490_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11490_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11491
#define MACROLOP_PRIVATE_EVAL_REC_11490_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11491(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11491_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11491_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11491_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11491_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11491_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11491_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11491_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11491_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11491_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11491_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11492
#define MACROLOP_PRIVATE_EVAL_REC_11491_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11492(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11492_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11492_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11492_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11492_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11492_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11492_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11492_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11492_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11492_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11492_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11493
#define MACROLOP_PRIVATE_EVAL_REC_11492_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11493(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11493_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11493_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11493_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11493_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11493_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11493_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11493_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11493_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11493_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11493_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11494
#define MACROLOP_PRIVATE_EVAL_REC_11493_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11494(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11494_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11494_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11494_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11494_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11494_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11494_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11494_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11494_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11494_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11494_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11495
#define MACROLOP_PRIVATE_EVAL_REC_11494_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11495(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11495_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11495_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11495_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11495_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11495_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11495_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11495_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11495_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11495_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11495_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11496
#define MACROLOP_PRIVATE_EVAL_REC_11495_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11496(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11496_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11496_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11496_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11496_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11496_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11496_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11496_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11496_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11496_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11496_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11497
#define MACROLOP_PRIVATE_EVAL_REC_11496_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11497(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11497_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11497_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11497_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11497_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11497_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11497_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11497_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11497_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11497_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11497_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11498
#define MACROLOP_PRIVATE_EVAL_REC_11497_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11498(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11498_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11498_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11498_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11498_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11498_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11498_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11498_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11498_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11498_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11498_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11499
#define MACROLOP_PRIVATE_EVAL_REC_11498_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11499(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11499_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11499_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11499_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11499_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11499_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11499_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11499_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11499_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11499_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11499_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11500
#define MACROLOP_PRIVATE_EVAL_REC_11499_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11500(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11500_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11500_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11500_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11500_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11500_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11500_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11500_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11500_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11500_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11500_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11501
#define MACROLOP_PRIVATE_EVAL_REC_11500_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11501(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11501_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11501_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11501_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11501_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11501_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11501_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11501_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11501_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11501_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11501_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11502
#define MACROLOP_PRIVATE_EVAL_REC_11501_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11502(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11502_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11502_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11502_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11502_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11502_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11502_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11502_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11502_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11502_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11502_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11503
#define MACROLOP_PRIVATE_EVAL_REC_11502_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11503(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11503_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11503_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11503_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11503_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11503_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11503_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11503_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11503_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11503_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11503_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11504
#define MACROLOP_PRIVATE_EVAL_REC_11503_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11504(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11504_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11504_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11504_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11504_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11504_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11504_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11504_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11504_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11504_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11504_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11505
#define MACROLOP_PRIVATE_EVAL_REC_11504_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11505(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11505_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11505_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11505_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11505_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11505_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11505_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11505_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11505_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11505_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11505_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11506
#define MACROLOP_PRIVATE_EVAL_REC_11505_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11506(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11506_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11506_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11506_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11506_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11506_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11506_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11506_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11506_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11506_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11506_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11507
#define MACROLOP_PRIVATE_EVAL_REC_11506_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11507(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11507_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11507_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11507_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11507_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11507_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11507_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11507_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11507_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11507_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11507_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11508
#define MACROLOP_PRIVATE_EVAL_REC_11507_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11508(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11508_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11508_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11508_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11508_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11508_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11508_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11508_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11508_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11508_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11508_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11509
#define MACROLOP_PRIVATE_EVAL_REC_11508_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11509(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11509_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11509_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11509_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11509_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11509_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11509_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11509_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11509_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11509_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11509_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11510
#define MACROLOP_PRIVATE_EVAL_REC_11509_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11510(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11510_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11510_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11510_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11510_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11510_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11510_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11510_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11510_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11510_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11510_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11511
#define MACROLOP_PRIVATE_EVAL_REC_11510_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11511(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11511_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11511_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11511_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11511_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11511_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11511_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11511_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11511_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11511_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11511_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11512
#define MACROLOP_PRIVATE_EVAL_REC_11511_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11512(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11512_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11512_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11512_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11512_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11512_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11512_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11512_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11512_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11512_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11512_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11513
#define MACROLOP_PRIVATE_EVAL_REC_11512_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11513(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11513_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11513_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11513_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11513_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11513_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11513_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11513_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11513_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11513_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11513_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11514
#define MACROLOP_PRIVATE_EVAL_REC_11513_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11514(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11514_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11514_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11514_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11514_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11514_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11514_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11514_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11514_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11514_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11514_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11515
#define MACROLOP_PRIVATE_EVAL_REC_11514_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11515(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11515_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11515_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11515_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11515_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11515_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11515_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11515_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11515_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11515_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11515_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11516
#define MACROLOP_PRIVATE_EVAL_REC_11515_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11516(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11516_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11516_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11516_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11516_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11516_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11516_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11516_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11516_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11516_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11516_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11517
#define MACROLOP_PRIVATE_EVAL_REC_11516_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11517(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11517_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11517_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11517_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11517_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11517_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11517_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11517_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11517_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11517_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11517_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11518
#define MACROLOP_PRIVATE_EVAL_REC_11517_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11518(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11518_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11518_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11518_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11518_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11518_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11518_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11518_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11518_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11518_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11518_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11519
#define MACROLOP_PRIVATE_EVAL_REC_11518_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11519(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11519_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11519_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11519_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11519_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11519_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11519_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11519_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11519_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11519_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11519_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11520
#define MACROLOP_PRIVATE_EVAL_REC_11519_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11520(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11520_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11520_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11520_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11520_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11520_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11520_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11520_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11520_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11520_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11520_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11521
#define MACROLOP_PRIVATE_EVAL_REC_11520_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11521(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11521_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11521_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11521_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11521_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11521_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11521_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11521_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11521_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11521_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11521_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11522
#define MACROLOP_PRIVATE_EVAL_REC_11521_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11522(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11522_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11522_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11522_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11522_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11522_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11522_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11522_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11522_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11522_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11522_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11523
#define MACROLOP_PRIVATE_EVAL_REC_11522_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11523(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11523_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11523_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11523_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11523_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11523_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11523_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11523_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11523_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11523_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11523_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11524
#define MACROLOP_PRIVATE_EVAL_REC_11523_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11524(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11524_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11524_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11524_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11524_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11524_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11524_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11524_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11524_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11524_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11524_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11525
#define MACROLOP_PRIVATE_EVAL_REC_11524_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11525(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11525_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11525_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11525_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11525_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11525_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11525_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11525_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11525_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11525_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11525_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11526
#define MACROLOP_PRIVATE_EVAL_REC_11525_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11526(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11526_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11526_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11526_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11526_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11526_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11526_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11526_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11526_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11526_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11526_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11527
#define MACROLOP_PRIVATE_EVAL_REC_11526_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11527(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11527_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11527_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11527_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11527_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11527_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11527_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11527_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11527_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11527_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11527_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11528
#define MACROLOP_PRIVATE_EVAL_REC_11527_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11528(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11528_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11528_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11528_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11528_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11528_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11528_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11528_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11528_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11528_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11528_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11529
#define MACROLOP_PRIVATE_EVAL_REC_11528_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11529(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11529_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11529_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11529_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11529_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11529_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11529_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11529_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11529_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11529_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11529_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11530
#define MACROLOP_PRIVATE_EVAL_REC_11529_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11530(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11530_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11530_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11530_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11530_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11530_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11530_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11530_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11530_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11530_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11530_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11531
#define MACROLOP_PRIVATE_EVAL_REC_11530_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11531(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11531_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11531_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11531_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11531_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11531_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11531_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11531_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11531_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11531_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11531_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11532
#define MACROLOP_PRIVATE_EVAL_REC_11531_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11532(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11532_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11532_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11532_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11532_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11532_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11532_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11532_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11532_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11532_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11532_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11533
#define MACROLOP_PRIVATE_EVAL_REC_11532_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11533(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11533_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11533_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11533_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11533_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11533_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11533_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11533_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11533_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11533_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11533_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11534
#define MACROLOP_PRIVATE_EVAL_REC_11533_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11534(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11534_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11534_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11534_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11534_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11534_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11534_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11534_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11534_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11534_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11534_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11535
#define MACROLOP_PRIVATE_EVAL_REC_11534_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11535(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11535_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11535_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11535_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11535_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11535_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11535_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11535_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11535_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11535_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11535_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11536
#define MACROLOP_PRIVATE_EVAL_REC_11535_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11536(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11536_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11536_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11536_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11536_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11536_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11536_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11536_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11536_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11536_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11536_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11537
#define MACROLOP_PRIVATE_EVAL_REC_11536_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11537(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11537_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11537_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11537_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11537_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11537_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11537_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11537_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11537_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11537_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11537_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11538
#define MACROLOP_PRIVATE_EVAL_REC_11537_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11538(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11538_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11538_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11538_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11538_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11538_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11538_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11538_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11538_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11538_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11538_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11539
#define MACROLOP_PRIVATE_EVAL_REC_11538_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11539(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11539_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11539_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11539_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11539_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11539_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11539_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11539_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11539_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11539_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11539_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11540
#define MACROLOP_PRIVATE_EVAL_REC_11539_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11540(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11540_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11540_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11540_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11540_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11540_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11540_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11540_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11540_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11540_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11540_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11541
#define MACROLOP_PRIVATE_EVAL_REC_11540_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11541(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11541_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11541_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11541_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11541_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11541_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11541_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11541_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11541_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11541_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11541_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11542
#define MACROLOP_PRIVATE_EVAL_REC_11541_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11542(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11542_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11542_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11542_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11542_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11542_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11542_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11542_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11542_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11542_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11542_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11543
#define MACROLOP_PRIVATE_EVAL_REC_11542_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11543(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11543_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11543_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11543_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11543_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11543_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11543_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11543_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11543_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11543_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11543_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11544
#define MACROLOP_PRIVATE_EVAL_REC_11543_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11544(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11544_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11544_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11544_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11544_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11544_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11544_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11544_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11544_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11544_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11544_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11545
#define MACROLOP_PRIVATE_EVAL_REC_11544_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11545(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11545_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11545_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11545_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11545_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11545_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11545_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11545_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11545_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11545_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11545_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11546
#define MACROLOP_PRIVATE_EVAL_REC_11545_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11546(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11546_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11546_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11546_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11546_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11546_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11546_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11546_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11546_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11546_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11546_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11547
#define MACROLOP_PRIVATE_EVAL_REC_11546_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11547(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11547_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11547_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11547_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11547_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11547_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11547_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11547_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11547_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11547_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11547_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11548
#define MACROLOP_PRIVATE_EVAL_REC_11547_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11548(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11548_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11548_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11548_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11548_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11548_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11548_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11548_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11548_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11548_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11548_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11549
#define MACROLOP_PRIVATE_EVAL_REC_11548_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11549(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11549_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11549_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11549_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11549_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11549_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11549_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11549_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11549_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11549_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11549_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11550
#define MACROLOP_PRIVATE_EVAL_REC_11549_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11550(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11550_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11550_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11550_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11550_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11550_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11550_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11550_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11550_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11550_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11550_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11551
#define MACROLOP_PRIVATE_EVAL_REC_11550_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11551(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11551_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11551_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11551_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11551_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11551_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11551_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11551_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11551_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11551_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11551_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11552
#define MACROLOP_PRIVATE_EVAL_REC_11551_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11552(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11552_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11552_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11552_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11552_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11552_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11552_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11552_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11552_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11552_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11552_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11553
#define MACROLOP_PRIVATE_EVAL_REC_11552_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11553(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11553_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11553_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11553_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11553_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11553_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11553_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11553_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11553_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11553_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11553_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11554
#define MACROLOP_PRIVATE_EVAL_REC_11553_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11554(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11554_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11554_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11554_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11554_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11554_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11554_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11554_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11554_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11554_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11554_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11555
#define MACROLOP_PRIVATE_EVAL_REC_11554_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11555(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11555_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11555_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11555_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11555_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11555_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11555_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11555_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11555_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11555_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11555_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11556
#define MACROLOP_PRIVATE_EVAL_REC_11555_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11556(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11556_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11556_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11556_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11556_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11556_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11556_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11556_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11556_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11556_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11556_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11557
#define MACROLOP_PRIVATE_EVAL_REC_11556_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11557(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11557_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11557_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11557_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11557_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11557_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11557_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11557_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11557_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11557_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11557_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11558
#define MACROLOP_PRIVATE_EVAL_REC_11557_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11558(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11558_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11558_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11558_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11558_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11558_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11558_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11558_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11558_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11558_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11558_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11559
#define MACROLOP_PRIVATE_EVAL_REC_11558_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11559(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11559_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11559_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11559_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11559_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11559_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11559_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11559_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11559_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11559_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11559_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11560
#define MACROLOP_PRIVATE_EVAL_REC_11559_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11560(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11560_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11560_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11560_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11560_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11560_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11560_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11560_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11560_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11560_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11560_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11561
#define MACROLOP_PRIVATE_EVAL_REC_11560_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11561(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11561_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11561_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11561_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11561_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11561_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11561_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11561_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11561_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11561_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11561_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11562
#define MACROLOP_PRIVATE_EVAL_REC_11561_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11562(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11562_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11562_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11562_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11562_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11562_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11562_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11562_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11562_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11562_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11562_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11563
#define MACROLOP_PRIVATE_EVAL_REC_11562_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11563(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11563_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11563_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11563_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11563_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11563_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11563_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11563_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11563_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11563_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11563_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11564
#define MACROLOP_PRIVATE_EVAL_REC_11563_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11564(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11564_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11564_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11564_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11564_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11564_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11564_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11564_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11564_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11564_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11564_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11565
#define MACROLOP_PRIVATE_EVAL_REC_11564_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11565(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11565_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11565_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11565_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11565_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11565_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11565_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11565_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11565_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11565_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11565_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11566
#define MACROLOP_PRIVATE_EVAL_REC_11565_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11566(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11566_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11566_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11566_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11566_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11566_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11566_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11566_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11566_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11566_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11566_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11567
#define MACROLOP_PRIVATE_EVAL_REC_11566_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11567(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11567_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11567_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11567_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11567_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11567_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11567_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11567_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11567_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11567_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11567_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11568
#define MACROLOP_PRIVATE_EVAL_REC_11567_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11568(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11568_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11568_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11568_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11568_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11568_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11568_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11568_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11568_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11568_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11568_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11569
#define MACROLOP_PRIVATE_EVAL_REC_11568_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11569(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11569_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11569_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11569_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11569_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11569_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11569_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11569_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11569_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11569_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11569_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11570
#define MACROLOP_PRIVATE_EVAL_REC_11569_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11570(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11570_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11570_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11570_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11570_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11570_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11570_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11570_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11570_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11570_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11570_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11571
#define MACROLOP_PRIVATE_EVAL_REC_11570_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11571(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11571_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11571_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11571_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11571_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11571_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11571_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11571_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11571_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11571_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11571_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11572
#define MACROLOP_PRIVATE_EVAL_REC_11571_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11572(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11572_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11572_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11572_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11572_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11572_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11572_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11572_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11572_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11572_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11572_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11573
#define MACROLOP_PRIVATE_EVAL_REC_11572_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11573(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11573_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11573_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11573_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11573_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11573_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11573_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11573_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11573_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11573_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11573_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11574
#define MACROLOP_PRIVATE_EVAL_REC_11573_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11574(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11574_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11574_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11574_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11574_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11574_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11574_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11574_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11574_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11574_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11574_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11575
#define MACROLOP_PRIVATE_EVAL_REC_11574_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11575(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11575_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11575_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11575_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11575_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11575_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11575_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11575_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11575_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11575_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11575_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11576
#define MACROLOP_PRIVATE_EVAL_REC_11575_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11576(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11576_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11576_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11576_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11576_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11576_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11576_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11576_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11576_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11576_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11576_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11577
#define MACROLOP_PRIVATE_EVAL_REC_11576_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11577(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11577_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11577_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11577_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11577_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11577_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11577_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11577_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11577_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11577_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11577_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11578
#define MACROLOP_PRIVATE_EVAL_REC_11577_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11578(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11578_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11578_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11578_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11578_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11578_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11578_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11578_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11578_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11578_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11578_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11579
#define MACROLOP_PRIVATE_EVAL_REC_11578_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11579(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11579_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11579_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11579_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11579_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11579_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11579_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11579_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11579_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11579_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11579_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11580
#define MACROLOP_PRIVATE_EVAL_REC_11579_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11580(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11580_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11580_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11580_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11580_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11580_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11580_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11580_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11580_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11580_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11580_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11581
#define MACROLOP_PRIVATE_EVAL_REC_11580_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11581(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11581_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11581_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11581_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11581_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11581_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11581_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11581_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11581_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11581_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11581_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11582
#define MACROLOP_PRIVATE_EVAL_REC_11581_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11582(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11582_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11582_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11582_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11582_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11582_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11582_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11582_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11582_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11582_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11582_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11583
#define MACROLOP_PRIVATE_EVAL_REC_11582_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11583(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11583_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11583_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11583_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11583_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11583_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11583_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11583_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11583_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11583_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11583_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11584
#define MACROLOP_PRIVATE_EVAL_REC_11583_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11584(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11584_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11584_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11584_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11584_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11584_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11584_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11584_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11584_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11584_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11584_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11585
#define MACROLOP_PRIVATE_EVAL_REC_11584_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11585(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11585_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11585_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11585_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11585_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11585_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11585_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11585_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11585_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11585_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11585_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11586
#define MACROLOP_PRIVATE_EVAL_REC_11585_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11586(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11586_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11586_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11586_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11586_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11586_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11586_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11586_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11586_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11586_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11586_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11587
#define MACROLOP_PRIVATE_EVAL_REC_11586_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11587(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11587_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11587_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11587_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11587_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11587_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11587_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11587_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11587_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11587_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11587_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11588
#define MACROLOP_PRIVATE_EVAL_REC_11587_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11588(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11588_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11588_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11588_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11588_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11588_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11588_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11588_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11588_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11588_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11588_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11589
#define MACROLOP_PRIVATE_EVAL_REC_11588_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11589(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11589_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11589_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11589_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11589_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11589_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11589_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11589_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11589_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11589_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11589_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11590
#define MACROLOP_PRIVATE_EVAL_REC_11589_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11590(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11590_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11590_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11590_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11590_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11590_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11590_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11590_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11590_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11590_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11590_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11591
#define MACROLOP_PRIVATE_EVAL_REC_11590_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11591(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11591_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11591_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11591_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11591_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11591_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11591_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11591_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11591_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11591_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11591_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11592
#define MACROLOP_PRIVATE_EVAL_REC_11591_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11592(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11592_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11592_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11592_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11592_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11592_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11592_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11592_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11592_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11592_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11592_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11593
#define MACROLOP_PRIVATE_EVAL_REC_11592_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11593(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11593_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11593_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11593_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11593_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11593_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11593_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11593_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11593_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11593_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11593_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11594
#define MACROLOP_PRIVATE_EVAL_REC_11593_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11594(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11594_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11594_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11594_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11594_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11594_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11594_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11594_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11594_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11594_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11594_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11595
#define MACROLOP_PRIVATE_EVAL_REC_11594_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11595(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11595_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11595_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11595_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11595_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11595_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11595_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11595_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11595_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11595_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11595_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11596
#define MACROLOP_PRIVATE_EVAL_REC_11595_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11596(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11596_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11596_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11596_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11596_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11596_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11596_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11596_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11596_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11596_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11596_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11597
#define MACROLOP_PRIVATE_EVAL_REC_11596_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11597(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11597_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11597_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11597_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11597_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11597_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11597_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11597_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11597_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11597_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11597_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11598
#define MACROLOP_PRIVATE_EVAL_REC_11597_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11598(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11598_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11598_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11598_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11598_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11598_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11598_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11598_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11598_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11598_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11598_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11599
#define MACROLOP_PRIVATE_EVAL_REC_11598_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11599(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11599_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11599_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11599_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11599_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11599_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11599_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11599_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11599_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11599_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11599_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11600
#define MACROLOP_PRIVATE_EVAL_REC_11599_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11600(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11600_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11600_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11600_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11600_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11600_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11600_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11600_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11600_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11600_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11600_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11601
#define MACROLOP_PRIVATE_EVAL_REC_11600_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11601(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11601_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11601_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11601_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11601_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11601_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11601_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11601_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11601_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11601_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11601_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11602
#define MACROLOP_PRIVATE_EVAL_REC_11601_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11602(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11602_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11602_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11602_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11602_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11602_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11602_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11602_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11602_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11602_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11602_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11603
#define MACROLOP_PRIVATE_EVAL_REC_11602_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11603(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11603_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11603_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11603_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11603_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11603_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11603_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11603_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11603_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11603_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11603_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11604
#define MACROLOP_PRIVATE_EVAL_REC_11603_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11604(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11604_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11604_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11604_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11604_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11604_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11604_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11604_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11604_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11604_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11604_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11605
#define MACROLOP_PRIVATE_EVAL_REC_11604_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11605(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11605_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11605_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11605_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11605_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11605_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11605_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11605_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11605_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11605_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11605_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11606
#define MACROLOP_PRIVATE_EVAL_REC_11605_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11606(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11606_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11606_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11606_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11606_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11606_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11606_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11606_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11606_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11606_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11606_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11607
#define MACROLOP_PRIVATE_EVAL_REC_11606_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11607(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11607_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11607_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11607_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11607_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11607_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11607_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11607_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11607_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11607_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11607_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11608
#define MACROLOP_PRIVATE_EVAL_REC_11607_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11608(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11608_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11608_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11608_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11608_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11608_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11608_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11608_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11608_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11608_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11608_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11609
#define MACROLOP_PRIVATE_EVAL_REC_11608_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11609(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11609_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11609_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11609_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11609_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11609_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11609_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11609_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11609_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11609_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11609_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11610
#define MACROLOP_PRIVATE_EVAL_REC_11609_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11610(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11610_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11610_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11610_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11610_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11610_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11610_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11610_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11610_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11610_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11610_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11611
#define MACROLOP_PRIVATE_EVAL_REC_11610_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11611(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11611_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11611_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11611_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11611_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11611_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11611_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11611_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11611_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11611_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11611_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11612
#define MACROLOP_PRIVATE_EVAL_REC_11611_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11612(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11612_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11612_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11612_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11612_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11612_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11612_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11612_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11612_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11612_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11612_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11613
#define MACROLOP_PRIVATE_EVAL_REC_11612_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11613(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11613_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11613_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11613_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11613_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11613_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11613_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11613_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11613_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11613_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11613_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11614
#define MACROLOP_PRIVATE_EVAL_REC_11613_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11614(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11614_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11614_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11614_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11614_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11614_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11614_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11614_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11614_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11614_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11614_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11615
#define MACROLOP_PRIVATE_EVAL_REC_11614_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11615(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11615_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11615_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11615_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11615_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11615_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11615_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11615_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11615_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11615_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11615_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11616
#define MACROLOP_PRIVATE_EVAL_REC_11615_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11616(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11616_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11616_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11616_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11616_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11616_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11616_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11616_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11616_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11616_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11616_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11617
#define MACROLOP_PRIVATE_EVAL_REC_11616_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11617(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11617_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11617_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11617_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11617_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11617_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11617_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11617_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11617_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11617_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11617_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11618
#define MACROLOP_PRIVATE_EVAL_REC_11617_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11618(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11618_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11618_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11618_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11618_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11618_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11618_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11618_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11618_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11618_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11618_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11619
#define MACROLOP_PRIVATE_EVAL_REC_11618_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11619(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11619_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11619_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11619_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11619_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11619_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11619_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11619_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11619_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11619_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11619_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11620
#define MACROLOP_PRIVATE_EVAL_REC_11619_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11620(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11620_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11620_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11620_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11620_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11620_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11620_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11620_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11620_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11620_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11620_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11621
#define MACROLOP_PRIVATE_EVAL_REC_11620_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11621(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11621_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11621_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11621_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11621_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11621_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11621_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11621_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11621_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11621_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11621_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11622
#define MACROLOP_PRIVATE_EVAL_REC_11621_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11622(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11622_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11622_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11622_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11622_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11622_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11622_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11622_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11622_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11622_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11622_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11623
#define MACROLOP_PRIVATE_EVAL_REC_11622_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11623(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11623_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11623_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11623_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11623_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11623_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11623_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11623_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11623_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11623_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11623_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11624
#define MACROLOP_PRIVATE_EVAL_REC_11623_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11624(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11624_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11624_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11624_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11624_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11624_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11624_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11624_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11624_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11624_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11624_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11625
#define MACROLOP_PRIVATE_EVAL_REC_11624_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11625(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11625_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11625_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11625_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11625_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11625_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11625_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11625_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11625_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11625_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11625_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11626
#define MACROLOP_PRIVATE_EVAL_REC_11625_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11626(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11626_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11626_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11626_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11626_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11626_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11626_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11626_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11626_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11626_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11626_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11627
#define MACROLOP_PRIVATE_EVAL_REC_11626_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11627(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11627_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11627_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11627_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11627_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11627_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11627_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11627_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11627_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11627_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11627_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11628
#define MACROLOP_PRIVATE_EVAL_REC_11627_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11628(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11628_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11628_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11628_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11628_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11628_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11628_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11628_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11628_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11628_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11628_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11629
#define MACROLOP_PRIVATE_EVAL_REC_11628_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11629(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11629_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11629_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11629_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11629_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11629_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11629_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11629_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11629_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11629_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11629_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11630
#define MACROLOP_PRIVATE_EVAL_REC_11629_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11630(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11630_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11630_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11630_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11630_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11630_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11630_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11630_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11630_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11630_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11630_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11631
#define MACROLOP_PRIVATE_EVAL_REC_11630_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11631(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11631_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11631_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11631_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11631_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11631_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11631_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11631_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11631_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11631_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11631_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11632
#define MACROLOP_PRIVATE_EVAL_REC_11631_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11632(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11632_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11632_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11632_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11632_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11632_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11632_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11632_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11632_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11632_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11632_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11633
#define MACROLOP_PRIVATE_EVAL_REC_11632_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11633(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11633_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11633_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11633_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11633_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11633_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11633_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11633_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11633_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11633_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11633_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11634
#define MACROLOP_PRIVATE_EVAL_REC_11633_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11634(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11634_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11634_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11634_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11634_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11634_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11634_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11634_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11634_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11634_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11634_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11635
#define MACROLOP_PRIVATE_EVAL_REC_11634_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11635(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11635_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11635_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11635_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11635_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11635_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11635_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11635_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11635_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11635_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11635_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11636
#define MACROLOP_PRIVATE_EVAL_REC_11635_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11636(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11636_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11636_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11636_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11636_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11636_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11636_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11636_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11636_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11636_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11636_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11637
#define MACROLOP_PRIVATE_EVAL_REC_11636_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11637(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11637_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11637_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11637_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11637_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11637_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11637_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11637_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11637_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11637_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11637_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11638
#define MACROLOP_PRIVATE_EVAL_REC_11637_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11638(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11638_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11638_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11638_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11638_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11638_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11638_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11638_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11638_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11638_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11638_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11639
#define MACROLOP_PRIVATE_EVAL_REC_11638_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11639(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11639_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11639_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11639_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11639_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11639_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11639_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11639_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11639_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11639_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11639_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11640
#define MACROLOP_PRIVATE_EVAL_REC_11639_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11640(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11640_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11640_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11640_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11640_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11640_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11640_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11640_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11640_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11640_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11640_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11641
#define MACROLOP_PRIVATE_EVAL_REC_11640_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11641(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11641_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11641_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11641_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11641_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11641_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11641_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11641_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11641_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11641_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11641_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11642
#define MACROLOP_PRIVATE_EVAL_REC_11641_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11642(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11642_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11642_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11642_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11642_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11642_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11642_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11642_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11642_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11642_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11642_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11643
#define MACROLOP_PRIVATE_EVAL_REC_11642_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11643(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11643_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11643_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11643_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11643_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11643_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11643_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11643_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11643_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11643_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11643_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11644
#define MACROLOP_PRIVATE_EVAL_REC_11643_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11644(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11644_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11644_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11644_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11644_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11644_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11644_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11644_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11644_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11644_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11644_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11645
#define MACROLOP_PRIVATE_EVAL_REC_11644_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11645(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11645_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11645_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11645_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11645_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11645_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11645_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11645_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11645_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11645_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11645_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11646
#define MACROLOP_PRIVATE_EVAL_REC_11645_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11646(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11646_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11646_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11646_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11646_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11646_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11646_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11646_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11646_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11646_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11646_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11647
#define MACROLOP_PRIVATE_EVAL_REC_11646_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11647(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11647_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11647_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11647_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11647_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11647_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11647_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11647_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11647_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11647_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11647_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11648
#define MACROLOP_PRIVATE_EVAL_REC_11647_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11648(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11648_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11648_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11648_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11648_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11648_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11648_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11648_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11648_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11648_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11648_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11649
#define MACROLOP_PRIVATE_EVAL_REC_11648_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11649(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11649_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11649_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11649_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11649_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11649_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11649_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11649_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11649_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11649_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11649_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11650
#define MACROLOP_PRIVATE_EVAL_REC_11649_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11650(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11650_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11650_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11650_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11650_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11650_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11650_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11650_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11650_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11650_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11650_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11651
#define MACROLOP_PRIVATE_EVAL_REC_11650_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11651(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11651_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11651_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11651_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11651_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11651_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11651_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11651_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11651_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11651_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11651_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11652
#define MACROLOP_PRIVATE_EVAL_REC_11651_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11652(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11652_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11652_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11652_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11652_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11652_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11652_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11652_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11652_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11652_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11652_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11653
#define MACROLOP_PRIVATE_EVAL_REC_11652_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11653(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11653_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11653_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11653_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11653_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11653_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11653_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11653_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11653_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11653_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11653_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11654
#define MACROLOP_PRIVATE_EVAL_REC_11653_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11654(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11654_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11654_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11654_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11654_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11654_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11654_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11654_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11654_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11654_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11654_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11655
#define MACROLOP_PRIVATE_EVAL_REC_11654_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11655(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11655_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11655_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11655_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11655_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11655_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11655_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11655_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11655_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11655_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11655_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11656
#define MACROLOP_PRIVATE_EVAL_REC_11655_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11656(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11656_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11656_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11656_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11656_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11656_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11656_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11656_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11656_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11656_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11656_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11657
#define MACROLOP_PRIVATE_EVAL_REC_11656_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11657(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11657_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11657_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11657_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11657_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11657_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11657_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11657_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11657_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11657_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11657_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11658
#define MACROLOP_PRIVATE_EVAL_REC_11657_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11658(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11658_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11658_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11658_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11658_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11658_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11658_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11658_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11658_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11658_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11658_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11659
#define MACROLOP_PRIVATE_EVAL_REC_11658_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11659(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11659_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11659_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11659_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11659_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11659_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11659_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11659_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11659_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11659_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11659_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11660
#define MACROLOP_PRIVATE_EVAL_REC_11659_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11660(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11660_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11660_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11660_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11660_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11660_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11660_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11660_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11660_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11660_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11660_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11661
#define MACROLOP_PRIVATE_EVAL_REC_11660_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11661(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11661_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11661_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11661_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11661_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11661_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11661_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11661_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11661_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11661_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11661_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11662
#define MACROLOP_PRIVATE_EVAL_REC_11661_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11662(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11662_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11662_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11662_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11662_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11662_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11662_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11662_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11662_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11662_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11662_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11663
#define MACROLOP_PRIVATE_EVAL_REC_11662_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11663(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11663_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11663_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11663_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11663_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11663_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11663_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11663_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11663_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11663_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11663_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11664
#define MACROLOP_PRIVATE_EVAL_REC_11663_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11664(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11664_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11664_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11664_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11664_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11664_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11664_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11664_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11664_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11664_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11664_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11665
#define MACROLOP_PRIVATE_EVAL_REC_11664_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11665(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11665_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11665_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11665_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11665_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11665_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11665_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11665_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11665_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11665_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11665_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11666
#define MACROLOP_PRIVATE_EVAL_REC_11665_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11666(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11666_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11666_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11666_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11666_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11666_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11666_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11666_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11666_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11666_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11666_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11667
#define MACROLOP_PRIVATE_EVAL_REC_11666_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11667(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11667_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11667_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11667_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11667_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11667_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11667_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11667_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11667_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11667_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11667_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11668
#define MACROLOP_PRIVATE_EVAL_REC_11667_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11668(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11668_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11668_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11668_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11668_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11668_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11668_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11668_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11668_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11668_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11668_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11669
#define MACROLOP_PRIVATE_EVAL_REC_11668_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11669(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11669_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11669_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11669_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11669_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11669_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11669_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11669_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11669_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11669_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11669_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11670
#define MACROLOP_PRIVATE_EVAL_REC_11669_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11670(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11670_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11670_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11670_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11670_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11670_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11670_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11670_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11670_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11670_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11670_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11671
#define MACROLOP_PRIVATE_EVAL_REC_11670_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11671(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11671_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11671_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11671_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11671_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11671_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11671_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11671_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11671_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11671_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11671_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11672
#define MACROLOP_PRIVATE_EVAL_REC_11671_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11672(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11672_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11672_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11672_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11672_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11672_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11672_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11672_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11672_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11672_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11672_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11673
#define MACROLOP_PRIVATE_EVAL_REC_11672_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11673(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11673_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11673_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11673_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11673_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11673_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11673_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11673_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11673_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11673_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11673_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11674
#define MACROLOP_PRIVATE_EVAL_REC_11673_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11674(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11674_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11674_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11674_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11674_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11674_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11674_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11674_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11674_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11674_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11674_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11675
#define MACROLOP_PRIVATE_EVAL_REC_11674_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11675(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11675_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11675_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11675_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11675_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11675_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11675_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11675_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11675_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11675_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11675_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11676
#define MACROLOP_PRIVATE_EVAL_REC_11675_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11676(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11676_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11676_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11676_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11676_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11676_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11676_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11676_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11676_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11676_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11676_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11677
#define MACROLOP_PRIVATE_EVAL_REC_11676_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11677(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11677_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11677_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11677_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11677_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11677_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11677_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11677_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11677_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11677_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11677_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11678
#define MACROLOP_PRIVATE_EVAL_REC_11677_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11678(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11678_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11678_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11678_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11678_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11678_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11678_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11678_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11678_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11678_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11678_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11679
#define MACROLOP_PRIVATE_EVAL_REC_11678_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11679(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11679_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11679_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11679_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11679_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11679_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11679_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11679_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11679_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11679_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11679_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11680
#define MACROLOP_PRIVATE_EVAL_REC_11679_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11680(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11680_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11680_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11680_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11680_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11680_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11680_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11680_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11680_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11680_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11680_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11681
#define MACROLOP_PRIVATE_EVAL_REC_11680_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11681(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11681_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11681_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11681_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11681_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11681_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11681_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11681_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11681_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11681_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11681_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11682
#define MACROLOP_PRIVATE_EVAL_REC_11681_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11682(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11682_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11682_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11682_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11682_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11682_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11682_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11682_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11682_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11682_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11682_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11683
#define MACROLOP_PRIVATE_EVAL_REC_11682_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11683(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11683_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11683_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11683_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11683_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11683_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11683_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11683_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11683_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11683_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11683_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11684
#define MACROLOP_PRIVATE_EVAL_REC_11683_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11684(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11684_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11684_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11684_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11684_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11684_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11684_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11684_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11684_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11684_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11684_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11685
#define MACROLOP_PRIVATE_EVAL_REC_11684_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11685(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11685_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11685_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11685_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11685_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11685_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11685_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11685_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11685_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11685_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11685_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11686
#define MACROLOP_PRIVATE_EVAL_REC_11685_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11686(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11686_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11686_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11686_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11686_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11686_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11686_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11686_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11686_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11686_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11686_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11687
#define MACROLOP_PRIVATE_EVAL_REC_11686_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11687(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11687_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11687_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11687_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11687_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11687_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11687_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11687_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11687_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11687_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11687_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11688
#define MACROLOP_PRIVATE_EVAL_REC_11687_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11688(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11688_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11688_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11688_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11688_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11688_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11688_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11688_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11688_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11688_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11688_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11689
#define MACROLOP_PRIVATE_EVAL_REC_11688_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11689(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11689_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11689_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11689_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11689_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11689_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11689_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11689_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11689_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11689_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11689_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11690
#define MACROLOP_PRIVATE_EVAL_REC_11689_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11690(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11690_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11690_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11690_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11690_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11690_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11690_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11690_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11690_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11690_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11690_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11691
#define MACROLOP_PRIVATE_EVAL_REC_11690_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11691(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11691_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11691_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11691_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11691_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11691_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11691_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11691_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11691_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11691_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11691_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11692
#define MACROLOP_PRIVATE_EVAL_REC_11691_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11692(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11692_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11692_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11692_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11692_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11692_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11692_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11692_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11692_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11692_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11692_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11693
#define MACROLOP_PRIVATE_EVAL_REC_11692_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11693(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11693_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11693_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11693_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11693_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11693_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11693_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11693_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11693_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11693_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11693_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11694
#define MACROLOP_PRIVATE_EVAL_REC_11693_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11694(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11694_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11694_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11694_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11694_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11694_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11694_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11694_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11694_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11694_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11694_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11695
#define MACROLOP_PRIVATE_EVAL_REC_11694_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11695(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11695_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11695_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11695_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11695_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11695_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11695_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11695_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11695_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11695_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11695_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11696
#define MACROLOP_PRIVATE_EVAL_REC_11695_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11696(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11696_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11696_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11696_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11696_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11696_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11696_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11696_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11696_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11696_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11696_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11697
#define MACROLOP_PRIVATE_EVAL_REC_11696_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11697(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11697_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11697_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11697_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11697_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11697_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11697_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11697_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11697_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11697_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11697_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11698
#define MACROLOP_PRIVATE_EVAL_REC_11697_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11698(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11698_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11698_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11698_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11698_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11698_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11698_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11698_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11698_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11698_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11698_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11699
#define MACROLOP_PRIVATE_EVAL_REC_11698_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11699(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11699_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11699_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11699_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11699_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11699_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11699_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11699_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11699_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11699_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11699_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11700
#define MACROLOP_PRIVATE_EVAL_REC_11699_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11700(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11700_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11700_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11700_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11700_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11700_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11700_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11700_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11700_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11700_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11700_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11701
#define MACROLOP_PRIVATE_EVAL_REC_11700_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11701(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11701_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11701_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11701_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11701_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11701_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11701_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11701_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11701_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11701_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11701_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11702
#define MACROLOP_PRIVATE_EVAL_REC_11701_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11702(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11702_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11702_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11702_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11702_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11702_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11702_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11702_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11702_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11702_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11702_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11703
#define MACROLOP_PRIVATE_EVAL_REC_11702_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11703(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11703_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11703_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11703_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11703_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11703_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11703_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11703_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11703_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11703_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11703_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11704
#define MACROLOP_PRIVATE_EVAL_REC_11703_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11704(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11704_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11704_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11704_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11704_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11704_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11704_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11704_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11704_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11704_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11704_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11705
#define MACROLOP_PRIVATE_EVAL_REC_11704_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11705(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11705_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11705_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11705_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11705_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11705_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11705_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11705_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11705_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11705_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11705_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11706
#define MACROLOP_PRIVATE_EVAL_REC_11705_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11706(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11706_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11706_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11706_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11706_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11706_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11706_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11706_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11706_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11706_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11706_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11707
#define MACROLOP_PRIVATE_EVAL_REC_11706_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11707(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11707_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11707_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11707_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11707_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11707_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11707_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11707_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11707_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11707_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11707_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11708
#define MACROLOP_PRIVATE_EVAL_REC_11707_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11708(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11708_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11708_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11708_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11708_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11708_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11708_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11708_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11708_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11708_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11708_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11709
#define MACROLOP_PRIVATE_EVAL_REC_11708_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11709(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11709_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11709_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11709_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11709_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11709_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11709_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11709_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11709_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11709_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11709_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11710
#define MACROLOP_PRIVATE_EVAL_REC_11709_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11710(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11710_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11710_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11710_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11710_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11710_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11710_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11710_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11710_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11710_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11710_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11711
#define MACROLOP_PRIVATE_EVAL_REC_11710_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11711(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11711_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11711_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11711_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11711_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11711_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11711_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11711_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11711_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11711_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11711_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11712
#define MACROLOP_PRIVATE_EVAL_REC_11711_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11712(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11712_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11712_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11712_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11712_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11712_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11712_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11712_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11712_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11712_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11712_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11713
#define MACROLOP_PRIVATE_EVAL_REC_11712_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11713(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11713_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11713_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11713_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11713_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11713_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11713_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11713_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11713_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11713_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11713_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11714
#define MACROLOP_PRIVATE_EVAL_REC_11713_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11714(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11714_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11714_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11714_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11714_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11714_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11714_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11714_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11714_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11714_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11714_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11715
#define MACROLOP_PRIVATE_EVAL_REC_11714_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11715(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11715_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11715_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11715_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11715_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11715_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11715_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11715_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11715_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11715_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11715_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11716
#define MACROLOP_PRIVATE_EVAL_REC_11715_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11716(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11716_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11716_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11716_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11716_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11716_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11716_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11716_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11716_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11716_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11716_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11717
#define MACROLOP_PRIVATE_EVAL_REC_11716_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11717(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11717_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11717_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11717_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11717_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11717_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11717_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11717_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11717_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11717_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11717_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11718
#define MACROLOP_PRIVATE_EVAL_REC_11717_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11718(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11718_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11718_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11718_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11718_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11718_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11718_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11718_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11718_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11718_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11718_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11719
#define MACROLOP_PRIVATE_EVAL_REC_11718_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11719(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11719_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11719_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11719_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11719_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11719_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11719_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11719_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11719_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11719_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11719_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11720
#define MACROLOP_PRIVATE_EVAL_REC_11719_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11720(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11720_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11720_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11720_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11720_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11720_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11720_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11720_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11720_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11720_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11720_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11721
#define MACROLOP_PRIVATE_EVAL_REC_11720_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11721(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11721_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11721_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11721_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11721_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11721_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11721_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11721_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11721_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11721_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11721_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11722
#define MACROLOP_PRIVATE_EVAL_REC_11721_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11722(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11722_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11722_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11722_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11722_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11722_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11722_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11722_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11722_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11722_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11722_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11723
#define MACROLOP_PRIVATE_EVAL_REC_11722_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11723(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11723_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11723_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11723_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11723_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11723_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11723_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11723_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11723_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11723_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11723_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11724
#define MACROLOP_PRIVATE_EVAL_REC_11723_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11724(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11724_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11724_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11724_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11724_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11724_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11724_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11724_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11724_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11724_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11724_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11725
#define MACROLOP_PRIVATE_EVAL_REC_11724_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11725(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11725_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11725_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11725_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11725_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11725_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11725_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11725_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11725_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11725_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11725_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11726
#define MACROLOP_PRIVATE_EVAL_REC_11725_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11726(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11726_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11726_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11726_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11726_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11726_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11726_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11726_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11726_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11726_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11726_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11727
#define MACROLOP_PRIVATE_EVAL_REC_11726_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11727(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11727_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11727_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11727_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11727_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11727_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11727_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11727_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11727_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11727_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11727_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11728
#define MACROLOP_PRIVATE_EVAL_REC_11727_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11728(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11728_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11728_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11728_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11728_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11728_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11728_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11728_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11728_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11728_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11728_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11729
#define MACROLOP_PRIVATE_EVAL_REC_11728_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11729(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11729_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11729_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11729_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11729_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11729_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11729_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11729_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11729_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11729_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11729_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11730
#define MACROLOP_PRIVATE_EVAL_REC_11729_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11730(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11730_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11730_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11730_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11730_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11730_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11730_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11730_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11730_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11730_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11730_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11731
#define MACROLOP_PRIVATE_EVAL_REC_11730_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11731(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11731_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11731_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11731_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11731_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11731_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11731_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11731_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11731_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11731_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11731_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11732
#define MACROLOP_PRIVATE_EVAL_REC_11731_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11732(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11732_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11732_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11732_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11732_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11732_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11732_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11732_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11732_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11732_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11732_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11733
#define MACROLOP_PRIVATE_EVAL_REC_11732_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11733(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11733_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11733_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11733_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11733_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11733_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11733_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11733_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11733_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11733_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11733_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11734
#define MACROLOP_PRIVATE_EVAL_REC_11733_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11734(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11734_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11734_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11734_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11734_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11734_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11734_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11734_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11734_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11734_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11734_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11735
#define MACROLOP_PRIVATE_EVAL_REC_11734_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11735(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11735_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11735_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11735_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11735_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11735_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11735_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11735_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11735_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11735_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11735_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11736
#define MACROLOP_PRIVATE_EVAL_REC_11735_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11736(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11736_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11736_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11736_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11736_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11736_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11736_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11736_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11736_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11736_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11736_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11737
#define MACROLOP_PRIVATE_EVAL_REC_11736_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11737(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11737_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11737_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11737_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11737_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11737_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11737_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11737_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11737_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11737_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11737_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11738
#define MACROLOP_PRIVATE_EVAL_REC_11737_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11738(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11738_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11738_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11738_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11738_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11738_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11738_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11738_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11738_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11738_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11738_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11739
#define MACROLOP_PRIVATE_EVAL_REC_11738_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11739(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11739_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11739_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11739_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11739_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11739_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11739_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11739_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11739_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11739_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11739_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11740
#define MACROLOP_PRIVATE_EVAL_REC_11739_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11740(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11740_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11740_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11740_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11740_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11740_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11740_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11740_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11740_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11740_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11740_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11741
#define MACROLOP_PRIVATE_EVAL_REC_11740_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11741(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11741_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11741_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11741_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11741_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11741_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11741_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11741_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11741_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11741_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11741_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11742
#define MACROLOP_PRIVATE_EVAL_REC_11741_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11742(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11742_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11742_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11742_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11742_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11742_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11742_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11742_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11742_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11742_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11742_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11743
#define MACROLOP_PRIVATE_EVAL_REC_11742_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11743(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11743_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11743_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11743_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11743_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11743_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11743_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11743_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11743_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11743_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11743_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11744
#define MACROLOP_PRIVATE_EVAL_REC_11743_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11744(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11744_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11744_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11744_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11744_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11744_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11744_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11744_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11744_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11744_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11744_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11745
#define MACROLOP_PRIVATE_EVAL_REC_11744_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11745(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11745_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11745_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11745_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11745_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11745_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11745_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11745_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11745_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11745_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11745_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11746
#define MACROLOP_PRIVATE_EVAL_REC_11745_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11746(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11746_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11746_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11746_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11746_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11746_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11746_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11746_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11746_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11746_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11746_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11747
#define MACROLOP_PRIVATE_EVAL_REC_11746_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11747(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11747_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11747_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11747_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11747_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11747_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11747_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11747_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11747_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11747_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11747_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11748
#define MACROLOP_PRIVATE_EVAL_REC_11747_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11748(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11748_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11748_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11748_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11748_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11748_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11748_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11748_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11748_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11748_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11748_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11749
#define MACROLOP_PRIVATE_EVAL_REC_11748_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11749(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11749_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11749_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11749_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11749_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11749_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11749_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11749_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11749_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11749_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11749_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11750
#define MACROLOP_PRIVATE_EVAL_REC_11749_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11750(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11750_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11750_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11750_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11750_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11750_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11750_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11750_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11750_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11750_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11750_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11751
#define MACROLOP_PRIVATE_EVAL_REC_11750_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11751(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11751_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11751_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11751_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11751_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11751_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11751_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11751_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11751_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11751_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11751_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11752
#define MACROLOP_PRIVATE_EVAL_REC_11751_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11752(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11752_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11752_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11752_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11752_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11752_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11752_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11752_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11752_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11752_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11752_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11753
#define MACROLOP_PRIVATE_EVAL_REC_11752_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11753(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11753_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11753_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11753_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11753_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11753_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11753_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11753_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11753_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11753_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11753_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11754
#define MACROLOP_PRIVATE_EVAL_REC_11753_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11754(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11754_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11754_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11754_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11754_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11754_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11754_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11754_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11754_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11754_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11754_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11755
#define MACROLOP_PRIVATE_EVAL_REC_11754_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11755(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11755_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11755_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11755_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11755_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11755_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11755_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11755_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11755_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11755_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11755_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11756
#define MACROLOP_PRIVATE_EVAL_REC_11755_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11756(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11756_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11756_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11756_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11756_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11756_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11756_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11756_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11756_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11756_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11756_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11757
#define MACROLOP_PRIVATE_EVAL_REC_11756_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11757(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11757_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11757_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11757_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11757_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11757_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11757_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11757_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11757_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11757_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11757_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11758
#define MACROLOP_PRIVATE_EVAL_REC_11757_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11758(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11758_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11758_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11758_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11758_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11758_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11758_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11758_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11758_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11758_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11758_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11759
#define MACROLOP_PRIVATE_EVAL_REC_11758_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11759(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11759_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11759_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11759_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11759_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11759_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11759_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11759_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11759_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11759_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11759_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11760
#define MACROLOP_PRIVATE_EVAL_REC_11759_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11760(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11760_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11760_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11760_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11760_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11760_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11760_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11760_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11760_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11760_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11760_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11761
#define MACROLOP_PRIVATE_EVAL_REC_11760_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11761(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11761_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11761_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11761_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11761_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11761_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11761_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11761_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11761_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11761_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11761_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11762
#define MACROLOP_PRIVATE_EVAL_REC_11761_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11762(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11762_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11762_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11762_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11762_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11762_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11762_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11762_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11762_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11762_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11762_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11763
#define MACROLOP_PRIVATE_EVAL_REC_11762_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11763(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11763_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11763_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11763_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11763_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11763_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11763_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11763_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11763_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11763_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11763_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11764
#define MACROLOP_PRIVATE_EVAL_REC_11763_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11764(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11764_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11764_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11764_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11764_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11764_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11764_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11764_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11764_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11764_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11764_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11765
#define MACROLOP_PRIVATE_EVAL_REC_11764_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11765(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11765_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11765_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11765_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11765_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11765_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11765_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11765_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11765_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11765_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11765_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11766
#define MACROLOP_PRIVATE_EVAL_REC_11765_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11766(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11766_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11766_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11766_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11766_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11766_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11766_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11766_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11766_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11766_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11766_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11767
#define MACROLOP_PRIVATE_EVAL_REC_11766_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11767(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11767_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11767_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11767_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11767_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11767_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11767_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11767_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11767_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11767_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11767_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11768
#define MACROLOP_PRIVATE_EVAL_REC_11767_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11768(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11768_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11768_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11768_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11768_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11768_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11768_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11768_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11768_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11768_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11768_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11769
#define MACROLOP_PRIVATE_EVAL_REC_11768_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11769(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11769_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11769_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11769_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11769_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11769_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11769_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11769_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11769_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11769_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11769_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11770
#define MACROLOP_PRIVATE_EVAL_REC_11769_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11770(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11770_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11770_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11770_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11770_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11770_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11770_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11770_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11770_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11770_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11770_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11771
#define MACROLOP_PRIVATE_EVAL_REC_11770_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11771(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11771_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11771_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11771_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11771_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11771_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11771_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11771_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11771_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11771_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11771_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11772
#define MACROLOP_PRIVATE_EVAL_REC_11771_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11772(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11772_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11772_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11772_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11772_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11772_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11772_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11772_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11772_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11772_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11772_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11773
#define MACROLOP_PRIVATE_EVAL_REC_11772_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11773(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11773_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11773_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11773_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11773_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11773_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11773_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11773_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11773_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11773_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11773_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11774
#define MACROLOP_PRIVATE_EVAL_REC_11773_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11774(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11774_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11774_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11774_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11774_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11774_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11774_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11774_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11774_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11774_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11774_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11775
#define MACROLOP_PRIVATE_EVAL_REC_11774_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11775(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11775_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11775_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11775_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11775_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11775_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11775_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11775_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11775_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11775_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11775_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11776
#define MACROLOP_PRIVATE_EVAL_REC_11775_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11776(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11776_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11776_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11776_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11776_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11776_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11776_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11776_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11776_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11776_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11776_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11777
#define MACROLOP_PRIVATE_EVAL_REC_11776_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11777(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11777_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11777_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11777_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11777_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11777_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11777_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11777_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11777_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11777_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11777_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11778
#define MACROLOP_PRIVATE_EVAL_REC_11777_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11778(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11778_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11778_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11778_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11778_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11778_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11778_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11778_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11778_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11778_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11778_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11779
#define MACROLOP_PRIVATE_EVAL_REC_11778_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11779(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11779_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11779_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11779_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11779_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11779_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11779_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11779_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11779_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11779_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11779_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11780
#define MACROLOP_PRIVATE_EVAL_REC_11779_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11780(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11780_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11780_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11780_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11780_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11780_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11780_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11780_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11780_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11780_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11780_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11781
#define MACROLOP_PRIVATE_EVAL_REC_11780_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11781(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11781_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11781_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11781_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11781_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11781_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11781_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11781_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11781_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11781_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11781_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11782
#define MACROLOP_PRIVATE_EVAL_REC_11781_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11782(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11782_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11782_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11782_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11782_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11782_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11782_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11782_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11782_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11782_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11782_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11783
#define MACROLOP_PRIVATE_EVAL_REC_11782_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11783(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11783_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11783_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11783_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11783_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11783_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11783_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11783_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11783_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11783_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11783_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11784
#define MACROLOP_PRIVATE_EVAL_REC_11783_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11784(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11784_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11784_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11784_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11784_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11784_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11784_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11784_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11784_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11784_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11784_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11785
#define MACROLOP_PRIVATE_EVAL_REC_11784_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11785(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11785_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11785_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11785_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11785_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11785_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11785_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11785_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11785_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11785_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11785_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11786
#define MACROLOP_PRIVATE_EVAL_REC_11785_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11786(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11786_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11786_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11786_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11786_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11786_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11786_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11786_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11786_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11786_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11786_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11787
#define MACROLOP_PRIVATE_EVAL_REC_11786_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11787(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11787_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11787_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11787_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11787_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11787_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11787_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11787_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11787_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11787_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11787_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11788
#define MACROLOP_PRIVATE_EVAL_REC_11787_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11788(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11788_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11788_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11788_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11788_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11788_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11788_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11788_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11788_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11788_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11788_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11789
#define MACROLOP_PRIVATE_EVAL_REC_11788_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11789(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11789_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11789_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11789_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11789_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11789_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11789_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11789_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11789_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11789_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11789_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11790
#define MACROLOP_PRIVATE_EVAL_REC_11789_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11790(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11790_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11790_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11790_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11790_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11790_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11790_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11790_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11790_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11790_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11790_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11791
#define MACROLOP_PRIVATE_EVAL_REC_11790_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11791(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11791_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11791_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11791_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11791_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11791_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11791_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11791_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11791_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11791_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11791_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11792
#define MACROLOP_PRIVATE_EVAL_REC_11791_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11792(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11792_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11792_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11792_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11792_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11792_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11792_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11792_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11792_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11792_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11792_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11793
#define MACROLOP_PRIVATE_EVAL_REC_11792_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11793(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11793_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11793_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11793_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11793_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11793_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11793_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11793_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11793_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11793_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11793_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11794
#define MACROLOP_PRIVATE_EVAL_REC_11793_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11794(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11794_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11794_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11794_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11794_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11794_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11794_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11794_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11794_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11794_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11794_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11795
#define MACROLOP_PRIVATE_EVAL_REC_11794_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11795(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11795_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11795_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11795_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11795_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11795_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11795_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11795_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11795_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11795_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11795_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11796
#define MACROLOP_PRIVATE_EVAL_REC_11795_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11796(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11796_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11796_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11796_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11796_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11796_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11796_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11796_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11796_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11796_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11796_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11797
#define MACROLOP_PRIVATE_EVAL_REC_11796_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11797(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11797_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11797_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11797_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11797_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11797_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11797_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11797_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11797_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11797_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11797_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11798
#define MACROLOP_PRIVATE_EVAL_REC_11797_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11798(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11798_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11798_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11798_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11798_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11798_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11798_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11798_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11798_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11798_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11798_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11799
#define MACROLOP_PRIVATE_EVAL_REC_11798_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11799(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11799_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11799_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11799_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11799_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11799_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11799_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11799_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11799_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11799_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11799_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11800
#define MACROLOP_PRIVATE_EVAL_REC_11799_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11800(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11800_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11800_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11800_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11800_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11800_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11800_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11800_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11800_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11800_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11800_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11801
#define MACROLOP_PRIVATE_EVAL_REC_11800_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11801(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11801_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11801_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11801_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11801_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11801_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11801_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11801_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11801_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11801_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11801_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11802
#define MACROLOP_PRIVATE_EVAL_REC_11801_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11802(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11802_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11802_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11802_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11802_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11802_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11802_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11802_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11802_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11802_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11802_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11803
#define MACROLOP_PRIVATE_EVAL_REC_11802_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11803(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11803_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11803_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11803_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11803_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11803_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11803_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11803_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11803_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11803_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11803_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11804
#define MACROLOP_PRIVATE_EVAL_REC_11803_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11804(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11804_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11804_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11804_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11804_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11804_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11804_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11804_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11804_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11804_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11804_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11805
#define MACROLOP_PRIVATE_EVAL_REC_11804_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11805(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11805_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11805_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11805_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11805_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11805_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11805_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11805_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11805_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11805_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11805_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11806
#define MACROLOP_PRIVATE_EVAL_REC_11805_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11806(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11806_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11806_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11806_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11806_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11806_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11806_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11806_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11806_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11806_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11806_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11807
#define MACROLOP_PRIVATE_EVAL_REC_11806_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11807(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11807_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11807_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11807_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11807_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11807_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11807_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11807_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11807_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11807_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11807_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11808
#define MACROLOP_PRIVATE_EVAL_REC_11807_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11808(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11808_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11808_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11808_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11808_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11808_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11808_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11808_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11808_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11808_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11808_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11809
#define MACROLOP_PRIVATE_EVAL_REC_11808_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11809(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11809_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11809_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11809_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11809_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11809_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11809_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11809_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11809_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11809_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11809_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11810
#define MACROLOP_PRIVATE_EVAL_REC_11809_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11810(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11810_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11810_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11810_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11810_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11810_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11810_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11810_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11810_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11810_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11810_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11811
#define MACROLOP_PRIVATE_EVAL_REC_11810_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11811(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11811_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11811_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11811_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11811_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11811_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11811_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11811_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11811_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11811_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11811_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11812
#define MACROLOP_PRIVATE_EVAL_REC_11811_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11812(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11812_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11812_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11812_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11812_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11812_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11812_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11812_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11812_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11812_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11812_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11813
#define MACROLOP_PRIVATE_EVAL_REC_11812_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11813(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11813_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11813_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11813_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11813_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11813_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11813_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11813_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11813_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11813_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11813_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11814
#define MACROLOP_PRIVATE_EVAL_REC_11813_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11814(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11814_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11814_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11814_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11814_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11814_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11814_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11814_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11814_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11814_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11814_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11815
#define MACROLOP_PRIVATE_EVAL_REC_11814_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11815(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11815_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11815_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11815_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11815_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11815_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11815_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11815_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11815_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11815_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11815_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11816
#define MACROLOP_PRIVATE_EVAL_REC_11815_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11816(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11816_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11816_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11816_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11816_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11816_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11816_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11816_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11816_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11816_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11816_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11817
#define MACROLOP_PRIVATE_EVAL_REC_11816_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11817(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11817_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11817_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11817_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11817_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11817_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11817_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11817_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11817_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11817_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11817_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11818
#define MACROLOP_PRIVATE_EVAL_REC_11817_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11818(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11818_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11818_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11818_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11818_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11818_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11818_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11818_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11818_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11818_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11818_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11819
#define MACROLOP_PRIVATE_EVAL_REC_11818_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11819(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11819_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11819_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11819_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11819_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11819_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11819_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11819_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11819_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11819_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11819_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11820
#define MACROLOP_PRIVATE_EVAL_REC_11819_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11820(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11820_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11820_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11820_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11820_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11820_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11820_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11820_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11820_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11820_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11820_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11821
#define MACROLOP_PRIVATE_EVAL_REC_11820_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11821(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11821_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11821_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11821_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11821_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11821_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11821_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11821_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11821_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11821_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11821_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11822
#define MACROLOP_PRIVATE_EVAL_REC_11821_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11822(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11822_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11822_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11822_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11822_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11822_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11822_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11822_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11822_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11822_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11822_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11823
#define MACROLOP_PRIVATE_EVAL_REC_11822_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11823(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11823_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11823_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11823_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11823_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11823_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11823_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11823_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11823_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11823_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11823_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11824
#define MACROLOP_PRIVATE_EVAL_REC_11823_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11824(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11824_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11824_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11824_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11824_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11824_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11824_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11824_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11824_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11824_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11824_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11825
#define MACROLOP_PRIVATE_EVAL_REC_11824_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11825(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11825_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11825_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11825_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11825_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11825_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11825_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11825_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11825_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11825_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11825_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11826
#define MACROLOP_PRIVATE_EVAL_REC_11825_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11826(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11826_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11826_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11826_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11826_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11826_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11826_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11826_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11826_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11826_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11826_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11827
#define MACROLOP_PRIVATE_EVAL_REC_11826_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11827(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11827_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11827_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11827_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11827_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11827_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11827_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11827_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11827_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11827_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11827_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11828
#define MACROLOP_PRIVATE_EVAL_REC_11827_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11828(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11828_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11828_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11828_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11828_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11828_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11828_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11828_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11828_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11828_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11828_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11829
#define MACROLOP_PRIVATE_EVAL_REC_11828_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11829(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11829_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11829_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11829_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11829_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11829_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11829_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11829_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11829_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11829_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11829_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11830
#define MACROLOP_PRIVATE_EVAL_REC_11829_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11830(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11830_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11830_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11830_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11830_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11830_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11830_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11830_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11830_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11830_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11830_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11831
#define MACROLOP_PRIVATE_EVAL_REC_11830_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11831(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11831_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11831_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11831_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11831_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11831_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11831_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11831_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11831_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11831_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11831_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11832
#define MACROLOP_PRIVATE_EVAL_REC_11831_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11832(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11832_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11832_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11832_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11832_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11832_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11832_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11832_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11832_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11832_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11832_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11833
#define MACROLOP_PRIVATE_EVAL_REC_11832_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11833(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11833_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11833_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11833_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11833_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11833_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11833_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11833_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11833_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11833_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11833_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11834
#define MACROLOP_PRIVATE_EVAL_REC_11833_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11834(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11834_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11834_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11834_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11834_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11834_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11834_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11834_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11834_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11834_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11834_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11835
#define MACROLOP_PRIVATE_EVAL_REC_11834_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11835(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11835_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11835_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11835_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11835_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11835_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11835_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11835_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11835_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11835_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11835_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11836
#define MACROLOP_PRIVATE_EVAL_REC_11835_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11836(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11836_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11836_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11836_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11836_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11836_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11836_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11836_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11836_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11836_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11836_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11837
#define MACROLOP_PRIVATE_EVAL_REC_11836_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11837(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11837_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11837_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11837_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11837_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11837_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11837_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11837_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11837_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11837_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11837_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11838
#define MACROLOP_PRIVATE_EVAL_REC_11837_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11838(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11838_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11838_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11838_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11838_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11838_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11838_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11838_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11838_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11838_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11838_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11839
#define MACROLOP_PRIVATE_EVAL_REC_11838_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11839(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11839_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11839_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11839_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11839_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11839_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11839_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11839_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11839_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11839_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11839_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11840
#define MACROLOP_PRIVATE_EVAL_REC_11839_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11840(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11840_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11840_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11840_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11840_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11840_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11840_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11840_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11840_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11840_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11840_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11841
#define MACROLOP_PRIVATE_EVAL_REC_11840_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11841(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11841_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11841_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11841_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11841_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11841_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11841_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11841_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11841_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11841_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11841_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11842
#define MACROLOP_PRIVATE_EVAL_REC_11841_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11842(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11842_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11842_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11842_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11842_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11842_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11842_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11842_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11842_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11842_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11842_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11843
#define MACROLOP_PRIVATE_EVAL_REC_11842_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11843(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11843_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11843_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11843_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11843_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11843_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11843_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11843_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11843_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11843_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11843_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11844
#define MACROLOP_PRIVATE_EVAL_REC_11843_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11844(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11844_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11844_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11844_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11844_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11844_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11844_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11844_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11844_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11844_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11844_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11845
#define MACROLOP_PRIVATE_EVAL_REC_11844_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11845(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11845_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11845_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11845_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11845_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11845_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11845_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11845_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11845_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11845_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11845_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11846
#define MACROLOP_PRIVATE_EVAL_REC_11845_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11846(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11846_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11846_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11846_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11846_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11846_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11846_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11846_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11846_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11846_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11846_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11847
#define MACROLOP_PRIVATE_EVAL_REC_11846_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11847(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11847_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11847_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11847_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11847_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11847_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11847_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11847_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11847_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11847_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11847_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11848
#define MACROLOP_PRIVATE_EVAL_REC_11847_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11848(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11848_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11848_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11848_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11848_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11848_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11848_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11848_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11848_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11848_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11848_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11849
#define MACROLOP_PRIVATE_EVAL_REC_11848_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11849(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11849_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11849_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11849_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11849_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11849_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11849_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11849_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11849_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11849_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11849_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11850
#define MACROLOP_PRIVATE_EVAL_REC_11849_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11850(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11850_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11850_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11850_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11850_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11850_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11850_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11850_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11850_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11850_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11850_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11851
#define MACROLOP_PRIVATE_EVAL_REC_11850_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11851(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11851_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11851_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11851_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11851_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11851_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11851_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11851_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11851_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11851_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11851_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11852
#define MACROLOP_PRIVATE_EVAL_REC_11851_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11852(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11852_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11852_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11852_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11852_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11852_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11852_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11852_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11852_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11852_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11852_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11853
#define MACROLOP_PRIVATE_EVAL_REC_11852_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11853(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11853_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11853_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11853_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11853_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11853_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11853_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11853_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11853_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11853_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11853_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11854
#define MACROLOP_PRIVATE_EVAL_REC_11853_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11854(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11854_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11854_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11854_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11854_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11854_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11854_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11854_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11854_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11854_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11854_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11855
#define MACROLOP_PRIVATE_EVAL_REC_11854_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11855(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11855_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11855_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11855_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11855_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11855_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11855_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11855_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11855_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11855_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11855_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11856
#define MACROLOP_PRIVATE_EVAL_REC_11855_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11856(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11856_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11856_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11856_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11856_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11856_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11856_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11856_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11856_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11856_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11856_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11857
#define MACROLOP_PRIVATE_EVAL_REC_11856_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11857(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11857_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11857_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11857_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11857_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11857_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11857_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11857_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11857_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11857_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11857_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11858
#define MACROLOP_PRIVATE_EVAL_REC_11857_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11858(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11858_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11858_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11858_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11858_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11858_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11858_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11858_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11858_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11858_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11858_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11859
#define MACROLOP_PRIVATE_EVAL_REC_11858_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11859(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11859_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11859_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11859_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11859_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11859_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11859_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11859_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11859_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11859_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11859_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11860
#define MACROLOP_PRIVATE_EVAL_REC_11859_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11860(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11860_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11860_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11860_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11860_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11860_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11860_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11860_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11860_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11860_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11860_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11861
#define MACROLOP_PRIVATE_EVAL_REC_11860_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11861(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11861_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11861_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11861_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11861_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11861_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11861_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11861_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11861_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11861_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11861_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11862
#define MACROLOP_PRIVATE_EVAL_REC_11861_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11862(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11862_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11862_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11862_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11862_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11862_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11862_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11862_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11862_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11862_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11862_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11863
#define MACROLOP_PRIVATE_EVAL_REC_11862_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11863(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11863_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11863_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11863_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11863_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11863_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11863_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11863_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11863_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11863_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11863_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11864
#define MACROLOP_PRIVATE_EVAL_REC_11863_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11864(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11864_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11864_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11864_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11864_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11864_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11864_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11864_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11864_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11864_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11864_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11865
#define MACROLOP_PRIVATE_EVAL_REC_11864_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11865(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11865_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11865_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11865_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11865_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11865_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11865_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11865_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11865_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11865_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11865_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11866
#define MACROLOP_PRIVATE_EVAL_REC_11865_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11866(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11866_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11866_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11866_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11866_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11866_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11866_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11866_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11866_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11866_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11866_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11867
#define MACROLOP_PRIVATE_EVAL_REC_11866_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11867(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11867_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11867_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11867_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11867_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11867_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11867_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11867_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11867_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11867_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11867_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11868
#define MACROLOP_PRIVATE_EVAL_REC_11867_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11868(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11868_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11868_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11868_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11868_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11868_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11868_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11868_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11868_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11868_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11868_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11869
#define MACROLOP_PRIVATE_EVAL_REC_11868_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11869(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11869_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11869_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11869_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11869_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11869_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11869_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11869_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11869_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11869_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11869_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11870
#define MACROLOP_PRIVATE_EVAL_REC_11869_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11870(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11870_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11870_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11870_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11870_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11870_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11870_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11870_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11870_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11870_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11870_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11871
#define MACROLOP_PRIVATE_EVAL_REC_11870_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11871(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11871_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11871_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11871_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11871_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11871_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11871_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11871_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11871_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11871_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11871_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11872
#define MACROLOP_PRIVATE_EVAL_REC_11871_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11872(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11872_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11872_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11872_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11872_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11872_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11872_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11872_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11872_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11872_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11872_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11873
#define MACROLOP_PRIVATE_EVAL_REC_11872_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11873(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11873_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11873_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11873_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11873_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11873_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11873_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11873_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11873_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11873_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11873_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11874
#define MACROLOP_PRIVATE_EVAL_REC_11873_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11874(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11874_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11874_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11874_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11874_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11874_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11874_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11874_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11874_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11874_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11874_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11875
#define MACROLOP_PRIVATE_EVAL_REC_11874_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11875(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11875_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11875_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11875_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11875_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11875_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11875_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11875_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11875_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11875_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11875_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11876
#define MACROLOP_PRIVATE_EVAL_REC_11875_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11876(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11876_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11876_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11876_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11876_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11876_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11876_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11876_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11876_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11876_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11876_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11877
#define MACROLOP_PRIVATE_EVAL_REC_11876_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11877(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11877_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11877_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11877_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11877_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11877_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11877_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11877_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11877_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11877_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11877_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11878
#define MACROLOP_PRIVATE_EVAL_REC_11877_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11878(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11878_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11878_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11878_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11878_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11878_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11878_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11878_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11878_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11878_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11878_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11879
#define MACROLOP_PRIVATE_EVAL_REC_11878_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11879(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11879_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11879_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11879_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11879_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11879_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11879_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11879_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11879_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11879_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11879_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11880
#define MACROLOP_PRIVATE_EVAL_REC_11879_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11880(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11880_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11880_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11880_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11880_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11880_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11880_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11880_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11880_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11880_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11880_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11881
#define MACROLOP_PRIVATE_EVAL_REC_11880_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11881(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11881_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11881_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11881_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11881_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11881_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11881_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11881_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11881_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11881_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11881_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11882
#define MACROLOP_PRIVATE_EVAL_REC_11881_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11882(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11882_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11882_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11882_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11882_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11882_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11882_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11882_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11882_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11882_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11882_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11883
#define MACROLOP_PRIVATE_EVAL_REC_11882_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11883(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11883_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11883_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11883_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11883_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11883_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11883_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11883_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11883_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11883_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11883_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11884
#define MACROLOP_PRIVATE_EVAL_REC_11883_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11884(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11884_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11884_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11884_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11884_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11884_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11884_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11884_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11884_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11884_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11884_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11885
#define MACROLOP_PRIVATE_EVAL_REC_11884_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11885(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11885_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11885_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11885_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11885_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11885_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11885_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11885_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11885_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11885_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11885_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11886
#define MACROLOP_PRIVATE_EVAL_REC_11885_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11886(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11886_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11886_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11886_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11886_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11886_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11886_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11886_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11886_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11886_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11886_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11887
#define MACROLOP_PRIVATE_EVAL_REC_11886_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11887(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11887_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11887_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11887_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11887_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11887_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11887_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11887_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11887_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11887_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11887_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11888
#define MACROLOP_PRIVATE_EVAL_REC_11887_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11888(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11888_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11888_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11888_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11888_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11888_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11888_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11888_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11888_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11888_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11888_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11889
#define MACROLOP_PRIVATE_EVAL_REC_11888_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11889(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11889_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11889_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11889_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11889_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11889_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11889_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11889_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11889_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11889_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11889_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11890
#define MACROLOP_PRIVATE_EVAL_REC_11889_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11890(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11890_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11890_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11890_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11890_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11890_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11890_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11890_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11890_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11890_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11890_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11891
#define MACROLOP_PRIVATE_EVAL_REC_11890_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11891(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11891_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11891_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11891_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11891_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11891_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11891_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11891_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11891_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11891_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11891_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11892
#define MACROLOP_PRIVATE_EVAL_REC_11891_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11892(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11892_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11892_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11892_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11892_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11892_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11892_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11892_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11892_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11892_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11892_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11893
#define MACROLOP_PRIVATE_EVAL_REC_11892_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11893(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11893_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11893_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11893_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11893_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11893_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11893_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11893_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11893_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11893_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11893_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11894
#define MACROLOP_PRIVATE_EVAL_REC_11893_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11894(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11894_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11894_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11894_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11894_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11894_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11894_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11894_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11894_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11894_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11894_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11895
#define MACROLOP_PRIVATE_EVAL_REC_11894_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11895(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11895_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11895_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11895_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11895_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11895_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11895_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11895_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11895_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11895_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11895_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11896
#define MACROLOP_PRIVATE_EVAL_REC_11895_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11896(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11896_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11896_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11896_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11896_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11896_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11896_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11896_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11896_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11896_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11896_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11897
#define MACROLOP_PRIVATE_EVAL_REC_11896_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11897(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11897_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11897_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11897_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11897_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11897_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11897_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11897_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11897_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11897_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11897_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11898
#define MACROLOP_PRIVATE_EVAL_REC_11897_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11898(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11898_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11898_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11898_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11898_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11898_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11898_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11898_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11898_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11898_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11898_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11899
#define MACROLOP_PRIVATE_EVAL_REC_11898_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11899(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11899_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11899_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11899_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11899_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11899_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11899_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11899_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11899_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11899_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11899_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11900
#define MACROLOP_PRIVATE_EVAL_REC_11899_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11900(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11900_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11900_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11900_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11900_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11900_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11900_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11900_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11900_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11900_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11900_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11901
#define MACROLOP_PRIVATE_EVAL_REC_11900_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11901(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11901_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11901_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11901_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11901_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11901_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11901_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11901_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11901_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11901_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11901_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11902
#define MACROLOP_PRIVATE_EVAL_REC_11901_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11902(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11902_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11902_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11902_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11902_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11902_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11902_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11902_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11902_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11902_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11902_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11903
#define MACROLOP_PRIVATE_EVAL_REC_11902_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11903(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11903_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11903_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11903_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11903_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11903_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11903_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11903_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11903_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11903_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11903_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11904
#define MACROLOP_PRIVATE_EVAL_REC_11903_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11904(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11904_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11904_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11904_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11904_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11904_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11904_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11904_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11904_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11904_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11904_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11905
#define MACROLOP_PRIVATE_EVAL_REC_11904_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11905(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11905_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11905_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11905_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11905_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11905_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11905_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11905_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11905_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11905_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11905_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11906
#define MACROLOP_PRIVATE_EVAL_REC_11905_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11906(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11906_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11906_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11906_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11906_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11906_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11906_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11906_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11906_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11906_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11906_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11907
#define MACROLOP_PRIVATE_EVAL_REC_11906_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11907(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11907_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11907_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11907_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11907_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11907_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11907_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11907_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11907_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11907_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11907_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11908
#define MACROLOP_PRIVATE_EVAL_REC_11907_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11908(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11908_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11908_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11908_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11908_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11908_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11908_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11908_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11908_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11908_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11908_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11909
#define MACROLOP_PRIVATE_EVAL_REC_11908_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11909(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11909_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11909_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11909_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11909_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11909_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11909_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11909_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11909_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11909_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11909_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11910
#define MACROLOP_PRIVATE_EVAL_REC_11909_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11910(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11910_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11910_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11910_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11910_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11910_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11910_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11910_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11910_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11910_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11910_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11911
#define MACROLOP_PRIVATE_EVAL_REC_11910_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11911(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11911_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11911_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11911_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11911_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11911_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11911_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11911_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11911_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11911_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11911_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11912
#define MACROLOP_PRIVATE_EVAL_REC_11911_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11912(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11912_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11912_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11912_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11912_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11912_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11912_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11912_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11912_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11912_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11912_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11913
#define MACROLOP_PRIVATE_EVAL_REC_11912_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11913(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11913_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11913_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11913_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11913_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11913_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11913_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11913_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11913_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11913_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11913_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11914
#define MACROLOP_PRIVATE_EVAL_REC_11913_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11914(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11914_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11914_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11914_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11914_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11914_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11914_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11914_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11914_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11914_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11914_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11915
#define MACROLOP_PRIVATE_EVAL_REC_11914_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11915(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11915_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11915_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11915_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11915_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11915_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11915_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11915_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11915_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11915_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11915_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11916
#define MACROLOP_PRIVATE_EVAL_REC_11915_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11916(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11916_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11916_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11916_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11916_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11916_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11916_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11916_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11916_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11916_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11916_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11917
#define MACROLOP_PRIVATE_EVAL_REC_11916_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11917(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11917_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11917_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11917_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11917_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11917_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11917_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11917_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11917_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11917_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11917_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11918
#define MACROLOP_PRIVATE_EVAL_REC_11917_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11918(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11918_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11918_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11918_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11918_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11918_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11918_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11918_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11918_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11918_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11918_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11919
#define MACROLOP_PRIVATE_EVAL_REC_11918_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11919(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11919_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11919_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11919_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11919_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11919_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11919_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11919_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11919_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11919_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11919_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11920
#define MACROLOP_PRIVATE_EVAL_REC_11919_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11920(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11920_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11920_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11920_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11920_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11920_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11920_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11920_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11920_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11920_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11920_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11921
#define MACROLOP_PRIVATE_EVAL_REC_11920_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11921(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11921_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11921_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11921_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11921_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11921_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11921_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11921_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11921_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11921_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11921_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11922
#define MACROLOP_PRIVATE_EVAL_REC_11921_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11922(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11922_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11922_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11922_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11922_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11922_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11922_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11922_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11922_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11922_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11922_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11923
#define MACROLOP_PRIVATE_EVAL_REC_11922_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11923(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11923_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11923_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11923_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11923_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11923_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11923_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11923_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11923_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11923_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11923_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11924
#define MACROLOP_PRIVATE_EVAL_REC_11923_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11924(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11924_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11924_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11924_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11924_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11924_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11924_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11924_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11924_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11924_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11924_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11925
#define MACROLOP_PRIVATE_EVAL_REC_11924_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11925(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11925_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11925_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11925_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11925_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11925_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11925_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11925_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11925_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11925_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11925_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11926
#define MACROLOP_PRIVATE_EVAL_REC_11925_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11926(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11926_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11926_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11926_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11926_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11926_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11926_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11926_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11926_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11926_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11926_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11927
#define MACROLOP_PRIVATE_EVAL_REC_11926_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11927(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11927_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11927_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11927_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11927_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11927_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11927_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11927_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11927_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11927_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11927_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11928
#define MACROLOP_PRIVATE_EVAL_REC_11927_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11928(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11928_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11928_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11928_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11928_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11928_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11928_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11928_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11928_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11928_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11928_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11929
#define MACROLOP_PRIVATE_EVAL_REC_11928_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11929(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11929_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11929_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11929_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11929_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11929_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11929_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11929_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11929_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11929_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11929_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11930
#define MACROLOP_PRIVATE_EVAL_REC_11929_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11930(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11930_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11930_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11930_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11930_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11930_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11930_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11930_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11930_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11930_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11930_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11931
#define MACROLOP_PRIVATE_EVAL_REC_11930_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11931(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11931_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11931_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11931_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11931_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11931_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11931_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11931_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11931_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11931_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11931_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11932
#define MACROLOP_PRIVATE_EVAL_REC_11931_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11932(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11932_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11932_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11932_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11932_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11932_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11932_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11932_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11932_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11932_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11932_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11933
#define MACROLOP_PRIVATE_EVAL_REC_11932_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11933(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11933_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11933_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11933_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11933_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11933_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11933_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11933_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11933_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11933_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11933_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11934
#define MACROLOP_PRIVATE_EVAL_REC_11933_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11934(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11934_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11934_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11934_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11934_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11934_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11934_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11934_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11934_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11934_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11934_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11935
#define MACROLOP_PRIVATE_EVAL_REC_11934_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11935(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11935_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11935_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11935_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11935_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11935_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11935_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11935_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11935_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11935_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11935_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11936
#define MACROLOP_PRIVATE_EVAL_REC_11935_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11936(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11936_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11936_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11936_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11936_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11936_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11936_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11936_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11936_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11936_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11936_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11937
#define MACROLOP_PRIVATE_EVAL_REC_11936_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11937(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11937_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11937_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11937_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11937_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11937_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11937_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11937_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11937_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11937_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11937_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11938
#define MACROLOP_PRIVATE_EVAL_REC_11937_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11938(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11938_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11938_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11938_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11938_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11938_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11938_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11938_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11938_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11938_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11938_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11939
#define MACROLOP_PRIVATE_EVAL_REC_11938_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11939(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11939_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11939_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11939_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11939_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11939_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11939_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11939_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11939_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11939_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11939_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11940
#define MACROLOP_PRIVATE_EVAL_REC_11939_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11940(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11940_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11940_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11940_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11940_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11940_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11940_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11940_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11940_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11940_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11940_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11941
#define MACROLOP_PRIVATE_EVAL_REC_11940_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11941(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11941_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11941_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11941_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11941_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11941_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11941_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11941_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11941_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11941_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11941_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11942
#define MACROLOP_PRIVATE_EVAL_REC_11941_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11942(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11942_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11942_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11942_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11942_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11942_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11942_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11942_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11942_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11942_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11942_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11943
#define MACROLOP_PRIVATE_EVAL_REC_11942_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11943(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11943_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11943_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11943_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11943_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11943_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11943_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11943_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11943_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11943_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11943_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11944
#define MACROLOP_PRIVATE_EVAL_REC_11943_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11944(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11944_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11944_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11944_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11944_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11944_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11944_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11944_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11944_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11944_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11944_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11945
#define MACROLOP_PRIVATE_EVAL_REC_11944_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11945(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11945_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11945_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11945_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11945_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11945_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11945_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11945_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11945_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11945_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11945_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11946
#define MACROLOP_PRIVATE_EVAL_REC_11945_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11946(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11946_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11946_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11946_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11946_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11946_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11946_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11946_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11946_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11946_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11946_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11947
#define MACROLOP_PRIVATE_EVAL_REC_11946_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11947(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11947_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11947_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11947_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11947_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11947_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11947_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11947_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11947_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11947_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11947_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11948
#define MACROLOP_PRIVATE_EVAL_REC_11947_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11948(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11948_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11948_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11948_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11948_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11948_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11948_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11948_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11948_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11948_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11948_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11949
#define MACROLOP_PRIVATE_EVAL_REC_11948_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11949(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11949_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11949_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11949_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11949_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11949_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11949_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11949_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11949_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11949_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11949_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11950
#define MACROLOP_PRIVATE_EVAL_REC_11949_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11950(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11950_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11950_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11950_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11950_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11950_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11950_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11950_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11950_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11950_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11950_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11951
#define MACROLOP_PRIVATE_EVAL_REC_11950_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11951(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11951_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11951_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11951_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11951_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11951_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11951_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11951_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11951_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11951_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11951_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11952
#define MACROLOP_PRIVATE_EVAL_REC_11951_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11952(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11952_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11952_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11952_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11952_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11952_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11952_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11952_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11952_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11952_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11952_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11953
#define MACROLOP_PRIVATE_EVAL_REC_11952_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11953(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11953_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11953_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11953_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11953_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11953_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11953_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11953_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11953_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11953_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11953_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11954
#define MACROLOP_PRIVATE_EVAL_REC_11953_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11954(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11954_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11954_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11954_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11954_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11954_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11954_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11954_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11954_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11954_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11954_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11955
#define MACROLOP_PRIVATE_EVAL_REC_11954_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11955(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11955_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11955_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11955_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11955_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11955_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11955_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11955_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11955_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11955_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11955_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11956
#define MACROLOP_PRIVATE_EVAL_REC_11955_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11956(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11956_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11956_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11956_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11956_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11956_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11956_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11956_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11956_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11956_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11956_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11957
#define MACROLOP_PRIVATE_EVAL_REC_11956_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11957(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11957_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11957_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11957_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11957_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11957_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11957_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11957_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11957_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11957_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11957_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11958
#define MACROLOP_PRIVATE_EVAL_REC_11957_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11958(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11958_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11958_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11958_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11958_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11958_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11958_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11958_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11958_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11958_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11958_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11959
#define MACROLOP_PRIVATE_EVAL_REC_11958_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11959(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11959_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11959_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11959_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11959_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11959_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11959_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11959_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11959_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11959_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11959_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11960
#define MACROLOP_PRIVATE_EVAL_REC_11959_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11960(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11960_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11960_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11960_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11960_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11960_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11960_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11960_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11960_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11960_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11960_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11961
#define MACROLOP_PRIVATE_EVAL_REC_11960_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11961(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11961_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11961_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11961_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11961_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11961_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11961_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11961_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11961_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11961_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11961_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11962
#define MACROLOP_PRIVATE_EVAL_REC_11961_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11962(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11962_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11962_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11962_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11962_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11962_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11962_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11962_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11962_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11962_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11962_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11963
#define MACROLOP_PRIVATE_EVAL_REC_11962_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11963(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11963_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11963_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11963_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11963_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11963_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11963_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11963_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11963_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11963_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11963_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11964
#define MACROLOP_PRIVATE_EVAL_REC_11963_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11964(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11964_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11964_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11964_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11964_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11964_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11964_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11964_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11964_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11964_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11964_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11965
#define MACROLOP_PRIVATE_EVAL_REC_11964_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11965(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11965_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11965_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11965_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11965_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11965_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11965_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11965_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11965_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11965_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11965_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11966
#define MACROLOP_PRIVATE_EVAL_REC_11965_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11966(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11966_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11966_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11966_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11966_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11966_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11966_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11966_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11966_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11966_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11966_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11967
#define MACROLOP_PRIVATE_EVAL_REC_11966_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11967(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11967_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11967_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11967_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11967_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11967_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11967_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11967_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11967_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11967_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11967_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11968
#define MACROLOP_PRIVATE_EVAL_REC_11967_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11968(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11968_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11968_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11968_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11968_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11968_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11968_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11968_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11968_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11968_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11968_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11969
#define MACROLOP_PRIVATE_EVAL_REC_11968_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11969(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11969_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11969_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11969_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11969_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11969_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11969_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11969_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11969_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11969_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11969_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11970
#define MACROLOP_PRIVATE_EVAL_REC_11969_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11970(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11970_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11970_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11970_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11970_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11970_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11970_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11970_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11970_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11970_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11970_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11971
#define MACROLOP_PRIVATE_EVAL_REC_11970_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11971(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11971_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11971_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11971_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11971_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11971_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11971_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11971_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11971_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11971_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11971_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11972
#define MACROLOP_PRIVATE_EVAL_REC_11971_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11972(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11972_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11972_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11972_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11972_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11972_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11972_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11972_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11972_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11972_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11972_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11973
#define MACROLOP_PRIVATE_EVAL_REC_11972_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11973(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11973_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11973_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11973_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11973_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11973_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11973_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11973_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11973_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11973_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11973_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11974
#define MACROLOP_PRIVATE_EVAL_REC_11973_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11974(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11974_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11974_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11974_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11974_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11974_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11974_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11974_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11974_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11974_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11974_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11975
#define MACROLOP_PRIVATE_EVAL_REC_11974_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11975(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11975_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11975_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11975_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11975_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11975_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11975_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11975_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11975_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11975_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11975_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11976
#define MACROLOP_PRIVATE_EVAL_REC_11975_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11976(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11976_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11976_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11976_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11976_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11976_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11976_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11976_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11976_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11976_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11976_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11977
#define MACROLOP_PRIVATE_EVAL_REC_11976_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11977(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11977_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11977_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11977_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11977_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11977_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11977_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11977_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11977_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11977_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11977_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11978
#define MACROLOP_PRIVATE_EVAL_REC_11977_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11978(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11978_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11978_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11978_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11978_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11978_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11978_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11978_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11978_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11978_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11978_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11979
#define MACROLOP_PRIVATE_EVAL_REC_11978_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11979(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11979_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11979_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11979_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11979_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11979_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11979_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11979_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11979_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11979_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11979_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11980
#define MACROLOP_PRIVATE_EVAL_REC_11979_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11980(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11980_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11980_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11980_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11980_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11980_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11980_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11980_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11980_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11980_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11980_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11981
#define MACROLOP_PRIVATE_EVAL_REC_11980_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11981(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11981_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11981_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11981_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11981_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11981_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11981_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11981_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11981_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11981_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11981_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11982
#define MACROLOP_PRIVATE_EVAL_REC_11981_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11982(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11982_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11982_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11982_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11982_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11982_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11982_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11982_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11982_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11982_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11982_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11983
#define MACROLOP_PRIVATE_EVAL_REC_11982_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11983(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11983_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11983_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11983_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11983_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11983_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11983_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11983_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11983_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11983_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11983_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11984
#define MACROLOP_PRIVATE_EVAL_REC_11983_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11984(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11984_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11984_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11984_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11984_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11984_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11984_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11984_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11984_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11984_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11984_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11985
#define MACROLOP_PRIVATE_EVAL_REC_11984_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11985(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11985_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11985_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11985_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11985_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11985_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11985_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11985_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11985_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11985_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11985_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11986
#define MACROLOP_PRIVATE_EVAL_REC_11985_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11986(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11986_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11986_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11986_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11986_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11986_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11986_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11986_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11986_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11986_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11986_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11987
#define MACROLOP_PRIVATE_EVAL_REC_11986_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11987(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11987_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11987_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11987_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11987_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11987_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11987_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11987_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11987_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11987_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11987_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11988
#define MACROLOP_PRIVATE_EVAL_REC_11987_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11988(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11988_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11988_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11988_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11988_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11988_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11988_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11988_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11988_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11988_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11988_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11989
#define MACROLOP_PRIVATE_EVAL_REC_11988_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11989(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11989_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11989_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11989_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11989_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11989_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11989_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11989_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11989_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11989_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11989_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11990
#define MACROLOP_PRIVATE_EVAL_REC_11989_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11990(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11990_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11990_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11990_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11990_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11990_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11990_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11990_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11990_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11990_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11990_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11991
#define MACROLOP_PRIVATE_EVAL_REC_11990_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11991(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11991_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11991_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11991_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11991_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11991_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11991_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11991_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11991_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11991_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11991_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11992
#define MACROLOP_PRIVATE_EVAL_REC_11991_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11992(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11992_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11992_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11992_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11992_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11992_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11992_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11992_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11992_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11992_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11992_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11993
#define MACROLOP_PRIVATE_EVAL_REC_11992_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11993(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11993_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11993_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11993_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11993_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11993_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11993_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11993_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11993_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11993_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11993_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11994
#define MACROLOP_PRIVATE_EVAL_REC_11993_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11994(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11994_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11994_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11994_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11994_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11994_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11994_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11994_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11994_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11994_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11994_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11995
#define MACROLOP_PRIVATE_EVAL_REC_11994_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11995(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11995_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11995_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11995_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11995_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11995_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11995_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11995_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11995_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11995_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11995_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11996
#define MACROLOP_PRIVATE_EVAL_REC_11995_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11996(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11996_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11996_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11996_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11996_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11996_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11996_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11996_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11996_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11996_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11996_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11997
#define MACROLOP_PRIVATE_EVAL_REC_11996_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11997(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11997_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11997_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11997_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11997_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11997_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11997_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11997_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11997_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11997_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11997_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11998
#define MACROLOP_PRIVATE_EVAL_REC_11997_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11998(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11998_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11998_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11998_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11998_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11998_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11998_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11998_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11998_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11998_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11998_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_11999
#define MACROLOP_PRIVATE_EVAL_REC_11998_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_11999(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_11999_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_11999_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_11999_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_11999_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_11999_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_11999_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_11999_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_11999_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_11999_##choice
#define MACROLOP_PRIVATE_EVAL_REC_11999_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12000
#define MACROLOP_PRIVATE_EVAL_REC_11999_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12000(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12000_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12000_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12000_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12000_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12000_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12000_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12000_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12000_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12000_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12000_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12001
#define MACROLOP_PRIVATE_EVAL_REC_12000_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12001(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12001_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12001_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12001_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12001_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12001_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12001_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12001_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12001_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12001_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12001_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12002
#define MACROLOP_PRIVATE_EVAL_REC_12001_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12002(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12002_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12002_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12002_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12002_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12002_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12002_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12002_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12002_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12002_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12002_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12003
#define MACROLOP_PRIVATE_EVAL_REC_12002_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12003(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12003_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12003_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12003_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12003_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12003_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12003_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12003_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12003_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12003_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12003_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12004
#define MACROLOP_PRIVATE_EVAL_REC_12003_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12004(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12004_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12004_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12004_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12004_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12004_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12004_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12004_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12004_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12004_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12004_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12005
#define MACROLOP_PRIVATE_EVAL_REC_12004_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12005(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12005_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12005_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12005_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12005_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12005_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12005_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12005_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12005_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12005_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12005_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12006
#define MACROLOP_PRIVATE_EVAL_REC_12005_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12006(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12006_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12006_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12006_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12006_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12006_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12006_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12006_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12006_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12006_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12006_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12007
#define MACROLOP_PRIVATE_EVAL_REC_12006_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12007(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12007_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12007_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12007_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12007_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12007_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12007_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12007_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12007_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12007_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12007_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12008
#define MACROLOP_PRIVATE_EVAL_REC_12007_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12008(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12008_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12008_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12008_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12008_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12008_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12008_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12008_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12008_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12008_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12008_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12009
#define MACROLOP_PRIVATE_EVAL_REC_12008_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12009(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12009_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12009_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12009_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12009_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12009_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12009_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12009_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12009_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12009_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12009_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12010
#define MACROLOP_PRIVATE_EVAL_REC_12009_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12010(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12010_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12010_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12010_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12010_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12010_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12010_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12010_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12010_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12010_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12010_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12011
#define MACROLOP_PRIVATE_EVAL_REC_12010_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12011(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12011_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12011_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12011_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12011_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12011_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12011_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12011_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12011_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12011_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12011_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12012
#define MACROLOP_PRIVATE_EVAL_REC_12011_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12012(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12012_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12012_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12012_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12012_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12012_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12012_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12012_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12012_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12012_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12012_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12013
#define MACROLOP_PRIVATE_EVAL_REC_12012_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12013(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12013_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12013_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12013_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12013_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12013_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12013_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12013_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12013_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12013_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12013_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12014
#define MACROLOP_PRIVATE_EVAL_REC_12013_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12014(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12014_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12014_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12014_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12014_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12014_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12014_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12014_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12014_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12014_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12014_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12015
#define MACROLOP_PRIVATE_EVAL_REC_12014_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12015(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12015_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12015_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12015_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12015_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12015_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12015_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12015_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12015_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12015_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12015_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12016
#define MACROLOP_PRIVATE_EVAL_REC_12015_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12016(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12016_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12016_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12016_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12016_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12016_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12016_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12016_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12016_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12016_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12016_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12017
#define MACROLOP_PRIVATE_EVAL_REC_12016_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12017(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12017_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12017_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12017_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12017_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12017_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12017_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12017_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12017_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12017_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12017_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12018
#define MACROLOP_PRIVATE_EVAL_REC_12017_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12018(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12018_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12018_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12018_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12018_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12018_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12018_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12018_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12018_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12018_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12018_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12019
#define MACROLOP_PRIVATE_EVAL_REC_12018_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12019(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12019_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12019_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12019_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12019_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12019_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12019_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12019_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12019_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12019_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12019_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12020
#define MACROLOP_PRIVATE_EVAL_REC_12019_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12020(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12020_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12020_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12020_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12020_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12020_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12020_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12020_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12020_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12020_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12020_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12021
#define MACROLOP_PRIVATE_EVAL_REC_12020_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12021(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12021_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12021_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12021_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12021_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12021_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12021_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12021_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12021_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12021_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12021_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12022
#define MACROLOP_PRIVATE_EVAL_REC_12021_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12022(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12022_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12022_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12022_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12022_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12022_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12022_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12022_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12022_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12022_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12022_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12023
#define MACROLOP_PRIVATE_EVAL_REC_12022_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12023(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12023_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12023_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12023_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12023_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12023_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12023_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12023_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12023_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12023_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12023_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12024
#define MACROLOP_PRIVATE_EVAL_REC_12023_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12024(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12024_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12024_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12024_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12024_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12024_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12024_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12024_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12024_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12024_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12024_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12025
#define MACROLOP_PRIVATE_EVAL_REC_12024_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12025(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12025_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12025_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12025_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12025_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12025_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12025_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12025_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12025_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12025_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12025_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12026
#define MACROLOP_PRIVATE_EVAL_REC_12025_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12026(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12026_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12026_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12026_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12026_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12026_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12026_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12026_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12026_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12026_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12026_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12027
#define MACROLOP_PRIVATE_EVAL_REC_12026_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12027(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12027_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12027_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12027_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12027_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12027_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12027_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12027_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12027_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12027_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12027_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12028
#define MACROLOP_PRIVATE_EVAL_REC_12027_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12028(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12028_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12028_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12028_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12028_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12028_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12028_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12028_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12028_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12028_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12028_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12029
#define MACROLOP_PRIVATE_EVAL_REC_12028_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12029(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12029_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12029_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12029_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12029_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12029_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12029_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12029_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12029_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12029_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12029_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12030
#define MACROLOP_PRIVATE_EVAL_REC_12029_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12030(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12030_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12030_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12030_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12030_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12030_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12030_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12030_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12030_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12030_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12030_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12031
#define MACROLOP_PRIVATE_EVAL_REC_12030_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12031(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12031_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12031_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12031_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12031_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12031_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12031_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12031_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12031_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12031_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12031_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12032
#define MACROLOP_PRIVATE_EVAL_REC_12031_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12032(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12032_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12032_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12032_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12032_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12032_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12032_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12032_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12032_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12032_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12032_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12033
#define MACROLOP_PRIVATE_EVAL_REC_12032_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12033(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12033_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12033_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12033_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12033_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12033_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12033_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12033_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12033_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12033_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12033_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12034
#define MACROLOP_PRIVATE_EVAL_REC_12033_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12034(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12034_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12034_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12034_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12034_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12034_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12034_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12034_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12034_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12034_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12034_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12035
#define MACROLOP_PRIVATE_EVAL_REC_12034_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12035(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12035_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12035_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12035_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12035_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12035_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12035_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12035_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12035_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12035_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12035_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12036
#define MACROLOP_PRIVATE_EVAL_REC_12035_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12036(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12036_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12036_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12036_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12036_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12036_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12036_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12036_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12036_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12036_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12036_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12037
#define MACROLOP_PRIVATE_EVAL_REC_12036_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12037(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12037_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12037_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12037_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12037_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12037_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12037_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12037_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12037_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12037_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12037_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12038
#define MACROLOP_PRIVATE_EVAL_REC_12037_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12038(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12038_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12038_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12038_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12038_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12038_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12038_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12038_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12038_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12038_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12038_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12039
#define MACROLOP_PRIVATE_EVAL_REC_12038_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12039(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12039_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12039_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12039_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12039_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12039_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12039_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12039_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12039_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12039_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12039_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12040
#define MACROLOP_PRIVATE_EVAL_REC_12039_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12040(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12040_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12040_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12040_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12040_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12040_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12040_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12040_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12040_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12040_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12040_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12041
#define MACROLOP_PRIVATE_EVAL_REC_12040_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12041(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12041_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12041_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12041_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12041_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12041_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12041_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12041_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12041_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12041_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12041_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12042
#define MACROLOP_PRIVATE_EVAL_REC_12041_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12042(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12042_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12042_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12042_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12042_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12042_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12042_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12042_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12042_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12042_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12042_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12043
#define MACROLOP_PRIVATE_EVAL_REC_12042_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12043(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12043_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12043_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12043_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12043_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12043_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12043_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12043_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12043_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12043_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12043_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12044
#define MACROLOP_PRIVATE_EVAL_REC_12043_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12044(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12044_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12044_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12044_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12044_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12044_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12044_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12044_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12044_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12044_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12044_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12045
#define MACROLOP_PRIVATE_EVAL_REC_12044_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12045(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12045_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12045_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12045_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12045_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12045_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12045_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12045_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12045_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12045_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12045_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12046
#define MACROLOP_PRIVATE_EVAL_REC_12045_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12046(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12046_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12046_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12046_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12046_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12046_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12046_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12046_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12046_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12046_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12046_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12047
#define MACROLOP_PRIVATE_EVAL_REC_12046_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12047(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12047_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12047_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12047_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12047_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12047_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12047_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12047_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12047_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12047_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12047_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12048
#define MACROLOP_PRIVATE_EVAL_REC_12047_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12048(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12048_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12048_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12048_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12048_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12048_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12048_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12048_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12048_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12048_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12048_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12049
#define MACROLOP_PRIVATE_EVAL_REC_12048_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12049(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12049_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12049_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12049_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12049_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12049_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12049_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12049_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12049_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12049_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12049_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12050
#define MACROLOP_PRIVATE_EVAL_REC_12049_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12050(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12050_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12050_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12050_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12050_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12050_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12050_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12050_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12050_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12050_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12050_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12051
#define MACROLOP_PRIVATE_EVAL_REC_12050_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12051(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12051_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12051_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12051_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12051_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12051_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12051_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12051_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12051_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12051_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12051_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12052
#define MACROLOP_PRIVATE_EVAL_REC_12051_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12052(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12052_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12052_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12052_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12052_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12052_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12052_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12052_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12052_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12052_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12052_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12053
#define MACROLOP_PRIVATE_EVAL_REC_12052_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12053(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12053_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12053_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12053_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12053_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12053_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12053_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12053_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12053_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12053_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12053_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12054
#define MACROLOP_PRIVATE_EVAL_REC_12053_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12054(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12054_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12054_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12054_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12054_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12054_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12054_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12054_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12054_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12054_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12054_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12055
#define MACROLOP_PRIVATE_EVAL_REC_12054_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12055(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12055_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12055_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12055_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12055_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12055_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12055_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12055_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12055_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12055_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12055_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12056
#define MACROLOP_PRIVATE_EVAL_REC_12055_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12056(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12056_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12056_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12056_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12056_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12056_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12056_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12056_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12056_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12056_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12056_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12057
#define MACROLOP_PRIVATE_EVAL_REC_12056_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12057(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12057_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12057_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12057_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12057_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12057_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12057_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12057_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12057_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12057_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12057_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12058
#define MACROLOP_PRIVATE_EVAL_REC_12057_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12058(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12058_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12058_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12058_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12058_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12058_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12058_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12058_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12058_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12058_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12058_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12059
#define MACROLOP_PRIVATE_EVAL_REC_12058_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12059(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12059_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12059_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12059_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12059_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12059_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12059_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12059_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12059_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12059_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12059_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12060
#define MACROLOP_PRIVATE_EVAL_REC_12059_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12060(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12060_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12060_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12060_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12060_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12060_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12060_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12060_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12060_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12060_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12060_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12061
#define MACROLOP_PRIVATE_EVAL_REC_12060_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12061(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12061_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12061_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12061_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12061_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12061_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12061_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12061_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12061_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12061_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12061_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12062
#define MACROLOP_PRIVATE_EVAL_REC_12061_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12062(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12062_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12062_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12062_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12062_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12062_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12062_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12062_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12062_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12062_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12062_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12063
#define MACROLOP_PRIVATE_EVAL_REC_12062_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12063(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12063_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12063_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12063_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12063_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12063_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12063_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12063_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12063_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12063_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12063_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12064
#define MACROLOP_PRIVATE_EVAL_REC_12063_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12064(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12064_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12064_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12064_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12064_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12064_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12064_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12064_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12064_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12064_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12064_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12065
#define MACROLOP_PRIVATE_EVAL_REC_12064_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12065(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12065_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12065_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12065_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12065_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12065_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12065_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12065_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12065_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12065_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12065_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12066
#define MACROLOP_PRIVATE_EVAL_REC_12065_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12066(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12066_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12066_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12066_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12066_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12066_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12066_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12066_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12066_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12066_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12066_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12067
#define MACROLOP_PRIVATE_EVAL_REC_12066_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12067(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12067_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12067_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12067_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12067_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12067_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12067_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12067_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12067_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12067_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12067_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12068
#define MACROLOP_PRIVATE_EVAL_REC_12067_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12068(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12068_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12068_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12068_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12068_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12068_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12068_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12068_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12068_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12068_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12068_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12069
#define MACROLOP_PRIVATE_EVAL_REC_12068_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12069(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12069_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12069_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12069_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12069_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12069_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12069_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12069_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12069_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12069_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12069_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12070
#define MACROLOP_PRIVATE_EVAL_REC_12069_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12070(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12070_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12070_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12070_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12070_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12070_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12070_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12070_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12070_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12070_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12070_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12071
#define MACROLOP_PRIVATE_EVAL_REC_12070_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12071(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12071_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12071_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12071_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12071_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12071_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12071_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12071_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12071_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12071_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12071_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12072
#define MACROLOP_PRIVATE_EVAL_REC_12071_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12072(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12072_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12072_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12072_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12072_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12072_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12072_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12072_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12072_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12072_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12072_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12073
#define MACROLOP_PRIVATE_EVAL_REC_12072_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12073(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12073_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12073_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12073_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12073_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12073_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12073_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12073_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12073_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12073_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12073_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12074
#define MACROLOP_PRIVATE_EVAL_REC_12073_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12074(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12074_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12074_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12074_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12074_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12074_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12074_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12074_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12074_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12074_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12074_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12075
#define MACROLOP_PRIVATE_EVAL_REC_12074_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12075(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12075_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12075_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12075_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12075_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12075_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12075_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12075_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12075_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12075_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12075_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12076
#define MACROLOP_PRIVATE_EVAL_REC_12075_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12076(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12076_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12076_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12076_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12076_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12076_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12076_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12076_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12076_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12076_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12076_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12077
#define MACROLOP_PRIVATE_EVAL_REC_12076_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12077(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12077_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12077_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12077_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12077_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12077_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12077_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12077_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12077_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12077_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12077_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12078
#define MACROLOP_PRIVATE_EVAL_REC_12077_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12078(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12078_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12078_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12078_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12078_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12078_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12078_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12078_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12078_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12078_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12078_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12079
#define MACROLOP_PRIVATE_EVAL_REC_12078_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12079(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12079_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12079_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12079_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12079_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12079_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12079_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12079_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12079_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12079_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12079_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12080
#define MACROLOP_PRIVATE_EVAL_REC_12079_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12080(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12080_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12080_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12080_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12080_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12080_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12080_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12080_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12080_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12080_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12080_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12081
#define MACROLOP_PRIVATE_EVAL_REC_12080_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12081(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12081_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12081_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12081_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12081_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12081_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12081_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12081_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12081_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12081_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12081_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12082
#define MACROLOP_PRIVATE_EVAL_REC_12081_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12082(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12082_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12082_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12082_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12082_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12082_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12082_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12082_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12082_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12082_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12082_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12083
#define MACROLOP_PRIVATE_EVAL_REC_12082_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12083(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12083_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12083_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12083_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12083_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12083_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12083_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12083_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12083_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12083_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12083_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12084
#define MACROLOP_PRIVATE_EVAL_REC_12083_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12084(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12084_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12084_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12084_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12084_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12084_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12084_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12084_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12084_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12084_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12084_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12085
#define MACROLOP_PRIVATE_EVAL_REC_12084_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12085(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12085_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12085_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12085_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12085_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12085_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12085_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12085_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12085_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12085_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12085_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12086
#define MACROLOP_PRIVATE_EVAL_REC_12085_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12086(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12086_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12086_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12086_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12086_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12086_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12086_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12086_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12086_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12086_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12086_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12087
#define MACROLOP_PRIVATE_EVAL_REC_12086_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12087(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12087_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12087_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12087_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12087_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12087_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12087_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12087_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12087_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12087_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12087_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12088
#define MACROLOP_PRIVATE_EVAL_REC_12087_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12088(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12088_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12088_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12088_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12088_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12088_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12088_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12088_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12088_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12088_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12088_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12089
#define MACROLOP_PRIVATE_EVAL_REC_12088_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12089(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12089_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12089_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12089_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12089_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12089_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12089_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12089_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12089_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12089_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12089_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12090
#define MACROLOP_PRIVATE_EVAL_REC_12089_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12090(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12090_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12090_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12090_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12090_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12090_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12090_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12090_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12090_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12090_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12090_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12091
#define MACROLOP_PRIVATE_EVAL_REC_12090_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12091(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12091_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12091_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12091_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12091_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12091_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12091_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12091_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12091_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12091_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12091_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12092
#define MACROLOP_PRIVATE_EVAL_REC_12091_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12092(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12092_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12092_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12092_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12092_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12092_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12092_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12092_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12092_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12092_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12092_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12093
#define MACROLOP_PRIVATE_EVAL_REC_12092_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12093(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12093_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12093_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12093_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12093_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12093_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12093_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12093_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12093_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12093_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12093_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12094
#define MACROLOP_PRIVATE_EVAL_REC_12093_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12094(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12094_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12094_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12094_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12094_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12094_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12094_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12094_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12094_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12094_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12094_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12095
#define MACROLOP_PRIVATE_EVAL_REC_12094_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12095(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12095_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12095_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12095_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12095_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12095_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12095_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12095_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12095_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12095_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12095_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12096
#define MACROLOP_PRIVATE_EVAL_REC_12095_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12096(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12096_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12096_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12096_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12096_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12096_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12096_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12096_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12096_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12096_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12096_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12097
#define MACROLOP_PRIVATE_EVAL_REC_12096_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12097(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12097_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12097_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12097_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12097_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12097_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12097_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12097_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12097_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12097_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12097_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12098
#define MACROLOP_PRIVATE_EVAL_REC_12097_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12098(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12098_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12098_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12098_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12098_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12098_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12098_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12098_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12098_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12098_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12098_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12099
#define MACROLOP_PRIVATE_EVAL_REC_12098_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12099(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12099_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12099_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12099_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12099_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12099_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12099_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12099_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12099_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12099_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12099_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12100
#define MACROLOP_PRIVATE_EVAL_REC_12099_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12100(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12100_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12100_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12100_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12100_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12100_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12100_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12100_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12100_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12100_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12100_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12101
#define MACROLOP_PRIVATE_EVAL_REC_12100_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12101(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12101_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12101_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12101_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12101_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12101_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12101_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12101_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12101_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12101_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12101_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12102
#define MACROLOP_PRIVATE_EVAL_REC_12101_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12102(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12102_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12102_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12102_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12102_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12102_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12102_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12102_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12102_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12102_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12102_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12103
#define MACROLOP_PRIVATE_EVAL_REC_12102_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12103(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12103_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12103_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12103_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12103_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12103_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12103_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12103_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12103_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12103_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12103_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12104
#define MACROLOP_PRIVATE_EVAL_REC_12103_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12104(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12104_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12104_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12104_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12104_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12104_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12104_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12104_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12104_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12104_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12104_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12105
#define MACROLOP_PRIVATE_EVAL_REC_12104_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12105(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12105_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12105_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12105_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12105_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12105_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12105_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12105_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12105_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12105_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12105_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12106
#define MACROLOP_PRIVATE_EVAL_REC_12105_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12106(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12106_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12106_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12106_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12106_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12106_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12106_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12106_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12106_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12106_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12106_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12107
#define MACROLOP_PRIVATE_EVAL_REC_12106_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12107(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12107_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12107_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12107_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12107_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12107_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12107_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12107_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12107_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12107_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12107_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12108
#define MACROLOP_PRIVATE_EVAL_REC_12107_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12108(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12108_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12108_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12108_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12108_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12108_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12108_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12108_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12108_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12108_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12108_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12109
#define MACROLOP_PRIVATE_EVAL_REC_12108_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12109(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12109_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12109_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12109_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12109_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12109_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12109_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12109_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12109_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12109_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12109_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12110
#define MACROLOP_PRIVATE_EVAL_REC_12109_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12110(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12110_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12110_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12110_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12110_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12110_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12110_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12110_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12110_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12110_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12110_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12111
#define MACROLOP_PRIVATE_EVAL_REC_12110_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12111(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12111_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12111_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12111_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12111_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12111_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12111_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12111_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12111_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12111_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12111_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12112
#define MACROLOP_PRIVATE_EVAL_REC_12111_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12112(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12112_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12112_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12112_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12112_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12112_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12112_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12112_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12112_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12112_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12112_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12113
#define MACROLOP_PRIVATE_EVAL_REC_12112_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12113(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12113_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12113_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12113_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12113_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12113_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12113_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12113_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12113_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12113_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12113_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12114
#define MACROLOP_PRIVATE_EVAL_REC_12113_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12114(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12114_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12114_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12114_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12114_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12114_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12114_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12114_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12114_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12114_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12114_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12115
#define MACROLOP_PRIVATE_EVAL_REC_12114_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12115(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12115_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12115_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12115_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12115_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12115_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12115_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12115_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12115_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12115_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12115_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12116
#define MACROLOP_PRIVATE_EVAL_REC_12115_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12116(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12116_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12116_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12116_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12116_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12116_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12116_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12116_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12116_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12116_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12116_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12117
#define MACROLOP_PRIVATE_EVAL_REC_12116_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12117(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12117_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12117_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12117_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12117_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12117_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12117_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12117_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12117_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12117_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12117_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12118
#define MACROLOP_PRIVATE_EVAL_REC_12117_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12118(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12118_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12118_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12118_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12118_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12118_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12118_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12118_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12118_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12118_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12118_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12119
#define MACROLOP_PRIVATE_EVAL_REC_12118_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12119(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12119_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12119_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12119_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12119_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12119_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12119_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12119_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12119_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12119_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12119_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12120
#define MACROLOP_PRIVATE_EVAL_REC_12119_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12120(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12120_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12120_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12120_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12120_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12120_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12120_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12120_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12120_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12120_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12120_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12121
#define MACROLOP_PRIVATE_EVAL_REC_12120_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12121(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12121_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12121_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12121_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12121_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12121_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12121_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12121_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12121_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12121_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12121_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12122
#define MACROLOP_PRIVATE_EVAL_REC_12121_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12122(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12122_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12122_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12122_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12122_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12122_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12122_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12122_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12122_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12122_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12122_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12123
#define MACROLOP_PRIVATE_EVAL_REC_12122_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12123(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12123_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12123_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12123_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12123_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12123_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12123_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12123_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12123_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12123_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12123_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12124
#define MACROLOP_PRIVATE_EVAL_REC_12123_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12124(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12124_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12124_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12124_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12124_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12124_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12124_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12124_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12124_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12124_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12124_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12125
#define MACROLOP_PRIVATE_EVAL_REC_12124_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12125(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12125_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12125_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12125_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12125_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12125_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12125_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12125_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12125_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12125_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12125_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12126
#define MACROLOP_PRIVATE_EVAL_REC_12125_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12126(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12126_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12126_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12126_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12126_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12126_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12126_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12126_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12126_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12126_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12126_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12127
#define MACROLOP_PRIVATE_EVAL_REC_12126_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12127(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12127_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12127_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12127_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12127_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12127_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12127_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12127_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12127_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12127_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12127_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12128
#define MACROLOP_PRIVATE_EVAL_REC_12127_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12128(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12128_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12128_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12128_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12128_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12128_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12128_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12128_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12128_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12128_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12128_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12129
#define MACROLOP_PRIVATE_EVAL_REC_12128_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12129(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12129_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12129_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12129_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12129_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12129_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12129_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12129_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12129_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12129_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12129_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12130
#define MACROLOP_PRIVATE_EVAL_REC_12129_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12130(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12130_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12130_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12130_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12130_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12130_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12130_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12130_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12130_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12130_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12130_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12131
#define MACROLOP_PRIVATE_EVAL_REC_12130_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12131(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12131_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12131_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12131_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12131_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12131_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12131_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12131_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12131_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12131_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12131_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12132
#define MACROLOP_PRIVATE_EVAL_REC_12131_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12132(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12132_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12132_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12132_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12132_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12132_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12132_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12132_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12132_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12132_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12132_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12133
#define MACROLOP_PRIVATE_EVAL_REC_12132_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12133(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12133_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12133_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12133_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12133_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12133_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12133_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12133_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12133_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12133_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12133_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12134
#define MACROLOP_PRIVATE_EVAL_REC_12133_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12134(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12134_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12134_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12134_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12134_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12134_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12134_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12134_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12134_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12134_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12134_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12135
#define MACROLOP_PRIVATE_EVAL_REC_12134_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12135(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12135_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12135_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12135_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12135_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12135_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12135_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12135_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12135_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12135_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12135_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12136
#define MACROLOP_PRIVATE_EVAL_REC_12135_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12136(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12136_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12136_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12136_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12136_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12136_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12136_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12136_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12136_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12136_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12136_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12137
#define MACROLOP_PRIVATE_EVAL_REC_12136_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12137(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12137_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12137_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12137_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12137_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12137_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12137_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12137_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12137_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12137_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12137_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12138
#define MACROLOP_PRIVATE_EVAL_REC_12137_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12138(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12138_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12138_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12138_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12138_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12138_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12138_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12138_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12138_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12138_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12138_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12139
#define MACROLOP_PRIVATE_EVAL_REC_12138_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12139(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12139_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12139_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12139_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12139_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12139_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12139_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12139_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12139_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12139_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12139_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12140
#define MACROLOP_PRIVATE_EVAL_REC_12139_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12140(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12140_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12140_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12140_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12140_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12140_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12140_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12140_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12140_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12140_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12140_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12141
#define MACROLOP_PRIVATE_EVAL_REC_12140_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12141(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12141_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12141_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12141_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12141_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12141_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12141_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12141_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12141_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12141_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12141_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12142
#define MACROLOP_PRIVATE_EVAL_REC_12141_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12142(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12142_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12142_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12142_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12142_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12142_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12142_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12142_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12142_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12142_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12142_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12143
#define MACROLOP_PRIVATE_EVAL_REC_12142_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12143(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12143_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12143_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12143_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12143_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12143_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12143_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12143_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12143_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12143_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12143_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12144
#define MACROLOP_PRIVATE_EVAL_REC_12143_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12144(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12144_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12144_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12144_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12144_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12144_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12144_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12144_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12144_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12144_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12144_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12145
#define MACROLOP_PRIVATE_EVAL_REC_12144_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12145(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12145_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12145_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12145_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12145_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12145_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12145_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12145_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12145_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12145_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12145_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12146
#define MACROLOP_PRIVATE_EVAL_REC_12145_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12146(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12146_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12146_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12146_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12146_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12146_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12146_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12146_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12146_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12146_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12146_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12147
#define MACROLOP_PRIVATE_EVAL_REC_12146_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12147(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12147_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12147_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12147_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12147_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12147_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12147_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12147_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12147_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12147_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12147_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12148
#define MACROLOP_PRIVATE_EVAL_REC_12147_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12148(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12148_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12148_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12148_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12148_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12148_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12148_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12148_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12148_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12148_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12148_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12149
#define MACROLOP_PRIVATE_EVAL_REC_12148_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12149(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12149_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12149_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12149_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12149_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12149_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12149_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12149_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12149_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12149_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12149_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12150
#define MACROLOP_PRIVATE_EVAL_REC_12149_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12150(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12150_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12150_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12150_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12150_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12150_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12150_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12150_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12150_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12150_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12150_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12151
#define MACROLOP_PRIVATE_EVAL_REC_12150_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12151(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12151_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12151_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12151_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12151_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12151_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12151_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12151_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12151_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12151_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12151_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12152
#define MACROLOP_PRIVATE_EVAL_REC_12151_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12152(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12152_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12152_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12152_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12152_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12152_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12152_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12152_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12152_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12152_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12152_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12153
#define MACROLOP_PRIVATE_EVAL_REC_12152_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12153(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12153_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12153_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12153_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12153_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12153_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12153_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12153_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12153_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12153_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12153_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12154
#define MACROLOP_PRIVATE_EVAL_REC_12153_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12154(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12154_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12154_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12154_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12154_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12154_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12154_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12154_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12154_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12154_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12154_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12155
#define MACROLOP_PRIVATE_EVAL_REC_12154_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12155(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12155_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12155_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12155_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12155_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12155_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12155_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12155_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12155_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12155_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12155_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12156
#define MACROLOP_PRIVATE_EVAL_REC_12155_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12156(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12156_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12156_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12156_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12156_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12156_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12156_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12156_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12156_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12156_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12156_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12157
#define MACROLOP_PRIVATE_EVAL_REC_12156_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12157(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12157_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12157_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12157_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12157_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12157_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12157_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12157_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12157_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12157_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12157_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12158
#define MACROLOP_PRIVATE_EVAL_REC_12157_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12158(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12158_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12158_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12158_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12158_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12158_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12158_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12158_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12158_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12158_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12158_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12159
#define MACROLOP_PRIVATE_EVAL_REC_12158_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12159(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12159_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12159_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12159_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12159_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12159_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12159_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12159_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12159_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12159_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12159_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12160
#define MACROLOP_PRIVATE_EVAL_REC_12159_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12160(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12160_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12160_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12160_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12160_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12160_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12160_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12160_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12160_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12160_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12160_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12161
#define MACROLOP_PRIVATE_EVAL_REC_12160_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12161(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12161_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12161_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12161_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12161_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12161_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12161_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12161_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12161_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12161_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12161_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12162
#define MACROLOP_PRIVATE_EVAL_REC_12161_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12162(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12162_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12162_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12162_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12162_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12162_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12162_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12162_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12162_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12162_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12162_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12163
#define MACROLOP_PRIVATE_EVAL_REC_12162_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12163(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12163_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12163_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12163_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12163_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12163_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12163_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12163_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12163_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12163_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12163_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12164
#define MACROLOP_PRIVATE_EVAL_REC_12163_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12164(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12164_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12164_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12164_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12164_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12164_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12164_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12164_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12164_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12164_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12164_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12165
#define MACROLOP_PRIVATE_EVAL_REC_12164_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12165(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12165_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12165_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12165_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12165_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12165_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12165_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12165_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12165_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12165_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12165_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12166
#define MACROLOP_PRIVATE_EVAL_REC_12165_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12166(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12166_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12166_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12166_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12166_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12166_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12166_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12166_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12166_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12166_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12166_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12167
#define MACROLOP_PRIVATE_EVAL_REC_12166_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12167(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12167_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12167_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12167_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12167_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12167_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12167_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12167_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12167_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12167_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12167_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12168
#define MACROLOP_PRIVATE_EVAL_REC_12167_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12168(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12168_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12168_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12168_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12168_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12168_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12168_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12168_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12168_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12168_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12168_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12169
#define MACROLOP_PRIVATE_EVAL_REC_12168_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12169(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12169_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12169_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12169_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12169_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12169_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12169_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12169_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12169_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12169_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12169_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12170
#define MACROLOP_PRIVATE_EVAL_REC_12169_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12170(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12170_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12170_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12170_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12170_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12170_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12170_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12170_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12170_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12170_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12170_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12171
#define MACROLOP_PRIVATE_EVAL_REC_12170_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12171(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12171_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12171_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12171_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12171_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12171_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12171_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12171_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12171_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12171_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12171_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12172
#define MACROLOP_PRIVATE_EVAL_REC_12171_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12172(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12172_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12172_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12172_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12172_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12172_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12172_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12172_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12172_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12172_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12172_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12173
#define MACROLOP_PRIVATE_EVAL_REC_12172_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12173(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12173_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12173_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12173_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12173_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12173_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12173_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12173_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12173_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12173_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12173_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12174
#define MACROLOP_PRIVATE_EVAL_REC_12173_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12174(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12174_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12174_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12174_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12174_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12174_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12174_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12174_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12174_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12174_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12174_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12175
#define MACROLOP_PRIVATE_EVAL_REC_12174_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12175(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12175_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12175_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12175_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12175_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12175_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12175_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12175_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12175_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12175_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12175_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12176
#define MACROLOP_PRIVATE_EVAL_REC_12175_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12176(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12176_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12176_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12176_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12176_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12176_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12176_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12176_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12176_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12176_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12176_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12177
#define MACROLOP_PRIVATE_EVAL_REC_12176_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12177(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12177_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12177_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12177_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12177_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12177_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12177_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12177_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12177_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12177_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12177_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12178
#define MACROLOP_PRIVATE_EVAL_REC_12177_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12178(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12178_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12178_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12178_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12178_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12178_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12178_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12178_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12178_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12178_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12178_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12179
#define MACROLOP_PRIVATE_EVAL_REC_12178_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12179(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12179_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12179_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12179_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12179_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12179_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12179_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12179_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12179_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12179_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12179_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12180
#define MACROLOP_PRIVATE_EVAL_REC_12179_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12180(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12180_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12180_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12180_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12180_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12180_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12180_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12180_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12180_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12180_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12180_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12181
#define MACROLOP_PRIVATE_EVAL_REC_12180_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12181(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12181_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12181_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12181_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12181_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12181_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12181_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12181_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12181_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12181_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12181_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12182
#define MACROLOP_PRIVATE_EVAL_REC_12181_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12182(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12182_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12182_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12182_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12182_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12182_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12182_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12182_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12182_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12182_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12182_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12183
#define MACROLOP_PRIVATE_EVAL_REC_12182_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12183(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12183_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12183_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12183_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12183_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12183_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12183_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12183_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12183_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12183_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12183_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12184
#define MACROLOP_PRIVATE_EVAL_REC_12183_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12184(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12184_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12184_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12184_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12184_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12184_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12184_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12184_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12184_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12184_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12184_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12185
#define MACROLOP_PRIVATE_EVAL_REC_12184_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12185(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12185_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12185_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12185_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12185_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12185_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12185_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12185_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12185_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12185_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12185_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12186
#define MACROLOP_PRIVATE_EVAL_REC_12185_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12186(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12186_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12186_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12186_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12186_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12186_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12186_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12186_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12186_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12186_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12186_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12187
#define MACROLOP_PRIVATE_EVAL_REC_12186_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12187(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12187_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12187_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12187_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12187_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12187_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12187_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12187_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12187_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12187_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12187_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12188
#define MACROLOP_PRIVATE_EVAL_REC_12187_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12188(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12188_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12188_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12188_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12188_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12188_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12188_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12188_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12188_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12188_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12188_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12189
#define MACROLOP_PRIVATE_EVAL_REC_12188_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12189(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12189_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12189_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12189_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12189_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12189_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12189_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12189_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12189_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12189_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12189_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12190
#define MACROLOP_PRIVATE_EVAL_REC_12189_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12190(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12190_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12190_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12190_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12190_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12190_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12190_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12190_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12190_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12190_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12190_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12191
#define MACROLOP_PRIVATE_EVAL_REC_12190_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12191(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12191_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12191_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12191_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12191_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12191_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12191_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12191_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12191_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12191_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12191_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12192
#define MACROLOP_PRIVATE_EVAL_REC_12191_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12192(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12192_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12192_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12192_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12192_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12192_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12192_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12192_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12192_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12192_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12192_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12193
#define MACROLOP_PRIVATE_EVAL_REC_12192_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12193(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12193_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12193_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12193_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12193_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12193_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12193_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12193_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12193_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12193_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12193_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12194
#define MACROLOP_PRIVATE_EVAL_REC_12193_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12194(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12194_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12194_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12194_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12194_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12194_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12194_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12194_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12194_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12194_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12194_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12195
#define MACROLOP_PRIVATE_EVAL_REC_12194_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12195(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12195_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12195_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12195_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12195_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12195_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12195_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12195_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12195_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12195_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12195_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12196
#define MACROLOP_PRIVATE_EVAL_REC_12195_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12196(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12196_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12196_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12196_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12196_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12196_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12196_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12196_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12196_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12196_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12196_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12197
#define MACROLOP_PRIVATE_EVAL_REC_12196_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12197(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12197_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12197_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12197_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12197_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12197_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12197_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12197_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12197_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12197_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12197_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12198
#define MACROLOP_PRIVATE_EVAL_REC_12197_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12198(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12198_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12198_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12198_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12198_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12198_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12198_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12198_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12198_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12198_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12198_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12199
#define MACROLOP_PRIVATE_EVAL_REC_12198_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12199(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12199_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12199_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12199_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12199_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12199_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12199_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12199_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12199_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12199_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12199_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12200
#define MACROLOP_PRIVATE_EVAL_REC_12199_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12200(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12200_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12200_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12200_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12200_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12200_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12200_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12200_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12200_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12200_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12200_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12201
#define MACROLOP_PRIVATE_EVAL_REC_12200_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12201(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12201_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12201_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12201_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12201_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12201_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12201_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12201_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12201_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12201_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12201_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12202
#define MACROLOP_PRIVATE_EVAL_REC_12201_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12202(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12202_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12202_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12202_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12202_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12202_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12202_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12202_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12202_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12202_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12202_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12203
#define MACROLOP_PRIVATE_EVAL_REC_12202_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12203(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12203_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12203_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12203_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12203_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12203_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12203_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12203_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12203_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12203_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12203_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12204
#define MACROLOP_PRIVATE_EVAL_REC_12203_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12204(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12204_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12204_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12204_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12204_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12204_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12204_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12204_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12204_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12204_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12204_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12205
#define MACROLOP_PRIVATE_EVAL_REC_12204_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12205(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12205_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12205_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12205_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12205_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12205_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12205_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12205_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12205_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12205_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12205_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12206
#define MACROLOP_PRIVATE_EVAL_REC_12205_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12206(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12206_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12206_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12206_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12206_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12206_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12206_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12206_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12206_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12206_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12206_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12207
#define MACROLOP_PRIVATE_EVAL_REC_12206_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12207(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12207_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12207_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12207_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12207_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12207_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12207_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12207_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12207_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12207_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12207_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12208
#define MACROLOP_PRIVATE_EVAL_REC_12207_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12208(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12208_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12208_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12208_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12208_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12208_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12208_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12208_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12208_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12208_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12208_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12209
#define MACROLOP_PRIVATE_EVAL_REC_12208_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12209(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12209_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12209_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12209_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12209_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12209_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12209_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12209_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12209_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12209_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12209_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12210
#define MACROLOP_PRIVATE_EVAL_REC_12209_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12210(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12210_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12210_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12210_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12210_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12210_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12210_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12210_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12210_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12210_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12210_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12211
#define MACROLOP_PRIVATE_EVAL_REC_12210_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12211(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12211_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12211_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12211_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12211_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12211_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12211_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12211_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12211_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12211_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12211_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12212
#define MACROLOP_PRIVATE_EVAL_REC_12211_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12212(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12212_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12212_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12212_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12212_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12212_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12212_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12212_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12212_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12212_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12212_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12213
#define MACROLOP_PRIVATE_EVAL_REC_12212_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12213(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12213_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12213_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12213_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12213_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12213_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12213_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12213_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12213_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12213_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12213_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12214
#define MACROLOP_PRIVATE_EVAL_REC_12213_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12214(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12214_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12214_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12214_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12214_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12214_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12214_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12214_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12214_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12214_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12214_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12215
#define MACROLOP_PRIVATE_EVAL_REC_12214_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12215(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12215_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12215_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12215_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12215_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12215_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12215_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12215_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12215_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12215_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12215_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12216
#define MACROLOP_PRIVATE_EVAL_REC_12215_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12216(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12216_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12216_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12216_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12216_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12216_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12216_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12216_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12216_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12216_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12216_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12217
#define MACROLOP_PRIVATE_EVAL_REC_12216_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12217(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12217_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12217_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12217_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12217_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12217_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12217_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12217_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12217_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12217_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12217_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12218
#define MACROLOP_PRIVATE_EVAL_REC_12217_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12218(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12218_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12218_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12218_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12218_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12218_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12218_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12218_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12218_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12218_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12218_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12219
#define MACROLOP_PRIVATE_EVAL_REC_12218_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12219(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12219_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12219_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12219_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12219_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12219_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12219_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12219_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12219_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12219_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12219_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12220
#define MACROLOP_PRIVATE_EVAL_REC_12219_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12220(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12220_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12220_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12220_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12220_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12220_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12220_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12220_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12220_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12220_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12220_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12221
#define MACROLOP_PRIVATE_EVAL_REC_12220_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12221(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12221_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12221_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12221_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12221_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12221_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12221_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12221_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12221_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12221_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12221_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12222
#define MACROLOP_PRIVATE_EVAL_REC_12221_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12222(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12222_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12222_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12222_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12222_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12222_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12222_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12222_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12222_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12222_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12222_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12223
#define MACROLOP_PRIVATE_EVAL_REC_12222_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12223(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12223_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12223_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12223_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12223_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12223_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12223_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12223_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12223_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12223_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12223_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12224
#define MACROLOP_PRIVATE_EVAL_REC_12223_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12224(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12224_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12224_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12224_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12224_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12224_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12224_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12224_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12224_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12224_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12224_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12225
#define MACROLOP_PRIVATE_EVAL_REC_12224_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12225(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12225_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12225_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12225_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12225_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12225_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12225_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12225_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12225_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12225_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12225_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12226
#define MACROLOP_PRIVATE_EVAL_REC_12225_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12226(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12226_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12226_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12226_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12226_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12226_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12226_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12226_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12226_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12226_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12226_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12227
#define MACROLOP_PRIVATE_EVAL_REC_12226_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12227(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12227_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12227_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12227_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12227_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12227_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12227_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12227_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12227_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12227_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12227_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12228
#define MACROLOP_PRIVATE_EVAL_REC_12227_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12228(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12228_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12228_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12228_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12228_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12228_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12228_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12228_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12228_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12228_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12228_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12229
#define MACROLOP_PRIVATE_EVAL_REC_12228_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12229(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12229_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12229_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12229_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12229_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12229_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12229_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12229_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12229_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12229_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12229_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12230
#define MACROLOP_PRIVATE_EVAL_REC_12229_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12230(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12230_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12230_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12230_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12230_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12230_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12230_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12230_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12230_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12230_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12230_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12231
#define MACROLOP_PRIVATE_EVAL_REC_12230_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12231(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12231_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12231_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12231_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12231_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12231_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12231_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12231_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12231_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12231_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12231_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12232
#define MACROLOP_PRIVATE_EVAL_REC_12231_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12232(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12232_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12232_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12232_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12232_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12232_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12232_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12232_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12232_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12232_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12232_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12233
#define MACROLOP_PRIVATE_EVAL_REC_12232_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12233(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12233_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12233_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12233_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12233_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12233_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12233_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12233_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12233_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12233_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12233_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12234
#define MACROLOP_PRIVATE_EVAL_REC_12233_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12234(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12234_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12234_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12234_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12234_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12234_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12234_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12234_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12234_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12234_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12234_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12235
#define MACROLOP_PRIVATE_EVAL_REC_12234_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12235(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12235_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12235_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12235_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12235_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12235_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12235_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12235_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12235_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12235_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12235_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12236
#define MACROLOP_PRIVATE_EVAL_REC_12235_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12236(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12236_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12236_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12236_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12236_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12236_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12236_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12236_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12236_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12236_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12236_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12237
#define MACROLOP_PRIVATE_EVAL_REC_12236_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12237(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12237_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12237_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12237_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12237_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12237_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12237_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12237_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12237_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12237_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12237_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12238
#define MACROLOP_PRIVATE_EVAL_REC_12237_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12238(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12238_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12238_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12238_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12238_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12238_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12238_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12238_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12238_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12238_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12238_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12239
#define MACROLOP_PRIVATE_EVAL_REC_12238_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12239(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12239_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12239_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12239_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12239_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12239_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12239_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12239_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12239_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12239_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12239_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12240
#define MACROLOP_PRIVATE_EVAL_REC_12239_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12240(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12240_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12240_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12240_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12240_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12240_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12240_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12240_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12240_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12240_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12240_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12241
#define MACROLOP_PRIVATE_EVAL_REC_12240_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12241(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12241_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12241_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12241_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12241_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12241_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12241_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12241_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12241_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12241_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12241_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12242
#define MACROLOP_PRIVATE_EVAL_REC_12241_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12242(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12242_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12242_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12242_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12242_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12242_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12242_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12242_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12242_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12242_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12242_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12243
#define MACROLOP_PRIVATE_EVAL_REC_12242_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12243(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12243_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12243_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12243_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12243_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12243_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12243_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12243_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12243_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12243_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12243_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12244
#define MACROLOP_PRIVATE_EVAL_REC_12243_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12244(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12244_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12244_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12244_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12244_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12244_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12244_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12244_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12244_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12244_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12244_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12245
#define MACROLOP_PRIVATE_EVAL_REC_12244_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12245(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12245_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12245_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12245_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12245_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12245_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12245_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12245_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12245_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12245_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12245_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12246
#define MACROLOP_PRIVATE_EVAL_REC_12245_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12246(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12246_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12246_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12246_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12246_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12246_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12246_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12246_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12246_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12246_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12246_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12247
#define MACROLOP_PRIVATE_EVAL_REC_12246_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12247(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12247_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12247_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12247_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12247_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12247_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12247_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12247_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12247_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12247_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12247_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12248
#define MACROLOP_PRIVATE_EVAL_REC_12247_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12248(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12248_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12248_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12248_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12248_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12248_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12248_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12248_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12248_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12248_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12248_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12249
#define MACROLOP_PRIVATE_EVAL_REC_12248_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12249(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12249_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12249_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12249_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12249_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12249_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12249_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12249_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12249_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12249_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12249_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12250
#define MACROLOP_PRIVATE_EVAL_REC_12249_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12250(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12250_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12250_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12250_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12250_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12250_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12250_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12250_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12250_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12250_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12250_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12251
#define MACROLOP_PRIVATE_EVAL_REC_12250_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12251(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12251_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12251_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12251_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12251_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12251_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12251_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12251_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12251_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12251_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12251_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12252
#define MACROLOP_PRIVATE_EVAL_REC_12251_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12252(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12252_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12252_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12252_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12252_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12252_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12252_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12252_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12252_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12252_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12252_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12253
#define MACROLOP_PRIVATE_EVAL_REC_12252_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12253(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12253_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12253_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12253_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12253_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12253_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12253_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12253_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12253_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12253_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12253_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12254
#define MACROLOP_PRIVATE_EVAL_REC_12253_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12254(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12254_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12254_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12254_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12254_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12254_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12254_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12254_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12254_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12254_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12254_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12255
#define MACROLOP_PRIVATE_EVAL_REC_12254_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12255(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12255_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12255_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12255_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12255_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12255_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12255_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12255_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12255_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12255_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12255_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12256
#define MACROLOP_PRIVATE_EVAL_REC_12255_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12256(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12256_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12256_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12256_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12256_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12256_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12256_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12256_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12256_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12256_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12256_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12257
#define MACROLOP_PRIVATE_EVAL_REC_12256_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12257(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12257_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12257_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12257_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12257_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12257_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12257_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12257_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12257_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12257_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12257_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12258
#define MACROLOP_PRIVATE_EVAL_REC_12257_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12258(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12258_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12258_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12258_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12258_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12258_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12258_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12258_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12258_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12258_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12258_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12259
#define MACROLOP_PRIVATE_EVAL_REC_12258_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12259(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12259_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12259_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12259_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12259_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12259_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12259_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12259_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12259_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12259_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12259_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12260
#define MACROLOP_PRIVATE_EVAL_REC_12259_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12260(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12260_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12260_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12260_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12260_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12260_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12260_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12260_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12260_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12260_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12260_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12261
#define MACROLOP_PRIVATE_EVAL_REC_12260_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12261(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12261_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12261_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12261_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12261_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12261_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12261_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12261_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12261_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12261_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12261_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12262
#define MACROLOP_PRIVATE_EVAL_REC_12261_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12262(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12262_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12262_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12262_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12262_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12262_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12262_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12262_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12262_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12262_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12262_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12263
#define MACROLOP_PRIVATE_EVAL_REC_12262_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12263(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12263_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12263_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12263_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12263_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12263_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12263_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12263_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12263_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12263_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12263_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12264
#define MACROLOP_PRIVATE_EVAL_REC_12263_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12264(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12264_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12264_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12264_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12264_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12264_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12264_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12264_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12264_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12264_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12264_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12265
#define MACROLOP_PRIVATE_EVAL_REC_12264_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12265(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12265_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12265_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12265_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12265_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12265_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12265_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12265_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12265_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12265_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12265_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12266
#define MACROLOP_PRIVATE_EVAL_REC_12265_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12266(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12266_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12266_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12266_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12266_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12266_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12266_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12266_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12266_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12266_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12266_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12267
#define MACROLOP_PRIVATE_EVAL_REC_12266_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12267(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12267_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12267_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12267_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12267_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12267_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12267_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12267_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12267_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12267_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12267_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12268
#define MACROLOP_PRIVATE_EVAL_REC_12267_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12268(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12268_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12268_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12268_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12268_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12268_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12268_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12268_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12268_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12268_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12268_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12269
#define MACROLOP_PRIVATE_EVAL_REC_12268_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12269(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12269_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12269_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12269_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12269_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12269_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12269_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12269_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12269_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12269_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12269_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12270
#define MACROLOP_PRIVATE_EVAL_REC_12269_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12270(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12270_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12270_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12270_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12270_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12270_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12270_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12270_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12270_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12270_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12270_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12271
#define MACROLOP_PRIVATE_EVAL_REC_12270_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12271(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12271_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12271_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12271_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12271_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12271_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12271_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12271_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12271_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12271_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12271_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12272
#define MACROLOP_PRIVATE_EVAL_REC_12271_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12272(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12272_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12272_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12272_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12272_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12272_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12272_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12272_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12272_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12272_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12272_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12273
#define MACROLOP_PRIVATE_EVAL_REC_12272_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12273(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12273_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12273_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12273_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12273_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12273_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12273_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12273_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12273_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12273_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12273_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12274
#define MACROLOP_PRIVATE_EVAL_REC_12273_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12274(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12274_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12274_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12274_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12274_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12274_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12274_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12274_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12274_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12274_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12274_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12275
#define MACROLOP_PRIVATE_EVAL_REC_12274_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12275(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12275_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12275_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12275_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12275_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12275_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12275_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12275_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12275_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12275_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12275_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12276
#define MACROLOP_PRIVATE_EVAL_REC_12275_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12276(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12276_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12276_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12276_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12276_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12276_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12276_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12276_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12276_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12276_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12276_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12277
#define MACROLOP_PRIVATE_EVAL_REC_12276_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12277(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12277_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12277_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12277_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12277_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12277_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12277_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12277_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12277_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12277_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12277_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12278
#define MACROLOP_PRIVATE_EVAL_REC_12277_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12278(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12278_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12278_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12278_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12278_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12278_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12278_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12278_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12278_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12278_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12278_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12279
#define MACROLOP_PRIVATE_EVAL_REC_12278_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12279(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12279_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12279_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12279_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12279_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12279_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12279_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12279_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12279_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12279_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12279_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12280
#define MACROLOP_PRIVATE_EVAL_REC_12279_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12280(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12280_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12280_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12280_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12280_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12280_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12280_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12280_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12280_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12280_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12280_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12281
#define MACROLOP_PRIVATE_EVAL_REC_12280_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12281(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12281_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12281_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12281_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12281_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12281_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12281_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12281_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12281_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12281_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12281_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12282
#define MACROLOP_PRIVATE_EVAL_REC_12281_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12282(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12282_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12282_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12282_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12282_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12282_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12282_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12282_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12282_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12282_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12282_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12283
#define MACROLOP_PRIVATE_EVAL_REC_12282_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12283(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12283_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12283_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12283_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12283_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12283_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12283_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12283_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12283_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12283_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12283_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12284
#define MACROLOP_PRIVATE_EVAL_REC_12283_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12284(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12284_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12284_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12284_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12284_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12284_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12284_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12284_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12284_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12284_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12284_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12285
#define MACROLOP_PRIVATE_EVAL_REC_12284_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12285(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12285_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12285_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12285_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12285_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12285_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12285_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12285_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12285_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12285_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12285_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12286
#define MACROLOP_PRIVATE_EVAL_REC_12285_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12286(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12286_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12286_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12286_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12286_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12286_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12286_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12286_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12286_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12286_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12286_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12287
#define MACROLOP_PRIVATE_EVAL_REC_12286_STOP(...) __VA_ARGS__

#define MACROLOP_PRIVATE_EVAL_REC_12287(...)                                                       \
    MACROLOP_PRIVATE_EVAL_REC_12287_OVERLOAD(                                                      \
        MACROLOP_PRIVATE_EVAL_REC_12287_GET_CHOICE(__VA_ARGS__))                                   \
    (MACROLOP_PRIVATE_EVAL_REC_12287_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIVATE_EVAL_REC_12287_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIVATE_EVAL_REC_12287_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIVATE_EVAL_REC_12287_OVERLOAD(choice)                                           \
    MACROLOP_PRIVATE_EVAL_REC_12287_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIVATE_EVAL_REC_12287_OVERLOAD_PRIMITIVE(choice)                                 \
    MACROLOP_PRIVATE_EVAL_REC_12287_##choice
#define MACROLOP_PRIVATE_EVAL_REC_12287_CONTINUE  MACROLOP_PRIVATE_EVAL_REC_12288
#define MACROLOP_PRIVATE_EVAL_REC_12287_STOP(...) __VA_ARGS__

#endif // MACROLOP_EVAL_REC_UNROLL_11264_TO_12287_H